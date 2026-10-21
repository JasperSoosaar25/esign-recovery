#!/usr/bin/env python3
"""Generate a reproducible, library-only Xcode project for recovered source."""
import argparse,hashlib,json,re
from pathlib import Path
from xml.etree import ElementTree as ET
ROOT=Path(__file__).resolve().parents[1];PROJECT=ROOT/'ESignRecovery.xcodeproj';MANIFEST=ROOT/'xcode/components.json'
def validate(manifest):
    if manifest['schema_version']!=1 or manifest['kind']!='recovered-static-libraries-only':raise ValueError('Wrong component manifest kind')
    names=[c['name'] for c in manifest['components']]
    if len(names)!=17 or len(set(names))!=17:raise ValueError('Expected seventeen unique recovered components')
    seen=set()
    for c in manifest['components']:
        if not re.fullmatch(r'ESign[A-Za-z0-9]+',c['name']):raise ValueError('Invalid library name')
        directory=Path(c['directory'])
        if directory.parts[:1]!=('reconstruction',) or '..' in directory.parts:raise ValueError('Source outside reconstruction tree')
        source_count=0
        for name in c['files']:
            p=ROOT/name
            if p.parent!=ROOT/directory or not p.is_file() or p.is_symlink():raise ValueError('Invalid component file '+name)
            if p.suffix not in ['.h','.c','.m'] and p.name not in ['README.md','OPENSSL-LICENSE.txt']:raise ValueError('Non-source input in component project')
            if p.suffix in ['.c','.m']:
                if name in seen:raise ValueError('Runtime source compiled more than once')
                seen.add(name);source_count+=1
        if not source_count:raise ValueError('Component has no source')
        if any(dep not in names or dep==c['name'] for dep in c['dependencies']):raise ValueError('Invalid component dependency')
        if c['extra_cflags'] not in [[],['-Wno-deprecated-declarations']]:raise ValueError('Unreviewed project compiler flags')
    def visit(name,path):
        if name in path:raise ValueError('Cyclic component dependencies')
        for dep in next(c for c in manifest['components'] if c['name']==name)['dependencies']:visit(dep,path+[name])
    for name in names:visit(name,[])
    return seen

def identifier(name):return hashlib.sha256(name.encode()).hexdigest()[:24].upper()
def serialize(value,level=0):
    pad='\t'*level
    if isinstance(value,dict):return '{\n'+''.join('\t'*(level+1)+json.dumps(str(k))+' = '+serialize(v,level+1)+';\n' for k,v in value.items())+pad+'}'
    if isinstance(value,list):return '(\n'+''.join('\t'*(level+1)+serialize(v,level+1)+',\n' for v in value)+pad+')'
    if isinstance(value,int):return str(value)
    return json.dumps(str(value))

