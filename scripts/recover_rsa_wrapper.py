#!/usr/bin/env python3
"""Execute the original alternate-CMS RSA wrapper without reading embedded key bytes."""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
import struct
import zipfile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from unicorn import UcError,UC_ERR_READ_UNMAPPED
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import validate_instruction_bytes,sparse_image,boundaries_and_branches
from recover_signature_blobs import validate_inputs
from recover_legacy_crypto import CryptoMachine,records as legacy_records,BOUNDARIES,EXTRA as LEGACY_EXTRA,signed
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'reconstruction/rsa-wrapper'
ENTRY=0x100778fa0
KEY=0x100e34468
LITERALS={0x100e34c30:b'Error: failed to read private key file.\n\0',0x100e34c90:b'Error: failed to get RSA key from private key.\n\0',0x100e34cf0:b'Error: failed to allocate memory.\n\0',0x100e34d50:b'Error: failed to sign the data.\n\0',0x100e34d73:b'r\0'}
EXTRA={
    "0x10099c668": "f510ea4a6b89612d",
    "0x10099c670": "d273c4cf08e35a45",
    "0x10099c678": "0210e01ced1b4cb7",
    "0x100e34c00": "5c",
    "0x100e34c01": "58",
    "0x100e34c02": "d4",
    "0x100e34c03": "15",
    "0x100e34c04": "28",
    "0x100e34c05": "36",
    "0x100e34c06": "5c",
    "0x100e34c07": "d7",
    "0x100e34c08": "8c",
    "0x100e34c09": "9c7c8f2e4bfd0e0d",
    "0x100e34c11": "06",
    "0x100e34c12": "aa",
    "0x100e34c13": "7e",
    "0x100e34c14": "81",
    "0x100e34c15": "1a",
    "0x100e34c16": "8f",
    "0x100e34c17": "83",
    "0x100e34c18": "5b",
    "0x100e34c19": "08",
    "0x100e34c1a": "2e",
    "0x100e34c1b": "ca",
    "0x100e34c1c": "64",
    "0x100e34c1d": "40",
    "0x100e34c1e": "8f",
    "0x100e34c1f": "3a",
    "0x100e34c20": "85",
    "0x100e34c21": "cb",
    "0x100e34c22": "99",
    "0x100e34c23": "3c",
    "0x100e34c24": "2b",
    "0x100e34c25": "af",
    "0x100e34c26": "a5",
    "0x100e34c27": "08",
    "0x100e34c28": "06",
    "0x100e34c30": "456c24f986af6603686f3552b5f97facd4d1db857794c702743aaf58125618b8c4dec85aa2358ae500",
    "0x100e34c60": "9b",
    "0x100e34c61": "d2",
    "0x100e34c62": "54",
    "0x100e34c63": "06",
    "0x100e34c64": "8a",
    "0x100e34c65": "3a",
    "0x100e34c66": "44",
    "0x100e34c67": "52",
    "0x100e34c68": "22",
    "0x100e34c69": "cf",
    "0x100e34c6a": "08",
    "0x100e34c6b": "ca",
    "0x100e34c6c": "2e",
    "0x100e34c6d": "6d",
    "0x100e34c6e": "6b",
    "0x100e34c6f": "36",
    "0x100e34c70": "b7",
    "0x100e34c71": "75",
    "0x100e34c72": "e9",
    "0x100e34c73": "bf",
    "0x100e34c74": "2b",
    "0x100e34c75": "a9",
    "0x100e34c76": "5a",
    "0x100e34c77": "05",
    "0x100e34c78": "19",
    "0x100e34c79": "81",
    "0x100e34c7a": "96",
    "0x100e34c7b": "c7",
    "0x100e34c7c": "0d",
    "0x100e34c7d": "49",
    "0x100e34c7e": "07",
    "0x100e34c7f": "9d",
    "0x100e34c80": "a6",
    "0x100e34c81": "16",
    "0x100e34c82": "e4",
    "0x100e34c83": "31",
    "0x100e34c84": "d7",
    "0x100e34c85": "98",
    "0x100e34c86": "f6",
    "0x100e34c87": "dc",
    "0x100e34c88": "ca",
    "0x100e34c89": "7e",
    "0x100e34c8a": "22",
    "0x100e34c8b": "51",
    "0x100e34c8c": "2c",
    "0x100e34c8d": "d3",
    "0x100e34c8e": "ba",
    "0x100e34c8f": "3b",
    "0x100e34c90": "5173efbe34059ad6cee936dd7a189443e10f2c242023c36bee764f2c167544fdb3f9f1cda9f9a8351e6346686988e5fb",
    "0x100e34cc0": "9701b6a07ad97a23",
    "0x100e34cc8": "85",
    "0x100e34cc9": "2e",
    "0x100e34cca": "48",
    "0x100e34ccb": "11",
    "0x100e34ccc": "b5",
    "0x100e34ccd": "32",
    "0x100e34cce": "02",
    "0x100e34ccf": "cc",
    "0x100e34cd0": "bf",
    "0x100e34cd1": "25",
    "0x100e34cd2": "5e",
    "0x100e34cd3": "08",
    "0x100e34cd4": "b9",
    "0x100e34cd5": "4f",
    "0x100e34cd6": "ef",
    "0x100e34cd7": "8e",
    "0x100e34cd8": "b5",
    "0x100e34cd9": "fb",
    "0x100e34cda": "af",
    "0x100e34cdb": "7c",
    "0x100e34cdc": "e4",
    "0x100e34cdd": "68",
    "0x100e34cde": "9f",
    "0x100e34cdf": "64",
    "0x100e34ce0": "67",
    "0x100e34ce1": "90",
    "0x100e34ce2": "16",
    "0x100e34cf0": "91972e2bfc61ccbcbb650cc4739cffa07366732ad4afba7dc99f41789323670c949b24",
    "0x100e34d20": "f2",
    "0x100e34d21": "c0",
    "0x100e34d22": "bb",
    "0x100e34d23": "ec",
    "0x100e34d24": "ad",
    "0x100e34d25": "d0",
    "0x100e34d26": "38",
    "0x100e34d27": "93",
    "0x100e34d28": "1c",
    "0x100e34d29": "8e",
    "0x100e34d2a": "cc",
    "0x100e34d2b": "6774c068823b3fde",
    "0x100e34d33": "a5",
    "0x100e34d34": "10",
    "0x100e34d35": "a5",
    "0x100e34d36": "7a",
    "0x100e34d37": "f2",
    "0x100e34d38": "59",
    "0x100e34d39": "6f",
    "0x100e34d3a": "7a",
    "0x100e34d3b": "bd",
    "0x100e34d3c": "fb",
    "0x100e34d3d": "ca",
    "0x100e34d3e": "f0",
    "0x100e34d3f": "69",
    "0x100e34d40": "74",
    "0x100e34d50": "d28e520e036ece96b385f6927dbcbeaeb70f28b7df38227a55fb5b57bb5c6038e4",
    "0x100e34d71": "2c",
    "0x100e34d72": "a2",
    "0x100e34d73": "f4e7",
    "0x100e95e88": "00000000"
}

