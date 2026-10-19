#!/usr/bin/env python3
"""Compile original CodeDirectory source and compare Apple Foundation/file/crypto behavior."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'reconstruction/code-directory'
def command(args):
    result=subprocess.run(args,capture_output=True,text=True)
    if result.returncode:
        sys.stderr.write(result.stdout+result.stderr);result.check_returncode()
    return result
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS and Xcode; no Apple build is claimed on this host.')
    output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignCodeDirectory.m'
    # The original calls APIs now deprecated by Apple; preserve them explicitly.
    common=['-fobjc-arc','-fblocks','-Wall','-Wextra','-Werror','-Wno-deprecated-declarations','-I',str(SOURCE)]
    executable=output/'code-directory-runtime-tests'
    command(['xcrun','--sdk','macosx','clang',*common,'-DCC_SHA1=ESignTestSHA1','-DCC_SHA256=ESignTestSHA256',str(source),str(ROOT/'tests/code_directory_runtime.m'),'-framework','Foundation','-o',str(executable)])
    expected=json.loads((SOURCE/'fixtures.json').read_text())
    actual=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if actual!=expected:
        for i,(wanted,observed) in enumerate(zip(expected,actual)):
            if wanted!=observed:print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native CodeDirectory source differs from original instruction/model fixtures')
    obj=output/'ESignCodeDirectory.o'
    command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios11.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignCodeDirectory.a'
    command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    report={'result':'PASS','component':'ESign original CodeDirectory generation','translated_original_method_bodies':2,'original_native_digest_helpers':2,'original_native_block_invocations':2,'source_behavior_fixture_comparisons':len(expected),'exact_output_and_getter_file_crypto_effects_compared':True,'native_Apple_CommonCrypto_used':True,'digest_test_adapters_record_and_forward_to_real_Apple_functions':True,'native_file_handle_reads_and_seeks_used':True,'source_built_with_original_deprecated_digest_APIs':True,'BOOL_index_domain':[0,1],'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'source_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'host_runtime':platform.platform(),'target':'arm64-apple-ios11.0','full_YYYArchO_class_reconstructed':False,'complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/code-directory');build(p.parse_args().output)
