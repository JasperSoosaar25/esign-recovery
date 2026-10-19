#!/usr/bin/env python3
"""Execute selected original legacy-crypto helpers with explicit dependency boundaries."""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
import random
import struct
import zipfile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_localization import STACK,STACK_SIZE,STOP,GUARD
from recover_signature_blobs import BlobMachine,validate_inputs
from recover_entitlements import validate_instruction_bytes,sparse_image,boundaries_and_branches
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'reconstruction/legacy-crypto'
ENTRIES={'bn_bits':0x1005d16a0,'rsa_size':0x1005f50f8,'rsa_up_ref':0x1005efa0c,'get1_rsa':0x10060c848,'private_encrypt':0x1005f512c,'rsa_free':0x1005ef908,'pkey_free':0x10060c954,'read_private_key':0x10061f094}
BOUNDARIES={0x1005b1044:'crypto_add',0x100604c0c:'error',0x1005b1658:'free',0x1005fe060:'engine_finish',0x1005b1c68:'free_ex_data',0x1005d1864:'bn_clear_free',0x1005d60e4:'blinding_free',0x1005b1170:'bignum_data_free',0x10060258c:'attributes_pop_free',0x1006000d8:'bio_s_file',0x1005fedf0:'bio_new',0x1005ff4e0:'bio_ctrl',0x10061ee4c:'pem_read_bio',0x1005feebc:'bio_free'}
CALLBACKS={GUARD+0x100:'rsa_finish',GUARD+0x110:'pkey_free_callback',GUARD+0x120:'private_encrypt_callback'}
EXTRA={0x100a5b924:b'p_lib.c\0',0x100a58c93:b'rsa_lib.c\0',0x100a5e4d5:b'pem_pkey.c\0'}

def signed(value):return struct.unpack('<i',struct.pack('<I',value&0xffffffff))[0]

def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,entry in ENTRIES.items():
        record=walk(image.data,entry,starts,branches,image=image,dispatch=dispatch)
        expected=[{'address':'0x1005b1658','reason':'other-declared-entry'}] if role in ['rsa_free','pkey_free'] else []
        require(record['boundary_stops']==expected,'Unexpected legacy helper boundary')
        require(record['unresolved_indirect_jumps']==int(role=='private_encrypt'),'Changed dynamic callback boundary')
        result.append(dict(record,role=role))
    return result

