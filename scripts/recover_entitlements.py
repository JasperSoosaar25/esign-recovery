#!/usr/bin/env python3
"""Execute original entitlement encoding with explicit Foundation/block models."""
import argparse
import csv
import gzip
import hashlib
import json
from pathlib import Path
import re
import struct
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_signature_blobs import BlobMachine, FoundationError, validate_inputs, GUARD, MASK

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/entitlements'
NAMES = ('YYYEntitlementValue', 'YYYEntitlementBlob', 'YYYEntitlementsSuperBlob')
CALLBACK = 0x10070d5b0
RETURN = GUARD + 0x800
CLASS_SLOTS = {0x100c73048: NAMES[0], 0x100c73050: NAMES[1], 0x100c73058: NAMES[2]}
BYTE_CALLS = {0x10070c858, 0x10070c98c}


def original_flows():
    return [json.loads(line) for name in NAMES for line in gzip.decompress(
        (ROOT / 'analysis/app-methods' / (name + '.jsonl.gz')).read_bytes()).splitlines()]


def hypotheses(record):
    result = {}
    for row in record['instructions']:
        address = int(row['address'], 16)
        selector = row.get('objc_dispatch', {}).get('selector')
        if selector in ('isKindOfClass:', 'boolValue', 'isArray'):
            result[address] = [0, 1]
        elif address in BYTE_CALLS:
            require(record['class_name'] == 'YYYEntitlementBlob' and selector == 'length', 'Wrong byte-return receiver')
            result[address] = list(range(256))
    return result


def expanded_flows(image, dispatch, boundaries, branches):
    result = []
    for base in original_flows():
        assumptions = {}
        for _ in range(8):
            record = walk(image.data, int(base['entry'], 16), boundaries, branches, image=image,
                          dispatch=dispatch, call_return_values=assumptions, max_union=256)
            record.update({key: base[key] for key in ['class_name', 'kind', 'selector', 'abi', 'executable_sha256']})
            updated = hypotheses(record)
            if updated == assumptions:
                break
            assumptions = updated
        require(not record['unresolved_indirect_jumps'], 'Unresolved entitlement flow: ' + base['selector'])
        result.append(record)
    callback = walk(image.data, CALLBACK, boundaries, branches, image=image, dispatch=dispatch)
    callback['role'] = 'dictionary-enumeration-callback'
    result.append(callback)
    return result