def generated(manifest):
    validate(manifest);objects={};components=manifest['components'];project=identifier('project');main=identifier('main');products=identifier('products');sourcegroup=identifier('source')
    def add(name,value):key=identifier(name);objects[key]=value;return key
    def configs(name,settings):
        entries=[]
        for config in ['Debug','Release']:
            entries.append(add(name+config,{'isa':'XCBuildConfiguration','buildSettings':settings,'name':config}))
        return add(name+'configlist',{'isa':'XCConfigurationList','buildConfigurations':entries,'defaultConfigurationIsVisible':0,'defaultConfigurationName':'Debug'})
    settings={'SDKROOT':'iphoneos','SUPPORTED_PLATFORMS':'iphoneos','ARCHS':'arm64','IPHONEOS_DEPLOYMENT_TARGET':manifest['minimum_iOS'],'CLANG_ENABLE_OBJC_ARC':'YES','CLANG_ENABLE_MODULES':'YES','GCC_C_LANGUAGE_STANDARD':'c11','GCC_OPTIMIZATION_LEVEL':'0','GCC_TREAT_WARNINGS_AS_ERRORS':'YES','OTHER_CFLAGS':['$(inherited)','-Wall','-Wextra','-Werror'],'CODE_SIGNING_ALLOWED':'NO','CODE_SIGNING_REQUIRED':'NO','SKIP_INSTALL':'YES','ENABLE_BITCODE':'NO'}
    projectconfig=configs('project',settings);targets=[];groups=[];productrefs=[]
    for c in components:
        name=c['name'];files=[];sources=[]
        for path in c['files']:
            p=Path(path);kind={'.h':'sourcecode.c.h','.c':'sourcecode.c.c','.m':'sourcecode.c.objc','.md':'net.daringfireball.markdown'}.get(p.suffix,'text')
            file=add(path,{'isa':'PBXFileReference','lastKnownFileType':kind,'path':p.name,'sourceTree':'<group>'});files.append(file)
            if p.suffix in ['.c','.m']:sources.append(add(path+'build',{'isa':'PBXBuildFile','fileRef':file}))
        groups.append(add(name+'group',{'isa':'PBXGroup','children':files,'name':name,'path':c['directory'],'sourceTree':'<group>'}))
        phase=add(name+'sources',{'isa':'PBXSourcesBuildPhase','buildActionMask':2147483647,'files':sources,'runOnlyForDeploymentPostprocessing':0})
        product=add(name+'product',{'isa':'PBXFileReference','explicitFileType':'archive.ar','includeInIndex':0,'path':'lib'+name+'.a','sourceTree':'BUILT_PRODUCTS_DIR'});productrefs.append(product)
        dependencies=[]
        for dep in c['dependencies']:
            proxy=add(name+'proxy'+dep,{'isa':'PBXContainerItemProxy','containerPortal':project,'proxyType':1,'remoteGlobalIDString':identifier(dep+'target'),'remoteInfo':dep})
            dependencies.append(add(name+'dependency'+dep,{'isa':'PBXTargetDependency','target':identifier(dep+'target'),'targetProxy':proxy}))
        targetconfig=configs(name,{'PRODUCT_NAME':name,'OTHER_CFLAGS':['$(inherited)',*c['extra_cflags']]})
        targets.append(add(name+'target',{'isa':'PBXNativeTarget','buildConfigurationList':targetconfig,'buildPhases':[phase],'buildRules':[],'dependencies':dependencies,'name':name,'productName':name,'productReference':product,'productType':'com.apple.product-type.library.static'}))
    objects[sourcegroup]={'isa':'PBXGroup','children':groups,'name':'Recovered source','sourceTree':'<group>'}
    objects[products]={'isa':'PBXGroup','children':productrefs,'name':'Products','sourceTree':'<group>'}
    objects[main]={'isa':'PBXGroup','children':[sourcegroup,products],'sourceTree':'<group>'}
    objects[project]={'isa':'PBXProject','attributes':{'BuildIndependentTargetsInParallel':'YES','LastUpgradeCheck':'1640'},'buildConfigurationList':projectconfig,'compatibilityVersion':'Xcode 14.0','developmentRegion':'en','hasScannedForEncodings':0,'knownRegions':['en','Base'],'mainGroup':main,'productRefGroup':products,'projectDirPath':'','projectRoot':'','targets':targets}
    pbx='// !$*UTF8*$!\n'+serialize({'archiveVersion':1,'classes':{},'objectVersion':56,'objects':objects,'rootObject':project})+'\n'
    scheme=ET.Element('Scheme',{'LastUpgradeVersion':'1640','version':'1.3'});build=ET.SubElement(scheme,'BuildAction',{'parallelizeBuildables':'YES','buildImplicitDependencies':'YES'});entries=ET.SubElement(build,'BuildActionEntries')
    for c in components:
        entry=ET.SubElement(entries,'BuildActionEntry',{'buildForTesting':'NO','buildForRunning':'NO','buildForProfiling':'NO','buildForArchiving':'YES','buildForAnalyzing':'YES'})
        # xcodebuild build uses entries marked buildForRunning or buildForTesting.
        entry.set('buildForRunning','YES')
        ET.SubElement(entry,'BuildableReference',{'BuildableIdentifier':'primary','BlueprintIdentifier':identifier(c['name']+'target'),'BuildableName':'lib'+c['name']+'.a','BlueprintName':c['name'],'ReferencedContainer':'container:ESignRecovery.xcodeproj'})
    ET.indent(scheme,space='  ')
    return {'project.pbxproj':pbx,'xcshareddata/xcschemes/RecoveredComponents.xcscheme':'<?xml version="1.0" encoding="UTF-8"?>\n'+ET.tostring(scheme,encoding='unicode')+'\n'}
def run(verify=False):
    manifest=json.loads(MANIFEST.read_text());files=generated(manifest)
    for name,content in files.items():
        p=PROJECT/name
        if verify:
            if not p.is_file() or p.read_text()!=content:raise ValueError('Generated Xcode project differs: '+name)
        else:p.parent.mkdir(parents=True,exist_ok=True);p.write_text(content)
    print(json.dumps({'result':'PASS','native_library_targets':17,'application_targets':0,'test_backends_included':False,'new_runtime_source_generated':False,'generated_files':list(files)},indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--verify',action='store_true');run(p.parse_args().verify)
