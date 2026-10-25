#!/usr/bin/env python3
"""Build all recovered library targets through the shared Xcode project."""
import argparse,hashlib,json,platform,shutil
from pathlib import Path
from build_legacy_crypto import command
from generate_component_project import run,MANIFEST,PROJECT,ROOT

def build(output):
    if platform.system()!='Darwin':raise SystemExit('Requires macOS with Xcode; this host cannot verify the project build.')
    output=output.resolve();output.mkdir(parents=True,exist_ok=True);run(verify=True)
    command(['plutil','-lint',str(PROJECT/'project.pbxproj')])
    listing=json.loads(command(['xcodebuild','-project',str(PROJECT),'-list','-json']).stdout)['project']
    manifest=json.loads(MANIFEST.read_text());expected=sorted(c['name'] for c in manifest['components'])
    if sorted(listing['targets'])!=expected or 'RecoveredComponents' not in listing['schemes']:raise ValueError('Unexpected Xcode targets or shared scheme')
    derived=output/'DerivedData'
    result=command(['xcodebuild','-project',str(PROJECT),'-scheme','RecoveredComponents','-configuration','Release','-sdk','iphoneos','-destination','generic/platform=iOS','-derivedDataPath',str(derived),'CODE_SIGNING_ALLOWED=NO','CODE_SIGNING_REQUIRED=NO','build'])
    (output/'xcodebuild.log').write_text(result.stdout+result.stderr)
    products=derived/'Build/Products/Release-iphoneos';destination=output/'libraries';destination.mkdir(exist_ok=True)
    libraries={}
    for name in expected:
        source=products/('lib'+name+'.a')
        if not source.is_file() or source.read_bytes()[:8]!=b'!<arch>\n':raise ValueError('Missing static library '+name)
        architectures=command(['xcrun','lipo','-archs',str(source)]).stdout.strip().split()
        if architectures!=['arm64']:raise ValueError('Unexpected archive architectures '+name)
        target=destination/source.name;shutil.copyfile(source,target);libraries[source.name]={'sha256':hashlib.sha256(target.read_bytes()).hexdigest(),'architectures':architectures}
    sources={path for c in manifest['components'] for path in c['files'] if Path(path).suffix in ['.c','.m','.h']}
    report={'result':'PASS','kind':'recovered-component Xcode project build','source_commit':command(['git','rev-parse','HEAD']).stdout.strip(),'native_static_library_targets_built':len(libraries),'all_twenty_two_recovered_components_built_together':True,'source_runtime_files_sha256':{p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in sorted(sources)},'project_files_sha256':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in [MANIFEST,PROJECT/'project.pbxproj',PROJECT/'xcshareddata/xcschemes/RecoveredComponents.xcscheme']},'libraries':libraries,'toolchain':command(['xcrun','clang','--version']).stdout.strip(),'xcode':command(['xcodebuild','-version']).stdout.strip(),'iphoneos_sdk':command(['xcrun','--sdk','iphoneos','--show-sdk-version']).stdout.strip(),'requested_minimum_iOS':manifest['minimum_iOS'],'architecture':'arm64','application_targets':0,'test_backends_included':False,'unresolved_original_backend_dependencies_remain':True,'whole_app_link_or_behavior_verified':False,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_tested':False}
    (output/'build-report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,default=ROOT/'build/xcode-components');build(p.parse_args().output)
