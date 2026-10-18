#!/usr/bin/env python3
"""Check original Mach-O command wrappers, inherited layout, and copy setters."""
import argparse
import copy
import gzip
import hashlib
import json
from pathlib import Path
import struct
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_signature_blobs import BlobMachine, validate_inputs, MASK

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/load-commands'
NAMES = ('YYYOffsetNode', 'YYYLoadCommand', 'YYYDylibCommand', 'YYYRPathCommand', 'YYYlinkeditDataCommand', 'YYYSegmentCommand')
POINTERS = {'YYYLoadCommand': ['loadCmd'], 'YYYDylibCommand': ['loadCmd', 'dylibCmd'],
            'YYYRPathCommand': ['loadCmd', 'rpathCmd'], 'YYYlinkeditDataCommand': ['loadCmd', 'linkeditDataCommand'],
            'YYYSegmentCommand': ['loadCmd', 'segmentCommand', 'segmentCommand64']}
COPY_FIELDS = {'YYYDylibCommand': 'linkName', 'YYYRPathCommand': 'path'}


def original_flows():
    return [json.loads(line) for name in NAMES for line in gzip.decompress(
        (ROOT / 'analysis/app-methods' / (name + '.jsonl.gz')).read_bytes()).splitlines()]


def offset_slots(records, metadata):
    cs = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    cs.detail = True
    result = {}
    for name in NAMES[1:]:
        for field in metadata[name]['ivars']:
            getter = next(r for r in records if r['class_name'] == name and r['selector'] == field['name'][1:])
            pages, slots = {}, []
            for row in getter['instructions']:
                ins = next(cs.disasm(bytes.fromhex(row['bytes']), int(row['address'], 16)))
                if ins.mnemonic == 'adrp':
                    pages[ins.reg_name(ins.operands[0].reg)] = ins.operands[1].imm
                elif ins.mnemonic == 'ldrsw':
                    mem = ins.operands[1].mem
                    base = pages.get(ins.reg_name(mem.base))
                    require(base is not None and not mem.index, 'Unrecognized command ivar lookup')
                    slots.append(base + mem.disp)
            require(len(slots) == 1, 'Ambiguous command ivar lookup')
            result[(name, field['name'])] = slots[0]
    return result


def layouts(metadata):
    result = copy.deepcopy(metadata)
    require(result['YYYOffsetNode']['instance_size'] == 24, 'Unexpected command parent size')
    for name in NAMES[1:]:
        cl = result[name]
        require(min(v['offset'] for v in cl['ivars']) == 8 and all(v['alignment'] == 3 for v in cl['ivars']),
                'Unexpected command initial ivar layout')
        parent = result[cl['superclass']]
        shift = (parent['instance_size'] - 8 + 7) & ~7
        for field in cl['ivars']:
            field['offset'] += shift
        cl['instance_size'] += shift
    return result


def native_metadata(metadata):
    return [{'name': name, 'superclass': metadata[name]['superclass'], 'instance_size': metadata[name]['instance_size'],
        'ivars': [{key: field[key] for key in ['name', 'type_encoding', 'offset']} for field in metadata[name]['ivars']],
        'methods': [{key: method[key] for key in ['kind', 'selector', 'type_encoding']} for method in metadata[name]['methods']]} for name in NAMES]


class CommandMachine(BlobMachine):
    def __init__(self, chunks, records, bindings, classes, external, metadata):
        super().__init__(chunks, records, bindings, classes, external, metadata, names=NAMES)
        runtime = layouts(metadata)
        slots = offset_slots(records, metadata)
        for name in NAMES:
            inherited = self.layout.get(metadata[name]['superclass'], {})
            self.layout[name] = {**inherited, **{v['name']: v for v in runtime[name]['ivars']}}
            for (owner, kind, selector), entry in list(self.entries.items()):
                if owner == metadata[name]['superclass']:
                    self.entries.setdefault((name, kind, selector), entry)
            if name == NAMES[0]:
                continue
            for field in runtime[name]['ivars']:
                self.uc.mem_write(slots[(name, field['name'])], struct.pack('<I', field['offset']))

    def code(self, uc, address, size, user):
        try:
            row = self.rows.get(address)
            if row and row['mnemonic'] == 'bl' and self.external.get(int(row['call_target'], 16)) == '_objc_setProperty_nonatomic_copy':
                self.visited.add(address)
                receiver, value, offset = self.get(0), self.get(2), self.get(3)
                name = self.value(receiver)['class_name']
                require(name in COPY_FIELDS and offset == self.layout[name]['_' + COPY_FIELDS[name]]['offset'],
                        'Unexpected original copy setter offset')
                original = self.value(value)
                if isinstance(original, dict):
                    require(set(original) == {'mutable_string'}, 'Unsupported original copy input')
                    original = original['mutable_string']
                require(original is None or isinstance(original, str), 'Unsupported original copied object')
                self.put64(receiver + offset, self.obj(original))
                self.calls.append('_objc_setProperty_nonatomic_copy')
                uc.reg_write(arm.UC_ARM64_REG_X0, 0)
                uc.reg_write(arm.UC_ARM64_REG_LR, address + 4)
                uc.reg_write(arm.UC_ARM64_REG_PC, address + 4)
                return
            super().code(uc, address, size, user)
        except Exception as exception:
            self.error = str(exception)
            uc.emu_stop()


