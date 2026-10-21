#!/usr/bin/env python3
"""Verify original ASN.1 item orchestration and compiled-source behavior."""
import argparse,gzip,hashlib,json,struct,subprocess,sys,zipfile
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_localization import STACK,STACK_SIZE,STOP
from recover_bio_input import BIOMachine,IMPORTS,DEPENDENCIES as BIO_DEPENDENCIES,validate as validate_bio
from recover_asn1_input import EXTRA as INPUT_EXTRA,validate as validate_input
from unicorn import arm64_const as arm
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/asn1-item'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_item_runtime import Scenario,NativeScenario,ENTRIES,CALLBACKS,cases
TABLE=bytes.fromhex('2b003756737d00')
TAG_BITS=(0,0,0,1024,512,0,0,4096,4096,4096,4096,4096,8192,4096,4096,4096,65536,0,1,2,4,8,16,16384,32768,32,64,128,256,4096,2048)
EXTRA={**INPUT_EXTRA,0x100999878:TABLE,0x1009998a0:struct.pack('<31Q',*TAG_BITS),0x100a5c97a:b'tasn_dec.c\0',0x100a5c985:b'Field=\0',0x100a5c98c:b', Type=\0',0x100a5c994:b'Type=\0',0x100a5c99a:b'tasn_utl.c\0'}
DEPENDENCIES={**BIO_DEPENDENCIES,0x100617b3c:'ASN1_item_ex_new',0x10061848c:'ASN1_item_ex_free',0x100618494:'ASN1_template_free',0x10061a27c:'asn1_d2i_ex_primitive',0x10061acc8:'asn1_template_noexp_d2i',0x1005b3138:'OBJ_obj2nid',0x100612af0:'ASN1_INTEGER_get',0x1006057d8:'ERR_add_error_data',0x100604e30:'ERR_clear_error',0x100605198:'ERR_peek_error',**{a:n for n,a in CALLBACKS.items()}}
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,address in ENTRIES.items():
        if role=='entry':continue
        r=walk(image.data,address,starts,branches,image=image,dispatch=dispatch,load_result_values={0x100619644:list(TABLE)},shifted_add_addresses={0x100619648:2})
        require(not r['boundary_stops'] and not r['unresolved_indirect_jumps'],'Incomplete ASN1 item flow '+role)
        result.append(dict(r,role=role))
    return result
class ItemMachine(Scenario,BIOMachine):
    def __init__(self,chunks,flows,metadata):
        BIOMachine.__init__(self,chunks,flows,metadata);self.callbacks=CALLBACKS;self.memory_method=0
    def invoke(self,address,args):
        for i in range(31):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0)
        sp=STACK+STACK_SIZE-64;self.uc.reg_write(arm.UC_ARM64_REG_SP,sp);self.uc.reg_write(arm.UC_ARM64_REG_LR,STOP);self.uc.reg_write(arm.UC_ARM64_REG_NZCV,0)
        for i,value in enumerate(args[:8]):self.uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),value&((1<<64)-1))
        if address==ENTRIES['check']:
            self.put32(sp,args[8]);self.write_bytes(sp+4,bytes([args[9]&255]));self.put64(sp+8,args[10])
        elif len(args)>8:self.put32(sp,args[8])
        self.uc.emu_start(address,STOP,count=200000)
        require(self.error is None,str(self.error));require(self.uc.reg_read(arm.UC_ARM64_REG_PC)==STOP,'Original ASN1 item did not return');return self.get(0)
    def boundary(self,target,args):
        if target==0x1006057d8:
            sp=self.uc.reg_read(arm.UC_ARM64_REG_SP);count=self.get(0);require(count in [2,4],'Unexpected original error-data count')
            return self.dependency(target,[count]+[self.get64(sp+i*8) for i in range(count)])
        if target in [0x100930ac4,0x100931238,0x100931250,0x100931a6c]:return BIOMachine.boundary(self,target,args)
        require(target in DEPENDENCIES,'Unknown original ASN1 item boundary '+hex(target))
        return self.dependency(target,[self.get(i) for i in range(8)])&((1<<64)-1)
def validate(e,metadata,ipa=None):
    require(e['native_boundaries']=={hex(a):n for a,n in DEPENDENCIES.items()},'Changed ASN1 item boundaries')
    require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'Changed original ASN1 item data')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(e,baseline),d)==e['records'],'Changed original ASN1 item flow')
def sources():return [OUT/'ESignASN1Item.c',ROOT/'reconstruction/asn1-input/ESignASN1Input.c',ROOT/'reconstruction/bio-input/ESignBIOInput.c',ROOT/'tests/bio_input_test_adapter.c',ROOT/'tests/asn1_item_test_adapter.c']
def native_compare(library,fixtures):
    m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        observed=m.evaluate(f['input'])
        require(observed==f['result'],'Native ASN1 item fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':observed}))
    return len(fixtures)
def run(generate=False,ipa=None):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']}
    bio=json.loads(gzip.decompress((ROOT/'reconstruction/bio-input/evidence.json.gz').read_bytes()));validate_bio(bio,metadata)
    inp=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-input/evidence.json.gz').read_bytes()));validate_input(inp,metadata)
    if generate:
        require(ipa is not None,'Generation requires the exact original IPA path')
        raw=ipa.read_bytes();require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()=='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29','Wrong original IPA')
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong original executable');image=MachO(data);flows=records(image,Dispatch(image))
        for address,raw in EXTRA.items():require(image.data[image.fileoff(address):image.fileoff(address)+len(raw)]==raw,'Wrong original ASN1 item constant '+hex(address))
        chunks=[(s['vmaddr'],image.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'bindings':{},'external_targets':{hex(a):v for a,v in IMPORTS.items()},'native_boundaries':{hex(a):v for a,v in DEPENDENCIES.items()}}
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed ASN1 item source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records']
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+inp['records']+bio['records'] for r in f['instructions']]
    validate(e,metadata,ipa);m=ItemMachine(chunks,flows+inp['records']+bio['records'],metadata);fixtures=[]
    try:
        for i,c in enumerate(cases()):
            try:fixtures.append({'input':c,'result':m.evaluate(c)})
            except Exception as ex:raise ValueError('Original ASN1 item fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        addresses={int(r['address'],16) for f in flows for r in f['instructions']};missing=sorted(addresses-m.visited)
        coverage={f['role']:{'instructions':len(f['instructions']),'exercised':sum(int(r['address'],16) in m.visited for r in f['instructions'])} for f in flows}
    finally:m.close()
    build=ROOT/'build/asn1-item';build.mkdir(parents=True,exist_ok=True);library=build/'asn1-item-host.so'
    subprocess.run(['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',*[str(p) for p in sources()],'-o',str(library)],check=True)
    native_compare(library,fixtures)
    report={'result':'PASS','original_native_functions':8,'fixtures':len(fixtures),'original_instructions':len(addresses),'original_instructions_exercised':len(addresses)-len(missing),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'per_function_coverage':coverage,'entry_wrapper_composition_cases':sum(f['input']['op']=='entry' for f in fixtures),'complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False,'undefined_fresh_cache_header_outputs_excluded':True,'constructors_destructors_primitive_noexp_integer_ERR_and_OID_are_controlled':True}
    if generate:
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(fixtures),mtime=0))
        index={**report,'executable_sha256':EXPECTED_EXECUTABLE,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name in ['ESignASN1Item.c','ESignASN1Item.h','OPENSSL-LICENSE.txt','evidence.json.gz','fixtures.json.gz']}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(fixtures==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())),'Changed original ASN1 item behavior')
    print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.original_ipa)
