#!/usr/bin/env python3
"""Compile recovered native crypto helpers; compare controlled boundary behavior."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'reconstruction/legacy-crypto'
def command(args):
    r=subprocess.run(args,capture_output=True,text=True)
    if r.returncode:sys.stderr.write(r.stdout+r.stderr);r.check_returncode()
    return r
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignLegacyCrypto.c'
    common=['-std=c11','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    host=output/'ESignLegacyCrypto-host.o'
    command(['xcrun','--sdk','macosx','clang',*common,'-c',str(source),'-o',str(host)])
    executable=output/'legacy-crypto-runtime-tests'
    command(['xcrun','--sdk','macosx','clang','-fobjc-arc','-Wall','-Wextra','-Werror','-I',str(SOURCE),str(ROOT/'tests/legacy_crypto_runtime.m'),str(host),'-framework','Foundation','-o',str(executable)])
    expected=json.loads((SOURCE/'fixtures.json').read_text());actual=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if actual!=expected:
        for i,(wanted,observed) in enumerate(zip(expected,actual)):
            if wanted!=observed:print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native legacy helper source differs from original instruction/boundary fixtures')
    obj=output/'ESignLegacyCrypto.o'
    command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignLegacyCrypto.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    report={'result':'PASS','component':'ESign selected original legacy-crypto helpers','original_native_functions':8,'source_behavior_fixture_comparisons':len(expected),'BN_limb_bits':32,'LP64_field_offsets_checked_at_compile_time':True,'native_callbacks_reference_state_and_cleanup_order_compared':True,'unreconstructed_native_callees_are_controlled_test_boundaries':True,'actual_RSA_PEM_parsing_or_signing_implementation_tested':False,'complete_crypto_backend':False,'exact_bundled_OpenSSL_release_identified':False,'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'source_files_sha256':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(SOURCE.glob('ESignLegacyCrypto*'))},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'host_runtime':platform.platform(),'target':'arm64-apple-ios15.0','complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/legacy-crypto');build(p.parse_args().output)
