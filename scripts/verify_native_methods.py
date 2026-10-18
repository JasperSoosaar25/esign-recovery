#!/usr/bin/env python3
"""Verify method-export completeness and original trace identities, not app behavior."""
import csv
import gzip
import hashlib
import json
from pathlib import Path
import re

from audit_evidence import contained, require, EXPECTED_EXECUTABLE

ROOT = Path(__file__).resolve().parents[1]


def verify():
    base = ROOT / 'analysis/native-methods'
    index = json.loads((base / 'index.json').read_text())
    require(index['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong native input identity')
    traces = ROOT / 'analysis/app-methods'
    require(index['trace_index_sha256'] == hashlib.sha256((traces / 'index.json').read_bytes()).hexdigest(), 'Changed input trace index')
    original = []
    for item in json.loads((traces / 'index.json').read_text())['files']:
        original.extend(json.loads(line) for line in gzip.decompress((traces / item['path']).read_bytes()).splitlines())
    rows = list(csv.DictReader((base / 'results.tsv').open(), delimiter='\t'))
    require(len(rows) == len(original) == index['method_entries'], 'Incomplete native export index')
    names, classes, succeeded, failed = set(), {}, 0, 0
    for number, (row, flow) in enumerate(zip(rows, original)):
        require(row['index'] == f'{number:05}', 'Changed native record order')
        require((row['class'], row['kind'], row['selector'], row['abi'], row['entry']) ==
                tuple(flow[key] for key in ['class_name', 'kind', 'selector', 'abi', 'entry']), 'Forged native method identity')
        require(int(row['instructions']) == flow['instruction_count'] and
                int(row['unresolved_jumps']) == flow['unresolved_indirect_jumps'], 'Changed native model coverage')
        require(row['output'] == f'methods/method-{number:05}.pseudo.c', 'Wrong native output path')
        names.add(row['output'])
        text = contained(base, row['output']).read_text()
        if row['status'] == 'exported':
            require(text.rstrip().endswith('}'), 'Truncated native method source')
            require(f" * Method: {flow['kind']}[{flow['class_name']} {flow['selector']}]\n" in text,
                    'Wrong native method marker')
            require(f" * Entry: {flow['entry']}; original ABI: {flow['abi']}\n" in text, 'Wrong native ABI marker')
            require(re.search(r'\b' + re.escape(f"Recovered_{flow['class_name']}_m{number:05}") + r'\s*\(', text),
                    'Wrong native C function identity')
            succeeded += 1
        else:
            require(row['status'] == 'failed' and bool(row['error']) and text.startswith('/* DECOMPILATION FAILED:'),
                    'Unrecorded native failure')
            failed += 1
        classes.setdefault(row['class'], []).append(text)
    require({str(path.relative_to(base)) for path in (base / 'methods').glob('*.pseudo.c')} == names, 'Unindexed native file')
    for name, texts in classes.items():
        expected = '/* Static original-byte method decompilation. See index.json for limitations. */\n\n' + ''.join(text + '\n\n' for text in texts)
        require((base / 'classes' / (name + '.pseudo.c')).read_text() == expected, 'Incomplete class-focused export')
    require(succeeded == index['exported_methods'] and failed == index['failed_methods'] and len(classes) == index['classes'],
            'Wrong native export aggregates')
    for item in index['files']:
        payload = contained(base, item['path']).read_bytes()
        require(len(payload) == item['bytes'] and hashlib.sha256(payload).hexdigest() == item['sha256'], 'Changed native export bytes')
    return {'result': 'PASS', 'indexed_methods': len(rows), 'exported_methods': succeeded, 'failed_methods': failed,
            'classes': len(classes), 'source_built_app': False, 'runtime_equivalence_verified': False}


if __name__ == '__main__':
    print(json.dumps(verify(), indent=2))
