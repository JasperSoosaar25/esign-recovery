#!/usr/bin/env python3
"""Recover and compare original DER encoding, canonical names and Unicode paths."""
import argparse,gzip,hashlib,json,subprocess,sys,zipfile,struct
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_x509_state import X509Machine,extra as x509_extra,DEPENDENCIES as PRIOR_DEPENDENCIES,FLAGS as X509_FLAGS,sources as x509_sources,validate as validate_x509
from x509_schema_data import schema,base_schema
from recover_localization import GUARD
from unicorn import arm64_const as arm
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/asn1-encoding'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_encoding_runtime import Scenario,NativeScenario,ENTRIES,DEPENDENCIES as ENCODING_DEPENDENCIES,CALLBACKS,cases
FLAGS=[*X509_FLAGS,'-DESIGN_ASN1_ENCODING_SOURCE','-Dqsort=ESignEncodingTest_qsort','-Dmemcmp=ESignEncodingTest_memcmp','-D__tolower=ESignEncodingTest_tolower']
DEPENDENCIES={a:n for a,n in PRIOR_DEPENDENCIES.items() if a not in ENTRIES.values()}|ENCODING_DEPENDENCIES|{a:n for n,a in CALLBACKS.items()}
BINDINGS={0x100afc558:'__DefaultRuneLocale',0x100afc6e8:'___stack_chk_guard'}
TABLES={0x100999862:bytes.fromhex('003a0a26293237'),0x100999869:bytes.fromhex('07001118282118181800'),0x100999763:bytes.fromhex('00100e262d'),0x100999768:bytes.fromhex('0030346d38'),0x100999771:bytes.fromhex('ffffffffffffffffffffffff00ffffffffff010101ff010101ff01ff04ff02')}
LOADS={0x1006187a4:sorted(set(TABLES[0x100999862])),0x10061919c:sorted(set(TABLES[0x100999869])),0x100613e38:sorted(set(TABLES[0x100999763])),0x100614134:sorted(set(TABLES[0x100999768]))}
ADDS={0x1006187a8:2,0x1006191a0:2,0x100613e3c:2,0x100614138:2}
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def extra():return {**x509_extra(schema()),**TABLES,**{a:bytes(8) for a in BINDINGS},0x100a5c96f:b'tasn_enc.c\0',0x100a56a60:b'obj_lib.c\0',0x100a5c66c:b'a_mbstr.c\0',0x100a5c676:b'minsize=\0',0x100a5c67f:b'maxsize=\0',0x100a69907:b'%ld\0'}
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,a in ENTRIES.items():
        r=walk(image.data,a,starts,branches,image=image,dispatch=dispatch,load_result_values=LOADS,shifted_add_addresses=ADDS)
        stops=[{'address':hex({'template_encode':0x100618744,'mbcopy':0x100613da0,'mbncopy':0x100614364}[role]),'reason':'other-declared-entry'}] if role in ['template_encode','mbcopy','mbncopy'] else []
        require(r['boundary_stops']==stops and not r['unresolved_indirect_jumps'],'Incomplete original encoding flow '+role+': '+str((r['boundary_stops'],r['unresolved_indirect_jumps'])));result.append(dict(r,role=role))
    return result
class EncodingMachine(Scenario,X509Machine):
    def __init__(self,chunks,flows,metadata):
        X509Machine.__init__(self,chunks,flows,metadata,schema());self.encoding_callbacks=CALLBACKS;self.static_regions.extend((a,1,'function-'+hex(a)) for a in set(ENTRIES.values())|set(CALLBACKS.values()));self.put64(0x100afc6e8,GUARD);self.put64(0x100afc558,GUARD+0x200);rune=bytearray(60+256*4)
        for c in [9,10,11,12,13,32]:struct.pack_into('<I',rune,60+4*c,0x4000)
        self.write_bytes(GUARD+0x200,bytes(rune))
    def boundary(self,target,args):
        try:return self.encoding_boundary(target,args)
        except Exception as ex:
            import traceback
            raise ValueError('Boundary '+hex(target)+' '+repr(ex)+' '+traceback.format_exc()) from ex
    def encoding_boundary(self,target,args):
        if target in ENCODING_DEPENDENCIES or target in CALLBACKS.values():
            a=[self.get(i) for i in range(8)]
            if target==0x100601b1c:a[3]=self.get64(self.uc.reg_read(arm.UC_ARM64_REG_SP))
            return self.dependency(target,a)&((1<<64)-1)
        return X509Machine.boundary(self,target,args)
