#!/usr/bin/env python3
"""Verify original ASN.1 constructors, destruction, strings and integer conversion and compiled-source behavior."""
import argparse,gzip,hashlib,json,subprocess,sys,zipfile
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_bio_input import IMPORTS,validate as validate_bio
from recover_asn1_input import validate as validate_input
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/asn1-object'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_object_runtime import Scenario,NativeScenario,ENTRIES,CALLBACKS,DEPENDENCIES as OBJECT_DEPENDENCIES,cases
from recover_asn1_value import ValueMachine,EXTRA as VALUE_EXTRA,DEPENDENCIES as PRIOR_DEPENDENCIES,validate as validate_value
TABLES={0x100999838:bytes.fromhex('0e001c353c1700'),0x10099983f:bytes.fromhex('131313000513'),0x100999845:bytes.fromhex('1c00000000260000002c31'),0x100999850:bytes.fromhex('4a006fa4b06500'),0x100999857:bytes.fromhex('1400000000250000002d2b')}
ANY=bytes.fromhex('0000000000000000fcffffffffffffff00000000000000000000000000000000000000000000000000000000000000002ecaa50001000000')
EXTRA={**VALUE_EXTRA,**TABLES,0x100a5c964:b'tasn_new.c\0',0x100a5cd61:b'asn1_lib.c\0',0x100b1f0e8:ANY,0x100a5ca2e:b'ASN1_ANY\0'}
DEPENDENCIES={k:v for k,v in PRIOR_DEPENDENCIES.items() if k not in ENTRIES.values()}|OBJECT_DEPENDENCIES
def canonical(v):return json.dumps(v,separators=(',',':')).encode()
def records(image,dispatch):
    starts,branches=boundaries_and_branches();starts=starts-{0x100618634};result=[]
    loads={a:sorted(set(TABLES[b])) for a,b in [(0x100617b90,0x100999838),(0x100617ef0,0x10099983f),(0x100617ffc,0x100999845),(0x100618100,0x100999850),(0x1006185cc,0x100999857)]}
    adds={a:2 for a in [0x100617b94,0x100617ef4,0x100618000,0x100618104,0x1006185d0]}
    stops={'new':0x100617b44,'free':0x10061809c,'template_free':0x10061809c,'free_core':0x100618544,'string_free':0x1005b1658,'reference':0x1005b1044,'any_new':0x100617b08,'any_free':0x100618078}
    unknown={'free_core':2,'clear':3,'primitive_new':1,'primitive_free':1}
    for role,address in ENTRIES.items():
        r=walk(image.data,address,starts,branches,image=image,dispatch=dispatch,load_result_values=loads,shifted_add_addresses=adds)
        expected=[{'address':hex(stops[role]),'reason':'other-declared-entry'}] if role in stops else []
        require(r['boundary_stops']==expected and r['unresolved_indirect_jumps']==unknown.get(role,0),'Incomplete ASN1 object flow '+role+': '+str(r['boundary_stops']))
        result.append(dict(r,role=role))
    return result
class ObjectMachine(Scenario,ValueMachine):
    def __init__(self,chunks,flows,metadata):
        ValueMachine.__init__(self,chunks,flows,metadata);self.callbacks=CALLBACKS;self.any_item=0x100b1f0e8
    def boundary(self,target,args):
        if target in OBJECT_DEPENDENCIES:return self.dependency(target,[self.get(i) for i in range(8)])&((1<<64)-1)
        return ValueMachine.boundary(self,target,args)
def validate(e,metadata,ipa=None):
    require(e['native_boundaries']=={hex(a):n for a,n in DEPENDENCIES.items()},'Changed ASN1 object boundaries')
    require(e['memory']==[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'Changed original ASN1 object data')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(e,baseline),d)==e['records'],'Changed original ASN1 object flow')
def sources():return [OUT/'ESignASN1Object.c',ROOT/'reconstruction/asn1-value/ESignASN1Value.c',ROOT/'reconstruction/asn1-item/ESignASN1Item.c',ROOT/'reconstruction/asn1-input/ESignASN1Input.c',ROOT/'reconstruction/bio-input/ESignBIOInput.c',ROOT/'tests/bio_input_test_adapter.c',ROOT/'tests/asn1_item_test_adapter.c',ROOT/'tests/asn1_value_test_adapter.c',ROOT/'tests/asn1_object_test_adapter.c']
def native_compare(library,fixtures):
    m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        observed=m.evaluate(f['input'])
        require(observed==f['result'],'Native ASN1 object fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':observed}))
    return len(fixtures)
