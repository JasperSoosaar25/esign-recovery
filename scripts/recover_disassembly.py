#!/usr/bin/env python3
"""Preserve address/byte/instruction listings for every __text byte (Capstone)."""
import argparse,gzip,hashlib,json,pathlib
from recover_objc import MachO
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('executable',type=pathlib.Path);p.add_argument('output',type=pathlib.Path);a=p.parse_args();data=a.executable.read_bytes();m=MachO(data);section=next(s for s in m.sections if s['name']=='__text');a.output.mkdir(parents=True,exist_ok=True)
 dis=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);dis.skipdata=True;chunks=[];total=0
 for number,relative in enumerate(range(0,section['size'],65536)):
  raw=data[section['offset']+relative:section['offset']+min(section['size'],relative+65536)];start=section['address']+relative
  lines=['; EXACT MACHINE BYTES WITH CAPSTONE DISASSEMBLY — NOT ORIGINAL HIGH-LEVEL SOURCE','; executable SHA256 '+hashlib.sha256(data).hexdigest(),'; VM range '+hex(start)+'..'+hex(start+len(raw))+'\n'];covered=0;instructions=0
  for address,size,mnemonic,operands in dis.disasm_lite(raw,start):
   encoded=raw[address-start:address-start+size];lines.append(f'{address:016x}  {encoded.hex():<16}  {mnemonic} {operands}');covered+=size;instructions+=1
  if covered!=len(raw):raise ValueError('Uncovered machine bytes in chunk '+str(number))
  name=f'text-{number:04d}.asm.gz';compressed=gzip.compress(('\n'.join(lines)+'\n').encode(),mtime=0);(a.output/name).write_bytes(compressed);total+=covered
  chunks.append({'path':name,'vm_start':hex(start),'vm_end':hex(start+len(raw)),'machine_bytes':covered,'instruction_records':instructions,'compressed_sha256':hashlib.sha256(compressed).hexdigest()})
 result={'executable_sha256':hashlib.sha256(data).hexdigest(),'section':'__text','vm_start':hex(section['address']),'machine_bytes':total,'chunks':chunks,'tool':'Capstone 5.0.6','meaning':'Every __text byte is represented, with undecodable words shown by skip-data records. Instruction text is a decoding, not original source.'};(a.output/'manifest.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps({'machine_bytes':total,'chunks':len(chunks),'instruction_records':sum(v['instruction_records'] for v in chunks),'compressed_bytes':sum((a.output/v['path']).stat().st_size for v in chunks)},indent=2))
if __name__=='__main__':main()