def records(image,dispatch):
    result=legacy_records(image,dispatch);starts,branches=boundaries_and_branches()
    record=walk(image.data,ENTRY,starts,branches,image=image,dispatch=dispatch)
    require(not record['unresolved_indirect_jumps'] and not record['boundary_stops'],'Incomplete original RSA wrapper flow')
    return result+[dict(record,role='original-alternate-CMS-RSA-wrapper')]

class WrapperMachine(CryptoMachine):
    def __init__(self,chunks,records,bindings,external,metadata):
        super().__init__(chunks,records,bindings,external,metadata)
        self.labels[KEY]='embedded-key'
        self.stderr=self.raw('stderr');self.stderr_cell=self.raw('stderr-cell');self.put64(self.stderr_cell,self.stderr)
        self.put64(0x100afc6f0,self.stderr_cell)
    def write(self,uc,access,address,size,value,user):
        if 0x100e34c00<=address and address+size<=0x100e34d75 or 0x100e95e88<=address and address+size<=0x100e95e8c:return
        super().write(uc,access,address,size,value,user)
    def cstring(self,pointer):
        if pointer not in LITERALS:return super().cstring(pointer)
        expected=LITERALS[pointer];self.reads[(pointer,len(expected))]=True
        raw=bytes(self.uc.mem_read(pointer,len(expected)));require(raw==expected,'Changed original decoded wrapper diagnostic/mode');return raw[:-1].decode()
    def boundary(self,target,args):
        name=self.external.get(target)
        if name not in ['_fmemopen','_fclose','_fprintf','_printf','_malloc']:return super().boundary(target,args)
        a=args;row={'call':name.lstrip('_')}
        if name=='_fmemopen':
            require(a[0]==KEY,'Original embedded-key pointer changed')
            row.update(buffer='embedded-key',size=str(a[1]),mode=self.cstring(a[2]));result=0 if self.case.get('file_failure') else self.stream
        elif name=='_fclose':row['object']=self.label(a[0]);result=0
        elif name=='_malloc':
            row['size']=str(a[0]);require(a[0]<1000000,'Unexpected wrapper allocation size')
            result=0 if self.case.get('allocation_failure') else self.raw('allocation',max(256,a[0]))
        else:
            pointer=a[1] if name=='_fprintf' else a[0];message=self.cstring(pointer)
            row['message']=message
            if name=='_fprintf':row['stream']=self.label(a[0])
            result=len(message.encode())
        self.effects.append(row);return result

