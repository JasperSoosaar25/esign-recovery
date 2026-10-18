#!/usr/bin/env python3
"""Verify dispatch excerpts and every app-method trace without executing ESign."""
import argparse
import csv
import gzip
import hashlib
import json
import pathlib
import re
import zipfile
from audit_evidence import EXPECTED_EXECUTABLE, contained, require
from recover_dispatch import Dispatch, SECTION_NAMES, decoder
from recover_objc import MachO

ROOT = pathlib.Path(__file__).resolve().parents[1]


def read_hashed(base, item):
    path = contained(base, item['path'])
    require(path.parent == base and path.is_file(), 'Unexpected evidence path')
    raw = path.read_bytes()
    require(len(raw) == item['bytes'] and hashlib.sha256(raw).hexdigest() == item['sha256'], 'Evidence hash mismatch')
    return raw


def original_identity(flow, method, class_name):
    require((flow['class_name'], flow['selector'], flow['kind'], flow['abi'], flow['entry']) ==
            (class_name, method['selector'], method['kind'], method['type_encoding'], method['implementation']),
            'Original method identity mismatch')
    require(flow['executable_sha256'] == EXPECTED_EXECUTABLE and flow['buildable_source'] is False
            and flow['runtime_equivalence_verified'] is False, 'Incorrect trace provenance/status')


def dispatch_evidence(root):
    base = root / 'analysis/objc-dispatch'
    index = json.loads((base / 'index.json').read_text())
    metadata = json.loads((root / 'recovered/objc/objc-metadata.json').read_text())
    require(index['executable_sha256'] == EXPECTED_EXECUTABLE and index['original_bytes_modified'] is False
            and index['app_built_or_run'] is False and index['receiver_classes_verified'] is False, 'Incorrect dispatch status')
    blobs = {}
    for item in index['files']:
        require(item['path'] not in blobs, 'Duplicate dispatch file')
        raw = gzip.decompress(read_hashed(base, item))
        require(len(raw) == item['uncompressed_bytes'] and hashlib.sha256(raw).hexdigest() == item['uncompressed_sha256'],
                'Uncompressed evidence hash mismatch')
        blobs[item['path']] = raw
    require(set(blobs) | {'index.json', 'selector-stubs.tsv'} == {p.name for p in base.iterdir() if p.is_file()},
            'Unindexed dispatch file')
    require({s['name'] for s in index['sections']} == set(SECTION_NAMES) and len(index['sections']) == len(SECTION_NAMES),
            'Missing/duplicate native section')
    original_sections = {s['name']: s for s in metadata['sections']}
    image = MachO.__new__(MachO)
    image.data, image.sections, image.binds, image.segments = b'', [], {}, metadata['segments']
    for section in index['sections']:
        require({k: section[k] for k in ['name', 'segment', 'address', 'size', 'offset']} == original_sections[section['name']],
                'Native section metadata differs from baseline')
        raw = blobs[section['path']]
        require(len(raw) == section['size'], 'Wrong section byte count')
        image.sections.append(dict(section, offset=len(image.data)))
        image.data += raw
    def fileoff(address):
        for section in image.sections:
            if section['address'] <= address < section['address'] + section['size']:
                return section['offset'] + address - section['address']
        raise ValueError('Outside preserved excerpts')
    image.fileoff = fileoff
    for stream in index['dyld_bind_streams']:
        raw = blobs[stream['path']]
        require(len(raw) == stream['size'], 'Wrong binding-stream size')
        replay = MachO.__new__(MachO)
        replay.data, replay.segments, replay.binds = raw, metadata['segments'], {}
        def original_fileoff(address):
            for segment in metadata['segments']:
                if segment['vmaddr'] <= address < segment['vmaddr'] + segment['filesize']:
                    return segment['fileoff'] + address - segment['vmaddr']
            raise ValueError('Unmapped original address')
        replay.fileoff = original_fileoff
        replay.read_binds(0, len(raw))
        image.binds.update(replay.binds)
    dispatch = Dispatch(image)
    stored = json.loads(blobs['selector-stubs.json.gz'])
    require(stored == list(dispatch.stubs.values()) and len(stored) == index['decoded_selector_stubs'],
            'Selector-stub decoding differs from original excerpts')
    rows = list(csv.DictReader((base / 'selector-stubs.tsv').open(), delimiter='\t'))
    require(rows == [{k: s[k] for k in ['address', 'selector', 'selector_slot', 'message_send_slot']} for s in stored],
            'Selector TSV differs from decoded evidence')
    return dispatch, index


def check_call(row, dispatch, wanted, cs):
    observed = row['objc_dispatch']
    require(row['mnemonic'] == 'bl' and observed['receiver_class_verified'] is False, 'Unsupported or overclaimed dispatch observation')
    ins = next(cs.disasm(bytes.fromhex(row['bytes']), int(row['address'], 16)), None)
    require(ins is not None and ins.mnemonic == 'bl', 'Dispatch call opcode mismatch')
    address = ins.operands[0].imm
    require(row['call_target'] == hex(address), 'Dispatch call target mismatch')
    seen = set()
    for thunk in observed['direct_branch_thunks']:
        require(address not in seen and thunk['address'] == hex(address), 'Bad/cyclic thunk chain')
        seen.add(address)
        ins = next(cs.disasm(bytes.fromhex(thunk['bytes']), address), None)
        require(ins is not None and ins.mnemonic == 'b' and ins.size == 4, 'Thunk is not a direct original branch')
        target = ins.operands[0].imm
        require(thunk['target'] == hex(target), 'Thunk target mismatch')
        require(address not in wanted or wanted[address] == thunk['bytes'], 'Conflicting thunk bytes')
        wanted[address] = thunk['bytes']
        address = target
    stub = dispatch.stubs.get(address)
    require(stub is not None and observed['stub'] == hex(address) and stub['selector'] == observed['selector'],
            'Dispatch observation does not reach original selector stub')


