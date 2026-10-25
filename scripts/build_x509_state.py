#!/usr/bin/env python3
"""Build original X509/name/CRL state source on Apple tools and compare saved state."""
import argparse,gzip,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
from recover_x509_state import sources,FLAGS,compare
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/x509-state'
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True);common=['-std=c11','-Wall','-Wextra','-Werror'];host=output/'x509-state-host.dylib'
    command(['xcrun','--sdk','macosx','clang',*common,*FLAGS,'-dynamiclib',*[str(p) for p in sources()],'-o',str(host)]);comparisons=compare(host);objects=[]
    for name in ['ESignX509State','ESignX509SchemaData']:
        obj=output/(name+'.o');command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(SOURCE/(name+'.c')),'-o',str(obj)]);objects.append(obj)
    library=output/'libESignX509State.a';command(['xcrun','libtool','-static','-o',str(library),*[str(p) for p in objects]])
    index=json.loads((SOURCE/'index.json').read_text());report={k:v for k,v in index.items() if k!='files'}
    files=set(sources())|set(SOURCE.glob('ESign*.h'))|{ROOT/'tests/x509_state_runtime.py',ROOT/'tests/cms_schema_runtime.py',ROOT/'scripts/x509_schema_data.py',ROOT/'scripts/cms_schema_data.py',ROOT/'scripts/recover_x509_state.py'}
    for directory in ['cms-schema','asn1-primitives','asn1-object','asn1-value','asn1-item','asn1-input','bio-input','oid-lookup','cms-content']:files.update((ROOT/'reconstruction'/directory).glob('ESign*.h'))
    for directory in ['asn1_primitives','asn1_object','asn1_value','asn1_item','bio_input']:files.add(ROOT/'tests'/(directory+'_runtime.py'))
    report.update(result='PASS',component='ESign original X509 name, certificate and CRL state',source_commit=command(['git','rev-parse','HEAD']).stdout.strip(),source_behavior_fixture_comparisons=comparisons,test_adapters_excluded_from_iOS_archive=True,source_files_sha256={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(files)},library_sha256=hashlib.sha256(library.read_bytes()).hexdigest(),toolchain=command(['xcrun','clang','--version']).stdout.strip(),xcode=command(['xcodebuild','-version']).stdout.strip(),iphoneos_sdk=command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),host_runtime=platform.platform(),target='arm64-apple-ios15.0')
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/x509-state');build(p.parse_args().output)
