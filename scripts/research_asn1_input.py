#!/usr/bin/env python3
"""Inspect the exact original ASN.1 BIO decoding chain without executing the IPA."""
import json
from pathlib import Path
from research_bio_input import original
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches
ROOT=Path(__file__).resolve().parents[1]
def main():
    image=original();dispatch=Dispatch(image);starts,branches=boundaries_and_branches()
    entries={0x10061300c:('asn1_d2i_read_bio',0),0x100613354:('ASN1_item_d2i_bio',0),0x10062fb30:('d2i_CMS_bio',0),0x100619304:('ASN1_item_d2i',0)}
    flows={};queue=list(entries)
    while queue and len(flows)<28:
        address=queue.pop(0)
        if address in flows:continue
        role,depth=entries[address];r=walk(image.data,address,starts,branches,image=image,dispatch=dispatch);flows[address]=dict(r,role=role,study_depth=depth)
        if depth<2:
            for row in r['instructions']:
                if row['mnemonic'] in ['bl','b'] and 'call_target' in row:
                    target=int(row['call_target'],16)
                    if 0x100604000<=target<0x100622000 and target not in entries:
                        entries[target]=('ASN1_direct_dependency',depth+1);queue.append(target)
    result={'original_executable_sha256':'809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154','records':list(flows.values()),'CMS_item_descriptor':{'address':'0x100b24750','bytes':image.data[image.fileoff(0x100b24750):image.fileoff(0x100b24750)+56].hex()},'complete_decoder_recovered':False,'full_app_built':False}
    p=ROOT/'build/asn1-study.json';p.parent.mkdir(exist_ok=True);p.write_text(json.dumps(result,indent=2)+'\n')
    print('ASN1_STUDY_JSON:'+json.dumps(result,separators=(',',':')))
if __name__=='__main__':main()