def run(generate=False,ipa=None):
    baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());metadata={c['name']:c for c in baseline['classes']}
    bio=json.loads(gzip.decompress((ROOT/'reconstruction/bio-input/evidence.json.gz').read_bytes()));validate_bio(bio,metadata)
    inp=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-input/evidence.json.gz').read_bytes()));validate_input(inp,metadata)
    from recover_asn1_item import validate as validate_item
    value=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-value/evidence.json.gz').read_bytes()));validate_value(value,metadata)
    item=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-item/evidence.json.gz').read_bytes()));validate_item(item,metadata)
    if generate:
        require(ipa is not None,'Generation requires the exact original IPA path')
        raw=ipa.read_bytes();require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()=='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29','Wrong original IPA')
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong original executable');image=MachO(data);flows=records(image,Dispatch(image))
        for address,raw in EXTRA.items():require(image.data[image.fileoff(address):image.fileoff(address)+len(raw)]==raw,'Wrong original ASN1 object constant '+hex(address))
        chunks=[(s['vmaddr'],image.data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        e={'records':flows,'classes':{},'memory':[{'address':hex(a),'bytes':b.hex()} for a,b in sorted(EXTRA.items())],'bindings':{},'external_targets':{hex(a):v for a,v in IMPORTS.items()},'native_boundaries':{hex(a):v for a,v in DEPENDENCIES.items()}}
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed ASN1 object source/evidence '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));flows=e['records']
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows+value['records']+item['records']+inp['records']+bio['records'] for r in f['instructions']]
    validate(e,metadata,ipa);m=ObjectMachine(chunks,flows+value['records']+item['records']+inp['records']+bio['records'],metadata);fixtures=[]
    try:
        for i,c in enumerate(cases()):
            try:fixtures.append({'input':c,'result':m.evaluate(c)})
            except Exception as ex:raise ValueError('Original ASN1 object fixture '+str(i)+' '+str(c)+': '+str(ex)) from ex
        addresses={int(r['address'],16) for f in flows for r in f['instructions']};missing=sorted(addresses-m.visited)
        coverage={f['role']:{'instructions':len(f['instructions']),'exercised':sum(int(r['address'],16) in m.visited for r in f['instructions'])} for f in flows}
    finally:m.close()
    build=ROOT/'build/asn1-object';build.mkdir(parents=True,exist_ok=True);library=build/'asn1-object-host.so'
    subprocess.run(['cc','-DESIGN_ASN1_VALUE_SOURCE','-DESIGN_ASN1_OBJECT_SOURCE','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-shared',*[str(p) for p in sources()],'-o',str(library)],check=True)
    if generate:(build/'original-comparisons.json').write_bytes(canonical(fixtures))
    native_compare(library,fixtures)
    report={'result':'PASS','original_native_functions':20,'fixtures':len(fixtures),'original_instructions':len(addresses),'original_instructions_exercised':len(addresses)-len(missing),'unexercised_original_instruction_addresses':[hex(a) for a in missing],'per_function_coverage':coverage,'actual_parser_composition_cases':sum(f['input']['op'] in ['core','entry','biodecode'] for f in fixtures),'actual_memory_BIO_to_value_composition_cases':sum(f['input']['op']=='biodecode' for f in fixtures),'complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False,'object_bit_integer_content_decoders_stacks_allocators_and_ERR_are_controlled':True}
    if generate:
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(canonical(e),mtime=0));(OUT/'fixtures.json.gz').write_bytes(gzip.compress(canonical(fixtures),mtime=0))
        index={**report,'executable_sha256':EXPECTED_EXECUTABLE,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir()) if p.name in ['ESignASN1Object.c','ESignASN1Object.h','OPENSSL-LICENSE.txt','evidence.json.gz','fixtures.json.gz']}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:
        require(fixtures==json.loads(gzip.decompress((OUT/'fixtures.json.gz').read_bytes())),'Changed original ASN1 object behavior')
        require(all(index.get(k)==v for k,v in report.items()),'Changed ASN1 object coverage or scope report')
    print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--generate',action='store_true');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.generate or a.verify,'Supply --generate or --verify');run(a.generate,a.original_ipa)
