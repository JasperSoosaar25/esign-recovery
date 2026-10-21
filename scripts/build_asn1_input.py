#!/usr/bin/env python3
"""Compile original ASN.1 source, compare native behavior, build arm64 iOS archive."""
import argparse,gzip,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/asn1-input'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_input_runtime import NativeScenario
def compare(library):
    fixtures=json.loads(gzip.decompress((SOURCE/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        actual=m.evaluate(f['input'])
        if actual!=f['result']:raise ValueError('Native ASN1 fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':actual}))
    return len(fixtures)
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignASN1Input.c';common=['-std=c11','-Wall','-Wextra','-Werror']
    sources=[source,ROOT/'reconstruction/bio-input/ESignBIOInput.c',ROOT/'tests/bio_input_test_adapter.c',ROOT/'tests/asn1_input_test_adapter.c']
    host=output/'asn1-input-host.dylib';command(['xcrun','--sdk','macosx','clang',*common,'-dynamiclib',*[str(p) for p in sources],'-o',str(host)])
    comparisons=compare(host);obj=output/'ESignASN1Input.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignASN1Input.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    files=sources+[SOURCE/'ESignASN1Input.h',ROOT/'tests/asn1_input_runtime.py',ROOT/'tests/bio_input_runtime.py'];index=json.loads((SOURCE/'index.json').read_text())
    report={k:v for k,v in index.items() if k!='files'}
    report.update(result='PASS',component='ESign original ASN.1 input',source_commit=command(['git','rev-parse','HEAD']).stdout.strip(),source_behavior_fixture_comparisons=comparisons,test_adapters_excluded_from_iOS_archive=True,source_files_sha256={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(files)},library_sha256=hashlib.sha256(library.read_bytes()).hexdigest(),toolchain=command(['xcrun','clang','--version']).stdout.strip(),xcode=command(['xcodebuild','-version']).stdout.strip(),iphoneos_sdk=command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),host_runtime=platform.platform(),target='arm64-apple-ios15.0')
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/asn1-input');build(p.parse_args().output)
