#!/usr/bin/env python3
"""Decode constant NSString objects without executing the original app."""
import argparse,json,pathlib
from recover_objc import MachO
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('executable',type=pathlib.Path);p.add_argument('output',type=pathlib.Path);a=p.parse_args();m=MachO(a.executable.read_bytes());out=[]
 for s in m.sections:
  if s['name']!='__cfstring':continue
  for address in range(s['address'],s['address']+s['size'],32):
   try:
    flags=m.u64(address+8);pointer=m.u64(address+16);length=m.u64(address+24);off=m.fileoff(pointer);wide=bool(flags&0x10);raw=m.data[off:off+length*(2 if wide else 1)]
    out.append({'address':hex(address),'value':raw.decode('utf-16-le' if wide else 'utf-8',errors='replace'),'encoding':'utf-16-le' if wide else 'utf-8'})
   except Exception as error:out.append({'address':hex(address),'error':type(error).__name__})
 a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(out,indent=2,ensure_ascii=False)+'\n');print('Decoded NSString objects:',len(out))
if __name__=='__main__':main()
