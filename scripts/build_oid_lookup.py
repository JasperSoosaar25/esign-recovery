#!/usr/bin/env python3
"""Build original OID source and compare its actual compiled behavior with fixtures."""
import argparse,gzip,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/oid-lookup'
sys.path.insert(0,str(ROOT/'tests'))
from oid_lookup_runtime import NativeScenario

def compare(library):
    db=json.loads(gzip.decompress((SOURCE/'database.json.gz').read_bytes()));m=NativeScenario(library,db)
    # Compare every field and encoded byte, not only the values reached by search.
    aliases={};count=0
    for i,obj in enumerate(db['objects']):
        p=m.objects_address+i*40
        for offset,field in [(16,'nid'),(20,'length'),(32,'flags')]:
            from oid_lookup_runtime import signed
            if signed(m.get32(p+offset))!=obj[field]:raise ValueError('Native static OID field mismatch')
        for offset,field in [(0,'short_address'),(8,'long_address'),(24,'data_address')]:
            actual=m.get64(p+offset);original=obj[field]
            if bool(actual)!=bool(original):raise ValueError('Native static OID null pointer mismatch')
            if original:
                if original in aliases and aliases[original]!=actual:raise ValueError('Original static OID pointer alias lost')
                aliases[original]=actual
        if m.string(m.get64(p))!=obj['short'] or m.string(m.get64(p+8))!=obj['long']:raise ValueError('Native static OID name mismatch')
        raw=m.read_bytes(m.get64(p+24),obj['length']) if obj['data_address'] else b''
        if raw.hex()!=obj['encoded']:raise ValueError('Native static OID DER mismatch')
        count+=1
    expected=json.loads(gzip.decompress((SOURCE/'fixtures.json.gz').read_bytes()))
    for i,f in enumerate(expected):
        observed=m.evaluate(f['input'])
        if observed!=f['result']:
            raise ValueError('Native OID fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':observed}))
    return {'source_behavior_fixture_comparisons':len(expected),'complete_static_object_records_compared':count,'original_static_pointer_aliases_compared':True}

def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True)
    sources=[SOURCE/'ESignOIDLookup.c',SOURCE/'ESignOIDData.c'];common=['-std=c11','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    host=output/'oid-lookup-host.dylib';command(['xcrun','--sdk','macosx','clang',*common,'-dynamiclib',*[str(p) for p in sources],str(ROOT/'tests/oid_lookup_test_adapter.c'),'-o',str(host)])
    compared=compare(host);objects=[]
    for source in sources:
        obj=output/(source.stem+'.o');command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)]);objects.append(obj)
    library=output/'libESignOIDLookup.a';command(['xcrun','libtool','-static','-o',str(library),*[str(p) for p in objects]])
    tracked=[*sources,SOURCE/'ESignOIDLookup.h',ROOT/'tests/oid_lookup_runtime.py',ROOT/'tests/oid_lookup_test_adapter.c']
    index=json.loads((SOURCE/'index.json').read_text())
    report={'result':'PASS','component':'ESign original OID lookup and LHASH retrieval','original_native_functions':5,'original_instructions':index['original_instructions'],'original_instructions_exercised':index['original_instructions_exercised'],'zero_length_no_match_branch_not_exercised':index['zero_length_no_match_branch_not_exercised'],**compared,'actual_original_static_OID_lookup_implemented':True,'registry_hash_comparator_and_ERR_are_controlled_test_boundaries':True,'original_hash_retrieval_body_is_compiled_and_tested':True,'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(tracked)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'host_runtime':platform.platform(),'target':'arm64-apple-ios15.0','complete_crypto_backend':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/oid-lookup');build(p.parse_args().output)