def verify(root=ROOT, ipa=None):
    dispatch, dispatch_index = dispatch_evidence(root)
    base = root / 'analysis/app-methods'
    index = json.loads((base / 'index.json').read_text())
    require(index['executable_sha256'] == EXPECTED_EXECUTABLE and index['app_built_or_run'] is False
            and index['buildable_source'] is False and index['runtime_equivalence_verified'] is False, 'Incorrect app-analysis status')
    metadata = json.loads((root / 'recovered/objc/objc-metadata.json').read_text())
    classes = [c for c in metadata['classes'] if c['name'].startswith('YYY') or c['name'] == 'AppDelegate']
    methods = json.loads((base / 'methods.json').read_text())
    require(index['classes'] == len(classes) and index['method_entries'] == len(methods) == sum(len(c['methods']) for c in classes),
            'Incomplete app-method scope')
    require(len(index['files']) == len(classes), 'Missing app-class trace file')
    require({v['path'] for v in index['files']} | {'index.json', 'methods.json', 'methods.tsv'} ==
            {p.name for p in base.iterdir() if p.is_file()}, 'Unindexed app-analysis file')
    require(list(csv.DictReader((base / 'methods.tsv').open(), delimiter='\t')) ==
            [{k: str(v) for k, v in method.items()} for method in methods], 'Method TSV differs from JSON')
    wanted, traced, calls, unknowns, limited, record_index = {}, set(), set(), 0, 0, 0
    cs = decoder()
    for cl, item in zip(classes, index['files']):
        require(item['path'] == cl['name'] + '.jsonl.gz', 'Wrong class trace file')
        lines = gzip.decompress(read_hashed(base, item)).splitlines()
        require(item['method_records'] == len(lines) == len(cl['methods']), 'Incomplete class method records')
        for record, (line, method) in enumerate(zip(lines, cl['methods']), 1):
            flow = json.loads(line)
            original_identity(flow, method, cl['name'])
            require(len(flow['instructions']) == flow['instruction_count'] == len({v['address'] for v in flow['instructions']}),
                    'Duplicate/miscounted trace instructions')
            summary = {k: flow[k] for k in ['class_name', 'selector', 'kind', 'abi', 'entry',
                       'instruction_count', 'static_table_edges', 'unresolved_indirect_jumps']}
            hit_limit = any(v['reason'] == 'abstract-step-limit' for v in flow['boundary_stops'])
            observations = [r for r in flow['instructions'] if 'objc_dispatch' in r]
            summary.update(step_limit_reached=hit_limit, trace_file=item['path'], record=record, identified_dispatch_calls=len(observations))
            require(summary == methods[record_index], 'Method summary differs from original trace')
            record_index += 1
            unknowns += flow['unresolved_indirect_jumps']
            limited += hit_limit
            require(flow['unresolved_indirect_jumps'] == sum(bool(v.get('unresolved_on_some_abstract_paths')) for v in flow['instructions']),
                    'Unresolved-jump count mismatch')
            for row in flow['instructions']:
                address = int(row['address'], 16)
                require(address not in wanted or wanted[address] == row['bytes'], 'Conflicting original bytes')
                wanted[address] = row['bytes']
                traced.add(address)
                if 'objc_dispatch' in row:
                    check_call(row, dispatch, wanted, cs)
                    calls.add(address)
    require((len(traced), len(calls), unknowns, limited) == (index['unique_original_instructions'], index['unique_identified_dispatch_calls'],
            index['unresolved_jump_records'], index['methods_reaching_step_limit']), 'App-analysis aggregate mismatch')
    manifest = json.loads((root / 'recovered/disassembly/manifest.json').read_text())
    matched = set()
    pattern = re.compile(r'^([0-9a-fA-F]+)\s+([0-9a-fA-F]{8})\s+')
    for chunk in manifest['chunks']:
        lo, hi = int(chunk['vm_start'], 16), int(chunk['vm_end'], 16)
        if not any(lo <= a < hi for a in wanted):
            continue
        with gzip.open(contained(root / 'recovered/disassembly', chunk['path']), 'rt') as f:
            for line in f:
                m = pattern.match(line)
                if m and int(m[1], 16) in wanted:
                    address = int(m[1], 16)
                    require(wanted[address] == m[2], 'Trace/thunk bytes differ from original text')
                    matched.add(address)
    require(matched == wanted.keys(), 'Unverified original text addresses')
    if ipa is not None:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
        for item in dispatch_index['sections'] + dispatch_index['dyld_bind_streams']:
            require(gzip.decompress((root / 'analysis/objc-dispatch' / item['path']).read_bytes()) ==
                    data[item['offset']:item['offset'] + item['size']], 'Native excerpt differs from original IPA')
    return {'result': 'PASS', 'classes': len(classes), 'method_entries': len(methods), 'unique_original_instructions': len(traced),
            'unique_identified_dispatch_calls': len(calls), 'decoded_selector_stubs': len(dispatch.stubs),
            'unresolved_jump_records': unknowns, 'methods_reaching_step_limit': limited,
            'native_excerpts_compared_with_ipa': ipa is not None, 'app_built_or_run': False, 'buildable_source': False}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ipa', type=pathlib.Path)
    args = parser.parse_args()
    print(json.dumps(verify(ipa=args.ipa), indent=2))
