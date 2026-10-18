#!/usr/bin/env python3
"""Read an indexed original-method trace as annotated assembly or JSON."""
import argparse
import gzip
import json
import pathlib

ROOT = pathlib.Path(__file__).resolve().parents[1]


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('class_name')
    p.add_argument('selector')
    p.add_argument('--kind', choices=['-', '+'], default='-')
    p.add_argument('--json', action='store_true')
    args = p.parse_args()
    base = ROOT / 'analysis/app-methods'
    matches = [v for v in json.loads((base / 'methods.json').read_text()) if
               (v['class_name'], v['selector'], v['kind']) == (args.class_name, args.selector, args.kind)]
    if len(matches) != 1:
        p.error(f'Expected one indexed method; found {len(matches)}')
    method = matches[0]
    with gzip.open(base / method['trace_file'], 'rt') as f:
        for number, line in enumerate(f, 1):
            if number == method['record']:
                flow = json.loads(line)
                break
        else:
            p.error('Missing indexed method record; run verify_app_analysis.py')
    if args.json:
        print(json.dumps(flow, indent=2))
        return
    print('; ORIGINAL-BYTE STATIC TRACE — NOT COMPILABLE SOURCE OR VERIFIED RUNTIME BEHAVIOR')
    print('; ' + args.class_name + ' ' + args.kind + args.selector + ' | ' + flow['abi'])
    print('; ' + '; '.join(flow['analysis_assumptions']))
    for row in flow['instructions']:
        annotation = []
        if 'objc_dispatch' in row:
            annotation.append('selector=' + row['objc_dispatch']['selector'] + ' (receiver unverified)')
        if row.get('pointer_slots'):
            annotation.append('INITIAL pointers ' + ','.join(row['pointer_slots']) + ' -> ' + ','.join(row['successors']))
        if row.get('unresolved_on_some_abstract_paths'):
            annotation.append('UNRESOLVED on some abstract paths')
        print(f"{row['address']}  {row['bytes']}  {row['mnemonic']} {row['operands']}" +
              (' ; ' + '; '.join(annotation) if annotation else ''))


if __name__ == '__main__':
    main()
