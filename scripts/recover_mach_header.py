#!/usr/bin/env python3
"""Check original Mach-O header methods with explicit runtime/ivar-slide models."""
import argparse
import copy
import gzip
import hashlib
import json
from pathlib import Path
import random
import struct
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_signature_blobs import BlobMachine, validate_inputs, MASK

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/mach-header'
NAMES = ('YYYOffsetNode', 'YYYMachHeader')
# Independently tied to the original pointer-accessor instructions below.
IVAR_SLOTS = {'_machHeader': 0x100c79288, '_machHeader64': 0x100c7928c}


def original_flows():
    return [json.loads(line) for name in NAMES for line in gzip.decompress(
        (ROOT / 'analysis/app-methods' / (name + '.jsonl.gz')).read_bytes()).splitlines()]


def layouts(metadata):
    result = copy.deepcopy(metadata)
    parent, child = result['YYYOffsetNode'], result['YYYMachHeader']
    # Original class_ro instanceStart is 8, parent instanceSize is 24.
    # objc4 reconcileInstanceVariables/moveIvars slides both pointer offsets 16.
    require(parent['instance_size'] == 24 and child['instance_size'] == 24,
            'Unexpected original header class size')
    require([v['offset'] for v in child['ivars']] == [8, 16] and
            all(v['alignment'] == 3 and v['size'] == 8 for v in child['ivars']),
            'Unexpected original header ivar layout')
    for field in child['ivars']:
        field['offset'] += 16
    child['instance_size'] += 16
    return result


def native_metadata(metadata):
    result = []
    for name in NAMES:
        cl = metadata[name]
        result.append({'name': name, 'superclass': cl['superclass'], 'instance_size': cl['instance_size'],
            'ivars': [{key: field[key] for key in ['name', 'type_encoding', 'offset']} for field in cl['ivars']],
            'methods': [{key: method[key] for key in ['kind', 'selector', 'type_encoding']} for method in cl['methods']]})
    return result


class HeaderMachine(BlobMachine):
    def __init__(self, chunks, records, bindings, classes, external, metadata):
        super().__init__(chunks, records, bindings, classes, external, metadata, names=NAMES)
        runtime = layouts(metadata)
        self.layout = {name: {v['name']: v for v in runtime[name]['ivars']} for name in NAMES}
        self.layout['YYYMachHeader'] = {**self.layout['YYYOffsetNode'], **self.layout['YYYMachHeader']}
        for key, entry in list(self.entries.items()):
            if key[0] == 'YYYOffsetNode':
                self.entries[('YYYMachHeader', *key[1:])] = entry
        # Model the runtime's data fixups; never modify original instructions.
        for field in runtime['YYYMachHeader']['ivars']:
            self.uc.mem_write(IVAR_SLOTS[field['name']], struct.pack('<I', field['offset']))


def cases():
    offsets = [0, 1, -1, -32, 0x123456789, -(1 << 63), (1 << 63) - 1]
    result = [{'op': 'node', 'offset': str(offset), 'swap': swap} for offset in offsets for swap in [0, 1]]
    words = [0, 1, 0x12345678, 0x80000000, 0xfffffffe, 0xffffffff]
    for mode in ['32', '64', 'both']:
        for swap in [0, 1]:
            for i, word in enumerate(words):
                header32 = struct.pack('<7I', 0xcefaedfe if swap else 0xfeedface, 7, 3, word, words[(i+1)%6], words[(i+2)%6], 0x81234567)
                header64 = struct.pack('<8I', 0xcffaedfe if swap else 0xfeedfacf, 0x100000c, 0, words[(i+3)%6], words[(i+4)%6], words[(i+5)%6], 0xfedcba98, 0xa5a5a5a5)
                result.append({'op': 'header', 'mode': mode, 'swap': swap, 'offset': str(offsets[i]),
                    'h32': header32.hex(), 'h64': header64.hex(), 'ncmds': word, 'sizeofcmds': words[(i+1)%6]})
    rng = random.Random(502)
    for _ in range(16):
        result.append({'op': 'header', 'mode': rng.choice(['32', '64', 'both']), 'swap': rng.randrange(2),
            'offset': str(rng.randrange(-(1 << 63), 1 << 63)), 'h32': rng.randbytes(28).hex(),
            'h64': rng.randbytes(32).hex(), 'ncmds': rng.getrandbits(32), 'sizeofcmds': rng.getrandbits(32)})
    result += [{'op': 'empty_header'}]
    return result


def signed(value):
    return str(value - (1 << 64) if value & (1 << 63) else value)


