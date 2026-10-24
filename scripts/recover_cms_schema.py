#!/usr/bin/env python3
"""Recover the original CMS schema graph, callbacks and LONG primitive behavior."""
import argparse,gzip,hashlib,json,subprocess,sys,zipfile
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_bio_input import IMPORTS
from recover_asn1_primitives import PrimitiveMachine,EXTRA as PRIMITIVE_EXTRA,DEPENDENCIES as PRIOR_DEPENDENCIES,sources as primitive_sources
from recover_oid_lookup import database,extra_inputs as oid_extra,validate as validate_oid
from cms_schema_data import extract,render
from recover_cms_content import EXTRA as CONTENT_EXTRA
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/cms-schema'
sys.path.insert(0,str(ROOT/'tests'))
from cms_schema_runtime import Scenario,NativeScenario,ENTRIES,DEPENDENCIES as CMS_DEPENDENCIES,cases,schema
SCHEMA_SHA256='77fbacc4c15de72319f1b21848076595232d8f5dc9808dd1ece7df9db1adb4b3'
TABLE=bytes.fromhex('06000b00')
FLAGS=['-DESIGN_ASN1_VALUE_SOURCE','-DESIGN_ASN1_OBJECT_SOURCE','-DESIGN_ASN1_PRIMITIVES_SOURCE','-DESIGN_OID_SOURCE']
DEPENDENCIES={a:n for a,n in PRIOR_DEPENDENCIES.items() if a not in [0x1005b3138,0x1005b2eac]}|CMS_DEPENDENCIES|{0x10093122c:'_memcmp'}
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def extra(nodes):return {**PRIMITIVE_EXTRA,**CONTENT_EXTRA,**oid_extra(database()),**{int(r['address'],16):bytes.fromhex(r['bytes']) for r in nodes},0x100999dfc:TABLE,0x100a5c77f:b'x_long.c\0',0x100a5c788:b'%ld\n\0'}
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for role,a in ENTRIES.items():
        r=walk(image.data,a,starts,branches,image=image,dispatch=dispatch,load_result_values={0x10062f9d4:sorted(set(TABLE))},shifted_add_addresses={0x10062f9d8:2})
        expected=[{'address':'0x100613354','reason':'other-declared-entry'}] if role=='cms_bio' else []
        require(r['boundary_stops']==expected and not r['unresolved_indirect_jumps'],'Incomplete CMS flow '+role)
        result.append(dict(r,role=role))
    return result
class CMSMachine(Scenario,PrimitiveMachine):
    def __init__(self,chunks,flows,metadata,nodes):
        PrimitiveMachine.__init__(self,chunks,flows,metadata);self.memory_method=0x100e00fd0;self.setup_schema(nodes)
        self.static_regions=[(int(r['address'],16),len(r['bytes'])//2,'schema-'+r['address']) for r in nodes]+[(0x100b0f140+i*40,40,'static-oid-'+str(i)) for i in range(958)]+[(a,1,'function-'+hex(a)) for a in set(ENTRIES.values())|set(CMS_DEPENDENCIES)]
    def schema_pointer(self,a):return a
    def boundary(self,target,args):
        if target in CMS_DEPENDENCIES:
            a=[self.get(i) for i in range(8)]
            if target==0x100600ed8:
                from recover_localization import STACK
                from unicorn import arm64_const as arm
                a[2]=self.get64(self.uc.reg_read(arm.UC_ARM64_REG_SP))
            return self.dependency(target,a)&((1<<64)-1)
        if target==0x10093122c:
            a=[self.get(i) for i in range(3)];require(a[2]<=256,'Unbounded OID comparison');x,y=[self.read_bytes(p,a[2]) for p in a[:2]];return ((x>y)-(x<y))&0xffffffff
        return PrimitiveMachine.boundary(self,target,args)
def validate(e,metadata,nodes,ipa=None):
    require(hashlib.sha256(canonical(nodes)).hexdigest()==SCHEMA_SHA256,'Changed original CMS schema graph')
    require([(r['role'],r['entry']) for r in e['records']]==[(k,hex(v)) for k,v in ENTRIES.items()],'Changed CMS original entry set')
    require(e['native_boundaries']=={hex(a):n for a,n in DEPENDENCIES.items()},'Changed CMS boundary map')
    extras=extra(nodes);require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extras.items())],'Changed CMS original data')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=extras)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());im=sparse_image(e,baseline)
    require(extract(im)==nodes,'Changed recursively referenced original schema closure')
    require(records(im,d)==e['records'],'Changed CMS original control flow')
    require((OUT/'ESignCMSSchemaData.c').read_text()==render(nodes),'Changed relocated original schema source')