def cases():
    base={'op':'rsa_wrapper','limbs':[0,0,0,0x80000000],'top':4,'flags':0,'length':51,'key_length':'1704','callback_result':16}
    result=[base]
    for option in [{'file_failure':True},{'bio_failure':True},{'parse_failure':True},{'type':28},{'allocation_failure':True},{'callback_result':-1},{'callback_result':0},{'callback_result':64},{'callback_result':-0x80000000},{'flags':4},{'length':-1},{'length':0},{'length':0x7fffffff},{'length':0x80000000},{'length':0x100000033},{'key_length':'1'},{'references':2},{'finish':True,'populated':True}]:result.append(dict(base,**option))
    for top in [1,8,64,128]:
        result.append(dict(base,limbs=[0]*(top-1)+[0x80000000],top=top,callback_result=top*4))
    return result

def evaluate(machine,case):
    machine.setup(case);machine.put64(machine.rsa+32,machine.bn(case))
    argument=machine.raw('input');ignored=machine.raw('ignored-key');out=machine.raw('output-length');sentinel=0x1122334455667788;machine.put64(out,sentinel)
    returned=machine.invoke(ENTRY,[argument,case['length'],ignored,int(case['key_length']),out])
    length=machine.get64(out);length='unchanged' if length==sentinel else str(struct.unpack('<q',struct.pack('<Q',length))[0])
    return {'returned':machine.label(returned),'out_length':length,'rsa_references':signed(machine.get32(machine.rsa+112)),'pkey_references':signed(machine.get32(machine.pkey+8)),'effects':machine.effects}

def validate(evidence,metadata,ipa=None):
    require(all(not(int(r['address'],16)<0x100e34b10 and KEY<int(r['address'],16)+len(bytes.fromhex(r['bytes']))) for r in evidence['memory']),'Embedded key bytes must not be in published evidence')
    require(evidence['native_boundaries']=={hex(k):v for k,v in BOUNDARIES.items()},'Changed RSA wrapper native dependency map')
    require(evidence['records'][-1]['entry']==hex(ENTRY),'Changed wrapper entry')
    validate_instruction_bytes(evidence['records'])
    extra=dict(LEGACY_EXTRA);extra.update({int(a,16):bytes.fromhex(v) for a,v in EXTRA.items()})
    validate_inputs(evidence,metadata,ipa,names=(),class_slots={},extra_inputs=extra)
    require(all(not(int(r['address'],16)<0x100e34b10 and KEY<int(r['address'],16)+len(bytes.fromhex(r['bytes']))) for r in evidence['memory']),'Embedded key bytes must not be in published evidence')
    from verify_app_analysis import dispatch_evidence
    dispatch,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(evidence,baseline),dispatch)==evidence['records'],'Changed RSA wrapper original flow')

