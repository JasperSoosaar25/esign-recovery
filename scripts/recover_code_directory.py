#!/usr/bin/env python3
"""Compare the original CodeDirectory method and its digest helpers with source fixtures."""
import argparse
import gzip
import hashlib
import json
import math
from pathlib import Path
import struct
import zipfile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_localization import STACK, STACK_SIZE, STOP
from recover_requirements_slot import RequirementMachine
from recover_signature_blobs import validate_inputs, FoundationError
from recover_entitlements import validate_instruction_bytes, sparse_image, boundaries_and_branches
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'reconstruction/code-directory'
METHOD=0x10077473c
SHA256,SHA1=0x100776104,0x100776324
CAPTURED,GLOBAL,LENGTH=0x100775ef4,0x100776570,0x10076aa20
FLAG=0x10077cb50
TABLES={METHOD:{0x100774890:0x100e35128,0x1007752f0:0x100e355b8,0x1007755d0:0x100e35798},CAPTURED:{0x100775f38:0x100e35958}}
EXTRA={'0x10097b0e0': '000000c000000000', '0x10099c630': 'fade0c0200000000', '0x100b27018': '7065770001000000', '0x100e35128': 'a448770001000000', '0x100e35130': 'c448770001000000', '0x100e355b8': 'f852770001000000', '0x100e355c0': '1053770001000000', '0x100e35798': 'd855770001000000', '0x100e357a0': '3456770001000000', '0x100e35958': '405f770001000000', '0x100e35960': '945f770001000000'}


def records(image,dispatch):
    boundaries,branches=boundaries_and_branches()
    result=[]
    for entry,role in [(METHOD,'original-CodeDirectory-method'),(SHA256,'original-SHA256-helper'),(SHA1,'original-SHA1-helper'),(CAPTURED,'original-captured-hash-block'),(GLOBAL,'original-global-hash-block'),(LENGTH,'original-NSString-Code-y_length'),(FLAG,'original-signature-entitlement-flag-block')]:
        tables=TABLES.get(entry,{})
        loads={address:[image.u64(slot),image.u64(slot+8)] for address,slot in tables.items()}
        returns={}
        for _ in range(4):
            record=walk(image.data,entry,boundaries,branches,image=image,dispatch=dispatch,load_result_values=loads,call_return_values=returns)
            updated={int(r['address'],16):[0,1] for r in record['instructions'] if entry==FLAG and r.get('objc_dispatch',{}).get('selector') in ['isKindOfClass:','boolValue']}
            if updated==returns:break
            returns=updated
        require(not record['unresolved_indirect_jumps'] and not record['boundary_stops'],'Incomplete CodeDirectory flow')
        record.update(role=role,finite_load_hypothesis_pointer_tables={hex(a):[hex(s),hex(s+8)] for a,s in tables.items()})
        result.append(record)
    return result