def setter(property_name):
    return 'set' + property_name[0].upper() + property_name[1:] + ':'


def cases():
    words = [0, 1, 0x12345678, 0x80000000, 0xfffffffe, 0xffffffff]
    result = [{'op': 'command', 'class': name, 'cmd': word, 'cmdSize': words[(i + 1) % len(words)], 'swap': swap}
              for name in NAMES[1:] for i, word in enumerate(words) for swap in [0, 1]]
    result += [{'op': 'null_pointers', 'class': name} for name in NAMES[1:]]
    result += [{'op': 'copy', 'class': name, 'value': value, 'mutable': mutable}
               for name in COPY_FIELDS for value in [None, '', 'before', 'ö💙', 'x' * 256] for mutable in [False, True]]
    return result + [{'op': 'destructors'}]


def evaluate(machine, case):
    if case['op'] == 'destructors':
        result = {}
        for name, field in COPY_FIELDS.items():
            token = machine.allocate(name)
            machine.call(token, setter(field), machine.obj('owned-fixture'))
            machine.call(token, 'setOffset:', 0x123456789)
            machine.call(token, '.cxx_destruct')
            value, _ = machine.call(token, field)
            result[name] = {'cleared': value == 0, 'offset': machine.call(token, 'offset')[0]}
        return result
    name = case['class']
    token = machine.allocate(name)
    call = lambda selector, *args: machine.call(token, selector, *args)[0]
    call('init')
    initial = {'offset': call('offset'), 'swap': call('shouldSwap')}
    call('setOffset:', 0x123456789)
    call('setShouldSwap:', case.get('swap', 1))
    if case['op'] == 'copy':
        field, value = COPY_FIELDS[name], case['value']
        original = {'mutable_string': value} if case['mutable'] and value is not None else value
        call(setter(field), machine.obj(original))
        if isinstance(original, dict):
            original['mutable_string'] = 'after-mutation'
        copied = machine.value(call(field))
        call(setter(field), 0)
        return {'initial': initial, 'copied': copied, 'cleared': call(field) == 0,
                'offset': call('offset'), 'swap': call('shouldSwap')}
    if case['op'] == 'null_pointers':
        for field in POINTERS[name]:
            call(setter(field), 0)
        return {'initial': initial, 'nulls': {field: call(field) == 0 for field in POINTERS[name]},
                'offset': call('offset'), 'swap': call('shouldSwap')}
    pointers = {}
    for i, field in enumerate(POINTERS[name]):
        pointer = machine.obj(('command-bytes', token, field))
        machine.uc.mem_write(pointer, struct.pack('<II', case['cmd'], case['cmdSize']) + bytes([0xa5 + i]) * 120)
        pointers[field] = pointer
        call(setter(field), pointer)
    before = {'cmd': call('cmd'), 'cmdSize': call('cmdSize')}
    pointer_results = {field: call(field) == pointer for field, pointer in pointers.items()}
    raw = struct.pack('<II', case['cmd'] ^ 0xffffffff, case['cmdSize'] ^ 0x12345678)
    machine.uc.mem_write(pointers['loadCmd'], raw)
    return {'initial': initial, 'pointers': pointer_results, 'before': before,
        'after': {'cmd': call('cmd'), 'cmdSize': call('cmdSize')}, 'loadBytes': bytes(machine.uc.mem_read(pointers['loadCmd'], 8)).hex(),
        'offset': call('offset'), 'swap': call('shouldSwap')}


