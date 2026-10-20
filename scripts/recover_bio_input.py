#!/usr/bin/env python3
"""Compare original BIO instructions with compiled source; never execute the IPA."""
import argparse,base64,gzip,hashlib,json,platform,struct,subprocess,sys
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs,HEAP
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_legacy_crypto import CryptoMachine
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/bio-input'
sys.path.insert(0,str(ROOT/'tests'))
from bio_input_runtime import Scenario,NativeScenario,ENTRIES,CALLBACKS,cases
TABLE=bytes.fromhex('0010171b1b1b1b1f24264040');TABLE_ADDRESS=0x100999490;LOAD=0x1005ffd80;ADD=0x1005ffd84;METHOD=0x100e00fd0
EXTRA={0x100999480:bytes.fromhex('01000000000000000000000000000000'),TABLE_ADDRESS:TABLE,METHOD:bytes.fromhex('0104000000000000d6b0a500010000000cfb5f0001000000c8fb5f00010000007cfc5f0001000000acfc5f000100000040fd5f0001000000a0fe5f0001000000d8fe5f00010000000000000000000000'),0x100a5acf5:b'bio_lib.c'+bytes(1),0x100a5b0cc:b'bss_mem.c'+bytes(1),0x100a5ac94:b'buffer.c'+bytes(1),0x100a5b0d6:b'memory buffer'+bytes(1)}
IMPORTS={0x100930ac4:'_bzero',0x100931238:'_memcpy',0x100931250:'_memmove',0x100931a6c:'_strlen'}
DEPENDENCIES={0x1005b11cc:'malloc',0x1005b14c4:'realloc_clean',0x1005b1658:'free',0x1005b2bb8:'cleanse',0x1005b1bdc:'new_ex_data',0x1005b1c68:'free_ex_data',0x1005b1044:'add_reference',0x100604c0c:'error',**IMPORTS,**{a:n for n,a in CALLBACKS.items()}}
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,entry in ENTRIES.items():
        record=walk(image.data,entry,starts,branches,image=image,dispatch=dispatch,load_result_values={LOAD:list(TABLE)},shifted_add_addresses={ADD:2})
        stops=[{'address':'0x1005b1658','reason':'other-declared-entry'}] if role=='buffree' else [{'address':'0x1005ffb0c','reason':'other-declared-entry'}] if role=='memputs' else []
        require(record['boundary_stops']==stops,'Unexpected original BIO flow stop: '+role)
        require(record['unresolved_indirect_jumps']==(2 if role=='ctrl' else 0),'Unexpected BIO dynamic branch boundary: '+role)
        result.append(dict(record,role=role))
    return result
class BIOMachine(Scenario,CryptoMachine):
    def __init__(self,chunks,flows,metadata):
        CryptoMachine.__init__(self,chunks,flows,{}, {},metadata);self.callbacks=CALLBACKS;self.memory_method=METHOD
    def reset_heap(self):self.next_token=HEAP;self.tokens={};self.objects={}
    def raw(self,name,size):return CryptoMachine.raw(self,name,size)
    def read_bytes(self,p,n):return bytes(self.uc.mem_read(p,n))
    def write_bytes(self,p,b):
        if b:self.uc.mem_write(p,b)
    def boundary(self,target,args):
        a=[self.get(i) for i in range(6)]
        if target==0x100930ac4:
            require(a[1]<=65536,'Unbounded bzero fixture');self.write_bytes(a[0],bytes(a[1]));return 0
        if target in [0x100931238,0x100931250]:
            require(a[2]<=65536,'Unbounded copy fixture');self.write_bytes(a[0],self.read_bytes(a[1],a[2]));return a[0]
        if target==0x100931a6c:return len(self.string(a[0]).encode())
        require(target in DEPENDENCIES,'Unexpected original BIO callee '+hex(target));return self.dependency(target,a)&((1<<64)-1)
def validate(e,metadata,ipa=None):
    require(e['native_boundaries']=={hex(a):v for a,v in DEPENDENCIES.items()},'Changed original BIO boundary map')
    require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'Changed original BIO data inputs')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(e,baseline),d)==e['records'],'Changed original BIO flow proof')