def validate(e,metadata,ipa=None):
    require([(r['role'],r['entry']) for r in e['records']]==[(k,hex(v)) for k,v in ENTRIES.items()],'Changed encoding entry set')
    require(e['native_boundaries']=={hex(a):n for a,n in DEPENDENCIES.items()},'Changed encoding boundaries');require(e['bindings']=={hex(a):n for a,n in BINDINGS.items()},'Changed original Darwin bindings')
    extras=extra();require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extras.items())],'Changed original encoding constants')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=extras)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());require(records(sparse_image(e,baseline),d)==e['records'],'Changed encoding flow proof')
def sources():return [OUT/n for n in ['ESignASN1Encoding.c','ESignNameCanonical.c','ESignUnicode.c']]+x509_sources()+[ROOT/'tests/asn1_encoding_test_adapter.c']
def compare(library,fixtures=None):
    fixtures=fixtures if fixtures is not None else json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        result=m.evaluate(f['input']);require(result==f['result'],'Native encoding fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':result}))
    return len(fixtures)
def run(generate=False,ipa=None):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']};prior=[]
    for name in ['x509-state','cms-schema','cms-content','oid-lookup','asn1-primitives','asn1-object','asn1-value','asn1-item','asn1-input','bio-input']:
        e=json.loads(gzip.decompress((ROOT/'reconstruction'/name/'evidence.json.gz').read_bytes()))
        if name=='x509-state':validate_x509(e,metadata,schema())
        elif name=='cms-schema':
            from recover_cms_schema import validate as v
            v(e,metadata,base_schema())
        elif name=='oid-lookup':
            from recover_oid_lookup import validate as v,database
            v(e,metadata,database())
        else:__import__('recover_'+name.replace('-','_')).validate(e,metadata)
        prior+=e['records']
    if generate:
        require(ipa is not None,'Generation requires exact IPA');raw=ipa.read_bytes();require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()=='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29','Wrong IPA')
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable');im=MachO(data);flows=records(im,Dispatch(im));chunks=[(s['vmaddr'],im.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in im.segments if s['name']!='__PAGEZERO'];e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extra().items())],'bindings':{hex(a):n for a,n in BINDINGS.items()},'external_targets':{hex(a):n for a,n in ENCODING_DEPENDENCIES.items() if a>=0x100930000},'native_boundaries':{hex(a):n for a,n in DEPENDENCIES.items()}}
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed encoding source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records'];chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+prior for r in f['instructions']]
    validate(e,metadata,ipa);m=EncodingMachine(chunks,flows+prior,metadata);fixtures=[]
    try:
        for i,c in enumerate(cases()):
            try:fixtures.append({'input':c,'result':m.evaluate(c)})
            except Exception as ex:raise ValueError('Original encoding fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        addresses={int(r['address'],16) for f in flows for r in f['instructions']};missing=sorted(addresses-m.visited);coverage={f['role']:{'instructions':len(f['instructions']),'exercised':sum(int(r['address'],16) in m.visited for r in f['instructions'])} for f in flows}
    finally:m.close()
    build=ROOT/'build/asn1-encoding';build.mkdir(parents=True,exist_ok=True);library=build/'asn1-encoding-host.so';(build/'original-comparisons.json').write_bytes(canonical(fixtures));subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',*[str(p) for p in sources()],'-o',str(library)],check=True);compare(library,fixtures)
    report={'result':'PASS','original_native_functions':len(ENTRIES),'fixtures':len(fixtures),'original_instructions':len(addresses),'original_instructions_exercised':len(addresses)-len(missing),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'per_function_coverage':coverage,'actual_canonical_name_parser_compositions':sum(f['input']['op'] in ['name_decode','entry','cms_bio'] for f in fixtures),'original_DER_encoder_canonicalizer_and_Unicode_bodies_composed':True,'allocator_ERR_platform_qsort_memcmp_ctype_and_remaining_X509_crypto_boundaries_are_controlled':True,'complete_certificate_or_CMS_backend':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    if generate:
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(fixtures),mtime=0));index={**report,'executable_sha256':EXPECTED_EXECUTABLE,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name.startswith('ESign') or p.name in ['evidence.json.gz','fixtures.json.gz','OPENSSL-LICENSE.txt']}};(OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(fixtures==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())) and all(index.get(k)==v for k,v in report.items()),'Changed encoding behavior/coverage')
    print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.original_ipa)
