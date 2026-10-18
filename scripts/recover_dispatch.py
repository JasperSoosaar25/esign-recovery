#!/usr/bin/env python3
"""Decode original selector-specific objc_msgSend stubs, without running code."""
import argparse
import gzip
import hashlib
import json
import pathlib
import struct
import zipfile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, CS_OP_IMM, CS_OP_MEM, CS_OP_REG
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO

ROOT = pathlib.Path(__file__).resolve().parents[1]
SECTION_NAMES = ('__stubs', '__stub_helper', '__objc_stubs', '__objc_selrefs', '__objc_methname')


def decoder():
    result = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    result.detail = True
    return result


def inside(image, name, address, size=1):
    return any(s['name'] == name and s['address'] <= address
               and address + size <= s['address'] + s['size'] for s in image.sections)


def decode_stub(image, cs, address):
    """Require the exact linker pattern, original selref/name, and runtime binding."""
    if address % 4 or not inside(image, '__objc_stubs', address, 20):
        return None
    try:
        offset = image.fileoff(address)
        raw = image.data[offset:offset + 20]
        ins = list(cs.disasm(raw, address))
        if len(ins) != 5 or [v.mnemonic for v in ins] != ['adrp', 'ldr', 'adrp', 'ldr', 'br']:
            return None
        slots = []
        for a, b, register in ((ins[0], ins[1], 'x1'), (ins[2], ins[3], 'x16')):
            aa, bb = a.operands, b.operands
            if not (len(aa) == len(bb) == 2 and aa[0].type == bb[0].type == CS_OP_REG
                    and a.reg_name(aa[0].reg) == b.reg_name(bb[0].reg) == register
                    and aa[1].type == CS_OP_IMM and bb[1].type == CS_OP_MEM
                    and b.reg_name(bb[1].mem.base) == register and not bb[1].mem.index
                    and not b.writeback):
                return None
            slots.append(aa[1].imm + bb[1].mem.disp)
        if len(ins[4].operands) != 1 or ins[4].operands[0].type != CS_OP_REG or ins[4].op_str != 'x16':
            return None
        selref, binding = slots
        if not inside(image, '__objc_selrefs', selref, 8) or image.binds.get(binding) != '_objc_msgSend':
            return None
        selector_address = image.u64(selref)
        if not inside(image, '__objc_methname', selector_address):
            return None
        selector = image.cstr(selector_address)
        if not selector or not inside(image, '__objc_methname', selector_address, len(selector.encode()) + 1):
            return None
        return {'address': hex(address), 'bytes': raw.hex(), 'selector': selector,
                'selector_slot': hex(selref), 'selector_address': hex(selector_address),
                'message_send_slot': hex(binding), 'binding': '_objc_msgSend'}
    except (ValueError, IndexError, struct.error, UnicodeError):
        return None


class Dispatch:
    def __init__(self, image, cs=None):
        self.image, self.cs = image, cs or decoder()
        section = next(v for v in image.sections if v['name'] == '__objc_stubs')
        self.stubs = {}
        for address in range(section['address'], section['address'] + section['size'], 4):
            if image.u32(address) & 0x9f00001f != 0x90000001:
                continue
            stub = decode_stub(image, self.cs, address)
            if stub:
                self.stubs[address] = stub
        self.cache = {}

    def resolve(self, address):
        if address in self.cache:
            return self.cache[address]
        origin, seen, thunks = address, set(), []
        result = None
        for _ in range(9):
            if address in self.stubs:
                stub = self.stubs[address]
                result = {'selector': stub['selector'], 'stub': hex(address),
                          'direct_branch_thunks': thunks, 'receiver_class_verified': False}
                break
            if address in seen or address % 4 or not inside(self.image, '__text', address, 4):
                break
            seen.add(address)
            offset = self.image.fileoff(address)
            raw = self.image.data[offset:offset + 4]
            ins = next(self.cs.disasm(raw, address, count=1), None)
            if ins is None or ins.mnemonic != 'b' or len(ins.operands) != 1 or ins.operands[0].type != CS_OP_IMM:
                break
            target = ins.operands[0].imm
            thunks.append({'address': hex(address), 'bytes': raw.hex(), 'target': hex(target)})
            address = target
        self.cache[origin] = result
        return result


def gzip_write(path, data):
    path.write_bytes(gzip.compress(data, mtime=0))


def export(data, output):
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
    image = MachO(data)
    dispatch = Dispatch(image)
    output.mkdir(parents=True, exist_ok=True)
    files, sections, streams = [], [], []
    def save(name, raw):
        path = output / name
        gzip_write(path, raw)
        files.append({'path': name, 'bytes': path.stat().st_size,
                      'sha256': hashlib.sha256(path.read_bytes()).hexdigest(),
                      'uncompressed_bytes': len(raw), 'uncompressed_sha256': hashlib.sha256(raw).hexdigest()})
    for section in image.sections:
        if section['name'] in SECTION_NAMES:
            name = section['name'] + '.bin.gz'
            raw = data[section['offset']:section['offset'] + section['size']]
            require(len(raw) == section['size'], 'Truncated native section')
            save(name, raw)
            sections.append(dict(section, path=name))
    for command, offset, _ in image.commands:
        if command in (0x22, 0x80000022):
            fields = struct.unpack_from('<10I', data, offset + 8)
            for kind, start, length in [('bind', fields[2], fields[3]), ('weak-bind', fields[4], fields[5]),
                                        ('lazy-bind', fields[6], fields[7])]:
                if length:
                    name = kind + '.bin.gz'
                    save(name, data[start:start + length])
                    streams.append({'kind': kind, 'offset': start, 'size': length, 'path': name})
    save('selector-stubs.json.gz', (json.dumps(list(dispatch.stubs.values()), separators=(',', ':')) + '\n').encode())
    index = {'executable_sha256': EXPECTED_EXECUTABLE, 'original_bytes_modified': False,
             'app_built_or_run': False, 'receiver_classes_verified': False,
             'decoded_selector_stubs': len(dispatch.stubs), 'sections': sections,
             'dyld_bind_streams': streams, 'files': files,
             'scope': 'Exact original code/data section excerpts and static selector-stub decoding; not app source'}
    (output / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    with (output / 'selector-stubs.tsv').open('w') as out:
        out.write('address\tselector\tselector_slot\tmessage_send_slot\n')
        for stub in dispatch.stubs.values():
            out.write('\t'.join(stub[k] for k in ['address', 'selector', 'selector_slot', 'message_send_slot']) + '\n')
    return index


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=pathlib.Path)
    parser.add_argument('--output', type=pathlib.Path, default=ROOT / 'analysis/objc-dispatch')
    args = parser.parse_args()
    with zipfile.ZipFile(args.ipa) as archive:
        data = archive.read('Payload/ESign.app/ESign')
    index = export(data, args.output)
    print(json.dumps({'decoded_selector_stubs': index['decoded_selector_stubs'],
                      'original_section_bytes': sum(v['size'] for v in index['sections'])}, indent=2))


if __name__ == '__main__':
    main()
