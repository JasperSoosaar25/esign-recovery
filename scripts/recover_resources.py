#!/usr/bin/env python3
"""Preserve exact public-facing bundle resources and readable plist derivatives."""
import argparse,hashlib,json,pathlib,plistlib,zipfile
EXPECTED='f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29'
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=pathlib.Path);p.add_argument('output',type=pathlib.Path);a=p.parse_args()
 raw=a.ipa.read_bytes()
 if hashlib.sha256(raw).hexdigest()!=EXPECTED:raise ValueError('Input IPA does not match the verified baseline')
 prefix='Payload/ESign.app/';entries=[];excluded=[];decoded=[]
 with zipfile.ZipFile(a.ipa) as z:
  for item in z.infolist():
   if item.is_dir() or not item.filename.startswith(prefix):continue
   rel=pathlib.PurePosixPath(item.filename[len(prefix):])
   if rel.is_absolute() or '..' in rel.parts:raise ValueError('Unsafe ZIP entry')
   if rel.name=='ESign' or '_CodeSignature' in rel.parts or rel.suffix in {'.mobileprovision','.mobileconfig','.p12','.pfx','.pem','.key'}:
    excluded.append(str(rel));continue
   data=z.read(item);target=a.output/'resources'/pathlib.Path(str(rel));target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(data)
   entries.append({'path':str(target.relative_to(a.output)),'archive_path':item.filename,'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),'origin':'exact archive resource'})
   if not (data.startswith(b'bplist') or data.lstrip().startswith(b'<?xml') or data.lstrip().startswith(b'<plist')):continue
   try:parsed=plistlib.loads(data)
   except Exception:continue
   # XML is a readable derivative. The unmodified binary above remains authoritative.
   try:
    readable=plistlib.dumps(parsed,fmt=plistlib.FMT_XML,sort_keys=False);suffix='.xml'
   except (TypeError,ValueError):
    import base64
    def encode(value):
     if isinstance(value,plistlib.UID):return {'CF$UID':value.data}
     if isinstance(value,bytes):return {'base64':base64.b64encode(value).decode()}
     raise TypeError(type(value).__name__)
    readable=(json.dumps(parsed,indent=2,ensure_ascii=False,default=encode)+'\n').encode();suffix='.json'
   out=a.output/'readable-plists'/pathlib.Path(str(rel)+suffix);out.parent.mkdir(parents=True,exist_ok=True);out.write_bytes(readable);decoded.append(str(out.relative_to(a.output)))
 a.output.mkdir(parents=True,exist_ok=True)
 manifest={'ipa_sha256':EXPECTED,'entries':entries,'excluded':excluded,'readable_plist_derivatives':decoded}
 (a.output/'resource-manifest.json').write_text(json.dumps(manifest,indent=2,ensure_ascii=False)+'\n');print(json.dumps({'exact_resources':len(entries),'readable_plists':len(decoded),'excluded':excluded,'bytes':sum(e['bytes'] for e in entries)},indent=2))
if __name__=='__main__':main()
