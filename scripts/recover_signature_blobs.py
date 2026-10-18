#!/usr/bin/env python3
"""Execute original signature-container methods with explicit Foundation models.

This does not emulate signing/CMS cryptography or an iPhone. It checks the
reconstructed container APIs, exact output bytes, and controlled error paths.
"""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
import plistlib
import random
import re
import struct
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_method_flow import walk
from recover_localization import Machine, STACK, STACK_SIZE, STOP, GUARD, MASK

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/signature-blobs'
NAMES = ('YYYBlob', 'YYYBlobIndex', 'YYYSuperBlob')
HEAP, HEAP_SIZE = 0x600000000, 0x1000000
RANGE_HELPER = 0x1007724c8


class FoundationError(Exception):
    pass


def original_flows():
    result = []
    for name in NAMES:
        result.extend(json.loads(line) for line in gzip.decompress(
            (ROOT / 'analysis/app-methods' / (name + '.jsonl.gz')).read_bytes()).splitlines())
    require(len(result) == 38, 'Incomplete signature-container method set')
    return result


class BlobMachine(Machine):
    def __init__(self, chunks, records, bindings, classes, external, metadata):
        super().__init__(chunks, records, bindings, classes, {})
        self.uc.mem_map(HEAP, HEAP_SIZE)
        self.uc.reg_write(arm.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        self.entries = {(r['class_name'], r['kind'], r['selector']): int(r['entry'], 16)
                        for r in records if 'class_name' in r}
        self.external = external
        self.instruments, self.sequences = {}, {}
        self.foundation_exception = None
        self.layout = {name: {v['name']: v for v in metadata[name]['ivars']} for name in NAMES}
        self.runtime_pointers = {}
        for address, symbol in bindings.items():
            if symbol.startswith('_objc_') or symbol == '___stack_chk_fail':
                token = 0x500002000 + len(self.runtime_pointers) * 16
                self.runtime_pointers[token] = symbol
                self.put64(address, token)
        self.cs = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
        self.cs.detail = True

    def obj(self, value):
        token = super().obj(value)
        require(token < HEAP + HEAP_SIZE, 'Synthetic heap exhausted')
        return token

    def write(self, uc, _access, address, size, _value, _):
        if not (STACK <= address and address + size <= STACK + STACK_SIZE or
                HEAP <= address and address + size <= HEAP + HEAP_SIZE):
            self.error = 'Original container instruction wrote outside controlled stack/object memory'
            uc.emu_stop()

    def read(self, uc, _access, address, size, _value, _):
        if not (STACK <= address < STACK + STACK_SIZE or HEAP <= address < HEAP + HEAP_SIZE
                or GUARD <= address < GUARD + 4096):
            self.reads[(address, size)] = True

    def allocate(self, name):
        token = self.obj({'class_name': name})
        self.uc.mem_write(token, bytes(256))
        return token

    def ivar(self, token, name):
        cl = self.value(token)['class_name']
        field = self.layout[cl][name]
        return int.from_bytes(self.uc.mem_read(token + field['offset'], field['size']), 'little')

    def set_ivar(self, token, name, value):
        cl = self.value(token)['class_name']
        field = self.layout[cl][name]
        self.uc.mem_write(token + field['offset'], (value & ((1 << (8 * field['size'])) - 1)).to_bytes(field['size'], 'little'))

    def message(self, selector, receiver, args):
        if receiver == 0:
            return 0
        value = self.value(receiver)
        sequence = self.sequences.get((receiver, selector))
        if sequence is not None:
            number = self.instruments.get((receiver, selector), 0)
            self.instruments[(receiver, selector)] = number + 1
            return sequence[number % len(sequence)]
        name, kind = None, '-'
        if isinstance(value, tuple) and value[0] == 'class':
            name, kind = value[1], '+'
        elif isinstance(value, dict) and 'class_name' in value:
            name = value['class_name']
        if (name, kind, selector) in self.entries:
            return ('enter', self.entries[(name, kind, selector)], receiver, args)
        if kind == '+' and selector == 'new' and name in NAMES:
            token = self.allocate(name)
            if (name, '-', 'init') in self.entries:
                return ('enter', self.entries[(name, '-', 'init')], token, [])
            return token
        if kind == '+' and selector == 'data' and name == 'NSMutableData':
            return self.obj(bytearray())
        if kind == '+' and selector == 'array' and name == 'NSMutableArray':
            return self.obj([])
        if kind == '+' and selector == 'propertyListWithData:options:format:error:':
            require(name == 'NSPropertyListSerialization' and args[1:4] == [0, 0, 0], 'Unexpected plist API/options')
            try:
                return self.obj(plistlib.loads(bytes(self.value(args[0]))))
            except (ValueError, plistlib.InvalidFileException, TypeError):
                return 0
        if isinstance(value, (bytes, bytearray)):
            if selector == 'length':
                return len(value)
            if selector == 'getBytes:length:':
                pointer, length = args[:2]
                start = 0
                length = min(length, len(value))
            elif selector == 'getBytes:range:':
                pointer, start, length = args[:3]
            else:
                pointer = None
            if pointer is not None:
                if start > len(value) or length > len(value) - start:
                    raise FoundationError('NSRangeException')
                self.uc.mem_write(pointer, bytes(value[start:start + length]))
                return 0
            if selector == 'subdataWithRange:':
                start, length = args[:2]
                if start > len(value) or length > len(value) - start:
                    raise FoundationError('NSRangeException')
                return self.obj(bytes(value[start:start + length]))
            if selector == 'appendData:':
                require(isinstance(value, bytearray), 'Appending to immutable modeled NSData')
                other = self.value(args[0])
                if other is not None:
                    value.extend(other)
                return 0
            if selector == 'appendBytes:length:':
                require(isinstance(value, bytearray), 'Appending to immutable modeled NSData')
                pointer, length = args[:2]
                require(length <= 1000000, 'Excessive modeled byte append')
                value.extend(self.uc.mem_read(pointer, length))
                return 0
        if isinstance(value, dict) and 'fake_length' in value and selector == 'length':
            return value['fake_length']
        if isinstance(value, list):
            if selector == 'count':
                return len(value)
            if selector == 'addObject:':
                if not args[0]:
                    raise FoundationError('NSInvalidArgumentException')
                value.append(args[0])
                return 0
            if selector == 'objectAtIndexedSubscript:':
                if args[0] >= len(value):
                    raise FoundationError('NSRangeException')
                return value[args[0]]
            if selector == 'countByEnumeratingWithState:objects:count:':
                state, buffer, limit = args[:3]
                start = self.get64(state)
                batch = value[start:start + limit]
                for i, token in enumerate(batch):
                    self.put64(buffer + 8 * i, token)
                self.put64(state, start + len(batch))
                self.put64(state + 8, buffer)
                if not self.get64(state + 16):
                    mutation = self.obj(('mutation-cell', receiver))
                    self.put64(mutation, 0)
                    self.put64(state + 16, mutation)
                return len(batch)
        raise ValueError('Unmodeled Foundation call: ' + str(name) + ' ' + selector)

    def code(self, uc, address, _size, _):
        try:
            require(address in self.rows, 'Execution left recorded original code: ' + hex(address))
            row = self.rows[address]
            self.visited.add(address)
            if row['mnemonic'] not in ('bl', 'b', 'br'):
                return
            if row['mnemonic'] == 'br':
                reg = getattr(arm, 'UC_ARM64_REG_' + row['operands'].upper())
                target = uc.reg_read(reg)
            else:
                ins = next(self.cs.disasm(bytes.fromhex(row['bytes']), address))
                target = ins.operands[0].imm
            if target in self.rows:
                return
            receiver, args = self.get(0), [self.get(i) for i in range(2, 7)]
            if 'objc_dispatch' in row:
                name = row['objc_dispatch']['selector']
                result = self.message(name, receiver, args)
            else:
                name = self.runtime_pointers.get(target, self.external.get(target))
                require(name is not None, 'Unknown original external target: ' + hex(target))
                if name in ('_objc_retain', '_objc_retainAutoreleasedReturnValue', '_objc_autoreleaseReturnValue'):
                    result = receiver
                elif name == '_objc_release':
                    result = 0
                elif name == '_objc_storeStrong':
                    require(HEAP <= receiver < HEAP + HEAP_SIZE or STACK <= receiver < STACK + STACK_SIZE,
                            'Strong store outside modeled object/stack')
                    self.put64(receiver, self.get(1))
                    result = 0
                elif name == '_objc_msgSendSuper2':
                    result = self.get64(receiver)
                else:
                    raise ValueError('Unsupported original runtime call: ' + name)
            self.calls.append(name)
            continuation = address + 4 if row['mnemonic'] == 'bl' else self.get(30)
            if isinstance(result, tuple) and result[0] == 'enter':
                uc.reg_write(arm.UC_ARM64_REG_X0, result[2])
                for i, argument in enumerate(result[3], 2):
                    uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), argument)
                uc.reg_write(arm.UC_ARM64_REG_LR, continuation)
                uc.reg_write(arm.UC_ARM64_REG_PC, result[1])
            else:
                for i in range(1, 19):
                    uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), 0xcccc00000000 + i)
                uc.reg_write(arm.UC_ARM64_REG_X0, result)
                uc.reg_write(arm.UC_ARM64_REG_LR, continuation)
                uc.reg_write(arm.UC_ARM64_REG_PC, continuation)
        except FoundationError as exception:
            self.foundation_exception = str(exception)
            uc.emu_stop()
        except Exception as exception:
            self.error = str(exception)
            uc.emu_stop()

    def call(self, receiver, selector, *arguments):
        value = self.value(receiver)
        kind = '+' if isinstance(value, tuple) and value[0] == 'class' else '-'
        name = value[1] if kind == '+' else value['class_name']
        entry = self.entries[(name, kind, selector)]
        for i in range(31):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), 0)
        self.uc.reg_write(arm.UC_ARM64_REG_SP, STACK + STACK_SIZE - 16)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, STOP)
        self.uc.reg_write(arm.UC_ARM64_REG_X0, receiver)
        self.uc.reg_write(arm.UC_ARM64_REG_NZCV, 0)
        for i, argument in enumerate(arguments, 2):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), argument)
        self.foundation_exception = None
        self.uc.emu_start(entry, STOP, count=200000)
        require(self.error is None, str(self.error))
        if self.foundation_exception:
            raise FoundationError(self.foundation_exception)
        require(self.uc.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Original container method did not return')
        return self.get(0), self.get(1)


def describe(machine, token):
    if not token:
        return None
    value = machine.value(token)
    name = value['class_name']
    if name == 'YYYBlob':
        magic, _ = machine.call(token, 'magic')
        length, _ = machine.call(token, 'length')
        data, _ = machine.call(token, 'data')
        entitlements, _ = machine.call(token, 'entitlements')
        header, _ = machine.call(token, 'blob')
        serialized, _ = machine.call(token, 'blobData')
        return {'magic': magic, 'length': length, 'data': None if not data else bytes(machine.value(data)).hex(),
                'entitlements': machine.value(entitlements), 'header': struct.pack('<Q', header).hex(),
                'serialized': bytes(machine.value(serialized)).hex()}
    if name == 'YYYBlobIndex':
        typ, _ = machine.call(token, 'type')
        offset, _ = machine.call(token, 'offset')
        data, _ = machine.call(token, 'data')
        blob, _ = machine.call(token, 'blob')
        header, _ = machine.call(token, 'blobIndex')
        return {'type': typ, 'offset': offset, 'data': None if not data else bytes(machine.value(data)).hex(),
                'blob': describe(machine, blob), 'header': struct.pack('<Q', header).hex()}
    require(name == 'YYYSuperBlob', 'Unexpected container object')
    magic, _ = machine.call(token, 'magic')
    count, _ = machine.call(token, 'count')
    length, _ = machine.call(token, 'length')
    blobs, _ = machine.call(token, 'blobs')
    before = [describe(machine, child) for child in machine.value(blobs)]
    a, b = machine.call(token, 'superBlob')
    header = (struct.pack('<QQ', a, b)[:12]).hex()
    serialized, _ = machine.call(token, 'superBlobData')
    after = [machine.call(child, 'offset')[0] for child in machine.value(blobs)]
    return {'magic': magic, 'count': count, 'length': length, 'indexes_before_serialization': before,
            'header': header, 'serialized': bytes(machine.value(serialized)).hex(), 'offsets_after': after}


def cases():
    result = []
    for magic in [0, 1, 0x12345678, 0xfade0c02, 0xfade0b01, 0xffffffff]:
        for raw in [b'', b'abc', bytes(range(256))]:
            result.append({'op': 'blob', 'magic': magic, 'payload': raw.hex()})
    for length in range(8):
        result.append({'op': 'parse_blob', 'data': ('a5' * length)})
    for declared in [0, 1, 8, 0xffffffff]:
        result.append({'op': 'parse_blob', 'data': (struct.pack('>II', 0x12345678, declared) + b'payload-with-padding\0\0').hex()})
    for value in [{'application-identifier': 'TESTTEAM.example.recovery', 'get-task-allow': False}, ['array', 1, True], None]:
        raw = b'not a plist' if value is None else plistlib.dumps(value)
        result.append({'op': 'parse_blob', 'data': (struct.pack('>II', 0xfade7171, 8 + len(raw)) + raw).hex()})
    rng = random.Random(502)
    for count in [0, 1, 2, 3, 16, 17, 33]:
        entries = [{'type': i, 'magic': 0xfade0c02 if i == 0 else 0xfade0b01,
                    'payload': bytes(rng.randrange(256) for _ in range(i % 11)).hex()} for i in range(count)]
        result.append({'op': 'super', 'entries': entries})
    for raw in [b'', bytes(11), struct.pack('>III', 0x12345678, 12, 0),
                struct.pack('>III', 0xfade0cc0, 0, 0), struct.pack('>III', 0xfade0cc0, 0xffffffff, 2),
                struct.pack('>IIIII', 0xfade0cc0, 12, 1, 7, 999),
                struct.pack('>IIIII', 0xfade0cc0, 0, 1, 3, 20) + struct.pack('>II', 0xfade0b01, 1) + b'trailing',
                struct.pack('>IIIIIII', 0xfade0cc0, 0, 2, 3, 40, 9, 28) + bytes(20)]:
        result.append({'op': 'parse_super', 'data': raw.hex()})
    for length in [0, 0xfffffff7, 0xfffffff8, 0xffffffff, 0x100000000, MASK]:
        result.append({'op': 'length', 'length': length})
    result += [{'op': 'snapshot'}, {'op': 'header_reads'}, {'op': 'destructors'}, {'op': 'raw_index'}]
    return result


def evaluate(machine, case):
    cl = machine.classes
    call = machine.call
    if case['op'] == 'blob':
        token, _ = call(cl['YYYBlob'], 'blobWithMagic:data:', case['magic'], machine.obj(bytes.fromhex(case['payload'])))
    elif case['op'] == 'parse_blob':
        token, _ = call(cl['YYYBlob'], 'blobWithdata:', machine.obj(bytes.fromhex(case['data'])))
    elif case['op'] == 'super':
        token, _ = call(cl['YYYSuperBlob'], 'superBlobWithMagic:', 0xfade0cc0)
        for entry in case['entries']:
            child, _ = call(cl['YYYBlob'], 'blobWithMagic:data:', entry['magic'], machine.obj(bytes.fromhex(entry['payload'])))
            index, _ = call(cl['YYYBlobIndex'], 'blobIndexWithType:blob:', entry['type'], child)
            call(token, 'addBlobIndex:', index)
    elif case['op'] == 'parse_super':
        data = bytes.fromhex(case['data'])
        if len(data) < 4 or len(data) < 12 and data[:4] == bytes.fromhex('fade0cc0'):
            # The original does not initialize the header before a partial copy.
            # Do not assert a deterministic parser result for unread stack bytes.
            return {'original_parser_result_unverified': 'incomplete-original-header',
                    'foundation_partial_copy': (data[:12] + bytes([0xa5]) * max(0, 12 - len(data))).hex()}
        token, _ = call(cl['YYYSuperBlob'], 'superBlobWithSuperBlobData:', machine.obj(bytes.fromhex(case['data'])))
    elif case['op'] == 'length':
        token, _ = call(cl['YYYBlob'], 'blobWithMagic:data:', 0, machine.obj({'fake_length': case['length']}))
        return {'length': call(token, 'length')[0]}
    elif case['op'] == 'raw_index':
        token, _ = call(cl['YYYBlobIndex'], 'blobIndexWithType:data:', 0xffffffff, machine.obj(b'raw'))
        call(token, 'setOffset:', 0x81234567)
    elif case['op'] == 'snapshot':
        child, _ = call(cl['YYYBlob'], 'blobWithMagic:data:', 0x12345678, machine.obj(b'before'))
        token, _ = call(cl['YYYBlobIndex'], 'blobIndexWithType:blob:', 7, child)
        call(child, 'setData:', machine.obj(b'after'))
    elif case['op'] == 'header_reads':
        output = {}
        for name, selector, properties in [('YYYBlob', 'blob', ['magic', 'length']),
                                          ('YYYBlobIndex', 'blobIndex', ['type', 'offset']),
                                          ('YYYSuperBlob', 'superBlob', ['magic', 'length', 'count'])]:
            token = machine.allocate(name)
            for prop in properties:
                machine.sequences[(token, prop)] = [0x12345678, 0x89abcdef, 0x11223344, 0x55667788]
            a, b = call(token, selector)
            size = 12 if name == 'YYYSuperBlob' else 8
            output[name] = {'bytes': struct.pack('<QQ', a, b)[:size].hex(),
                            'reads': {prop: machine.instruments[(token, prop)] for prop in properties}}
        return output
    elif case['op'] == 'destructors':
        output = {}
        for name in NAMES:
            token = machine.allocate(name)
            fields = [key for key, val in machine.layout[name].items() if val['type_encoding'].startswith('@')]
            for field in fields:
                machine.set_ivar(token, field, machine.obj(('retained-fixture', field)))
            call(token, '.cxx_destruct')
            output[name] = {field: machine.ivar(token, field) for field in fields}
        return output
    else:
        raise ValueError('Unknown fixture')
    result = describe(machine, token)
    if case['op'] == 'super':
        rebuilt, _ = call(cl['YYYSuperBlob'], 'superBlobWithSuperBlobData:',
                          machine.obj(bytes.fromhex(result['serialized'])))
        return {'built': result, 'parsed': describe(machine, rebuilt)}
    return result


def validate_records(records):
    original = {(r['class_name'], r['kind'], r['selector']): r for r in original_flows()}
    present = {(r['class_name'], r['kind'], r['selector']): r for r in records if 'class_name' in r}
    require(present == original and len(records) == 39, 'Changed original container method evidence')
    helper = next(r for r in records if r.get('role') == 'range-helper')
    require(helper['entry'] == hex(RANGE_HELPER), 'Changed original range helper')
    wanted = {int(row['address'], 16): row['bytes'] for r in records for row in r['instructions']}
    matched = set()
    manifest = json.loads((ROOT / 'recovered/disassembly/manifest.json').read_text())
    for chunk in manifest['chunks']:
        if not any(int(chunk['vm_start'], 16) <= a < int(chunk['vm_end'], 16) for a in wanted):
            continue
        for line in gzip.decompress((ROOT / 'recovered/disassembly' / chunk['path']).read_bytes()).decode().splitlines():
            match = re.match(r'^([0-9a-fA-F]+)\s+([0-9a-fA-F]{8})\s+', line)
            if match and int(match[1], 16) in wanted:
                address = int(match[1], 16)
                require(wanted[address] == match[2], 'Container instruction differs from preserved original code')
                matched.add(address)
    require(matched == wanted.keys(), 'Unverified container instruction addresses')


def native_metadata(metadata):
    result = []
    for name in NAMES:
        cl = metadata[name]
        result.append({'name': name, 'superclass': cl['superclass'], 'instance_size': cl['instance_size'],
            'ivars': [{key: field[key] for key in ['name', 'type_encoding', 'offset']} for field in cl['ivars']],
            'methods': [{key: method[key] for key in ['kind', 'selector', 'type_encoding']} for method in cl['methods']]})
    return result


def validate_inputs(evidence, metadata, ipa=None):
    from verify_app_analysis import dispatch_evidence, check_call
    dispatch, _ = dispatch_evidence(ROOT)
    image, cs = dispatch.image, dispatch.cs
    require(evidence['classes'] == {name: int(metadata[name]['address'], 16) for name in NAMES},
            'Changed original signing-container class identity')
    for address, symbol in evidence['bindings'].items():
        require(image.binds.get(int(address, 16)) == symbol, 'Changed original signing-container import')
    for address, symbol in evidence['external_targets'].items():
        address = int(address, 16)
        offset = image.fileoff(address)
        decoded = list(cs.disasm(image.data[offset:offset + 12], address))
        require(len(decoded) == 3 and [v.mnemonic for v in decoded] == ['adrp', 'ldr', 'br'], 'Invalid original runtime stub')
        slot = decoded[0].operands[1].imm + decoded[1].operands[1].mem.disp
        require(image.binds.get(slot) == symbol, 'Changed original signing-container runtime target')
    wanted, pointer_slots = {}, {}
    for record in evidence['records']:
        for row in record['instructions']:
            decoded = next(cs.disasm(bytes.fromhex(row['bytes']), int(row['address'], 16)))
            require((decoded.mnemonic, decoded.op_str) == (row['mnemonic'], row['operands']), 'Changed original instruction decoding')
            if 'objc_dispatch' in row:
                check_call(row, dispatch, wanted, cs)
            for slot in row.get('pointer_slots', []):
                pointer_slots.setdefault(int(slot, 16), set()).update(int(v, 16) for v in row['successors'])
    class_slots = {0x100c730c8: 'YYYBlob', 0x100c730d0: 'YYYBlobIndex', 0x100c730d8: 'YYYSuperBlob',
                   0x100c74be8: 'YYYSuperBlob'}
    for row in evidence['memory']:
        address, raw = int(row['address'], 16), bytes.fromhex(row['bytes'])
        if address in pointer_slots:
            require(len(raw) == 8 and int.from_bytes(raw, 'little') in pointer_slots[address], 'Changed original container jump-table value')
        elif address in class_slots:
            require(len(raw) == 8 and int.from_bytes(raw, 'little') == int(metadata[class_slots[address]]['address'], 16),
                    'Changed original container class reference')
        elif address in image.binds:
            require(raw == bytes(len(raw)) and evidence['bindings'].get(hex(address)) == image.binds[address],
                    'Changed original imported class/guard input')
        elif any(s['name'] == '__objc_selrefs' and s['address'] <= address < s['address'] + s['size'] for s in image.sections):
            require(raw == image.data[image.fileoff(address):image.fileoff(address) + len(raw)], 'Changed original selector slot')
        else:
            raise ValueError('Unclassified original input read: ' + hex(address))
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            original = MachO(archive.read('Payload/ESign.app/ESign'))
        require(hashlib.sha256(original.data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong original IPA')
        for row in evidence['memory']:
            raw = bytes.fromhex(row['bytes'])
            off = original.fileoff(int(row['address'], 16))
            require(original.data[off:off + len(raw)] == raw, 'Saved container input differs from exact IPA')


def run(ipa=None, original_ipa=None):
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable input')
        image = MachO(data)
        records = original_flows()
        helper = walk(data, RANGE_HELPER, set(), {}, image=image)
        helper['role'] = 'range-helper'
        records.append(helper)
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
                    'Changed container source/evidence file: ' + name)
        records, classes = evidence['records'], evidence['classes']
        validate_inputs(evidence, metadata, original_ipa)
        require(json.loads((OUT / 'metadata.json').read_text()) == native_metadata(metadata), 'Changed original class layout/ABI evidence')
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(row['address'], 16), bytes.fromhex(row['bytes'])) for r in records for row in r['instructions']]
    validate_records(records)
    machine = BlobMachine(chunks, records, bindings, classes, external, metadata)
    results = []
    for number, case in enumerate(cases()):
        try:
            result = evaluate(machine, case)
            results.append({'input': case, 'result': result})
        except FoundationError as exception:
            results.append({'input': case, 'exception': str(exception)})
        except Exception as exception:
            raise ValueError(f'Fixture {number} {case["op"]}: {exception}') from exception
    require(all(int(r['entry'], 16) in machine.visited for r in records), 'An original method/helper was never exercised')
    if ipa:
        memory = []
        used_bindings = {}
        for address, size in sorted(machine.reads):
            segment = next(s for s in image.segments if s['vmaddr'] <= address < s['vmaddr'] + s['vmsize'])
            offset = address - segment['vmaddr']
            raw = data[segment['fileoff'] + offset:segment['fileoff'] + min(offset + size, segment['filesize'])]
            raw += bytes(size - len(raw))
            memory.append({'address': hex(address), 'bytes': raw.hex()})
            if address in bindings:
                used_bindings[address] = bindings[address]
        evidence = {'records': records, 'classes': classes, 'memory': memory,
                    'bindings': {hex(k): v for k, v in used_bindings.items()},
                    'external_targets': {hex(k): v for k, v in external.items()}}
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'fixtures.json').write_text(json.dumps(results, indent=2) + '\n')
        (OUT / 'metadata.json').write_text(json.dumps(native_metadata(metadata), indent=2) + '\n')
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'classes': 3, 'methods': 38,
                 'fixtures': len(results), 'original_instructions_executed': len(machine.visited),
                 'source_behavior_fixtures': sum(not isinstance(r.get('result'), dict) or
                     'original_parser_result_unverified' not in r['result'] for r in results),
                 'indeterminate_original_parser_inputs': sum(isinstance(r.get('result'), dict) and
                     'original_parser_result_unverified' in r['result'] for r in results),
                 'foundation_arc_calls_are_models': True, 'complete_signing_pipeline': False,
                 'source_built_ipa': False, 'iphone_runtime_verified': False,
                 'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(results == json.loads((OUT / 'fixtures.json').read_text()), 'Changed original container fixture behavior')
    print(json.dumps({'result': 'PASS', 'classes': 3, 'methods': 38, 'fixtures': len(results),
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