class CryptoMachine(BlobMachine):
    def __init__(self,chunks,records,bindings,external,metadata):
        super().__init__(chunks,records,bindings,{},external,metadata,names=())
        self.labels={0:None,0x100615740:'attribute_free_callback'}
    def raw(self,name,size=256):
        pointer=self.obj(('raw',self.next_token));self.next_token+=max(0,((size+255)//256)*256-256);self.uc.mem_write(pointer,bytes(size));self.labels[pointer]=name;return pointer
    def put32(self,address,value):self.uc.mem_write(address,struct.pack('<I',value&0xffffffff))
    def get32(self,address):return int.from_bytes(self.uc.mem_read(address,4),'little')
    def label(self,pointer):
        require(pointer in self.labels,'Unknown original boundary pointer '+hex(pointer));return self.labels[pointer]
    def cstring(self,pointer):
        expected=EXTRA.get(pointer);require(expected is not None,'Unknown original diagnostic file')
        self.reads[(pointer,len(expected))]=True
        observed=bytes(self.uc.mem_read(pointer,len(expected)))
        require(observed==expected,'Changed original diagnostic filename');return observed[:-1].decode()
    def boundary(self,target,args):
        name=CALLBACKS.get(target,BOUNDARIES.get(target));a=args
        row={'call':name}
        if name=='crypto_add':
            owner='rsa' if a[0]==self.rsa+112 else 'pkey' if a[0]==self.pkey+8 else None
            require(owner is not None,'Unexpected reference field')
            row.update(object=owner,amount=signed(a[1]),lock=signed(a[2]),file=self.cstring(a[3]),line=signed(a[4]))
            value=(self.get32(a[0])+signed(a[1]))&0xffffffff;self.put32(a[0],value);result=value
        elif name=='error':row.update(library=signed(a[0]),function=signed(a[1]),reason=signed(a[2]),file=self.cstring(a[3]),line=signed(a[4]));result=0
        elif name=='free_ex_data':
            require(a[:3]==[6,self.rsa,self.rsa+96],'Unexpected RSA ex-data boundary');row.update(index=6,object='rsa');result=0
        elif name in ['free','engine_finish','bn_clear_free','blinding_free','bignum_data_free','bio_free']:
            row['object']=self.label(a[0]);result=1 if name in ['engine_finish','bio_free'] else 0
        elif name=='attributes_pop_free':row.update(object=self.label(a[0]),callback=self.label(a[1]));result=0
        elif name=='rsa_finish':
            require(a[0]==self.rsa,'Unexpected RSA callback receiver');row['object']='rsa'
            if self.case.get('mutate_callback'):
                self.put64(self.rsa+24,0);self.put64(self.rsa+32,0)
            result=7
        elif name=='pkey_free_callback':
            require(a[0]==self.pkey,'Unexpected PKey callback receiver');row['object']='pkey'
            if self.case.get('mutate_callback'):
                self.put64(self.pkey+24,0);self.put64(self.pkey+48,0)
            result=0
        elif name=='private_encrypt_callback':
            row.update(length=signed(a[0]),input=self.label(a[1]),output=self.label(a[2]),rsa=self.label(a[3]),padding=signed(a[4]));result=self.case['callback_result']&0xffffffff
        elif name=='bio_s_file':result=self.bio_method
        elif name=='bio_new':row['method']=self.label(a[0]);result=0 if self.case.get('bio_failure') else self.bio
        elif name=='bio_ctrl':row.update(object=self.label(a[0]),command=signed(a[1]),number=str(a[2]),pointer=self.label(a[3]));result=0
        elif name=='pem_read_bio':
            row.update(object=self.label(a[0]),output=self.label(a[1]),password_callback=self.label(a[2]),password_data=self.label(a[3]));result=0 if self.case.get('parse_failure') else self.pkey
            if a[1]:self.put64(a[1],result)
        else:raise ValueError('Unknown native boundary '+hex(target))
        self.effects.append(row);return result
    def code(self,uc,address,size,user):
        try:
            require(address in self.rows,'Execution left original helper instructions')
            row=self.rows[address];self.visited.add(address)
            if row['mnemonic'] not in ['bl','b','blr','br']:return
            if row['mnemonic'] in ['blr','br']:
                target=uc.reg_read(getattr(arm,'UC_ARM64_REG_'+row['operands'].upper()))
            else:target=int(row.get('call_target',row['operands'].lstrip('#')),16)
            if target in self.rows:return
            result=self.boundary(target,[self.get(i) for i in range(5)])
            continuation=address+4 if row['mnemonic'] in ['bl','blr'] else self.get(30)
            for i in range(1,19):uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0xcccc00000000+i)
            uc.reg_write(arm.UC_ARM64_REG_X0,result);uc.reg_write(arm.UC_ARM64_REG_LR,continuation);uc.reg_write(arm.UC_ARM64_REG_PC,continuation)
        except Exception as ex:self.error=str(ex);uc.emu_stop()
    def invoke(self,entry,args):
        for i in range(31):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0)
        self.uc.reg_write(arm.UC_ARM64_REG_SP,STACK+STACK_SIZE-16);self.uc.reg_write(arm.UC_ARM64_REG_LR,STOP);self.uc.reg_write(arm.UC_ARM64_REG_NZCV,0)
        for i,value in enumerate(args):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),value&((1<<64)-1))
        self.uc.emu_start(entry,STOP,count=200000)
        require(self.error is None,str(self.error));require(self.uc.reg_read(arm.UC_ARM64_REG_PC)==STOP,'Original crypto helper did not return');return self.get(0)
    def setup(self,case):
        self.case=case;self.effects=[]
        self.rsa=self.raw('rsa');self.pkey=self.raw('pkey');method=self.raw('rsa_method');ameth=self.raw('asn1_method')
        self.put64(self.rsa+16,method);self.put64(method+24,GUARD+0x120)
        self.put64(method+64,GUARD+0x100 if case.get('finish') else 0)
        self.put32(self.rsa+112,case.get('references',1));self.put32(self.pkey+8,case.get('references',1));self.put32(self.pkey,case.get('type',6));self.put64(self.pkey+32,self.rsa)
        self.put64(self.pkey+16,ameth if case.get('method',True) else 0);self.put64(ameth+160,GUARD+0x110 if case.get('finish') else 0)
        if case.get('populated'):
            for offset,name in [(24,'rsa_engine'),(32,'n'),(40,'e'),(48,'d'),(56,'p'),(64,'q'),(72,'dmp1'),(80,'dmq1'),(88,'iqmp'),(144,'bignum_data'),(152,'blinding'),(160,'mt_blinding')]:self.put64(self.rsa+offset,self.raw(name))
            self.put64(self.pkey+24,self.raw('pkey_engine'));self.put64(self.pkey+48,self.raw('attributes'))
        self.bio_method=self.raw('bio_method');self.bio=self.raw('bio');self.stream=self.raw('stream');self.output=self.raw('output');self.password_callback=self.raw('password_callback');self.password_data=self.raw('password_data');self.put64(self.output,self.rsa)
    def bn(self,case):
        bn=self.raw('bn');values=case['limbs'];limbs=self.raw('limbs',max(256,len(values)*4))
        self.uc.mem_write(limbs,struct.pack('<'+'I'*len(values),*values) if values else bytes(4))
        self.put64(bn,limbs)
        for offset,value in [(8,case['top']),(12,case.get('capacity',len(values))),(16,case.get('negative',0)),(20,case['flags'])]:self.put32(bn+offset,value)
        return bn