def validate(evidence, metadata, ipa=None):
    # This component reuses the base methods unchanged; every record matches the
    # independently preserved baseline trace, unlike the bounded encoder pass.
    require(evidence['records'] == original_flows() and len(evidence['records']) == 25, 'Changed original command method evidence')
    slots = offset_slots(evidence['records'], metadata)
    extra = {slot: struct.pack('<I', next(v['offset'] for v in metadata[name]['ivars'] if v['name'] == field))
             for (name, field), slot in slots.items()}
    validate_inputs(evidence, metadata, ipa, names=NAMES, class_slots={0x100c74bd8: 'YYYOffsetNode'}, extra_inputs=extra)
    expected = {'original_device_layout_observed': False, 'nonfragile_ivar_slides_modeled': True,
                'original_child_instance_starts': {name: 8 for name in NAMES[1:]}}
    require(evidence['runtime_model'] == expected, 'Changed command layout model/status')
    require(evidence['parent_sources'] == parent_sources(), 'Changed reconstructed parent source dependency')


def parent_sources():
    return {name: hashlib.sha256((ROOT / 'reconstruction/mach-header' / name).read_bytes()).hexdigest()
            for name in ['ESignMachHeader.h', 'ESignMachHeader.m']}


def run(ipa=None, original_ipa=None):
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable input')
        image = MachO(data)
        require(all(image.u32(image.class_ro(int(metadata[name]['address'], 16)) + 4) == 8 for name in NAMES[1:]),
                'Unexpected original command instanceStart')
        records = original_flows()
        bindings = image.binds
        classes = {name: int(metadata[name]['address'], 16) for name in NAMES}
        chunks = [(s['vmaddr'], data[s['fileoff']:s['fileoff'] + s['filesize']] + bytes(s['vmsize'] - s['filesize']))
                  for s in image.segments if s['name'] != '__PAGEZERO']
        external = {}
        cs = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
        cs.detail = True
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
        evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        index = json.loads((OUT / 'index.json').read_text())
        for name, digest in index['files'].items():
            require(Path(name).name == name and hashlib.sha256((OUT / name).read_bytes()).hexdigest() == digest,
                    'Changed command source/evidence file: ' + name)
        validate(evidence, metadata, original_ipa)
        require(json.loads((OUT / 'metadata.json').read_text()) == native_metadata(layouts(metadata)), 'Changed derived command ABI evidence')
        records, classes = evidence['records'], evidence['classes']
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(row['address'], 16), bytes.fromhex(row['bytes'])) for r in records for row in r['instructions']]
    machine = CommandMachine(chunks, records, bindings, classes, external, metadata)
    results = [{'input': case, 'result': evaluate(machine, case)} for case in cases()]
    require(all(int(r['entry'], 16) in machine.visited for r in records), 'An original command method was never exercised')
    if ipa:
        memory, used_bindings = [], {}
        for address, size in sorted(machine.reads):
            off = image.fileoff(address)
            memory.append({'address': hex(address), 'bytes': data[off:off + size].hex()})
            if address in bindings:
                used_bindings[address] = bindings[address]
        evidence = {'records': records, 'classes': classes, 'memory': memory,
            'bindings': {hex(k): v for k, v in used_bindings.items()}, 'external_targets': {hex(k): v for k, v in external.items()},
            'runtime_model': {'original_device_layout_observed': False, 'nonfragile_ivar_slides_modeled': True,
                              'original_child_instance_starts': {name: 8 for name in NAMES[1:]}},
            'parent_sources': parent_sources()}
        validate(evidence, metadata, ipa)
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'fixtures.json').write_text(json.dumps(results, indent=2) + '\n')
        (OUT / 'metadata.json').write_text(json.dumps(native_metadata(layouts(metadata)), indent=2) + '\n')
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'new_classes': 5, 'new_methods': 20,
            'reused_parent_classes': 1, 'reused_parent_methods': 5, 'fixtures': len(results),
            'original_instructions_executed': len(machine.visited), 'runtime_and_copy_calls_are_models': True,
            'ivar_slides_modeled': True, 'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_verified': False,
            'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(results == json.loads((OUT / 'fixtures.json').read_text()), 'Changed original command fixture behavior')
    print(json.dumps({'result': 'PASS', 'new_classes': 5, 'new_methods': 20, 'reused_parent_methods': 5,
        'fixtures': len(results), 'original_instructions_executed': len(machine.visited), 'full_app_built_or_run': False}, indent=2))
    machine.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--original-ipa', type=Path)
    args = parser.parse_args()
    require(args.verify or args.ipa is not None, 'Supply the exact IPA or --verify')
    run(None if args.verify else args.ipa, args.original_ipa)
