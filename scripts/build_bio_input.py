#!/usr/bin/env python3
"""Build original BIO source for arm64 iOS and compare native memory/state effects."""
import argparse,ctypes,gzip,hashlib,json,platform,sys
from pathlib import Path
from build_legacy_crypto import command
ROOT=Path(__file__).resolve().parents[1];SOURCE=ROOT/'reconstruction/bio-input'
sys.path.insert(0,str(ROOT/'tests'))
from bio_input_runtime import NativeScenario
def compare(library):
    expected=json.loads(gzip.decompress((SOURCE/'fixtures.json.gz').read_bytes()));m=NativeScenario(library)
    for i,f in enumerate(expected):
        actual=m.evaluate(f['input'])
        if actual!=f['result']:raise ValueError('Native BIO fixture '+str(i)+' differs: '+json.dumps({'input':f['input'],'expected':f['result'],'actual':actual}))
    method=m.memory_method
    if m.get32(method)!=1025 or m.string(m.get64(method+8))!='memory buffer' or m.get64(method+72)!=0:raise ValueError('Original memory BIO descriptor differs')
    for offset,address in [(16,0x1005ffb0c),(24,0x1005ffbc8),(32,0x1005ffc7c),(40,0x1005ffcac),(48,0x1005ffd40),(56,0x1005ffea0),(64,0x1005ffed8)]:
        if m.get64(method+offset)!=ctypes.cast(getattr(m.lib,'ESignOriginal_'+format(address,'x')),ctypes.c_void_p).value:raise ValueError('Original method callback relocation differs')
    return len(expected)
def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; no Apple build is claimed here.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True);source=SOURCE/'ESignBIOInput.c';common=['-std=c11','-Wall','-Wextra','-Werror']
    host=output/'bio-input-host.dylib';command(['xcrun','--sdk','macosx','clang',*common,'-dynamiclib',str(source),str(ROOT/'tests/bio_input_test_adapter.c'),'-o',str(host)])
    comparisons=compare(host);obj=output/'ESignBIOInput.o';command(['xcrun','--sdk','iphoneos','clang','-target','arm64-apple-ios15.0',*common,'-c',str(source),'-o',str(obj)])
    library=output/'libESignBIOInput.a';command(['xcrun','libtool','-static','-o',str(library),str(obj)])
    files=[source,SOURCE/'ESignBIOInput.h',ROOT/'tests/bio_input_runtime.py',ROOT/'tests/bio_input_test_adapter.c'];index=json.loads((SOURCE/'index.json').read_text())
    report={'result':'PASS','component':'ESign original BIO input and memory buffers','original_native_functions':18,'source_behavior_fixture_comparisons':comparisons,'original_instructions':index['original_instructions'],'original_instructions_exercised':index['original_instructions_exercised'],'unexercised_original_instruction_addresses':index['unexercised_original_instruction_addresses'],'original_memory_method_type_name_and_callback_relocations_verified':True,'create_write_read_reset_free_sequence_compared':True,'allocators_ex_data_refcount_ERR_and_cleanse_are_controlled_test_boundaries':True,'test_adapters_excluded_from_iOS_archive':True,'source_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(files)},'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'host_runtime':platform.platform(),'target':'arm64-apple-ios15.0','complete_CMS_decoder':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/bio-input');build(p.parse_args().output)