class EntitlementMachine(BlobMachine):
    def __init__(self, chunks, records, bindings, classes, external, metadata):
        super().__init__(chunks, records, bindings, classes, external, metadata, names=NAMES)
        self.enumerations = []
        self.instruction_limit = 2000000

    def input(self, value):
        if isinstance(value, list):
            return self.obj([self.input(v) for v in value])
        return self.obj(value)

    def call(self, *args):
        try:
            return super().call(*args)
        finally:
            self.enumerations.clear()

    def dictionary(self, pairs):
        return self.obj({'ordered_pairs': [(self.input(key), self.input(value)) for key, value in pairs]})

    def message(self, selector, receiver, args):
        if not receiver:
            return 0
        value = self.value(receiver)
        if selector == 'class':
            require(isinstance(value, tuple) and value[0] == 'class', 'Unexpected class receiver')
            return receiver
        if selector == 'isKindOfClass:':
            target = self.value(args[0])
            kinds = {'NSNumber': isinstance(value, (int, float)), 'NSString': isinstance(value, str),
                     'NSArray': isinstance(value, list), 'NSDictionary': isinstance(value, dict) and 'ordered_pairs' in value}
            require(isinstance(target, tuple) and target[0] == 'class' and target[1] in kinds, 'Unmodeled class test')
            return int(kinds[target[1]])
        if selector == 'boolValue':
            if isinstance(value, (int, float)):
                return int(value != 0)
            raise FoundationError('NSInvalidArgumentException')
        if selector == 'dataUsingEncoding:':
            if not isinstance(value, str):
                raise FoundationError('NSInvalidArgumentException')
            require(args[0] == 4, 'Unexpected original string encoding')
            return self.obj(value.encode('utf-8'))
        if value == ('class', 'NSData') and selector == 'dataWithBytes:length:':
            pointer, size = args[:2]
            require(size < 1000000, 'Excessive original data request')
            return self.obj(bytes(self.uc.mem_read(pointer, size)))
        if value == ('class', 'NSArray') and selector == 'arrayWithObjects:count:':
            pointer, count = args[:2]
            items = [self.get64(pointer + 8 * i) for i in range(count)]
            if any(not token for token in items):
                raise FoundationError('NSInvalidArgumentException')
            return self.obj(items)
        return super().message(selector, receiver, args)

    def next_callback(self):
        frame = self.enumerations[-1]
        if frame['position'] == len(frame['pairs']):
            self.enumerations.pop()
            self.uc.reg_write(arm.UC_ARM64_REG_X0, 0)
            self.uc.reg_write(arm.UC_ARM64_REG_LR, frame['return'])
            self.uc.reg_write(arm.UC_ARM64_REG_PC, frame['return'])
            return
        key, value = frame['pairs'][frame['position']]
        frame['position'] += 1
        for i, token in enumerate([frame['block'], key, value, frame['stop']]):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), token)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, RETURN)
        self.uc.reg_write(arm.UC_ARM64_REG_PC, CALLBACK)

    def code(self, uc, address, size, user):
        try:
            if address == RETURN:
                require(self.enumerations, 'Unexpected block continuation')
                self.next_callback()
                return
            row = self.rows.get(address)
            if row and row.get('objc_dispatch', {}).get('selector') == 'enumerateKeysAndObjectsUsingBlock:':
                self.visited.add(address)
                value, block = self.value(self.get(0)), self.get(2)
                require(isinstance(value, dict) and 'ordered_pairs' in value, 'Unexpected dictionary enumeration receiver')
                require(self.get64(block + 16) == CALLBACK, 'Unexpected original dictionary block')
                stop = self.obj(('enumeration-stop', block))
                uc.mem_write(stop, bytes(8))
                self.enumerations.append({'position': 0, 'pairs': value['ordered_pairs'], 'block': block,
                    'return': address + 4, 'stop': stop})
                self.calls.append('enumerateKeysAndObjectsUsingBlock:')
                self.next_callback()
                return
            if row and row['mnemonic'] == 'bl' and self.external.get(int(row['call_target'], 16)) == '__Block_object_dispose':
                self.visited.add(address)
                require(self.get(1) == 8, 'Unmodeled block disposal flags')
                self.calls.append('__Block_object_dispose')
                uc.reg_write(arm.UC_ARM64_REG_PC, address + 4)
                return
            super().code(uc, address, size, user)
        except Exception as exception:
            self.error = str(exception)
            uc.emu_stop()


def describe(machine, token):
    if not token:
        return None
    name = machine.value(token)['class_name']
    call = lambda selector: machine.call(token, selector)[0]
    if name == NAMES[0]:
        value, original = call('value'), call('origValue')
        return {'type': call('type'), 'length': call('length'), 'totalLength': call('totalLength'),
            'value': None if not value else bytes(machine.value(value)).hex(), 'origValue': machine.value(original),
            'data': bytes(machine.value(call('data'))).hex()}
    if name == NAMES[1]:
        key, values = call('key'), call('values')
        return {'padding': call('padding'), 'length': call('length'), 'isArray': call('isArray'),
            'key': describe(machine, key), 'values': None if not values else [describe(machine, v) for v in machine.value(values)],
            'totalLenght': call('totalLenght'), 'data': bytes(machine.value(call('data'))).hex()}
    require(name == NAMES[2], 'Unexpected entitlement class')
    blobs = call('blobs')
    return {**{sel: call(sel) for sel in ['magic', 'length', 'byte1', 'byte2', 'blobsLength']},
            'blobs': None if not blobs else [describe(machine, b) for b in machine.value(blobs)],
            'data': bytes(machine.value(call('data'))).hex()}