def evaluate(machine, case):
    name = 'YYYOffsetNode' if case['op'] == 'node' else 'YYYMachHeader'
    token = machine.allocate(name)
    call = lambda sel, *args: machine.call(token, sel, *args)[0]
    # Verify original initialization resets populated parent state.
    machine.set_ivar(token, '_offset', 0xa5a5a5a5a5a5a5a5)
    machine.set_ivar(token, '_shouldSwap', 1)
    initialized = call('init')
    require(initialized == token, 'Unexpected modeled init result')
    initial = {'offset': signed(call('offset')), 'swap': call('shouldSwap')}
    if case['op'] == 'empty_header':
        return {'initial': initial, 'header_size': call('header_size'), 'load_commands_offset': signed(call('load_commands_offset')),
                'has32': bool(call('machHeader')), 'has64': bool(call('machHeader64'))}
    call('setOffset:', int(case['offset']) & MASK)
    call('setShouldSwap:', case['swap'])
    result = {'initial': initial, 'offset': signed(call('offset')), 'swap': call('shouldSwap')}
    if case['op'] == 'node':
        return result
    h32, h64 = machine.obj(('header32', token)), machine.obj(('header64', token))
    machine.uc.mem_write(h32, bytes.fromhex(case['h32']))
    machine.uc.mem_write(h64, bytes.fromhex(case['h64']))
    call('setMachHeader:', h32 if case['mode'] != '64' else 0)
    call('setMachHeader64:', h64 if case['mode'] != '32' else 0)
    result.update({'has32': call('machHeader') == h32, 'has64': call('machHeader64') == h64,
                   'header_size': call('header_size'), 'load_commands_offset': signed(call('load_commands_offset')),
                   'before': {sel: call(sel) for sel in ['magic', 'filetype', 'ncmds', 'sizeofcmds']}})
    call('setNcmds:', case['ncmds'])
    call('setSizeofcmds:', case['sizeofcmds'])
    result.update({'after': {sel: call(sel) for sel in ['magic', 'filetype', 'ncmds', 'sizeofcmds']},
                   'h32_after': bytes(machine.uc.mem_read(h32, 28)).hex(),
                   'h64_after': bytes(machine.uc.mem_read(h64, 32)).hex(),
                   'offset_after': signed(call('offset')), 'swap_after': call('shouldSwap')})
    return result


def validate(evidence, metadata, ipa=None):
    records = evidence['records']
    require(records == original_flows() and len(records) == 17, 'Changed original header method evidence')
    # Slot addresses are derived from independently preserved accessor opcodes.
    for selector, slot in [('machHeader', IVAR_SLOTS['_machHeader']), ('machHeader64', IVAR_SLOTS['_machHeader64'])]:
        rows = next(r['instructions'] for r in records if r['selector'] == selector)
        loads = [r for r in rows if r['mnemonic'] == 'ldrsw']
        require(len(loads) == 1 and loads[0]['operands'] == ('x8, [x8, #0x288]' if selector == 'machHeader' else 'x8, [x8, #0x28c]'),
                'Changed original ivar-offset lookup')
        require(any(r['mnemonic'] == 'adrp' and r['operands'] == 'x8, #0x100c79000' for r in rows),
                'Changed original ivar-offset page')
    extra = {IVAR_SLOTS[v['name']]: struct.pack('<I', v['offset']) for v in metadata['YYYMachHeader']['ivars']}
    validate_inputs(evidence, metadata, ipa, names=NAMES, class_slots={0x100c74bd8: 'YYYOffsetNode'}, extra_inputs=extra)
    require(evidence['runtime_model'] == {'original_child_instance_start': 8, 'ivar_slide': 16,
        'objc4_ivar_realization_modeled': True, 'original_device_layout_observed': False}, 'Changed header runtime model')


def run(ipa=None, original_ipa=None):
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable input')
        image = MachO(data)
        ro = image.class_ro(int(metadata['YYYMachHeader']['address'], 16))
        require(image.u32(ro + 4) == 8, 'Unexpected original child instanceStart')
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
                    'Changed header source/evidence file: ' + name)
        validate(evidence, metadata, original_ipa)
        require(json.loads((OUT / 'metadata.json').read_text()) == native_metadata(layouts(metadata)), 'Changed realized header ABI evidence')
        records, classes = evidence['records'], evidence['classes']
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(row['address'], 16), bytes.fromhex(row['bytes'])) for r in records for row in r['instructions']]
    machine = HeaderMachine(chunks, records, bindings, classes, external, metadata)
    results = [{'input': case, 'result': evaluate(machine, case)} for case in cases()]
    require(all(int(r['entry'], 16) in machine.visited for r in records), 'An original header method was never exercised')
    if ipa:
        memory, used_bindings = [], {}
        for address, size in sorted(machine.reads):
            off = image.fileoff(address)
            memory.append({'address': hex(address), 'bytes': data[off:off + size].hex()})
            if address in bindings:
                used_bindings[address] = bindings[address]
        evidence = {'records': records, 'classes': classes, 'memory': memory,
                    'bindings': {hex(k): v for k, v in used_bindings.items()},
                    'external_targets': {hex(k): v for k, v in external.items()},
                    'runtime_model': {'original_child_instance_start': 8, 'ivar_slide': 16,
                        'objc4_ivar_realization_modeled': True, 'original_device_layout_observed': False}}
        validate(evidence, metadata, ipa)
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'fixtures.json').write_text(json.dumps(results, indent=2) + '\n')
        (OUT / 'metadata.json').write_text(json.dumps(native_metadata(layouts(metadata)), indent=2) + '\n')
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'classes': 2, 'methods': 17,
                 'fixtures': len(results), 'original_instructions_executed': len(machine.visited),
                 'objc_runtime_calls_are_models': True, 'ivar_slide_modeled': True,
                 'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_verified': False,
                 'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(results == json.loads((OUT / 'fixtures.json').read_text()), 'Changed original header fixture behavior')
    print(json.dumps({'result': 'PASS', 'classes': 2, 'methods': 17, 'fixtures': len(results),
                     'original_instructions_executed': len(machine.visited), 'ivar_slide_is_modeled': True,
                     'full_app_built_or_run': False}, indent=2))
    machine.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--original-ipa', type=Path)
    args = parser.parse_args()
    require(args.verify or args.ipa is not None, 'Supply the exact IPA or --verify')
    run(None if args.verify else args.ipa, args.original_ipa)
