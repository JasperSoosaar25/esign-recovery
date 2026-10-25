#!/usr/bin/env python3
"""Recover original X509/name/CRL state and supporting stack/buffer bodies."""
import argparse,gzip,hashlib,json,subprocess,sys,zipfile
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_cms_schema import CMSMachine,extra as cms_extra,DEPENDENCIES as PRIOR_DEPENDENCIES,FLAGS as CMS_FLAGS,sources as cms_sources,validate as validate_cms
from x509_schema_data import extract,render,schema,base_schema,SCHEMA_SHA256
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/x509-state'
sys.path.insert(0,str(ROOT/'tests'))
from x509_state_runtime import Scenario,NativeScenario,ENTRIES,DEPENDENCIES as X509_DEPENDENCIES,CALLBACKS,cases
FLAGS=[*CMS_FLAGS,'-DESIGN_X509_SOURCE']
DEPENDENCIES={a:n for a,n in PRIOR_DEPENDENCIES.items() if a not in ENTRIES.values()}|X509_DEPENDENCIES|{a:n for n,a in CALLBACKS.items()}
METHOD=bytes.fromhex('000000000000000000000000000000000000000000000000346d610001000000746f610001000000')
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def extra(nodes):return {**cms_extra(base_schema()),**{int(r['address'],16):bytes.fromhex(r['bytes']) for r in nodes},0x100a5c7d1:b'x_name.c\0',0x100e02228:bytes.fromhex('3022e00001000000'),0x100e02230:METHOD}
def records(image,dispatch):
    starts,branches=boundaries_and_branches();result=[];stops={'certificate_free':0x100618078,'entry_free':0x100618078,'inner_stack_free':0x100602124,'inner_stack_pop_free':0x10060258c,'revoked_compare':0x10061d308,'stack_pop_free':0x1005b1658,'integer_free':0x100618078,'enumerated_free':0x100618078,'octet_free':0x100618078}
    for role,a in ENTRIES.items():
        r=walk(image.data,a,starts,branches,image=image,dispatch=dispatch);expected=[{'address':hex(stops[role]),'reason':'other-declared-entry'}] if role in stops else []
        require(r['boundary_stops']==expected and not r['unresolved_indirect_jumps'],'Incomplete original X509 flow '+role);result.append(dict(r,role=role))
    return result
class X509Machine(Scenario,CMSMachine):
    def __init__(self,chunks,flows,metadata,nodes):
        CMSMachine.__init__(self,chunks,flows,metadata,base_schema()+nodes);self.callbacks_x509=CALLBACKS;self.default_method=0x100e02230
        self.static_regions += [(0x100e02230,40,'default-crl-method')]+[(a,1,'function-'+hex(a)) for a in set(ENTRIES.values())|set(X509_DEPENDENCIES)|set(CALLBACKS.values())]
    def oid_pointer(self,nid):return 0x100b0f140+nid*40
    def get_default_method(self):return self.get64(0x100e02228)
    def set_default_method(self,p):self.put64(0x100e02228,p)
    def boundary(self,target,args):
        if target in X509_DEPENDENCIES or target in CALLBACKS.values():return self.dependency(target,[self.get(i) for i in range(8)])&((1<<64)-1)
        return CMSMachine.boundary(self,target,args)
def validate(e,metadata,nodes,ipa=None):
    require(hashlib.sha256(canonical(nodes)).hexdigest()==SCHEMA_SHA256,'Changed additional X509 schema')
    require([(r['role'],r['entry']) for r in e['records']]==[(k,hex(v)) for k,v in ENTRIES.items()],'Changed X509 entry set')
    require(e['native_boundaries']=={hex(a):n for a,n in DEPENDENCIES.items()},'Changed X509 boundary map')
    extras=extra(nodes);require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extras.items())],'Changed X509 data')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=extras)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());im=sparse_image(e,baseline)
    require(extract(im)==nodes,'Changed name/ENUMERATED graph closure');require(records(im,d)==e['records'],'Changed X509 flow proof');require((OUT/'ESignX509SchemaData.c').read_text()==render(nodes),'Changed relocated X509 source')