def cases():
    result = [{'op': 'value', 'value': value} for value in [None, False, True, 0, 1, -1, 42, 0.25, '', 'abc', 'ö💙', [], {}]]
    result += [{'op': 'value', 'value': 'x' * size} for size in [125, 126, 127, 128, 129, 253, 254, 255, 256, 257, 511]]
    result += [{'op': 'blob', 'key': 'example.key', 'value': value} for value in [False, True, 'value', [], ['a'], ['a', True, 1, 0], {}, [['nested']]]]
    result += [{'op': 'blob', 'key': None, 'value': None}]
    result += [{'op': 'blob', 'key': 'k', 'value': ['x' * size]} for size in [120, 121, 122, 123, 124, 125, 126, 127, 128, 250, 251, 252, 253, 254, 255, 256]]
    result += [{'op': 'super', 'pairs': pairs} for pairs in [[], [['get-task-allow', False]], [['application-identifier', 'TESTTEAM.example.recovery']],
        [['test.flag', True], ['test.values', ['a', 'ö💙']], ['test.other', False]]]]
    result += [{'op': 'invalid_super', 'value': value} for value in [None, 'not a dictionary', [], True]]
    for size in range(256):
        result.append({'op': 'raw_value', 'length': size, 'type': (size * 37) & 255})
        result.append({'op': 'raw_blob', 'length': size, 'isArray': size & 1})
    result += [{'op': 'super', 'pairs': [[f'key.{i}', 'x' * 30] for i in range(count)]} for count in [16, 17, 33]]
    result += [{'op': 'super', 'pairs': [[f'key.{i:03}.' + 'k' * 220, True] for i in range(300)]}]
    result += [{'op': 'super', 'pairs': [['valid', True], ['unsupported', {}]]}]
    result += [{'op': 'raw_super', 'blobsLength': size} for size in [0, 1, 255, 256, 257, 0x8000, 65535]]
    result += [{'op': 'header_reads'}]
    result += [{'op': 'destructors'}]
    return result


def evaluate(machine, case):
    op, call = case['op'], machine.call
    if op == 'value':
        token, _ = call(machine.classes[NAMES[0]], 'entitlementValueWithValue:', machine.input(case['value']))
    elif op == 'blob':
        token, _ = call(machine.classes[NAMES[1]], 'blobWithKey:value:', machine.input(case['key']), machine.input(case['value']))
    elif op in ('super', 'invalid_super'):
        data = machine.dictionary(case['pairs']) if op == 'super' else machine.input(case['value'])
        token, _ = call(machine.classes[NAMES[2]], 'supperBlobWithPlist:', data)
    elif op == 'raw_value':
        token = machine.allocate(NAMES[0])
        call(token, 'setType:', case['type'])
        call(token, 'setLength:', case['length'])
        call(token, 'setValue:', machine.obj(b'raw'))
        call(token, 'setOrigValue:', machine.obj('raw-fixture'))
    elif op == 'raw_blob':
        token = machine.allocate(NAMES[1])
        call(token, 'setPadding:', 0xa5)
        call(token, 'setLength:', case['length'])
        call(token, 'setIsArray:', case['isArray'])
        key, _ = call(machine.classes[NAMES[0]], 'entitlementValueWithValue:', machine.obj('k'))
        value, _ = call(machine.classes[NAMES[0]], 'entitlementValueWithValue:', machine.obj(True))
        call(token, 'setKey:', key)
        call(token, 'setValues:', machine.obj([value]))
    elif op in ('raw_super', 'header_reads'):
        token = machine.allocate(NAMES[2])
        call(token, 'setMagic:', 0x12345678)
        call(token, 'setLength:', 0x89abcdef)
        call(token, 'setByte1:', 0xa5)
        call(token, 'setByte2:', 0x5a)
        call(token, 'setBlobsLength:', case.get('blobsLength', 0))
        call(token, 'setBlobs:', machine.obj([]))
        if op == 'header_reads':
            machine.sequences[(token, 'magic')] = [0x12345678, 0x89abcdef, 0x11223344, 0x55667788]
            machine.sequences[(token, 'length')] = [0xfedcba98, 0x76543210, 0x01234567, 0x89abcdef]
            machine.sequences[(token, 'blobsLength')] = [0x1234, 0x5678, 0x9abc, 0xdef0, 0x1357]
            data, _ = call(token, 'data')
            return {'data': bytes(machine.value(data)).hex(), 'reads': {name: machine.instruments[(token, name)] for name in ['magic', 'length', 'blobsLength']}}
    elif op == 'destructors':
        result = {}
        for name in NAMES:
            token = machine.allocate(name)
            fields = [key for key, value in machine.layout[name].items() if value['type_encoding'].startswith('@')]
            for field in fields:
                machine.set_ivar(token, field, machine.obj(('retained-fixture', field)))
            call(token, '.cxx_destruct')
            result[name] = {field: machine.ivar(token, field) for field in fields}
        return result
    else:
        raise ValueError('Unknown entitlement fixture')
    return describe(machine, token)


def native_metadata(metadata):
    return [{'name': name, 'superclass': metadata[name]['superclass'], 'instance_size': metadata[name]['instance_size'],
        'ivars': [{k: v[k] for k in ['name', 'type_encoding', 'offset']} for v in metadata[name]['ivars']],
        'methods': [{k: v[k] for k in ['kind', 'selector', 'type_encoding']} for v in metadata[name]['methods']]} for name in NAMES]


