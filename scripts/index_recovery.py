#!/usr/bin/env python3
"""Index native output against independently recovered app method entries."""
import csv,json,pathlib,re
ROOT=pathlib.Path(__file__).resolve().parents[1]
def main():
 r=ROOT/'recovered';m=json.loads((r/'objc/objc-metadata.json').read_text());d=r/'decompiled'
 functions={int(v['address'],16):v for v in csv.DictReader((d/'functions.tsv').open(),delimiter='\t')}
 bodies={}
 pattern=re.compile(r'\n/\* Address: (0x[0-9a-fA-F]+) \|[^\n]*\*/\n')
 for path in sorted((d/'native').glob('*.c')):
  text=path.read_text();matches=list(pattern.finditer(text))
  for i,match in enumerate(matches):bodies[int(match.group(1),16)]=text[match.start():matches[i+1].start() if i+1<len(matches) else len(text)]
 out=r/'app-pseudocode';out.mkdir(exist_ok=True);coverage=[]
 classes=[c for c in m['classes'] if c['name'].startswith('YYY') or c['name']=='AppDelegate']
 for cls in classes:
  parts=['/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.\n * Class: '+cls['name']+' | class address: '+cls['address']+'\n * Selector/ABI comments come from independently decoded runtime metadata.\n */\n']
  for method in cls['methods']:
   address=int(method['implementation'],16);function=functions.get(address);status=function['status'] if function else 'not_identified_as_function'
   coverage.append({'class':cls['name'],'selector':method['selector'],'kind':method['kind'],'implementation':method['implementation'],'status':status,'function_file':function['file'] if function else None})
   parts.append('\n/* '+method['kind']+'['+cls['name']+' '+method['selector']+'] | '+method['implementation']+' | ABI '+method['type_encoding']+' */\n')
   parts.append(bodies.get(address,'/* No function-body export available; inspect coverage and binary evidence. */\n'))
  (out/(cls['name']+'.pseudo.m')).write_text(''.join(parts))
 summary={'total_app_classes':len(classes),'total_app_method_entries':len(coverage),'decompiled':sum(v['status']=='decompiled' for v in coverage),'failed':sum(v['status']=='failed' for v in coverage),'not_identified_as_function':sum(v['status']=='not_identified_as_function' for v in coverage),'scope':'YYY-prefix classes plus AppDelegate; prefix is a heuristic','semantic_equivalence_verified':False,'methods':coverage}
 (r/'app-method-coverage.json').write_text(json.dumps(summary,indent=2)+'\n');print(json.dumps({k:v for k,v in summary.items() if k!='methods'},indent=2))
if __name__=='__main__':main()
