#!/usr/bin/env python3
"""Translate a restricted original ARM64 accessor subset to tested machine-level C.

No Objective-C class, app, signing engine, or replacement behavior is invented.
The C entry points require the original object layout. They are reconstruction
fragments, not the author's source or a complete app target.
"""
import argparse
import ctypes
import gzip
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess
import tempfile
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, CS_OP_IMM, CS_OP_MEM, CS_OP_REG
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/scalar-accessors'
OBJECT, OBJECT_SIZE, STOP = 0x200000000, 4096, 0x300000000
MASK = (1 << 64) - 1
SCALARS = {'B': 1, 'C': 1, 'S': 2, 'I': 4, 'Q': 8, 'q': 8}


def register(ins, number):
    name = ins.reg_name(number)
    return 'x' + name[1:] if name.startswith('w') else name


def recognize(flow, ivar, setter):
    """Require one finite linear path and a small, explicitly modeled idiom."""
    require(flow['unresolved_indirect_jumps'] == 0, 'unresolved control flow')
    rows = {int(row['address'], 16): row for row in flow['instructions']}
    cursor, seen, expressions = int(flow['entry'], 16), set(), {'x2': 'argument'}
    cs = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    cs.detail = True
    reads, stores, compare = 0, 0, None
    offset, width = ivar['offset'], SCALARS[ivar['type_encoding']]
    require(0 <= offset < OBJECT_SIZE - width, 'unsupported original layout size')
    while cursor not in seen:
        require(cursor in rows, 'path leaves recorded original instructions')
        seen.add(cursor)
        row = rows[cursor]
        ins = next(cs.disasm(bytes.fromhex(row['bytes']), cursor, count=1), None)
        require(ins is not None and ins.size == 4, 'undecodable original instruction')
        name, ops = ins.mnemonic, ins.operands
        if name in ('adr', 'adrp'):
            require(len(ops) == 2 and ops[0].type == CS_OP_REG and register(ins, ops[0].reg) not in ('x0', 'x2'), 'address clobbers argument')
            expressions.pop(register(ins, ops[0].reg), None)
        elif name in ('ldr', 'ldrb', 'ldrh'):
            require(len(ops) == 2 and ops[1].type == CS_OP_MEM and not ins.writeback, 'unsupported load')
            mem = ops[1].mem
            require(not mem.index, 'indexed load')
            dest, base = register(ins, ops[0].reg), register(ins, mem.base)
            if base == 'x0':
                actual_width = {'ldrb': 1, 'ldrh': 2}.get(name, 4 if ins.reg_name(ops[0].reg).startswith('w') else 8)
                require(not setter and reads == 0 and mem.disp == offset and actual_width == width, 'load is not the original scalar ivar')
                expressions[dest] = 'value'
                reads += 1
            else:
                require(name == 'ldr' and dest not in ('x0', 'x2') and base not in expressions, 'unsupported non-ivar load')
                expressions.pop(dest, None)
        elif name in ('str', 'strb', 'strh'):
            require(setter and len(ops) == 2 and ops[1].type == CS_OP_MEM and not ins.writeback, 'unsupported store')
            mem = ops[1].mem
            actual_width = {'strb': 1, 'strh': 2}.get(name, 4 if ins.reg_name(ops[0].reg).startswith('w') else 8)
            require(register(ins, mem.base) == 'x0' and not mem.index and mem.disp == offset and actual_width == width,
                    'store is not the original scalar ivar')
            require(expressions.get(register(ins, ops[0].reg)) == 'argument' and stores == 0, 'store transforms the original argument')
            stores += 1
        elif name == 'cmp':
            require(len(ops) == 2 and ops[0].type == CS_OP_REG and ops[1].type == CS_OP_IMM and ops[1].imm == 0,
                    'unsupported comparison')
            compare = expressions.get(register(ins, ops[0].reg))
            require(compare == 'value', 'comparison is not the scalar value')
        elif name == 'cset':
            require(compare == 'value' and ins.op_str.split(',')[-1].strip() == 'ne', 'unsupported condition')
            expressions[register(ins, ops[0].reg)] = '(value != 0)'
        elif name == 'mov':
            require(len(ops) == 2 and all(op.type == CS_OP_REG for op in ops), 'unsupported move')
            source = expressions.get(register(ins, ops[1].reg))
            require(source is not None, 'move has unknown source')
            expressions[register(ins, ops[0].reg)] = source
        elif name == 'ret':
            require(len(seen) == len(rows), 'trace has unvisited alternatives')
            if setter:
                require(stores == 1 and reads == 0, 'setter memory effect is incomplete')
                return 'argument'
            require(reads == 1 and stores == 0 and expressions.get('x0') in ('value', '(value != 0)'), 'getter result is unknown')
            return expressions['x0']
        else:
            require(name in ('br', 'nop'), 'unsupported scalar instruction: ' + name)
        require(len(row['successors']) == 1, 'nonlinear or incomplete control flow')
        cursor = int(row['successors'][0], 16)
    raise ValueError('cyclic scalar trace')