class DirectoryMachine(RequirementMachine):
    def message(self,selector,receiver,args):
        if not receiver:return 0
        value=self.value(receiver)
        if isinstance(value,dict) and 'architecture' in value:
            self.effects.append({'getter':selector})
            if selector in ('codeLength','execSegLimit'):
                key='code_values' if selector=='codeLength' else 'exec_values'
                values=value.get(key)
                if values:
                    index=value.get(key+'_index',0);value[key+'_index']=index+1
                    require(index<len(values),'Unexpected extra original getter')
                    return int(values[index])
                return value['code_length'] if selector=='codeLength' else value['exec_limit']
            if selector=='offset':return value['offset'] & ((1<<64)-1)
            if selector=='machoFileHandle':return value['handle']
        if isinstance(value,dict) and 'file_bytes' in value:
            if selector=='seekToFileOffset:':
                value['position']=args[0];self.effects.append({'seek':str(args[0])});return 0
            if selector=='readDataOfLength:':
                start=value['position'];data=value['file_bytes'][start:start+args[0]]
                value['position']+=len(data);self.effects.append({'read':str(args[0]),'returned':len(data)})
                return self.obj(data)
        if selector=='y_length':
            require(isinstance(value,str),'Unexpected byte-length input')
            return ('enter',LENGTH,receiver,[])
        if isinstance(value,(bytes,bytearray)):
            if selector=='copy':return self.obj(bytes(value))
            if selector=='bytes':
                pointer=self.obj(('bytes-snapshot',receiver,len(self.effects)))
                self.uc.mem_write(pointer,bytes(value))
                return pointer
        if isinstance(value,tuple) and value[0]=='allocated' and selector=='initWithBytes:length:':
            self.objects[receiver]=bytes(self.uc.mem_read(args[0],args[1]));return receiver
        return super().message(selector,receiver,args)

    def code(self,uc,address,size,user):
        try:
            row=self.rows.get(address)
            if row and row['mnemonic'] in ('b','bl'):
                target=int(row.get('call_target',row['operands'].lstrip('#')),16)
                name=self.external.get(target)
                result=None
                if name in ('_objc_retainAutorelease','_objc_retainBlock'):
                    result=self.get(0)
                elif name=='_objc_autoreleasePoolPush':
                    result=self.obj(('pool',self.next_token))
                elif name=='_objc_autoreleasePoolPop':
                    require(self.value(self.get(0))[0]=='pool','Unmatched original autorelease pool')
                    result=0
                elif name=='_objc_alloc':
                    require(self.value(self.get(0))==('class','NSData'),'Unexpected original allocation')
                    result=self.obj(('allocated','NSData',self.next_token))
                elif name in ('_CC_SHA1','_CC_SHA256'):
                    pointer,length,destination=self.get(0),self.get(1)&0xffffffff,self.get(2)
                    require(length<1000000,'Excessive digest input')
                    digest=(hashlib.sha1 if name=='_CC_SHA1' else hashlib.sha256)(bytes(uc.mem_read(pointer,length))).digest()
                    uc.mem_write(destination,digest);result=destination
                    self.effects.append({'digest':name,'length':length})
                elif name=='_ldexp':
                    require(self.get(0)==12,'Changed original page-size exponent')
                    bits=uc.reg_read(arm.UC_ARM64_REG_D0);value=struct.unpack('<d',struct.pack('<Q',bits))[0]
                    require(value==1.0,'Changed original page-size mantissa')
                    uc.reg_write(arm.UC_ARM64_REG_D0,struct.unpack('<Q',struct.pack('<d',math.ldexp(value,12)))[0]);result=0
                if result is not None:
                    self.visited.add(address);self.calls.append(name)
                    continuation=address+4 if row['mnemonic']=='bl' else self.get(30)
                    for i in range(1,19):uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0xcccc00000000+i)
                    uc.reg_write(arm.UC_ARM64_REG_X0,result);uc.reg_write(arm.UC_ARM64_REG_LR,continuation);uc.reg_write(arm.UC_ARM64_REG_PC,continuation)
                    return
            super().code(uc,address,size,user)
        except Exception as ex:
            self.error=str(ex);uc.emu_stop()

    def invoke(self,entry,arguments,stack_arguments=()):
        for i in range(31):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0)
        sp=STACK+STACK_SIZE-64
        self.uc.reg_write(arm.UC_ARM64_REG_SP,sp);self.uc.reg_write(arm.UC_ARM64_REG_LR,STOP);self.uc.reg_write(arm.UC_ARM64_REG_NZCV,0)
        for i,a in enumerate(arguments):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),a)
        for i,a in enumerate(stack_arguments):self.put64(sp+8*i,a)
        self.foundation_exception=None
        self.uc.emu_start(entry,STOP,count=2000000)
        require(self.error is None,str(self.error))
        if self.foundation_exception:raise FoundationError(self.foundation_exception)
        require(self.uc.reg_read(arm.UC_ARM64_REG_PC)==STOP,'Original CodeDirectory function did not return')
        return self.get(0)


