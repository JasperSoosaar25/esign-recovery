#!/usr/bin/env python3
"""Build the original alternate-CMS wrapper; compare explicit boundary behavior."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import sys
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'reconstruction/rsa-wrapper'
LEGACY=ROOT/'reconstruction/legacy-crypto'
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output.mkdir(parents=True,exist_ok=True)
    source=SOURCE/'ESignRSASignWrapper.c'
    common=['-std=c11','-Wall','-Wextra','-Werror','-I',str(SOURCE),'-I',str(LEGACY)]
    wrapper=output/'ESignRSASignWrapper-test.o';legacy=output/'ESignLegacyCrypto-host.o'
    adapters=['-D'+name+'=ESignTest'+name[0].upper()+name[1:] for name in ['fmemopen','fclose','malloc','printf','fprintf']]
    command(['xcrun','--sdk','macosx','clang',*common,*adapters,'-c',str(source),'-o',str(wrapper)])
    command(['xcrun','--sdk','macosx','clang',*common,'-c',str(LEGACY/'ESignLegacyCrypto.c'),'-o',str(legacy)])
    executable=output/'rsa-wrapper-runtime-tests'
    command(['xcrun','--sdk','macosx','clang','-fobjc-arc','-Wall','-Wextra','-Werror','-I',str(SOURCE),'-I',str(LEGACY),str(ROOT/'tests/rsa_wrapper_runtime.m'),str(wrapper),str(legacy),'-framework','Foundation','-o',str(executable)])
    fixtures=json.loads((SOURCE/'fixtures.json').read_text());expected=[r for r in fixtures if not r.get('unverified_source_input')]
    actual=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if actual!=expected:
        for i,(wanted,observed) in enumerate(zip(expected,actual)):
            if wanted!=observed:print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native RSA wrapper differs from original instruction/boundary fixtures')
    obj=output/'ESignRSASignWrapper.o'
    command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignRSASignWrapper.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    sources=[*SOURCE.glob('ESignRSASignWrapper*'),*LEGACY.glob('ESignLegacyCrypto*'),ROOT/'tests/rsa_wrapper_runtime.m',ROOT/'tests/legacy_crypto_runtime.m']
    report={'result':'PASS','component':'ESign original alternate-CMS RSA wrapper','new_original_native_functions':1,'reused_original_native_functions':8,'source_behavior_fixture_comparisons':len(expected),'original_fault_probes_excluded_from_native_comparison':len(fixtures)-len(expected),'allocation_diagnostics_reference_state_and_cleanup_order_compared':True,'crypto_stdio_and_allocator_callees_are_controlled_test_boundaries':True,'actual_RSA_PEM_parsing_or_signing_implementation_tested':False,'embedded_key_bytes_included':False,'complete_crypto_backend':False,'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(sources)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'host_runtime':platform.platform(),'target':'arm64-apple-ios15.0','iOS_library_contains_test_adapters_or_invented_key':False,'complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/rsa-wrapper');build(p.parse_args().output)
