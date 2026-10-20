#!/usr/bin/env python3
"""Build the recovered CMS content accessor and compare real returned field addresses."""
import argparse,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/cms-content'
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignCMSContent.c';common=['-std=c11','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    host=output/'ESignCMSContent-host.o';command(['xcrun','--sdk','macosx','clang',*common,'-c',str(source),'-o',str(host)])
    executable=output/'cms-content-runtime-tests';command(['xcrun','--sdk','macosx','clang','-fobjc-arc','-Wall','-Wextra','-Werror','-I',str(SOURCE),str(ROOT/'tests/cms_content_runtime.m'),str(host),'-framework','Foundation','-o',str(executable)])
    expected=json.loads((SOURCE/'fixtures.json').read_text());actual=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if expected!=actual:
        for i,(wanted,observed) in enumerate(zip(expected,actual)):
            if wanted!=observed:print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native CMS content accessor differs from original instructions')
    oid=ROOT/'reconstruction/oid-lookup';oidobjects=[]
    for name in ['ESignOIDLookup','ESignOIDData']:
        target=output/(name+'-host.o');command(['xcrun','--sdk','macosx','clang',*common,'-c',str(oid/(name+'.c')),'-o',str(target)]);oidobjects.append(target)
    combinedobj=output/'ESignCMSContent-with-OID.o';command(['xcrun','--sdk','macosx','clang',*common,'-DESignOriginal_1005b3138=ESignTestOBJ','-c',str(source),'-o',str(combinedobj)])
    combined=output/'cms-with-original-OID-tests';command(['xcrun','--sdk','macosx','clang','-fobjc-arc','-Wall','-Wextra','-Werror','-DESIGN_CMS_REAL_OID_LOOKUP','-I',str(SOURCE),str(ROOT/'tests/cms_content_runtime.m'),str(combinedobj),*[str(p) for p in oidobjects],'-framework','Foundation','-o',str(combined)])
    integrated=json.loads(command([str(combined),str(SOURCE/'fixtures.json')]).stdout)
    if integrated!=expected:raise ValueError('CMS accessor with actual original OID source differs from fixtures')
    obj=output/'ESignCMSContent.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios11.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignCMSContent.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    sources=[*SOURCE.glob('ESignCMSContent*'),*oid.glob('ESignOID*'),ROOT/'tests/cms_content_runtime.m']
    report={'result':'PASS','component':'ESign original CMS content-slot accessor','original_native_functions':1,'source_behavior_fixture_comparisons':len(expected),'original_instructions_exercised':71,'live_returned_field_identity_and_mutation_compared':True,'OBJ_lookup_and_ERR_are_controlled_test_boundaries':True,'additional_native_comparisons_using_actual_original_OID_source':len(integrated),'actual_original_OID_lookup_implementation_tested':True,'actual_CMS_decoding_or_signing_tested':False,'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(sources)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'host_runtime':platform.platform(),'target':'arm64-apple-ios11.0','complete_CMS_backend':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/cms-content');build(p.parse_args().output)
