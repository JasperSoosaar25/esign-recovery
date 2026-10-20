#!/usr/bin/env python3
"""Compile the original profile class; compare Foundation behavior and exact ABI."""
import argparse,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/mobileprovision'
def canonical(classes):
    result=[]
    for c in classes:
        c=dict(c);c['ivars']=sorted(c['ivars'],key=lambda v:v['name']);c['methods']=sorted(c['methods'],key=lambda v:(v['kind'],v['selector']));result.append(c)
    return sorted(result,key=lambda c:c['name'])
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignMobileprovision.m'
    common=['-fobjc-arc','-fblocks','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    executable=output/'mobileprovision-runtime-tests'
    command(['xcrun','--sdk','macosx','clang',*common,str(source),str(ROOT/'tests/mobileprovision_runtime.m'),'-framework','Foundation','-o',str(executable)])
    expected=json.loads((SOURCE/'fixtures.json').read_text());runtime=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if runtime['fixtures']!=expected:
        for i,(wanted,observed) in enumerate(zip(expected,runtime['fixtures'])):
            if wanted!=observed:print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native profile source differs from original instruction/model fixtures')
    if canonical(runtime['metadata'])!=canonical(json.loads((SOURCE/'metadata.json').read_text())):
        print(json.dumps(runtime['metadata'],indent=2),file=sys.stderr);raise ValueError('Profile layout/method ABI differs from original metadata')
    cms=ROOT/'reconstruction/cms-content/ESignCMSContent.c';cmsobj=output/'ESignCMSContent-host.o';profileobj=output/'ESignMobileprovision-integration.o'
    command(['xcrun','--sdk','macosx','clang','-std=c11','-Wall','-Wextra','-Werror','-c',str(cms),'-o',str(cmsobj)])
    command(['xcrun','--sdk','macosx','clang',*common,'-DESignOriginal_10062edd8=ESignTestCMSContent','-c',str(source),'-o',str(profileobj)])
    integration=output/'profile-with-original-CMS-content-tests'
    command(['xcrun','--sdk','macosx','clang',*common,'-DESIGN_PROFILE_REAL_CMS_CONTENT',str(ROOT/'tests/mobileprovision_runtime.m'),str(profileobj),str(cmsobj),'-framework','Foundation','-o',str(integration)])
    integrated=json.loads(command([str(integration),str(SOURCE/'fixtures.json')]).stdout)['fixtures']
    expected_integrated=[f for f in expected if not f['input'].get('content_failure')]
    if integrated!=expected_integrated:
        for i,(wanted,observed) in enumerate(zip(expected_integrated,integrated)):
            if wanted!=observed:print(json.dumps({'integration_case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Profile/original CMS content-source integration differs from original fixtures')
    oid=ROOT/'reconstruction/oid-lookup';oidobjects=[]
    for name in ['ESignOIDLookup','ESignOIDData']:
        target=output/(name+'-host.o');command(['xcrun','--sdk','macosx','clang','-std=c11','-Wall','-Wextra','-Werror','-c',str(oid/(name+'.c')),'-o',str(target)]);oidobjects.append(target)
    oidintegration=output/'profile-with-original-CMS-and-OID-tests'
    command(['xcrun','--sdk','macosx','clang',*common,'-DESIGN_PROFILE_REAL_CMS_CONTENT','-DESIGN_PROFILE_REAL_OID_LOOKUP',str(ROOT/'tests/mobileprovision_runtime.m'),str(profileobj),str(cmsobj),*[str(p) for p in oidobjects],'-framework','Foundation','-o',str(oidintegration)])
    oidintegrated=json.loads(command([str(oidintegration),str(SOURCE/'fixtures.json')]).stdout)['fixtures']
    if oidintegrated!=expected_integrated:raise ValueError('Profile with actual original CMS and OID source differs from fixtures')
    obj=output/'ESignMobileprovision.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios11.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignMobileprovision.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    sources=[*SOURCE.glob('ESignMobileprovision*'),*cms.parent.glob('ESignCMSContent*'),*oid.glob('ESignOID*'),ROOT/'tests/mobileprovision_runtime.m']
    report={'result':'PASS','component':'ESign original provisioning-profile class','original_classes':1,'original_methods':38,'foundation_fixture_comparisons':len(expected),'additional_native_comparisons_using_recovered_CMS_content_accessor':len(expected_integrated),'original_class_layout_and_method_ABIs_verified':True,'base_harness_BIO_CMS_and_certificate_parsers_are_controlled_test_boundaries':True,'integration_harness_uses_original_CMS_content_source_with_controlled_OID_lookup':True,'additional_native_comparisons_using_actual_original_CMS_and_OID_source':len(oidintegrated),'second_integration_uses_real_original_OID_bytes_and_lookup':True,'actual_CMS_decoding_or_certificate_parsing_tested':False,'property_population_serial_matching_copy_strong_and_failure_state_compared':True,'test_standin_YYYP12_not_in_iOS_library':True,'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(sources)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'host_runtime':platform.platform(),'target':'arm64-apple-ios11.0','complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/mobileprovision');build(p.parse_args().output)