def boundaries_and_branches():
    native = json.loads((ROOT / 'recovered/analysis/native-context.json').read_text())
    metadata = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    boundaries = {int(v, 16) if isinstance(v, str) else v for v in native['declared_function_starts']}
    for cl in metadata['classes'] + metadata['categories']:
        boundaries.update(int(v['implementation'], 16) for v in cl['methods'])
    branches = {int(v['branch'], 16): v for v in csv.DictReader((ROOT / 'recovered/analysis/static-branches.tsv').open(), delimiter='\t')}
    return boundaries, branches


def validate_records(records):
    require(len(records) == 42 and records[-1].get('role') == 'dictionary-enumeration-callback' and
            records[-1]['entry'] == hex(CALLBACK), 'Changed entitlement callback identity')
    base = original_flows()
    require(len(base) == 41, 'Incomplete original entitlement metadata')
    for original, current in zip(base, records):
        require(all(original[k] == current[k] for k in ['class_name', 'selector', 'kind', 'entry', 'abi', 'executable_sha256']),
                'Changed original entitlement method identity')
        old = {r['address']: r for r in original['instructions']}
        new = {r['address']: r for r in current['instructions']}
        require(old.keys() <= new.keys() and all(new[a]['bytes'] == r['bytes'] for a, r in old.items()),
                'Expanded entitlement trace lost original instructions')
        expected = hypotheses(current)
        observed = {int(r['address'], 16): r['finite_call_return_hypothesis'] for r in current['instructions']
                    if 'finite_call_return_hypothesis' in r}
        require(expected == observed, 'Changed entitlement finite call-return hypothesis')
    factory = next(r for r in records if r.get('selector') == 'supperBlobWithPlist:')
    require(any(r['mnemonic'] == 'adr' and r['operands'] == 'x25, #0x10070d5b0' for r in factory['instructions']),
            'Entitlement callback is not referenced by original factory')
    validate_instruction_bytes(records)


def validate_instruction_bytes(records):
    wanted = {int(r['address'], 16): r['bytes'] for f in records for r in f['instructions']}
    found = set()
    manifest = json.loads((ROOT / 'recovered/disassembly/manifest.json').read_text())
    for chunk in manifest['chunks']:
        if not any(int(chunk['vm_start'], 16) <= a < int(chunk['vm_end'], 16) for a in wanted):
            continue
        for line in gzip.decompress((ROOT / 'recovered/disassembly' / chunk['path']).read_bytes()).decode().splitlines():
            match = re.match(r'^([0-9a-fA-F]+)\s+([0-9a-fA-F]{8})\s+', line)
            if match and int(match[1], 16) in wanted:
                address = int(match[1], 16)
                require(wanted[address] == match[2], 'Entitlement instruction differs from original byte listing')
                found.add(address)
    require(found == wanted.keys(), 'Unverified original entitlement instructions')


def sparse_image(evidence, metadata):
    pages, known = {}, set()
    chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
    chunks += [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for f in evidence['records'] for r in f['instructions']]
    for address, data in chunks:
        for offset, byte in enumerate(data):
            at = address + offset
            page = pages.setdefault(at & ~4095, bytearray(4096))
            require(at not in known or page[at & 4095] == byte, 'Conflicting entitlement input bytes')
            page[at & 4095] = byte
            known.add(at)
    starts = {page: i * 4096 for i, page in enumerate(sorted(pages))}
    image = MachO.__new__(MachO)
    image.data = b''.join(bytes(pages[page]) for page in sorted(pages))
    image.sections = metadata['sections']
    def fileoff(address):
        require(all(address + i in known for i in range(4)), 'Missing original entitlement input: ' + hex(address))
        return starts[address & ~4095] + (address & 4095)
    def u64(address):
        require(all(address + i in known for i in range(8)), 'Missing original entitlement table slot: ' + hex(address))
        return int.from_bytes(image.data[fileoff(address):fileoff(address) + 8], 'little')
    image.fileoff, image.u64 = fileoff, u64
    return image


