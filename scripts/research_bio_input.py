#!/usr/bin/env python3
"""Read-only BIO dependency study from the exact pinned original executable."""
import hashlib,io,json,struct,urllib.request,zipfile
from pathlib import Path
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches
ROOT=Path(__file__).resolve().parents[1]
URL="https://raw.githubusercontent.com/nooptr/esign/e48b19239ea1b1c725134350db8ab1a15ce3ff88/esign_5.0.2_unsigned.ipa"
IPA_SHA256="f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29"
def original():
    with urllib.request.urlopen(URL,timeout=60) as response:raw=response.read(8_000_000)
    require(len(raw)==7522792 and hashlib.sha256(raw).hexdigest()==IPA_SHA256,"Wrong original IPA")
    with zipfile.ZipFile(io.BytesIO(raw)) as archive:data=archive.read("Payload/ESign.app/ESign")
    require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,"Wrong original executable")
    return MachO(data)
def main():
    image=original();dispatch=Dispatch(image);starts,branches=boundaries_and_branches()
    method=0x100e00fd0;raw=image.data[image.fileoff(method):image.fileoff(method)+80]
    fields=struct.unpack("<i4x9Q",raw);callbacks=list(fields[2:])
    entries={0x1005fedf0:"BIO_new",0x1005feebc:"BIO_free",0x1005ff090:"BIO_write",0x1005ff4e0:"BIO_ctrl",0x1005ffa5c:"BIO_s_mem",0x10062fb30:"d2i_CMS_bio",0x100613354:"ASN1_item_d2i_bio"}
    for i,address in enumerate(callbacks):
        if address:entries[address]="memory_method_callback_"+str(i)
    flows={};queue=list(entries)
    while queue:
        address=queue.pop(0)
        if address in flows:continue
        record=walk(image.data,address,starts,branches,image=image,dispatch=dispatch)
        flows[address]=dict(record,role=entries[address])
        for row in record["instructions"]:
            if row["mnemonic"]=="bl":
                target=int(row.get("call_target",row["operands"].lstrip("#")),16)
                if 0x1005fe000<=target<0x100601000 and target not in entries:
                    entries[target]="BIO_direct_dependency";queue.append(target)
    result={"executable_sha256":EXPECTED_EXECUTABLE,"IPA_sha256":IPA_SHA256,"original_bytes_modified":False,"method":{"address":hex(method),"bytes":raw.hex(),"type":fields[0],"name":image.cstr(fields[1]),"callback_addresses":[hex(a) for a in callbacks]},"records":list(flows.values()),"complete_BIO_or_CMS_implementation":False,"full_app_built":False}
    output=ROOT/"build/bio-study.json";output.parent.mkdir(exist_ok=True);output.write_text(json.dumps(result,indent=2)+"\n")
    print("BIO_STUDY_JSON:"+json.dumps(result,separators=(",",":")))
if __name__=="__main__":main()
