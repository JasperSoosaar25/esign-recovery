#!/usr/bin/env python3
"""Recover the original CMS content-slot accessor and its bounded byte dispatch."""
import argparse,gzip,hashlib,json,struct,zipfile
from pathlib import Path
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import validate_inputs
from recover_legacy_crypto import CryptoMachine
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/cms-content';ENTRY=0x10062edd8
TABLE=bytes([24,0,28,16,0,34]);LOAD=0x10062ee04;ADD=0x10062ee08;TABLE_ADDRESS=0x100999dd4
EXTRA={TABLE_ADDRESS+i:bytes([b]) for i,b in enumerate(TABLE)};EXTRA[0x100a618c1]=b'cms_lib.c\0'
BOUNDARIES={0x1005b3138:'OBJ_obj2nid',0x100604c0c:'error'}
def records(image,dispatch):
    start,branches=boundaries_and_branches()
    r=walk(image.data,ENTRY,start,branches,image=image,dispatch=dispatch,load_result_values={LOAD:list(TABLE)},shifted_add_addresses={ADD:2})
    require(not r['unresolved_indirect_jumps'] and not r['boundary_stops'],'Incomplete CMS content-slot flow')
    return [dict(r,role='CMS_get0_content')]
class CMSMachine(CryptoMachine):
    def cstring(self,pointer):
        require(pointer==0x100a618c1,'Unexpected CMS diagnostic');raw=EXTRA[pointer];self.reads[(pointer,len(raw))]=True
        require(bytes(self.uc.mem_read(pointer,len(raw)))==raw,'Changed original CMS filename');return raw[:-1].decode()
    def boundary(self,target,args):
        if target==0x1005b3138:
            require(args[0]==self.type,'Changed CMS contentType argument');self.effects.append({'call':'OBJ_obj2nid','object':'type'});return self.case['nid']&0xffffffff
        require(target==0x100604c0c,'Unknown original CMS boundary')
        self.effects.append({'call':'error','library':args[0],'function':args[1],'reason':args[2],'file':self.cstring(args[3]),'line':args[4]});return 0
    def setup_cms(self,case):
        self.case=case;self.effects=[];self.fields={};self.cms=self.raw('cms');self.type=self.raw('type');self.container=self.raw('container');self.content=self.raw('content');self.replacement=self.raw('replacement')
        self.put64(self.cms,self.type);self.put64(self.cms+8,self.container);self.fields['cms.content']=self.cms+8
        self.put32(self.container,case['other_type'])
        for offset in [8,16,24,40]:
            nested=self.raw('nested-'+str(offset));self.put64(self.container+offset,nested);self.fields['container['+str(offset)+']']=self.container+offset
            for slot in [8,16]:
                name='nested-'+str(offset)+'.slot-'+str(slot);self.fields[name]=nested+slot;self.put64(nested+slot,self.content)
        for name,pointer in self.fields.items():self.labels[pointer]=name if pointer not in [self.cms,self.container] else self.labels[pointer]
        if case.get('null_slot'):self.put64(self.fields[case['null_slot']],0)

def cases():
    nids=[0,1,20,21,22,23,24,25,26,27,205,786,0x7fffffff,0xffffffff]
    result=[{'nid':nid,'other_type':typ} for nid in nids for typ in [0,4,16]]
    result += [{'nid':nid,'other_type':4,'null_slot':slot} for nid in nids for slot in ['nested-16.slot-8','nested-24.slot-16']]
    return result+[{'nid':21,'other_type':4,'null_slot':'cms.content'}]
def evaluate(m,case):
    m.setup_cms(case);before={name:m.get64(p) for name,p in m.fields.items()};p=m.invoke(ENTRY,[m.cms])
    slot=next((name for name,a in m.fields.items() if a==p),None);require(not p or slot is not None,'Unknown original CMS returned field')
    old=m.label(m.get64(p)) if p else None
    if p:m.put64(p,m.replacement)
    changed=[name for name,a in m.fields.items() if m.get64(a)!=before[name]]
    return {'slot':slot,'before':old,'after':m.label(m.get64(p)) if p else None,'mutated_fields':changed,'effects':m.effects}
def validate(e,metadata,ipa=None):
    require(e['native_boundaries']=={hex(k):v for k,v in BOUNDARIES.items()},'Changed original CMS boundary map')
    validate_instruction_bytes(e['records']);validate_inputs(e,metadata,ipa,names=(),class_slots={},extra_inputs=EXTRA)
    from verify_app_analysis import dispatch_evidence
    d,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(e,baseline),d)==e['records'],'Changed CMS byte-dispatch proof/flow')
def run(ipa=None,original_ipa=None):
    metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable');image=MachO(data);flows=records(image,Dispatch(image))
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed CMS content source/evidence: '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(e,metadata,original_ipa);flows=e['records']
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    m=CMSMachine(chunks,flows,{}, {},metadata);results=[{'input':c,'result':evaluate(m,c)} for c in cases()]
    require(len(m.visited)==71,'CMS content instruction coverage changed')
    if ipa:
        reads=set(m.reads);memory=[{'address':hex(a),'bytes':data[image.fileoff(a):image.fileoff(a)+size].hex()} for a,size in sorted(reads)]
        e={'records':flows,'classes':{},'memory':memory,'bindings':{},'external_targets':{},'native_boundaries':{hex(k):v for k,v in BOUNDARIES.items()}}
        validate(e,metadata,ipa);(OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(e,separators=(',',':')).encode(),mtime=0));(OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        (OUT/'index.json').write_text(json.dumps({'executable_sha256':EXPECTED_EXECUTABLE,'original_native_functions':1,'original_instructions':71,'all_original_instructions_exercised':True,'fixtures':len(results),'explicit_byte_dispatch_bounds':[0,5],'table_address':hex(TABLE_ADDRESS),'OBJ_lookup_and_ERR_are_controlled_test_boundaries':True,'complete_CMS_backend':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}},indent=2)+'\n')
    else:require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed CMS content-slot behavior')
    print(json.dumps({'result':'PASS','original_native_functions':1,'fixtures':len(results),'original_instructions_exercised':len(m.visited),'complete_CMS_backend':False},indent=2));m.close()
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