def cases():
    result=[]
    for sha in [False,True]:
        for length in [0,1,4095,4096,4097,8191,8192,8193,17*4096+7]:
            result.append({'op':'directory','sha256':sha,'code_length':length,'file_length':length+37,'offset':'7','initial_position':3,'bundle_id':'com.example.original','team_id':'TEAM123','exec_limit':'8192','exec_flags':'1','slots':['696e666f','726571','726573','656e74','646572']})
        base=dict(result[-9],code_length=4097,file_length=6000)
        for key,value in [('team_id',None),('team_id',''),('bundle_id',None),('bundle_id',''),('bundle_id','ö💙'),('team_id','Ö\0💙'),('file_length',0),('file_length',8),('nil_handle',True),('exec_limit',str((1<<64)-1)),('exec_flags','1311768467463790320'),('offset','4294967297')]:
            result.append(dict(base,**{key:value}))
        for slots in [[None]*5,['']*5,['00',None,'01',None,'0203']]:result.append(dict(base,slots=slots))
        result.append(dict(base,code_values=[str(v) for v in [0x01020304,0x11223344,0x55667788,0x99aabbcc,4096,4097]],
            exec_values=[str(v) for v in [0x0100000000000000,0x0002000000000000,0x0000030000000000,0x0000000400000000,0x0000000005000000,0x0000000000060000,0x0000000000000700,8]]))
    for sha in [False,True]:
        for payload in [None,'','00','616263',bytes(range(256)).hex()]:result.append({'op':'digest','sha256':sha,'data':payload})
    for value in [None,'','ö💙','a\0b','x'*128]:result.append({'op':'byte_length','value':value})
    values=[{'kind':'bool','value':v} for v in [False,True]]
    values += [{'kind':'number','value':str(v)} for v in [0,1,-1,255,256,(1<<64)-1]]
    values += [{'kind':'fraction','value':v} for v in [0.0,0.5,-0.5]]
    values += [{'kind':'string','value':s} for s in ['','YES','1','ö💙']]
    values += [{'kind':'array','items':[]},{'kind':'dictionary','pairs':[]},{'kind':'unsupported'}]
    result += [{'op':'flag','value':v,'key':'entitlement.key'} for v in values]
    result += [{'op':'flag','value':{'kind':'bool','value':True},'key':'entitlement.key',**option} for option in [{'missing':True},{'nil_dictionary':True}]]
    return result


def evaluate(machine,case):
    machine.effects=[]
    if case['op']=='flag':
        key=machine.obj(case['key']);value=machine.make_input(case['value'])
        dictionary=0 if case.get('nil_dictionary') else machine.obj({'ordered_pairs':[] if case.get('missing') else [(key,value)]})
        block=machine.obj(('controlled-original-flag-block',machine.next_token));machine.put64(block+32,dictionary)
        return {'flag':bool(machine.invoke(FLAG,[block,key]))}
    if case['op']=='digest':
        token=machine.invoke(SHA256 if case['sha256'] else SHA1,[machine.obj(None if case['data'] is None else bytes.fromhex(case['data']))])
        return {'data':bytes(machine.value(token)).hex(),'effects':machine.effects}
    if case['op']=='byte_length':
        token=machine.obj(case['value'])
        length=machine.invoke(LENGTH,[token]) if token else 0
        return {'length':length}
    raw=bytes((i*37+11)&255 for i in range(case['file_length']))
    handle=machine.obj({'file_bytes':raw,'position':case['initial_position']})
    arch=machine.obj({'architecture':True,'code_length':case['code_length'],'exec_limit':int(case['exec_limit']),'offset':int(case['offset']),'handle':0 if case.get('nil_handle') else handle,
        **{k:case[k] for k in ['code_values','exec_values'] if k in case}})
    info,req,res,ent,der=[machine.obj(None if s is None else bytes.fromhex(s)) for s in case['slots']]
    token=machine.invoke(METHOD,[arch,0,int(case['sha256']),machine.obj(case['bundle_id']),machine.obj(case['team_id']),info,req,res],[ent,der,int(case['exec_flags'])])
    return {'data':None if not token else bytes(machine.value(token)).hex(),'effects':machine.effects,'file_position':str(machine.value(handle)['position'])}


