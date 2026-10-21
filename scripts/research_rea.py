#!/usr/bin/env python3
"""Independently inventory the exact original IPA with an installed REA CLI."""
import argparse,datetime,hashlib,json,platform,subprocess,tempfile,zipfile
from pathlib import Path
EXPECTED='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29'
EXECUTABLE='809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154'
def run(entry,ipa,output):
    original=ipa.read_bytes()
    if len(original)!=7522792 or hashlib.sha256(original).hexdigest()!=EXPECTED:raise ValueError('Wrong original IPA')
    def call(*args,allow_error=False):
        p=subprocess.run(['node',str(entry),*args],capture_output=True,text=True,timeout=120)
        if len(p.stdout)>2_000_000:raise ValueError('REA output exceeds selected-study budget')
        result=json.loads(p.stdout)
        if p.returncode and not (allow_error and result.get('code')=='capability_unavailable'):raise ValueError('REA command failed: '+p.stderr[:1000]+str(result)[:500])
        return result
    version=subprocess.run(['node',str(entry),'--version'],check=True,capture_output=True,text=True,timeout=30).stdout.strip()
    inspection=call('inspect-artifact',str(ipa),'--format','json')
    if inspection.get('operation')!='inspect_artifact':raise ValueError('REA inventory failed: '+str(inspection))
    inventory=next(s['evidence'] for s in inspection['normalized_result']['substeps'] if s['operation']=='inventory_artifact')
    manifest=inventory['normalized_result']['manifest']
    if manifest['root_sha256']!=EXPECTED:raise ValueError('REA input identity differs')
    with tempfile.TemporaryDirectory(prefix='esign-rea-study-') as temporary:
        folder=Path(temporary);request=folder/'apple-input.json';request.write_text(json.dumps({'inventory_evidence':[inventory]}))
        graph=call('project-apple-application-graph',str(request),'--format','json')
        if graph.get('operation')!='project_apple_application_graph':raise ValueError('REA Apple projection failed')
        with zipfile.ZipFile(ipa) as archive:
            binary=archive.read('Payload/ESign.app/ESign');entries=len(archive.infolist())
        if hashlib.sha256(binary).hexdigest()!=EXECUTABLE:raise ValueError('Wrong original executable')
        executable=folder/'ESign';executable.write_bytes(binary)
        macho=call('inspect-macho',str(executable),'--format','json',allow_error=True)
    n=graph['normalized_result'];components=n['components']
    summary={'result':'PASS','date':datetime.datetime.now(datetime.timezone.utc).date().isoformat(),'rea_cli_version':version,'rea_entry_sha256':hashlib.sha256(entry.read_bytes()).hexdigest(),'original_ipa_sha256':EXPECTED,'original_executable_sha256':EXECUTABLE,'original_zip_entries':entries,'inventory_manifest':manifest,'inspection_evidence_id':inspection['evidence_id'],'inventory_evidence_id':inventory['evidence_id'],'apple_projection_id':n['projection_id'],'apple_graph_evidence_id':graph['evidence_id'],'platforms':n['platforms'],'application_roots':n['application_roots'],'bundle_count':len(n['bundles']),'component_counts':{k:len(v) for k,v in components.items()},'coverage':n['coverage'],'runtime_families':n['runtime_families'],'unavailable_components':len(n['unavailable_components']),'limitations':graph['limitations'],'native_macho_inspection':{'success':not bool(macho.get('error')),'code':macho.get('code'),'details':macho.get('details')},'host_platform':platform.system(),'native_decompilation_performed':False,'original_binary_modified':False,'CMS_semantics_verified':False,'original_source_generated_by_REA':False,'full_app_built':False,'iphone_runtime_tested':False}
    output.parent.mkdir(parents=True,exist_ok=True);output.write_text(json.dumps(summary,indent=2)+'\n');print(json.dumps(summary,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--rea-entry',required=True,type=Path);p.add_argument('--original-ipa',required=True,type=Path);p.add_argument('--output',type=Path,default=Path(__file__).resolve().parents[1]/'docs/research/rea-20261021.json');a=p.parse_args();run(a.rea_entry.resolve(),a.original_ipa.resolve(),a.output.resolve())
