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
    obj=output/'ESignMobileprovision.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios11.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignMobileprovision.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    sources=[*SOURCE.glob('ESignMobileprovision*'),ROOT/'tests/mobileprovision_runtime.m']
    report={'result':'PASS','component':'ESign original provisioning-profile class','original_classes':1,'original_methods':38,'foundation_fixture_comparisons':len(expected),'original_class_layout_and_method_ABIs_verified':True,'CMS_BIO_decoder_and_certificate_parser_are_controlled_test_boundaries':True,'actual_CMS_decoding_or_certificate_parsing_tested':False,'property_population_serial_matching_copy_strong_and_failure_state_compared':True,'test_standin_YYYP12_not_in_iOS_library':True,'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(sources)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'host_runtime':platform.platform(),'target':'arm64-apple-ios11.0','complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/mobileprovision');build(p.parse_args().output)