def run(ipa=None,original_ipa=None):
    metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        OUT.mkdir(parents=True,exist_ok=True)
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable');image=MachO(data);flows=records(image,Dispatch(image));bindings=image.binds
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        external={};cs=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);cs.detail=True
        for record in flows:
            for row in record['instructions']:
                if row['mnemonic'] not in ['b','bl']:continue
                target=int(row.get('call_target',row['operands'].lstrip('#')),16);off=image.fileoff(target);ins=list(cs.disasm(data[off:off+12],target))
                if len(ins)==3 and [i.mnemonic for i in ins]==['adrp','ldr','br']:
                    slot=ins[0].operands[1].imm+ins[1].operands[1].mem.disp
                    if slot in bindings:external[target]=bindings[slot]
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed RSA wrapper file: '+name)
        evidence=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(evidence,metadata,original_ipa);flows=evidence['records'];bindings={int(k,16):v for k,v in evidence['bindings'].items()};external={int(k,16):v for k,v in evidence['external_targets'].items()}
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in evidence['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    machine=WrapperMachine(chunks,flows,bindings,external,metadata);results=[]
    for number,case in enumerate(cases()):
        try:results.append({'input':case,'result':evaluate(machine,case)})
        except UcError as ex:
            pc=machine.uc.reg_read(arm.UC_ARM64_REG_PC)
            expected=0x10060c850 if case.get('bio_failure') or case.get('parse_failure') else 0x1005f50fc if case.get('type')==28 else None
            require(ex.errno==UC_ERR_READ_UNMAPPED and pc==expected and machine.get(0)==0,'Unexpected original wrapper fault')
            results.append({'input':case,'unverified_source_input':True,'original_fault_probe':{'kind':'invalid-memory-read','pc':hex(pc),'effects':machine.effects}})
        except Exception as ex:raise ValueError('RSA wrapper case '+str(number)+': '+str(ex)+'; pc='+hex(machine.uc.reg_read(__import__('unicorn').arm64_const.UC_ARM64_REG_PC))+'; effects='+repr(machine.effects)) from ex
    if ipa:
        reads=set(machine.reads)|{(int(s,16),8) for f in flows for r in f['instructions'] for s in r.get('pointer_slots',[])}
        memory=[]
        for address,size in sorted(reads):
            segment=next(s for s in image.segments if s['vmaddr']<=address<s['vmaddr']+s['vmsize']);offset=address-segment['vmaddr'];backed=max(0,min(size,segment['filesize']-offset))
            raw=data[segment['fileoff']+offset:segment['fileoff']+offset+backed]+bytes(size-backed);memory.append({'address':hex(address),'bytes':raw.hex()})
        evidence={'records':flows,'classes':{},'memory':memory,'bindings':{hex(a):v for a,v in bindings.items() if any(a==at for at,_ in reads)},'external_targets':{hex(a):v for a,v in external.items()},'native_boundaries':{hex(k):v for k,v in BOUNDARIES.items()}}
        require(all(not(int(r['address'],16)<0x100e34b10 and KEY<int(r['address'],16)+len(bytes.fromhex(r['bytes']))) for r in memory),'Private embedded input read unexpectedly; do not publish')
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence,separators=(',',':')).encode(),mtime=0));(OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        validate(evidence,metadata,ipa)
        index={'executable_sha256':EXPECTED_EXECUTABLE,'new_original_native_functions':1,'reused_original_native_functions':8,'fixtures':len(results),'source_behavior_fixtures':sum(not r.get('unverified_source_input') for r in results),'original_fault_probes':sum(bool(r.get('unverified_source_input')) for r in results),'original_instructions_executed':len(machine.visited),'native_crypto_and_stdio_allocator_callees_are_controlled_test_boundaries':True,'embedded_key_bytes_included':False,'complete_crypto_backend':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed RSA wrapper behavior')
    print(json.dumps({'result':'PASS','fixtures':len(results),'source_behavior_fixtures':sum(not r.get('unverified_source_input') for r in results),'original_fault_probes':sum(bool(r.get('unverified_source_input')) for r in results),'original_instructions_executed':len(machine.visited),'embedded_key_bytes_included':False,'complete_crypto_backend':False},indent=2));machine.close()
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path)
    a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
