#!/usr/bin/env python3
"""Replay original ASN.1 input instructions and compare recovered compiled C."""
import argparse,base64,gzip,hashlib,json,subprocess,sys
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs,HEAP
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_bio_input import BIOMachine,EXTRA as BIO_EXTRA,IMPORTS,DEPENDENCIES as BIO_DEPENDENCIES,validate as validate_bio
import unicorn.arm64_const as arm
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/asn1-input'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_input_runtime import Scenario,NativeScenario,ENTRIES,cases
EXTRA={**BIO_EXTRA,0x100a5c642:b'a_d2i_fp.c'+bytes(1),0x100a5cd61:b'asn1_lib.c'+bytes(1)}
DEPENDENCIES={**BIO_DEPENDENCIES,0x100604e30:'ERR_clear_error',0x100605198:'ERR_peek_error',0x10061955c:'ASN1_item_ex_d2i'}
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,entry in ENTRIES.items():
        record=walk(image.data,entry,starts,branches,image=image,dispatch=dispatch)
        require(not record['boundary_stops'] and not record['unresolved_indirect_jumps'],'Incomplete ASN1 original flow '+role)
        result.append(dict(record,role=role))
    return result
class ASNMachine(Scenario,BIOMachine):
    def boundary(self,target,args):
        if target==0x10061955c:
            a=[self.get(i) for i in range(8)]+[self.get32(self.uc.reg_read(arm.UC_ARM64_REG_SP))]
            return self.dependency(target,a)&((1<<64)-1)
        if target in [0x100604e30,0x100605198]:
            return self.dependency(target,[self.get(i) for i in range(6)])&((1<<64)-1)
        return BIOMachine.boundary(self,target,args)
def validate(e,metadata,ipa=None):
    require(e['native_boundaries']=={hex(a):v for a,v in DEPENDENCIES.items()},'Changed ASN1 boundary map')
    require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'Changed ASN1 original data')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(e,baseline),d)==e['records'],'Changed original ASN1 flow')
def native_compare(library,expected):
    m=NativeScenario(library)
    for i,f in enumerate(expected):
        observed=m.evaluate(f['input'])
        require(observed==f['result'],'Native ASN1 fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':observed}))
    return len(expected)
def run(generate=False,emit=False):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']}
    bio=json.loads(gzip.decompress((ROOT/'reconstruction/bio-input/evidence.json.gz').read_bytes()));validate_bio(bio,metadata)
    if generate:
        from research_bio_input import original
        image=original();flows=records(image,Dispatch(image))
        for a,b in EXTRA.items():require(image.data[image.fileoff(a):image.fileoff(a)+len(b)]==b,'Wrong ASN1 original constant '+hex(a))
        chunks=[(s['vmaddr'],image.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'bindings':{},'external_targets':{hex(a):v for a,v in IMPORTS.items()},'native_boundaries':{hex(a):v for a,v in DEPENDENCIES.items()}}
    else:
        idx=json.loads((OUT/'index.json').read_text())
        for name,digest in idx['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed ASN1 source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records']
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+bio['records'] for r in f['instructions']]
    validate(e,metadata);machine=ASNMachine(chunks,flows+bio['records'],metadata);results=[]
    try:
        for i,c in enumerate(cases()):
            try:results.append({'input':c,'result':machine.evaluate(c)})
            except Exception as ex:raise ValueError('Original ASN1 fixture '+str(i)+' '+str(c)[:500]+': '+str(ex)) from ex
        all_addresses={int(row['address'],16) for f in flows for row in f['instructions']};exercised=all_addresses&machine.visited;missing=sorted(all_addresses-machine.visited)
        require(not(set(ENTRIES.values())-machine.visited),'Unexercised original ASN1 entry')
        if generate:
            (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(results),mtime=0))
            idx={'executable_sha256':EXPECTED_EXECUTABLE,'original_native_functions':4,'fixtures':len(results),'original_instructions':len(all_addresses),'original_instructions_exercised':len(exercised),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'real_recovered_BIO_source_composition_cases':sum(not f['input'].get('synthetic',True) for f in results),'recursive_item_decoder_and_ERR_are_controlled':True,'complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name in ['ESignASN1Input.c','ESignASN1Input.h','OPENSSL-LICENSE.txt','evidence.json.gz','fixtures.json.gz']}}
            (OUT/'index.json').write_text(json.dumps(idx,indent=2)+'\n')
        else:require(results==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())),'Changed original ASN1 behavior')
    finally:machine.close()
    output=ROOT/'build/asn1-input';output.mkdir(parents=True,exist_ok=True);library=output/'asn1-host.so'
    subprocess.run(['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',str(OUT/'ESignASN1Input.c'),str(ROOT/'reconstruction/bio-input/ESignBIOInput.c'),str(ROOT/'tests/bio_input_test_adapter.c'),str(ROOT/'tests/asn1_input_test_adapter.c'),'-o',str(library)],check=True)
    native_compare(library,results)
    report={k:v for k,v in idx.items() if k!='files'};report.update(result='PASS',native_compiled_C_comparisons=len(results))
    print('ASN1_VERIFICATION_JSON:'+json.dumps(report,separators=(',',':')))
    if emit:
        for name in ['evidence.json.gz','fixtures.json.gz','index.json']:
            p=OUT/name;raw=p.read_bytes();print('ASN1_FILE_JSON:'+json.dumps({'path':str(p.relative_to(ROOT)),'content':base64.b64encode(raw).decode(),'sha256':hashlib.sha256(raw).hexdigest(),'git_blob_sha':hashlib.sha1(b'blob '+str(len(raw)).encode()+bytes(1)+raw).hexdigest()},separators=(',',':')))
        from generate_component_project import run
        run(verify=False)
        for name in ['ESignRecovery.xcodeproj/project.pbxproj','ESignRecovery.xcodeproj/xcshareddata/xcschemes/RecoveredComponents.xcscheme']:
            raw=(ROOT/name).read_bytes();print('ASN1_FILE_JSON:'+json.dumps({'path':name,'content':base64.b64encode(raw).decode(),'git_blob_sha':hashlib.sha1(b'blob '+str(len(raw)).encode()+bytes(1)+raw).hexdigest()},separators=(',',':')))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--emit-files',action='store_true');a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.emit_files)