def validate(evidence,metadata,ipa=None):
    require([r['entry'] for r in evidence['records']]==[hex(v) for v in [METHOD,SHA256,SHA1,CAPTURED,GLOBAL,LENGTH,FLAG]],'Changed CodeDirectory entry identities')
    validate_instruction_bytes(evidence['records'])
    extra={int(k,16):bytes.fromhex(v) for k,v in EXTRA.items()}
    # Every finite target is read from an explicit original two-entry table.
    for record in evidence['records']:
        tables=TABLES.get(int(record['entry'],16),{})
        require(record['finite_load_hypothesis_pointer_tables']=={hex(a):[hex(s),hex(s+8)] for a,s in tables.items()},'Changed CodeDirectory finite pointer hypothesis')
        for row in record['instructions']:
            if 'finite_load_result_hypothesis' in row:
                address=int(row['address'],16);require(address in tables,'Unjustified CodeDirectory load hypothesis')
                slot=tables[address]
                expected=[int.from_bytes(extra[slot+i],'little') for i in (0,8)]
                require(row['finite_load_result_hypothesis']==sorted(set(expected)),'Changed original finite table values')
    validate_inputs(evidence,metadata,ipa,names=(),class_slots={},extra_inputs=extra)
    from verify_app_analysis import dispatch_evidence
    dispatch,_=dispatch_evidence(ROOT)
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(evidence,baseline),dispatch)==evidence['records'],'Changed expanded CodeDirectory flow')


def run(ipa=None,original_ipa=None):
    metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable')
        image=MachO(data);flows=records(image,Dispatch(image));bindings=image.binds
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        external={};cs=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);cs.detail=True
        for record in flows:
            for row in record['instructions']:
                if row['mnemonic'] not in ('b','bl'):continue
                target=int(row.get('call_target',row['operands'].lstrip('#')),16);off=image.fileoff(target);ins=list(cs.disasm(data[off:off+12],target))
                if len(ins)==3 and [i.mnemonic for i in ins]==['adrp','ldr','br']:
                    slot=ins[0].operands[1].imm+ins[1].operands[1].mem.disp
                    if slot in bindings:external[target]=bindings[slot]
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed CodeDirectory file: '+name)
        evidence=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(evidence,metadata,original_ipa)
        flows=evidence['records'];bindings={int(k,16):v for k,v in evidence['bindings'].items()};external={int(k,16):v for k,v in evidence['external_targets'].items()}
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in evidence['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    machine=DirectoryMachine(chunks,flows,bindings,{},external,metadata)
    results=[]
    for number,case in enumerate(cases()):
        try:row={'input':case,'result':evaluate(machine,case)}
        except FoundationError as ex:row={'input':case,'exception':str(ex)}
        except Exception as ex:raise ValueError('CodeDirectory fixture '+str(number)+': '+str(ex)) from ex
        results.append(row)
    require(all(e in machine.visited for e in [METHOD,SHA256,SHA1,CAPTURED,GLOBAL,LENGTH,FLAG]),'Unexercised original CodeDirectory dependency')
    if ipa:
        reads=set(machine.reads)|{(int(s,16),8) for f in flows for r in f['instructions'] for s in r.get('pointer_slots',[])}
        reads|={(s+i,8) for tables in TABLES.values() for s in tables.values() for i in (0,8)}
        memory=[]
        for address,size in sorted(reads):
            off=image.fileoff(address);memory.append({'address':hex(address),'bytes':data[off:off+size].hex()})
        evidence={'records':flows,'classes':{},'memory':memory,'bindings':{hex(a):v for a,v in bindings.items() if any(a==at for at,_ in reads)},'external_targets':{hex(a):v for a,v in external.items()}}
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence,separators=(',',':')).encode(),mtime=0));(OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        if EXTRA:validate(evidence,metadata,ipa)
        else:print(json.dumps({'static_inputs_to_pin':[r for r in memory if int(r['address'],16) in [0x10099c630,0x10097b0e0] or 0x100b26000<=int(r['address'],16)<0x100b28000]},indent=2))
        index={'executable_sha256':EXPECTED_EXECUTABLE,'translated_original_method_bodies':2,'native_digest_helpers':2,'native_block_invocations':3,'fixtures':len(results),'code_directory_and_digest_fixtures':sum(r['input']['op']!='flag' for r in results),'signing_flag_fixtures':sum(r['input']['op']=='flag' for r in results),'original_instructions_executed':len(machine.visited),'foundation_arc_crypto_file_calls_are_explicit_models':True,'BOOL_index_domain':[0,1],'full_YYYArchO_class_reconstructed':False,'complete_signing_pipeline':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed original CodeDirectory fixture behavior')
    print(json.dumps({'result':'PASS','fixtures':len(results),'original_instructions_executed':len(machine.visited),'full_app_built_or_run':False},indent=2));machine.close()
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path)
    a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