def sources():return [OUT/'ESignCMSSchema.c',OUT/'ESignCMSSchemaData.c',*primitive_sources(),ROOT/'reconstruction/cms-content/ESignCMSContent.c',ROOT/'reconstruction/oid-lookup/ESignOIDLookup.c',ROOT/'reconstruction/oid-lookup/ESignOIDData.c',ROOT/'tests/cms_schema_test_adapter.c']
def compare(library,fixtures=None):
    fixtures=fixtures if fixtures is not None else json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        result=m.evaluate(f['input']);require(result==f['result'],'Native CMS fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':result}))
    return len(fixtures)
def run(generate=False,ipa=None):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']};prior=[]
    for name in ['asn1-primitives','asn1-object','asn1-value','asn1-item','asn1-input','bio-input','oid-lookup','cms-content']:
        e=json.loads(gzip.decompress((ROOT/'reconstruction'/name/'evidence.json.gz').read_bytes()))
        if name=='oid-lookup':validate_oid(e,metadata,database())
        else:
            module=__import__('recover_'+name.replace('-','_'));module.validate(e,metadata)
        prior+=e['records']
    nodes=schema()
    if generate:
        require(ipa is not None,'Generation requires the exact original IPA')
        raw=ipa.read_bytes();require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()=='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29','Wrong IPA')
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong original executable');image=MachO(data);require(extract(image)==nodes,'Wrong schema original input');flows=records(image,Dispatch(image))
        chunks=[(s['vmaddr'],image.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extra(nodes).items())],'bindings':{},'external_targets':{hex(a):n for a,n in (IMPORTS|{0x10093122c:'_memcmp'}).items()},'native_boundaries':{hex(a):n for a,n in DEPENDENCIES.items()}}
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed CMS source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records'];chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+prior for r in f['instructions']]
    validate(e,metadata,nodes,ipa);m=CMSMachine(chunks,flows+prior,metadata,nodes);fixtures=[]
    try:
        for i,c in enumerate(cases()):
            try:fixtures.append({'input':c,'result':m.evaluate(c)})
            except Exception as ex:raise ValueError('Original CMS fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        addresses={int(r['address'],16) for f in flows for r in f['instructions']};missing=sorted(addresses-m.visited);coverage={f['role']:{'instructions':len(f['instructions']),'exercised':sum(int(r['address'],16) in m.visited for r in f['instructions'])} for f in flows}
    finally:m.close()
    build=ROOT/'build/cms-schema';build.mkdir(parents=True,exist_ok=True);library=build/'cms-schema-host.so';subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',*[str(p) for p in sources()],'-o',str(library)],check=True)
    (build/'original-comparisons.json').write_bytes(canonical(fixtures));compare(library,fixtures)
    report={'result':'PASS','original_native_functions':len(ENTRIES),'original_schema_items':sum(n['kind']=='item' for n in nodes),'original_schema_nodes':len(nodes),'original_schema_field_templates':sum(len(n['bytes'])//80 for n in nodes if n['kind']=='templates')+sum(len(n['bytes'])//96 for n in nodes if n['kind']=='adb_table'),'fixtures':len(fixtures),'original_instructions':len(addresses),'original_instructions_exercised':len(addresses)-len(missing),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'per_function_coverage':coverage,'actual_CMS_schema_parser_composition_cases':sum(f['input']['op'] in ['entry','cms_bio'] for f in fixtures),'actual_memory_BIO_to_CMS_composition_cases':sum(f['input']['op']=='cms_bio' for f in fixtures),'original_OID_lookup_composed':True,'certificate_callbacks_and_name_codecs_are_unreconstructed':True,'crypto_streaming_allocation_reference_and_ERR_boundaries_are_controlled':True,'complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    if generate:
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(fixtures),mtime=0));index={**report,'executable_sha256':EXPECTED_EXECUTABLE,'schema_sha256':SCHEMA_SHA256,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name.startswith('ESign') or p.name in ['schema.json.gz','evidence.json.gz','fixtures.json.gz','OPENSSL-LICENSE.txt']}};(OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(fixtures==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())) and all(index.get(k)==v for k,v in report.items()),'Changed CMS behavior/coverage')
    print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.original_ipa)