def validate(evidence, metadata, ipa=None):
    from verify_app_analysis import dispatch_evidence
    validate_records(evidence['records'])
    # These two literal records are the original stack-block flags/reserved word
    # and byref flags/size. Their exact input bytes are independently IPA-checkable.
    extra = {0x10097b060: bytes.fromhex('000000c200000000'), 0x10097c650: bytes.fromhex('0000002020000000')}
    validate_inputs(evidence, metadata, ipa, names=NAMES, class_slots=CLASS_SLOTS, extra_inputs=extra)
    baseline = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    image = sparse_image(evidence, baseline)
    dispatch, _ = dispatch_evidence(ROOT)
    boundaries, branches = boundaries_and_branches()
    require(expanded_flows(image, dispatch, boundaries, branches) == evidence['records'],
            'Entitlement expanded flow does not reproduce from original inputs and explicit hypotheses')


def run(ipa=None, original_ipa=None):
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable input')
        image = MachO(data)
        boundaries, branches = boundaries_and_branches()
        records = expanded_flows(image, Dispatch(image), boundaries, branches)
        chunks = [(s['vmaddr'], data[s['fileoff']:s['fileoff'] + s['filesize']] + bytes(s['vmsize'] - s['filesize']))
                  for s in image.segments if s['name'] != '__PAGEZERO']
        classes = {name: int(metadata[name]['address'], 16) for name in NAMES}
        cs, external = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN), {}
        cs.detail = True
        bindings = image.binds
        for record in records:
            for row in record['instructions']:
                if row['mnemonic'] not in ('bl', 'b'):
                    continue
                target = int(row.get('call_target', row['operands'].lstrip('#')), 16)
                off = image.fileoff(target)
                instructions = list(cs.disasm(data[off:off + 12], target))
                if len(instructions) == 3 and [v.mnemonic for v in instructions] == ['adrp', 'ldr', 'br']:
                    slot = instructions[0].operands[1].imm + instructions[1].operands[1].mem.disp
                    if slot in bindings:
                        external[target] = bindings[slot]
    else:
        index = json.loads((OUT / 'index.json').read_text())
        for name, digest in index['files'].items():
            require(Path(name).name == name and hashlib.sha256((OUT / name).read_bytes()).hexdigest() == digest,
                    'Changed entitlement source/evidence file: ' + name)
        evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        validate(evidence, metadata, original_ipa)
        require(json.loads((OUT / 'metadata.json').read_text()) == native_metadata(metadata), 'Changed original entitlement ABI evidence')
        records, classes = evidence['records'], evidence['classes']
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for f in records for r in f['instructions']]
    machine = EntitlementMachine(chunks, records, bindings, classes, external, metadata)
    results = []
    for number, case in enumerate(cases()):
        try:
            result = evaluate(machine, case)
            results.append({'input': case, 'result': result})
        except FoundationError as exception:
            results.append({'input': case, 'exception': str(exception)})
        except Exception as exception:
            raise ValueError(f'Fixture {number}: {case}: {exception}') from exception
    require(all(int(r['entry'], 16) in machine.visited for r in records), 'An original entitlement method/block was never exercised')
    if ipa:
        OUT.mkdir(parents=True, exist_ok=True)
        reads = set(machine.reads) | {(int(slot, 16), 8) for record in records for row in record['instructions'] for slot in row.get('pointer_slots', [])}
        memory = [{'address': hex(address), 'bytes': data[image.fileoff(address):image.fileoff(address) + size].hex()}
                  for address, size in sorted(reads)]
        evidence = {'records': records, 'memory': memory, 'classes': classes,
            'bindings': {hex(a): s for a, s in bindings.items() if any(a == address for address, _ in reads)},
            'external_targets': {hex(a): s for a, s in external.items()}}
        validate(evidence, metadata, ipa)
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'fixtures.json').write_text(json.dumps(results, indent=2) + '\n')
        (OUT / 'metadata.json').write_text(json.dumps(native_metadata(metadata), indent=2) + '\n')
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'classes': 3, 'methods': 41, 'callbacks': 1,
            'fixtures': len(results), 'original_instructions_executed': len(machine.visited),
            'foundation_arc_block_calls_are_models': True, 'dictionary_order_is_controlled': True,
            'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_verified': False,
            'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(results == json.loads((OUT / 'fixtures.json').read_text()), 'Changed original entitlement fixture behavior')
    print(json.dumps({'result': 'PASS', 'classes': 3, 'methods': 41, 'fixtures': len(results),
                     'original_instructions_executed': len(machine.visited), 'full_app_built_or_run': False}, indent=2))
    machine.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--original-ipa', type=Path)
    args = parser.parse_args()
    require(args.verify or args.ipa is not None, 'Supply the exact IPA or --verify')
    run(None if args.verify else args.ipa, args.original_ipa)