def native_compare(library,expected):
    machine=NativeScenario(library)
    for i,f in enumerate(expected):
        observed=machine.evaluate(f['input'])
        require(observed==f['result'],'Native BIO fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':observed}))
    method=machine.memory_method
    require(machine.get32(method)==1025 and machine.string(machine.get64(method+8))=='memory buffer','Changed relocated original BIO method metadata')
    for offset,address in [(16,0x1005ffb0c),(24,0x1005ffbc8),(32,0x1005ffc7c),(40,0x1005ffcac),(48,0x1005ffd40),(56,0x1005ffea0),(64,0x1005ffed8)]:
        function=getattr(machine.lib,'ESignOriginal_'+format(address,'x'))
        import ctypes
        require(machine.get64(method+offset)==ctypes.cast(function,ctypes.c_void_p).value,'Changed relocated memory-method function pointer')
    require(machine.get64(method+72)==0,'Changed original null callback_ctrl')
    return len(expected)
def run(generate=False,emit=False):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']}
    if generate:
        from research_bio_input import original
        image=original();flows=records(image,Dispatch(image))
        for a,b in EXTRA.items():require(image.data[image.fileoff(a):image.fileoff(a)+len(b)]==b,'Wrong original BIO constant '+hex(a))
        chunks=[(s['vmaddr'],image.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'bindings':{},'external_targets':{hex(a):v for a,v in IMPORTS.items()},'native_boundaries':{hex(a):v for a,v in DEPENDENCIES.items()}}
    else:
        idx=json.loads((OUT/'index.json').read_text())
        for name,digest in idx['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed BIO source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records']
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    validate(e,metadata);machine=BIOMachine(chunks,flows,metadata);results=[]
    try:
        for i,c in enumerate(cases()):
            try:results.append({'input':c,'result':machine.evaluate(c)})
            except Exception as ex:raise ValueError('Original BIO fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        all_addresses={int(row['address'],16) for f in flows for row in f['instructions']};missing=sorted(all_addresses-machine.visited)
        require(not (set(ENTRIES.values())-machine.visited),'Unexercised original BIO function')
        if generate:
            (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(results),mtime=0))
            idx={'executable_sha256':EXPECTED_EXECUTABLE,'original_native_functions':18,'fixtures':len(results),'original_instructions':len(all_addresses),'original_instructions_exercised':len(machine.visited),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'original_memory_method_descriptor_relocated':True,'static_byte_dispatch_guard':[0,11],'test_allocators_ex_data_refcount_and_ERR_are_controlled':True,'complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name in ['ESignBIOInput.c','ESignBIOInput.h','OPENSSL-LICENSE.txt','evidence.json.gz','fixtures.json.gz']}}
            (OUT/'index.json').write_text(json.dumps(idx,indent=2)+'\n')
        else:require(results==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())),'Changed original BIO behavior')
    finally:machine.close()
    output=ROOT/'build/bio-input';output.mkdir(parents=True,exist_ok=True);library=output/'bio-host.so'
    subprocess.run(['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',str(OUT/'ESignBIOInput.c'),str(ROOT/'tests/bio_input_test_adapter.c'),'-o',str(library)],check=True)
    native_compare(library,results)
    report={'result':'PASS','original_native_functions':18,'fixtures':len(results),'original_instructions':idx['original_instructions'],'original_instructions_exercised':idx['original_instructions_exercised'],'unexercised_original_instruction_addresses':idx['unexercised_original_instruction_addresses'],'native_compiled_C_comparisons':len(results),'complete_CMS_decoder':False,'full_app_built':False}
    print('BIO_VERIFICATION_JSON:'+json.dumps(report,separators=(',',':')))
    if emit:
        for name in ['evidence.json.gz','fixtures.json.gz','index.json']:
            p=OUT/name;raw=p.read_bytes();print('BIO_FILE_JSON:'+json.dumps({'path':str(p.relative_to(ROOT)),'content':base64.b64encode(raw).decode(),'sha256':hashlib.sha256(raw).hexdigest(),'git_blob_sha':hashlib.sha1(b'blob '+str(len(raw)).encode()+bytes(1)+raw).hexdigest()},separators=(',',':')))
        from generate_component_project import run
        run(verify=False)
        for name in ['ESignRecovery.xcodeproj/project.pbxproj','ESignRecovery.xcodeproj/xcshareddata/xcschemes/RecoveredComponents.xcscheme']:
            raw=(ROOT/name).read_bytes();print('BIO_FILE_JSON:'+json.dumps({'path':name,'content':base64.b64encode(raw).decode(),'git_blob_sha':hashlib.sha1(b'blob '+str(len(raw)).encode()+bytes(1)+raw).hexdigest()},separators=(',',':')))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--emit-files',action='store_true');a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.emit_files)
