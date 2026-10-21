#!/usr/bin/env python3
"""Compile recovered requirement code and compare it with original ARM64 fixtures."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'reconstruction/requirements-slot'
def command(args):
    result=subprocess.run(args,capture_output=True,text=True)
    if result.returncode:
        sys.stderr.write(result.stdout+result.stderr);result.check_returncode()
    return result
def build(output):
    if platform.system()!='Darwin': raise SystemExit('Requires macOS and Xcode; no Apple build is claimed on this host.')
    output.mkdir(parents=True,exist_ok=True)
    source=SOURCE/'ESignRequirementsSlot.m'
    containers=ROOT/'reconstruction/signature-blobs/ESignSignatureBlobs.m'
    common=['-fobjc-arc','-fblocks','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    executable=output/'requirements-slot-runtime-tests'
    command(['xcrun','--sdk','macosx','clang',*common,str(source),str(containers),str(ROOT/'tests/requirements_slot_runtime.m'),'-framework','Foundation','-o',str(executable)])
    expected=json.loads((SOURCE/'fixtures.json').read_text())
    actual=json.loads(command([str(executable),str(SOURCE/'fixtures.json')]).stdout)
    if actual!=expected:
        for i,(wanted,observed) in enumerate(zip(expected,actual)):
            if wanted!=observed: print(json.dumps({'case':i,'expected':wanted,'observed':observed},indent=2),file=sys.stderr);break
        raise ValueError('Native requirement source differs from original instruction/model fixtures')
    obj=output/'ESignRequirementsSlot.o'
    command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignRequirementsSlot.a'
    command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    report={'result':'PASS','component':'ESign original requirements slot','translated_original_method_bodies':1,'original_native_block_invocations':3,'source_behavior_fixture_comparisons':len(expected),'original_nil_fallback_truncation_preserved':True,'original_signature_container_dependency_compared_natively':True,'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'source_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'host_runtime':platform.platform(),'target':'arm64-apple-ios15.0','full_YYYArchO_class_reconstructed':False,'complete_signing_pipeline':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/requirements-slot');build(p.parse_args().output)
