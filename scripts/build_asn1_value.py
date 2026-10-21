#!/usr/bin/env python3
"""Build the original ASN.1 value source and compare native state on Apple tools."""
import argparse,gzip,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/asn1-value'
sys.path.insert(0,str(ROOT/'tests'))
from asn1_value_runtime import NativeScenario
def sources():return [SOURCE/'ESignASN1Value.c',ROOT/'reconstruction/asn1-item/ESignASN1Item.c',ROOT/'reconstruction/asn1-input/ESignASN1Input.c',ROOT/'reconstruction/bio-input/ESignBIOInput.c',ROOT/'tests/bio_input_test_adapter.c',ROOT/'tests/asn1_item_test_adapter.c',ROOT/'tests/asn1_value_test_adapter.c']
def compare(library):
    fixtures=json.loads(gzip.decompress((SOURCE/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(fixtures):
        result=m.evaluate(f['input'])
        if result!=f['result']:raise ValueError('Native ASN1 value fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':result}))
    return len(fixtures)
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True);common=['-std=c11','-Wall','-Wextra','-Werror']
    host=output/'asn1-value-host.dylib';command(['xcrun','--sdk','macosx','clang',*common,'-DESIGN_ASN1_VALUE_SOURCE','-dynamiclib',*[str(p) for p in sources()],'-o',str(host)])
    comparisons=compare(host);obj=output/'ESignASN1Value.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(SOURCE/'ESignASN1Value.c'),'-o',str(obj)])
    library=output/'libESignASN1Value.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    index=json.loads((SOURCE/'index.json').read_text());report={k:v for k,v in index.items() if k!='files'}
    files=sources()+[ROOT/'reconstruction/asn1-item/ESignASN1Item.h',SOURCE/'ESignASN1Value.h',ROOT/'reconstruction/asn1-input/ESignASN1Input.h',ROOT/'reconstruction/bio-input/ESignBIOInput.h',ROOT/'tests/asn1_value_runtime.py',ROOT/'tests/bio_input_runtime.py']
    report.update(result='PASS',component='ESign original ASN.1 values and non-explicit templates',source_commit=command(['git','rev-parse','HEAD']).stdout.strip(),source_behavior_fixture_comparisons=comparisons,test_adapters_excluded_from_iOS_archive=True,source_files_sha256={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(files)},library_sha256=hashlib.sha256(library.read_bytes()).hexdigest(),toolchain=command(['xcrun','clang','--version']).stdout.strip(),xcode=command(['xcodebuild','-version']).stdout.strip(),iphoneos_sdk=command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),host_runtime=platform.platform(),target='arm64-apple-ios15.0')
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/asn1-value');build(p.parse_args().output)
