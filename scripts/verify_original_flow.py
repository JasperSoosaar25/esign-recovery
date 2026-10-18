#!/usr/bin/env python3
"""Check the separate flow studies against preserved original code bytes."""
import gzip
import hashlib
import json
import pathlib
import re

from audit_evidence import EXPECTED_EXECUTABLE, contained, require

ROOT = pathlib.Path(__file__).resolve().parents[1]


def verify(root=ROOT):
    base = root / 'analysis/original-flow'
    index = json.loads((base / 'index.json').read_text())
    require(index['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong flow baseline')
    require(index['input_bytes_modified'] is False and index['app_built_or_run'] is False,
            'Incorrect flow-study status')
    indexed = set()
    for item in index['files']:
        path = contained(root, item['path'])
        require(path.parent == base and path.is_file(), 'Unexpected flow-study file')
        data = path.read_bytes()
        require(len(data) == item['bytes'] and hashlib.sha256(data).hexdigest() == item['sha256'],
                'Flow-study hash mismatch')
        indexed.add(path.name)
    require(indexed == {p.name for p in base.iterdir() if p.is_file() and p.name != 'index.json'},
            'Unindexed flow study')
    wanted = {}
    instruction_count = 0
    studies = []
    metadata = json.loads((root / 'recovered/objc/objc-metadata.json').read_text())
    classes = {v['name']: v for v in metadata['classes']}
    for path in sorted(base.glob('*.json')):
        if path.name == 'index.json':
            continue
        flow = json.loads(path.read_text())
        method = next(v for v in classes[flow['class_name']]['methods'] if v['selector'] == flow['selector'])
        require(flow['entry'] == method['implementation'] and flow['abi'] == method['type_encoding'],
                'Flow method identity mismatch')
        require(flow['executable_sha256'] == EXPECTED_EXECUTABLE and flow['buildable_source'] is False
                and flow['runtime_equivalence_verified'] is False, 'Incorrect provenance/status')
        require(len(flow['instructions']) == flow['instruction_count'], 'Flow count mismatch')
        require(len({v['address'] for v in flow['instructions']}) == flow['instruction_count'],
                'Duplicate flow instruction')
        for row in flow['instructions']:
            address = int(row['address'], 16)
            require(address not in wanted or wanted[address] == row['bytes'], 'Conflicting original bytes')
            wanted[address] = row['bytes']
        instruction_count += flow['instruction_count']
        studies.append({k: flow[k] for k in ['class_name', 'selector', 'entry', 'instruction_count',
                       'static_table_edges', 'unresolved_indirect_jumps', 'boundary_stops']})
    require(sorted(studies, key=lambda v: v['entry']) == sorted(index['studies'], key=lambda v: v['entry']),
            'Study summary mismatch')
    manifest = json.loads((root / 'recovered/disassembly/manifest.json').read_text())
    matched = set()
    pattern = re.compile(r'^([0-9a-fA-F]+)\s+([0-9a-fA-F]{8})\s+')
    for chunk in manifest['chunks']:
        lo, hi = int(chunk['vm_start'], 16), int(chunk['vm_end'], 16)
        if not any(lo <= v < hi for v in wanted):
            continue
        with gzip.open(contained(root / 'recovered/disassembly', chunk['path']), 'rt') as f:
            for line in f:
                match = pattern.match(line)
                if match:
                    address = int(match[1], 16)
                    if address in wanted:
                        require(wanted[address] == match[2], 'Flow instruction differs from original text')
                        matched.add(address)
    require(matched == wanted.keys(), 'Unverified flow instruction addresses')
    audit = json.loads((root / 'docs/ipa-entry-audit.json').read_text())
    require(audit['zip_entries'] == len(audit['entries']) == 100 and audit['unaccounted_entries'] == 0,
            'Incomplete original IPA entry audit')
    require(len({v['archive_path'] for v in audit['entries']}) == 100, 'Duplicate audit entry')
    return {'result': 'PASS', 'studies': len(studies), 'instruction_records': instruction_count,
            'unique_original_instructions': len(wanted), 'accounted_ipa_entries': 100,
            'original_source_build_verified': False, 'app_built_or_run': False}


if __name__ == '__main__':
    print(json.dumps(verify(), indent=2))