def cases():
    result=[];rng=random.Random(502)
    words={0,1,0xffffffff}
    for bit in range(32):words.update(v for v in [(1<<bit)-1,1<<bit,(1<<bit)+1] if v<=0xffffffff)
    for flags in [0,4]:
        for word in sorted(words):result.append({'op':'bn_bits','limbs':[word],'top':1,'flags':flags})
        for capacity in [0,1,2,4,8,16]:
            values=[rng.getrandbits(32) for _ in range(capacity)]
            for top in range(capacity+1):result.append({'op':'bn_bits','limbs':values,'top':top,'capacity':capacity,'flags':flags,'negative':1})
        result.append({'op':'rsa_size','limbs':[],'top':0,'flags':flags})
        for n in [1,8,9,31,32,33,255,256,257,1024,2048,4096]:
            values=[0]*((n+31)//32);values[-1]=1<<((n-1)%32)
            result.append({'op':'rsa_size','limbs':values,'top':len(values),'flags':flags})
    for op in ['rsa_up_ref','get1_rsa','rsa_free','pkey_free']:
        for references in [-1,0,1,2,3,0x7fffffff]:
            options=[{}] if op in ['rsa_up_ref','get1_rsa'] else [{},{'finish':True,'populated':True},{'finish':True,'populated':True,'mutate_callback':True}]
            for option in options:result.append(dict(op=op,references=references,**option))
    result += [{'op':'get1_rsa','type':t} for t in [0,1,28,-1]]
    result += [{'op':op,'nil':True} for op in ['rsa_free','pkey_free']]
    result += [{'op':'pkey_free','method':False,'populated':True}]
    result += [{'op':'private_encrypt','length':n,'padding':p,'callback_result':v} for n,p,v in [(0,1,0),(7,1,256),(-1,4,-1),(0x7fffffff,3,-0x80000000),(12,6,0x7fffffff)]]
    result += [{'op':'read_private_key',**v} for v in [{},{'bio_failure':True},{'parse_failure':True},{'output_pointer':True},{'output_pointer':True,'parse_failure':True},{'output_pointer':True,'bio_failure':True},{'password':True}]]
    return result

def evaluate(machine,case):
    machine.setup(case);op=case['op'];args=[]
    if op in ['bn_bits','rsa_size']:
        bn=machine.bn(case)
        if op=='rsa_size':machine.put64(machine.rsa+32,bn);args=[machine.rsa]
        else:args=[bn]
    elif op in ['rsa_up_ref','rsa_free']:args=[0 if case.get('nil') else machine.rsa]
    elif op in ['get1_rsa','pkey_free']:args=[0 if case.get('nil') else machine.pkey]
    elif op=='private_encrypt':args=[case['length'],machine.raw('input'),machine.output,machine.rsa,case['padding']]
    else:args=[machine.stream,machine.output if case.get('output_pointer') else 0,machine.password_callback if case.get('password') else 0,machine.password_data if case.get('password') else 0]
    value=machine.invoke(ENTRIES[op],args)
    if op in ['get1_rsa','read_private_key']:returned=machine.label(value)
    elif op in ['rsa_free','pkey_free']:returned=None
    else:returned=signed(value)
    result={'returned':returned,'effects':machine.effects}
    if op in ['rsa_up_ref','get1_rsa','rsa_free']:result['rsa_references']=signed(machine.get32(machine.rsa+112))
    if op=='pkey_free':result.update(pkey_references=signed(machine.get32(machine.pkey+8)),key=machine.label(machine.get64(machine.pkey+32)),engine=machine.label(machine.get64(machine.pkey+24)),attributes=machine.label(machine.get64(machine.pkey+48)))
    if op=='read_private_key':result['output']=machine.label(machine.get64(machine.output))
    return result

def validate(evidence,metadata,ipa=None):
    require(evidence['native_boundaries']=={hex(k):v for k,v in BOUNDARIES.items()},'Changed native crypto dependency map')
    require([r['entry'] for r in evidence['records']]==[hex(v) for v in ENTRIES.values()],'Changed legacy function identity')
    validate_instruction_bytes(evidence['records']);validate_inputs(evidence,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    dispatch,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(evidence,baseline),dispatch)==evidence['records'],'Changed legacy native flow')