def sources():return [OUT/'ESignX509State.c',OUT/'ESignX509SchemaData.c',*cms_sources(),ROOT/'tests/x509_state_test_adapter.c']
def compare(library,fixtures=None):
    fixtures=fixtures if fixtures is not None else json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        result=m.evaluate(f['input']);require(result==f['result'],'Native X509 fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':result}))
    return len(fixtures)
def run(generate=False,ipa=None):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']};prior=[]
    for name in ['cms-schema','cms-content','oid-lookup','asn1-primitives','asn1-object','asn1-value','asn1-item','asn1-input','bio-input']:
        e=json.loads(gzip.decompress((ROOT/'reconstruction'/name/'evidence.json.gz').read_bytes()))
        if name=='cms-schema':validate_cms(e,metadata,base_schema())
        elif name=='oid-lookup':
            from recover_oid_lookup import validate as v,database
            v(e,metadata,database())
        else:__import__('recover_'+name.replace('-','_')).validate(e,metadata)
        prior+=e['records']
    nodes=schema()
    if generate:
        require(ipa is not None,'Generation requires exact original IPA');raw=ipa.read_bytes();require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()=='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29','Wrong IPA')
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable');im=MachO(data);require(extract(im)==nodes,'Wrong X509 graph input');flows=records(im,Dispatch(im));chunks=[(s['vmaddr'],im.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in im.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(extra(nodes).items())],'bindings':{},'external_targets':{},'native_boundaries':{hex(a):n for a,n in DEPENDENCIES.items()}}
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed X509 source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records'];chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+prior for r in f['instructions']]
    validate(e,metadata,nodes,ipa);m=X509Machine(chunks,flows+prior,metadata,nodes);fixtures=[]
    try:
        for i,c in enumerate(cases()):
            try:fixtures.append({'input':c,'result':m.evaluate(c)})
            except Exception as ex:raise ValueError('Original X509 fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        addresses={int(r['address'],16) for f in flows for r in f['instructions']};missing=sorted(addresses-m.visited);coverage={f['role']:{'instructions':len(f['instructions']),'exercised':sum(int(r['address'],16) in m.visited for r in f['instructions'])} for f in flows}
    finally:m.close()
    build=ROOT/'build/x509-state';build.mkdir(parents=True,exist_ok=True);library=build/'x509-state-host.so';(build/'original-comparisons.json').write_bytes(canonical(fixtures));subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',*[str(p) for p in sources()],'-o',str(library)],check=True);compare(library,fixtures)
    report={'result':'PASS','original_native_functions':len(ENTRIES),'additional_original_schema_items':5,'additional_original_schema_nodes':len(nodes),'fixtures':len(fixtures),'original_instructions':len(addresses),'original_instructions_exercised':len(addresses)-len(missing),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'per_function_coverage':coverage,'actual_certificate_name_parser_compositions':sum(f['input']['op'] in ['name_decode','entry','cms_bio'] for f in fixtures),'all_nine_CMS_referenced_X509_callback_bodies_supplied':True,'canonicalization_encoder_name_formatting_extension_crypto_and_runtime_dependencies_are_controlled':True,'complete_certificate_or_CMS_backend':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    if generate:
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(fixtures),mtime=0));index={**report,'executable_sha256':EXPECTED_EXECUTABLE,'schema_sha256':SCHEMA_SHA256,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name.startswith('ESign') or p.name in ['schema.json.gz','evidence.json.gz','fixtures.json.gz','OPENSSL-LICENSE.txt']}};(OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(fixtures==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())) and all(index.get(k)==v for k,v in report.items()),'Changed X509 behavior/coverage')
    print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.original_ipa)