class Emulator:
    def __init__(self, chunks):
        self.uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        pages = set()
        for address, raw in chunks:
            pages.update(range(address & ~4095, (address + len(raw) + 4095) & ~4095, 4096))
        for page in sorted(pages):
            self.uc.mem_map(page, 4096)
        for address, raw in chunks:
            self.uc.mem_write(address, raw)
        self.uc.mem_map(OBJECT, OBJECT_SIZE)
        self.allowed, self.reads, self.violation = set(), {}, None
        self.uc.hook_add(UC_HOOK_CODE, self.code)
        self.uc.hook_add(UC_HOOK_MEM_WRITE, self.write)
        self.uc.hook_add(UC_HOOK_MEM_READ, self.read)

    def code(self, uc, address, size, _):
        if address not in self.allowed:
            self.violation = 'Execution left the recorded accessor'
            uc.emu_stop()

    def write(self, uc, _access, address, size, _value, _):
        if not OBJECT <= address or address + size > OBJECT + OBJECT_SIZE:
            self.violation = 'Original code wrote outside the controlled object'
            uc.emu_stop()

    def read(self, uc, _access, address, size, _value, _):
        if not OBJECT <= address < OBJECT + OBJECT_SIZE:
            self.reads[(address, size)] = bytes(uc.mem_read(address, size)).hex()

    def run(self, record, initial, argument):
        self.allowed = {int(row['address'], 16) for row in record['instructions']}
        self.reads, self.violation = {}, None
        self.uc.mem_write(OBJECT, initial)
        for number in range(29):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(number)), 0)
        self.uc.reg_write(arm.UC_ARM64_REG_FP, 0)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, STOP)
        self.uc.reg_write(arm.UC_ARM64_REG_NZCV, 0)
        self.uc.reg_write(arm.UC_ARM64_REG_X0, OBJECT)
        self.uc.reg_write(arm.UC_ARM64_REG_X2, argument)
        self.uc.emu_start(int(record['entry'], 16), STOP, count=256)
        require(self.violation is None, str(self.violation))
        require(self.uc.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Original accessor did not return')
        return self.uc.reg_read(arm.UC_ARM64_REG_X0), bytes(self.uc.mem_read(OBJECT, OBJECT_SIZE)), dict(self.reads)


def source(records):
    lines = ['/* Machine-level C reconstructions of a restricted original accessor subset.',
             ' * Original object offsets and register effects only; not the original source project.',
             ' * These fragments neither define Objective-C classes nor register method implementations.',
             ' * See evidence.json.gz and index.json; no app or iPhone run is implied. */',
             '#include <stdint.h>', '#include <stddef.h>', '#include <string.h>', '']
    for record in records:
        ident, width, offset = record['c_symbol'], record['width'], record['offset']
        lines.append(f"/* {record['kind']}[{record['class_name']} {record['selector']}] at {record['entry']}; ABI {record['abi']} */")
        ctype = f'uint{width * 8}_t'
        if record['setter']:
            lines += [f'void {ident}(void *object, uintptr_t selector, uint64_t argument) {{',
                      f'    (void)selector; {ctype} value = ({ctype})argument;',
                      f'    memcpy((unsigned char *)object + {offset}, &value, sizeof value);', '}']
        else:
            lines += [f'uint64_t {ident}(const void *object, uintptr_t selector) {{',
                      f'    (void)selector; {ctype} value;',
                      f'    memcpy(&value, (const unsigned char *)object + {offset}, sizeof value);',
                      f"    return {record['expression']};", '}']
        lines.append('')
    return '\n'.join(lines)


def fixtures(width):
    return list(range(256)) if width == 1 else [0, 1, 2, 127, 128, 255, 256, 65535, 65536,
                0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x7fffffffffffffff, 0x8000000000000000, MASK]


def compare(records, emulator, library):
    cases = 0
    for record in records:
        function = getattr(library, record['c_symbol'])
        function.argtypes = [ctypes.c_void_p, ctypes.c_size_t] + ([ctypes.c_uint64] if record['setter'] else [])
        function.restype = None if record['setter'] else ctypes.c_uint64
        data_reads = {}
        for number in fixtures(record['width']):
            initial = bytearray([0xA5] * OBJECT_SIZE)
            initial[record['offset']:record['offset'] + record['width']] = (number & ((1 << (8 * record['width'])) - 1)).to_bytes(record['width'], 'little')
            native_return, native_memory, reads = emulator.run(record, bytes(initial), number)
            data_reads.update(reads)
            buffer = ctypes.create_string_buffer(bytes(initial), OBJECT_SIZE)
            translated_return = function(buffer, 0, number) if record['setter'] else function(buffer, 0)
            require(buffer.raw == native_memory, 'C/original memory mismatch: ' + record['c_symbol'])
            require(record['setter'] or translated_return == native_return, 'C/original return mismatch: ' + record['c_symbol'])
            cases += 1
        record['initial_image_data_reads'] = [{'address': hex(address), 'bytes': raw} for (address, _), raw in sorted(data_reads.items())]
    return cases


def compiled_check(records, emulator, c_path):
    with tempfile.TemporaryDirectory(prefix='esign-scalar-') as directory:
        library = Path(directory) / 'scalar.so'
        subprocess.run(['cc', '-std=c11', '-Wall', '-Wextra', '-Werror', '-O2', '-shared', '-fPIC',
                        str(c_path), '-o', str(library)], check=True)
        return compare(records, emulator, ctypes.CDLL(str(library)))


def recover(ipa):
    with zipfile.ZipFile(ipa) as archive:
        data = archive.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong original executable')
    # Load complete file-backed segment bytes, including inter-section pointer data.
    pos = 32
    chunks = []
    for _ in range(struct.unpack_from('<I', data, 16)[0]):
        command, size = struct.unpack_from('<II', data, pos)
        if command == 0x19:
            address, _vmsize, offset, filesize = struct.unpack_from('<QQQQ', data, pos + 24)
            if filesize:
                chunks.append((address, data[offset:offset + filesize]))
        pos += size
    emulator = Emulator(chunks)
    metadata = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    records, skipped = [], []
    for cl in metadata['classes']:
        if not cl['name'].startswith('YYY'):
            continue
        trace = ROOT / 'analysis/app-methods' / (cl['name'] + '.jsonl.gz')
        if not trace.is_file():
            continue
        flows = {(flow['kind'], flow['selector']): flow for flow in
                 (json.loads(line) for line in gzip.decompress(trace.read_bytes()).splitlines())}
        ivars = {ivar['name']: ivar for ivar in cl['ivars']}
        for prop in cl['properties']:
            attributes = prop['attributes'].split(',')
            original_type = attributes[0][1:]
            if original_type not in SCALARS:
                continue
            name = next((part[1:] for part in attributes if part.startswith('V')), None)
            if name not in ivars or ivars[name]['type_encoding'] != original_type:
                continue
            getter = next((part[1:] for part in attributes if part.startswith('G')), prop['name'])
            setter = next((part[1:] for part in attributes if part.startswith('S')), 'set' + prop['name'][0].upper() + prop['name'][1:] + ':')
            for selector, is_setter in [(getter, False), (setter, True)]:
                flow = flows.get(('-', selector))
                if flow is None:
                    continue
                try:
                    expression = recognize(flow, ivars[name], is_setter)
                except ValueError as exception:
                    skipped.append({'class_name': cl['name'], 'selector': selector, 'reason': str(exception)})
                    continue
                records.append({key: flow[key] for key in ['class_name', 'kind', 'selector', 'abi', 'entry', 'instructions']})
                records[-1].update(property=prop['name'], ivar=name, original_type=original_type,
                        offset=ivars[name]['offset'], width=SCALARS[original_type], setter=is_setter,
                        expression=expression, c_symbol=f'esign_scalar_{len(records)-1:04}')
    require(bool(records), 'No recognized original accessors')
    OUT.mkdir(parents=True, exist_ok=True)
    c_path = OUT / 'accessors.c'
    c_path.write_text(source(records))
    cases = compiled_check(records, emulator, c_path)
    evidence = gzip.compress(json.dumps(records, separators=(',', ':')).encode(), mtime=0)
    (OUT / 'evidence.json.gz').write_bytes(evidence)
    index = {'input_ipa_sha256': hashlib.sha256(Path(ipa).read_bytes()).hexdigest(), 'executable_sha256': EXPECTED_EXECUTABLE,
             'methods_translated': len(records), 'fixture_comparisons': cases, 'unicorn_version': '2.1.4',
             'classes': len({record['class_name'] for record in records}), 'unsupported_methods': skipped,
             'source_sha256': hashlib.sha256(c_path.read_bytes()).hexdigest(), 'evidence_sha256': hashlib.sha256(evidence).hexdigest(),
             'original_image_pointer_values_assumed': True, 'original_object_layout_required': True,
             'full_app_semantic_equivalence_verified': False, 'source_built_ipa': False, 'iphone_runtime_verified': False}
    (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    print(json.dumps({key: value for key, value in index.items() if key != 'unsupported_methods'}, indent=2))


def verify():
    index = json.loads((OUT / 'index.json').read_text())
    require(hashlib.sha256((OUT / 'accessors.c').read_bytes()).hexdigest() == index['source_sha256'], 'Changed C source')
    evidence = (OUT / 'evidence.json.gz').read_bytes()
    require(hashlib.sha256(evidence).hexdigest() == index['evidence_sha256'], 'Changed original-code evidence')
    records = json.loads(gzip.decompress(evidence))
    validate_records(records)
    require(source(records) == (OUT / 'accessors.c').read_text(), 'C source disagrees with the recorded translation')
    chunks = []
    for record in records:
        for row in record['instructions']:
            chunks.append((int(row['address'], 16), bytes.fromhex(row['bytes'])))
        for row in record['initial_image_data_reads']:
            chunks.append((int(row['address'], 16), bytes.fromhex(row['bytes'])))
    cases = compiled_check(records, Emulator(chunks), OUT / 'accessors.c')
    require(len(records) == index['methods_translated'] and cases == index['fixture_comparisons'], 'Incomplete scalar comparison')
    print(json.dumps({'result': 'PASS', 'methods_translated': len(records), 'fixture_comparisons': cases,
                      'full_app_build_or_run': False}, indent=2))


def validate_records(records):
    """Tie every C fragment to separately preserved original metadata and flow."""
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    cached, identities = {}, set()
    for record in records:
        name = record['class_name']
        require(name in metadata, 'Unknown original class')
        if name not in cached:
            cached[name] = {(flow['kind'], flow['selector']): flow for flow in
                            (json.loads(line) for line in gzip.decompress((ROOT / 'analysis/app-methods' /
                             (name + '.jsonl.gz')).read_bytes()).splitlines())}
        identity = (name, record['kind'], record['selector'])
        require(identity not in identities, 'Duplicate original method identity')
        identities.add(identity)
        require((record['kind'], record['selector']) in cached[name], 'Unknown original method')
        flow = cached[name][(record['kind'], record['selector'])]
        require(all(record[key] == flow[key] for key in ['entry', 'abi', 'instructions']), 'Changed original method evidence')
        ivar = next((ivar for ivar in metadata[name]['ivars'] if ivar['name'] == record['ivar']), None)
        require(ivar is not None and record['offset'] == ivar['offset'] and
                record['original_type'] == ivar['type_encoding'] and record['width'] == SCALARS[ivar['type_encoding']],
                'Changed original ivar identity/layout')
        require(recognize(flow, ivar, record['setter']) == record['expression'], 'Unsupported or changed source translation')
        slots = {int(row['pointer_slots'][0], 16): int(row['successors'][0], 16) for row in flow['instructions']
                 if row['mnemonic'] == 'br' and len(row.get('pointer_slots', [])) == 1 and len(row['successors']) == 1}
        for row in record['initial_image_data_reads']:
            address, raw = int(row['address'], 16), bytes.fromhex(row['bytes'])
            require(len(raw) == 8 and address in slots and int.from_bytes(raw, 'little') == slots[address],
                    'Changed original initial-pointer hypothesis')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    args = parser.parse_args()
    if args.verify:
        verify()
    else:
        require(args.ipa is not None, 'Supply the exact IPA or --verify')
        recover(args.ipa)