def run(ipa=None,original_ipa=None):
    metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable');image=MachO(data);flows=records(image,Dispatch(image));bindings=image.binds
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed legacy source/evidence file: '+name)
        evidence=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(evidence,metadata,original_ipa);flows=evidence['records'];bindings={}
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in evidence['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    machine=CryptoMachine(chunks,flows,bindings,{},metadata);results=[]
    for number,case in enumerate(cases()):
        try:results.append({'input':case,'result':evaluate(machine,case)})
        except Exception as ex:raise ValueError('Legacy fixture '+str(number)+': '+str(ex)) from ex
    require(all(v in machine.visited for v in ENTRIES.values()),'Unexercised crypto helper')
    if ipa:
        memory=[{'address':hex(a),'bytes':data[image.fileoff(a):image.fileoff(a)+n].hex()} for a,n in sorted(machine.reads)]
        evidence={'records':flows,'classes':{},'memory':memory,'bindings':{},'external_targets':{},'native_boundaries':{hex(k):v for k,v in BOUNDARIES.items()}}
        validate(evidence,metadata,ipa);(OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence,separators=(',',':')).encode(),mtime=0));(OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        index={'executable_sha256':EXPECTED_EXECUTABLE,'original_native_functions':len(ENTRIES),'fixtures':len(results),'original_instructions_executed':len(machine.visited),'native_dependency_implementations_are_controlled_test_boundaries':True,'BN_limb_bits':32,'complete_crypto_backend':False,'complete_signing_pipeline':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed legacy helper behavior')
    print(json.dumps({'result':'PASS','original_native_functions':len(ENTRIES),'fixtures':len(results),'original_instructions_executed':len(machine.visited),'complete_crypto_backend':False},indent=2));machine.close()
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path)
    a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
