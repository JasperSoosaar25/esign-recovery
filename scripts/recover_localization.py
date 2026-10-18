#!/usr/bin/env python3
"""Recover the complete localization slice, with original ARM64 execution checks.

Foundation and ARC calls are explicit host models, not an iOS runtime. Original
instructions execute only inside Unicorn; external/native app code is not run.
"""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
import re
import struct
import zipfile

from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/localization'
STACK, STACK_SIZE, STOP, GUARD = 0x400000000, 0x20000, 0x500000000, 0x500001000
CACHE, ONCE, CHINESE, INIT = 0x100e95f88, 0x100e95f90, 0x100e95f98, 0x100831da4
MASK = (1 << 64) - 1


def flows():
    result = []
    for path in sorted((ROOT / 'analysis/app-methods').glob('YYYLocalized*.jsonl.gz')):
        result.extend(json.loads(line) for line in gzip.decompress(path.read_bytes()).splitlines())
    require(len(result) == 13, 'Incomplete localization method set')
    return result


class Machine:
    """Original instructions, restricted writes, explicit Foundation call models."""
    def __init__(self, chunks, records, bindings, classes, strings, tables=None):
        self.uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        pages = set()
        for address, data in chunks:
            pages.update(range(address & ~4095, (address + len(data) + 4095) & ~4095, 4096))
        ordered = sorted(pages)
        for index, page in enumerate(ordered):
            if index == 0 or page != ordered[index - 1] + 4096:
                start = page
            if index + 1 == len(ordered) or ordered[index + 1] != page + 4096:
                self.uc.mem_map(start, page + 4096 - start)
        for address, data in chunks:
            self.uc.mem_write(address, data)
        self.uc.mem_map(STACK, STACK_SIZE)
        self.uc.mem_map(GUARD, 4096)
        self.uc.mem_write(GUARD, struct.pack('<Q', 0x12345678abcdef))
        self.bindings, self.classes, self.strings, self.tables = bindings, classes, strings, tables or {}
        self.rows = {int(r['address'], 16): r for f in records for r in f['instructions']}
        self.objects, self.tokens, self.reads, self.visited, self.calls, self.logs = {}, {}, {}, set(), [], []
        self.used_strings = set()
        self.next_token, self.error, self.pending_once = 0x600000000, None, []
        self.hooks = [self.uc.hook_add(UC_HOOK_CODE, self.code),
                      self.uc.hook_add(UC_HOOK_MEM_READ, self.read),
                      self.uc.hook_add(UC_HOOK_MEM_WRITE, self.write)]
        for address, symbol in bindings.items():
            if symbol.startswith('_OBJC_CLASS_$_'):
                self.put64(address, self.obj(('class', symbol.removeprefix('_OBJC_CLASS_$_'))))
            elif symbol == '___stack_chk_guard':
                self.put64(address, GUARD)
            elif symbol == '__NSConcreteStackBlock':
                self.put64(address, self.obj(('block-class',)))
        for name, address in classes.items():
            self.objects[address] = ('class', name)

    def close(self):
        # Hook callbacks retain their owner. Break the cycle after each fixture
        # rather than retaining many complete Unicorn address spaces until GC.
        for hook in self.hooks:
            self.uc.hook_del(hook)
        self.uc = None

    def obj(self, value):
        if value is None:
            return 0
        if isinstance(value, (str, tuple)) and value in self.tokens:
            return self.tokens[value]
        token = self.next_token
        self.next_token += 0x100
        self.objects[token] = value
        if isinstance(value, (str, tuple)):
            self.tokens[value] = token
        return token

    def value(self, token):
        if token == 0:
            return None
        if token in self.strings:
            self.used_strings.add(token)
            return self.strings[token]
        require(token in self.objects, 'Unknown modeled Objective-C object: ' + hex(token))
        return self.objects[token]

    def get(self, number):
        return self.uc.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(number)))

    def get64(self, address):
        return struct.unpack('<Q', self.uc.mem_read(address, 8))[0]

    def put64(self, address, number):
        self.uc.mem_write(address, struct.pack('<Q', number & MASK))

    def read(self, uc, _access, address, size, _value, _):
        if not STACK <= address < STACK + STACK_SIZE and not GUARD <= address < GUARD + 4096:
            self.reads[(address, size)] = True

    def write(self, uc, _access, address, size, _value, _):
        if not (STACK <= address and address + size <= STACK + STACK_SIZE or
                CACHE <= address and address + size <= CHINESE + 1):
            self.error = 'Original instruction wrote outside allowed stack/localization globals'
            uc.emu_stop()

    def message(self, selector, receiver, args):
        value = self.value(receiver)
        if receiver == 0:
            return 0
        if selector == 'dictionaryWithObjects:forKeys:count:':
            require(value == ('class', 'NSDictionary'), 'Dictionary receiver is not the original imported class')
            objects, keys, count = args[:3]
            require(0 < count < 2000, 'Invalid original dictionary count')
            pairs = [(self.get64(keys + i * 8), self.get64(objects + i * 8)) for i in range(count)]
            require(all(k in self.strings and v in self.strings for k, v in pairs), 'Dictionary uses an unknown constant string')
            self.last_pairs = pairs
            return self.obj({self.value(k): self.value(v) for k, v in pairs})
        if selector == 'autoupdatingCurrentLocale':
            require(value == ('class', 'NSLocale'), 'Unexpected locale receiver')
            return self.obj(('locale',))
        if selector == 'languageCode':
            require(value == ('locale',), 'Unexpected language receiver')
            return self.obj(self.language)
        if selector == 'preferredLanguages':
            require(value == ('class', 'NSLocale'), 'Unexpected preferences receiver')
            return self.obj([self.preferred] if self.preferred is not None else [])
        if selector == 'firstObject':
            require(isinstance(value, list), 'Unexpected firstObject receiver')
            return self.obj(value[0] if value else None)
        if selector == 'class':
            require(value == ('class', 'NSDictionary'), 'Unexpected class receiver')
            return receiver
        if selector == 'isKindOfClass:':
            require(self.value(args[0]) == ('class', 'NSDictionary'), 'Unexpected class test')
            return int(isinstance(value, dict))
        if selector in ('hasPrefix:', 'containsString:'):
            require(isinstance(value, str), 'Unexpected string-test receiver')
            argument = self.value(args[0])
            return int(value.startswith(argument) if selector == 'hasPrefix:' else argument in value)
        if selector == 'localizableDic' or selector == 'performSelector:withObject:':
            if selector.startswith('perform'):
                require(self.selector_names.get(args[0]) == 'localizableDic' and args[1] == 0, 'Unknown dynamic selector')
            require(isinstance(value, tuple) and value[0] == 'class' and value[1] in self.tables, 'Unknown localization class')
            return self.obj(dict(self.tables[value[1]]))
        if selector == 'mutableCopy':
            require(isinstance(value, dict), 'Unexpected mutableCopy receiver')
            return self.obj(dict(value))
        if selector == 'objectForKeyedSubscript:':
            require(isinstance(value, dict), 'Unexpected subscript receiver')
            return self.obj(value.get(self.value(args[0])))
        if selector == 'respondsToSelector:':
            return int(isinstance(value, tuple) and value[0] == 'class' and value[1] in self.tables and
                       self.selector_names.get(args[0]) == 'localizableDic')
        if selector == 'addLocalizableInfo:':
            # Only this original method is called recursively by the init block.
            return ('enter', self.entries[('YYYLocalized', 'addLocalizableInfo:')], receiver, args[0])
        if selector == 'addEntriesFromDictionary:':
            require(isinstance(value, dict) and isinstance(self.value(args[0]), dict), 'Unexpected dictionary merge')
            value.update(self.value(args[0]))
            return 0
        raise ValueError('Unmodeled Foundation selector: ' + selector)

    def code(self, uc, address, _size, _):
        try:
            if self.pending_once and self.pending_once[-1][0] == address:
                _, pointer = self.pending_once.pop()
                self.put64(pointer, MASK)
            require(address in self.rows, 'Execution left preserved original instructions: ' + hex(address))
            row = self.rows[address]
            self.visited.add(address)
            if row['mnemonic'] not in ('bl', 'b') or 'call_target' not in row and row['mnemonic'] != 'b':
                return
            target = int(row.get('call_target', row['operands'].lstrip('#')), 16)
            # A normal in-function direct branch is executed by Unicorn.
            if row['mnemonic'] == 'b' and target in self.rows:
                return
            args, receiver = [self.get(i) for i in range(2, 6)], self.get(0)
            if 'objc_dispatch' in row:
                name = row['objc_dispatch']['selector']
                result = self.message(name, receiver, args)
            else:
                name = self.external_targets.get(target)
                require(name is not None, 'Unknown original call target: ' + hex(target))
                if name in ('_objc_retainAutoreleasedReturnValue', '_objc_retain', '_objc_autoreleaseReturnValue'):
                    result = receiver
                elif name == '_objc_release':
                    result = 0
                elif name == '_objc_storeStrong':
                    self.put64(receiver, self.get(1))
                    result = 0
                elif name == '_dispatch_once':
                    if self.get64(receiver) == MASK:
                        result = 0
                    else:
                        block = self.get(1)
                        require(self.get64(block + 16) == INIT, 'Unexpected original initialization block')
                        self.pending_once.append((address + 4, receiver))
                        result = ('enter-block', INIT, block)
                elif name == '_NSClassFromString':
                    result = self.classes.get(self.value(receiver), 0)
                elif name == '_NSLog':
                    self.logs.append([self.value(receiver), self.value(self.get64(uc.reg_read(arm.UC_ARM64_REG_SP)))])
                    result = 0
                else:
                    raise ValueError('Unmodeled original runtime call: ' + name)
            self.calls.append(name)
            continuation = address + 4 if row['mnemonic'] == 'bl' else self.get(30)
            if isinstance(result, tuple):
                uc.reg_write(arm.UC_ARM64_REG_X0, result[2])
                if result[0] == 'enter':
                    uc.reg_write(arm.UC_ARM64_REG_X2, result[3])
                uc.reg_write(arm.UC_ARM64_REG_LR, continuation)
                uc.reg_write(arm.UC_ARM64_REG_PC, result[1])
            else:
                # Deliberately poison caller-saved registers instead of relying
                # on incidental values retained by a host call implementation.
                for number in range(1, 19):
                    uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(number)), 0xcccc00000000 + number)
                uc.reg_write(arm.UC_ARM64_REG_X0, result)
                uc.reg_write(arm.UC_ARM64_REG_LR, continuation)
                uc.reg_write(arm.UC_ARM64_REG_PC, continuation)
        except Exception as exception:
            self.error = str(exception)
            uc.emu_stop()

    def run(self, entry, receiver=0, argument=0):
        for number in range(31):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(number)), 0)
        self.uc.reg_write(arm.UC_ARM64_REG_SP, STACK + STACK_SIZE - 16)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, STOP)
        self.uc.reg_write(arm.UC_ARM64_REG_X0, receiver)
        self.uc.reg_write(arm.UC_ARM64_REG_X2, argument)
        self.uc.emu_start(entry, STOP, count=100000)
        require(self.error is None, str(self.error))
        require(self.uc.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Original method failed to return')
        return self.get(0)


def objc_literal(value):
    # JSON escaping is also valid for these Objective-C string literal contents.
    return '@' + json.dumps(value, ensure_ascii=False).replace('\\u0000', '\\000')


def generated_source(tables, entries):
    lines = ['// Reconstructed from original ARM64/constant-string evidence; not the author\'s source.',
             '#import "ESignLocalization.h"', '']
    for name, pairs in tables.items():
        if name == 'YYYLocalized':
            continue
        lines.extend(['@implementation ' + name, f'// Original +localizableDic: {entries[(name, "localizableDic")]:#x}',
                      '+ (id)localizableDic {', '    id keys[] = {'])
        lines.extend('        ' + objc_literal(k) + ',' for k, _ in pairs)
        lines.append('    };\n    id values[] = {')
        lines.extend('        ' + objc_literal(v) + ',' for _, v in pairs)
        lines.extend(['    };', f'    return [NSDictionary dictionaryWithObjects:values forKeys:keys count:{len(pairs)}];', '}', '@end', ''])
    # The base dictionary is a private C helper so that the reviewed core file
    # supplies the original YYYLocalized class's other methods in one @implementation.
    pairs = tables['YYYLocalized']
    lines.extend(['NSDictionary *ESignOriginalBaseDictionary(void) {', '    id keys[] = {'])
    lines.extend('        ' + objc_literal(k) + ',' for k, _ in pairs)
    lines.append('    };\n    id values[] = {')
    lines.extend('        ' + objc_literal(v) + ',' for _, v in pairs)
    lines.extend(['    };', f'    return [NSDictionary dictionaryWithObjects:values forKeys:keys count:{len(pairs)}];', '}', ''])
    return '\n'.join(lines)


def configure(machine, records, external, selectors):
    machine.entries = {(r['class_name'], r['selector']): int(r['entry'], 16) for r in records if 'class_name' in r}
    machine.external_targets, machine.selector_names = external, selectors
    return machine


def fixtures(factory, tables, records):
    entry = {(r['class_name'], r['selector']): int(r['entry'], 16) for r in records if 'class_name' in r}
    results, reads, visited, used_strings = [], set(), set(), set()
    languages = [(None, None), ('en', 'en-US'), ('zz', 'zz'), ('zh', 'zh-Hans-CN'), ('zh', 'zh-Hant-TW'),
                 ('zh', 'zh-HK'), ('zh-Hant', 'zh-Hant'), ('zh', None), ('zh', 'zh-hant'),
                 ('zh', 'zh-hk'), ('pt', 'pt-BR'), ('pt-BR', 'pt-BR'), ('fr', 'fr-FR'),
                 ('ru', 'ru-RU'), ('ar', 'ar-SA'), ('ckb', 'ckb-IQ'), ('vi', 'vi-VN'), ('hk', 'zh-HK')]
    for language, preferred in languages:
        machine = factory()
        machine.language, machine.preferred = language, preferred
        receiver = machine.classes['YYYLocalized']
        version = machine.run(entry[('YYYLocalized', 'version')], receiver)
        require(version == 100, 'Original localization version changed')
        # An addition before first lookup sees a nil global cache; preserve it.
        machine.run(entry[('YYYLocalized', 'addLocalizableInfo:')], receiver, machine.obj({'__preinit': 'discarded'}))
        missing = '__ESign_recovery_missing_key__'
        value = machine.value(machine.run(entry[('YYYLocalized', 'localizableForKey:')], receiver, machine.obj(missing)))
        require(value == missing and machine.get64(ONCE) == MASK, 'Original lazy initialization failed')
        cache = dict(machine.value(machine.get64(CACHE)))
        require('__preinit' not in cache, 'Pre-initialization addition was unexpectedly retained')
        initial_logs = list(machine.logs)
        # Check every original key plus a missing key against the final cache.
        for key in sorted(set(cache) | {missing}):
            value = machine.value(machine.run(entry[('YYYLocalized', 'localizableForKey:')], receiver, machine.obj(key)))
            require(value == cache.get(key, key), 'Original cache lookup/fallback mismatch')
        for invalid in (None, 'not a dictionary', []):
            machine.run(entry[('YYYLocalized', 'addLocalizableInfo:')], receiver, machine.obj(invalid))
            require(machine.value(machine.get64(CACHE)) == cache, 'Invalid overlay modified original cache')
        key = sorted(cache)[0]
        overlay = {key: '__recovered_override__', '__new': '__new_value__'}
        machine.run(entry[('YYYLocalized', 'addLocalizableInfo:')], receiver, machine.obj(overlay))
        require(machine.value(machine.get64(CACHE)) == cache | overlay, 'Original overlay effects mismatch')
        results.append({'language': language, 'preferred': preferred, 'version': version, 'cache': cache,
                        'chinese_flag': bool(machine.uc.mem_read(CHINESE, 1)[0]), 'initial_logs': initial_logs,
                        'overlay': overlay, 'lookup_cases': len(cache) + 1})
        reads.update(machine.reads)
        visited.update(machine.visited)
        used_strings.update(machine.used_strings)
        machine.close()
    return results, reads, visited, used_strings


def validate_records(records):
    original = {(r['class_name'], r['kind'], r['selector']): r for r in flows()}
    require(len(records) == 14, 'Incomplete localization evidence')
    require({(r['class_name'], r['kind'], r['selector']) for r in records if 'class_name' in r} == original.keys(),
            'Missing or duplicate localization method identity')
    for record in records:
        if record.get('role') == 'initialization-block':
            require(record['entry'] == hex(INIT), 'Changed original block identity')
            continue
        key = (record['class_name'], record['kind'], record['selector'])
        require(key in original and record == original[key], 'Changed original localization method evidence')
    # Verify even the newly traced block against the independent complete __text listing.
    wanted = {int(r['address'], 16): r['bytes'] for f in records for r in f['instructions']}
    matched = set()
    manifest = json.loads((ROOT / 'recovered/disassembly/manifest.json').read_text())
    for chunk in manifest['chunks']:
        lo, hi = int(chunk['vm_start'], 16), int(chunk['vm_end'], 16)
        if not any(lo <= a < hi for a in wanted):
            continue
        for line in gzip.decompress((ROOT / 'recovered/disassembly' / chunk['path']).read_bytes()).decode().splitlines():
            match = re.match(r'^([0-9a-fA-F]+)\s+([0-9a-fA-F]{8})\s+', line)
            if match and int(match[1], 16) in wanted:
                address = int(match[1], 16)
                require(wanted[address] == match[2], 'Localization instruction differs from original __text')
                matched.add(address)
    require(matched == wanted.keys(), 'Unverified localization instructions')


def validate_inputs(evidence, ipa=None):
    """Bind input models to separately preserved metadata and native stubs."""
    from verify_app_analysis import dispatch_evidence, check_call
    dispatch, _ = dispatch_evidence(ROOT)
    image, cs = dispatch.image, dispatch.cs
    metadata = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    classes = {c['name']: int(c['address'], 16) for c in metadata['classes'] if c['name'].startswith('YYYLocalized')}
    require(evidence['classes'] == classes, 'Changed original class identity')
    for address, symbol in evidence['bindings'].items():
        require(image.binds.get(int(address, 16)) == symbol, 'Changed original import binding')
    for address, symbol in evidence['external_targets'].items():
        address = int(address, 16)
        offset = image.fileoff(address)
        ins = list(cs.disasm(image.data[offset:offset + 12], address))
        require(len(ins) == 3 and [i.mnemonic for i in ins] == ['adrp', 'ldr', 'br'], 'Changed original import stub')
        require(image.binds.get(ins[0].operands[1].imm + ins[1].operands[1].mem.disp) == symbol,
                'Runtime model targets a different original binding')
    selector = next(s for s in image.sections if s['name'] == '__objc_selrefs')
    expected_selectors = {hex(image.u64(a)): image.cstr(image.u64(a))
                          for a in range(selector['address'], selector['address'] + selector['size'], 8)}
    require(evidence['selectors'] == expected_selectors, 'Changed original selector inputs')
    wanted = {}
    for record in evidence['records']:
        for row in record['instructions']:
            ins = next(cs.disasm(bytes.fromhex(row['bytes']), int(row['address'], 16)))
            require((ins.mnemonic, ins.op_str) == (row['mnemonic'], row['operands']), 'Changed instruction decoding')
            if 'objc_dispatch' in row:
                check_call(row, dispatch, wanted, cs)
    expected_memory = {
        0x100afc560: bytes(8), 0x100afc6e8: bytes(8), 0x100c71458: bytes(8), 0x100c71538: bytes(8),
        CACHE: bytes(8), ONCE: bytes(8), CHINESE: bytes(1),
        0x100c730e0: struct.pack('<Q', classes['YYYLocalized_chinese']),
        0x100c730e8: struct.pack('<Q', classes['YYYLocalized_traditional']),
        0x100c63188: struct.pack('<Q', next(int(k, 16) for k, v in expected_selectors.items() if v == 'localizableDic'))}
    require({int(v['address'], 16): bytes.fromhex(v['bytes']) for v in evidence['memory']} == expected_memory,
            'Changed original localization data inputs')
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong original executable')
        original = MachO(data)
        require(original.classes() == metadata['classes'], 'Original metadata mismatch')
        for address, raw in expected_memory.items():
            segment = next(s for s in original.segments if s['vmaddr'] <= address < s['vmaddr'] + s['vmsize'])
            offset = address - segment['vmaddr']
            actual = data[segment['fileoff'] + offset:segment['fileoff'] + min(offset + len(raw), segment['filesize'])]
            require(actual + bytes(len(raw) - len(actual)) == raw, 'Data input differs from exact IPA')


def run(ipa=None, original_ipa=None):
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong original executable')
        image = MachO(data)
        records = flows()
        native = json.loads((ROOT / 'recovered/analysis/native-context.json').read_text())
        block = walk(data, INIT, {int(x, 16) for x in native['declared_function_starts']}, {}, image=image, dispatch=Dispatch(image))
        block['role'] = 'initialization-block'
        records.append(block)
        classes = {cl['name']: int(cl['address'], 16) for cl in image.classes() if cl['name'].startswith('YYYLocalized')}
        bindings = image.binds
        chunks = [(s['vmaddr'], data[s['fileoff']:s['fileoff'] + s['filesize']] + bytes(s['vmsize'] - s['filesize']))
                  for s in image.segments if s['name'] != '__PAGEZERO']
        strings = {int(v['address'], 16): v['value'] for v in json.loads((ROOT / 'recovered/objc/constant-strings.json').read_text())}
        # Decode only known runtime import stubs; do not infer from a decompiler name.
        from recover_dispatch import decoder
        cs = decoder()
        external = {}
        for f in records:
            for r in f['instructions']:
                if r['mnemonic'] not in ('bl', 'b'):
                    continue
                target = int(r.get('call_target', r['operands'].lstrip('#')), 16)
                if any(int(x['address'], 16) == target for g in records for x in g['instructions']):
                    continue
                ins = list(cs.disasm(data[image.fileoff(target):image.fileoff(target) + 12], target))
                if len(ins) == 3 and [i.mnemonic for i in ins] == ['adrp', 'ldr', 'br']:
                    slot = ins[0].operands[1].imm + ins[1].operands[1].mem.disp
                    if slot in bindings:
                        external[target] = bindings[slot]
        selectors = {}
        for s in image.sections:
            if s['name'] == '__objc_selrefs':
                selectors.update({image.u64(a): image.cstr(image.u64(a)) for a in range(s['address'], s['address'] + s['size'], 8)})
    else:
        evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        index = json.loads((OUT / 'index.json').read_text())
        require(index['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong localization input identity')
        for name, digest in index['files'].items():
            require(Path(name).name == name and hashlib.sha256((OUT / name).read_bytes()).hexdigest() == digest,
                    'Changed localization file: ' + name)
        validate_inputs(evidence, original_ipa)
        records, classes = evidence['records'], evidence['classes']
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        strings = {int(k, 16): v for k, v in evidence['strings'].items()}
        selectors = {int(k, 16): v for k, v in evidence['selectors'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(v['address'], 16), bytes.fromhex(v['bytes'])) for v in evidence['memory']]
        chunks += [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for f in records for r in f['instructions']]
        constants = {int(v['address'], 16): v['value'] for v in json.loads((ROOT / 'recovered/objc/constant-strings.json').read_text())}
        require(all(constants.get(a) == value for a, value in strings.items()), 'Changed original constant string')
    validate_records(records)
    tables, reads, visited, used_strings = {}, set(), set(), set()
    for record in records:
        if record.get('selector') != 'localizableDic':
            continue
        machine = configure(Machine(chunks, records, bindings, classes, strings), records, external, selectors)
        pointer = machine.run(int(record['entry'], 16), classes[record['class_name']])
        pairs = [(strings[k], strings[v]) for k, v in machine.last_pairs]
        require(len(dict(pairs)) == len(pairs), 'Duplicate original dictionary keys require Foundation-specific validation')
        require(machine.value(pointer) == dict(pairs), 'Original dictionary return disagrees with constructor')
        tables[record['class_name']] = pairs
        reads.update(machine.reads)
        visited.update(machine.visited)
        used_strings.update(machine.used_strings)
        machine.close()
    def factory():
        return configure(Machine(chunks, records, bindings, classes, strings, tables), records, external, selectors)
    cases, fixture_reads, fixture_visited, fixture_strings = fixtures(factory, tables, records)
    reads.update(fixture_reads)
    visited.update(fixture_visited)
    used_strings.update(fixture_strings)
    entries = {(r['class_name'], r['selector']): int(r['entry'], 16) for r in records if 'class_name' in r}
    source = generated_source(tables, entries)
    if ipa:
        memory = []
        used_bindings = {}
        for address, size in sorted(reads):
            segment = next(s for s in image.segments if s['vmaddr'] <= address and address + size <= s['vmaddr'] + s['vmsize'])
            offset = address - segment['vmaddr']
            raw = data[segment['fileoff'] + offset:segment['fileoff'] + min(offset + size, segment['filesize'])]
            raw += bytes(size - len(raw))
            memory.append({'address': hex(address), 'bytes': raw.hex()})
            if address in bindings:
                used_bindings[address] = bindings[address]
        evidence = {'records': records, 'memory': memory, 'bindings': {hex(a): v for a, v in used_bindings.items()},
                    'classes': classes, 'strings': {hex(a): strings[a] for a in sorted(used_strings)},
                    'external_targets': {hex(a): v for a, v in external.items()}, 'selectors': {hex(a): v for a, v in selectors.items()}}
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, ensure_ascii=False, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'dictionaries.json').write_text(json.dumps(tables, ensure_ascii=False, indent=2) + '\n')
        (OUT / 'runtime-fixtures.json').write_text(json.dumps(cases, ensure_ascii=False, indent=2) + '\n')
        (OUT / 'ESignLocalizationTables.m').write_text(source)
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'classes': len(tables), 'methods': 13, 'initialization_blocks': 1,
                 'dictionary_pairs': sum(map(len, tables.values())), 'locale_fixtures': len(cases),
                 'lookup_cases': sum(c['lookup_cases'] for c in cases), 'visited_original_instructions': len(visited),
                 'foundation_arc_calls_are_models': True, 'complete_app_built_or_run': False,
                 'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(json.loads((OUT / 'dictionaries.json').read_text()) == {k: [list(p) for p in v] for k, v in tables.items()}, 'Changed reconstructed tables')
        require(json.loads((OUT / 'runtime-fixtures.json').read_text()) == cases, 'Changed original runtime fixture results')
        require((OUT / 'ESignLocalizationTables.m').read_text() == source, 'Changed generated Objective-C source')
    print(json.dumps({'result': 'PASS', 'classes': len(tables), 'dictionary_pairs': sum(map(len, tables.values())),
                      'locale_fixtures': len(cases), 'lookup_cases': sum(c['lookup_cases'] for c in cases),
                      'original_instructions_executed': len(visited), 'full_app_built_or_run': False}, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--original-ipa', type=Path, help='Also compare saved input memory with the exact IPA')
    args = parser.parse_args()
    require(args.verify or args.ipa is not None, 'Supply exact IPA or --verify')
    run(None if args.verify else args.ipa, args.original_ipa)
