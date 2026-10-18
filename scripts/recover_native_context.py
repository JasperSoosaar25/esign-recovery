#!/usr/bin/env python3
"""Decode native link symbols, literal C strings, and declared function starts."""
import argparse
import csv
import hashlib
import json
import pathlib
import struct

from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO


def decode(data):
    image = MachO(data)
    text_base = next(v['vmaddr'] for v in image.segments if v['name'] == '__TEXT')
    libraries, symbols, starts, strings = [], [], [], []
    for command, offset, size in image.commands:
        if command in (0xc, 0x18, 0x80000018, 0x8000001f, 0x80000023, 0x20):
            name_offset, stamp, current, compatibility = struct.unpack_from('<IIII', data, offset + 8)
            end = data.index(b'\0', offset + name_offset, offset + size)
            libraries.append({'path': data[offset + name_offset:end].decode('utf-8', 'replace'),
                              'command': hex(command), 'current_version_raw': current,
                              'compatibility_version_raw': compatibility})
        if command == 2:
            symoff, nsyms, stroff, strsize = struct.unpack_from('<IIII', data, offset + 8)
            for i in range(nsyms):
                index, kind, section, desc, address = struct.unpack_from('<IBBHQ', data, symoff + i * 16)
                require(index < strsize, 'Symbol name outside string table')
                end = data.index(b'\0', stroff + index, stroff + strsize)
                symbols.append({'name': data[stroff + index:end].decode('utf-8', 'replace'),
                                'address': hex(address), 'type_raw': kind,
                                'section_ordinal': section, 'description_raw': desc})
        if command == 0x26:
            start, length = struct.unpack_from('<II', data, offset + 8)
            cursor, address = start, text_base
            while cursor < start + length:
                value = shift = 0
                while True:
                    require(cursor < start + length and shift <= 63, 'Invalid function-start ULEB128')
                    byte = data[cursor]
                    cursor += 1
                    value |= (byte & 0x7f) << shift
                    shift += 7
                    if byte < 128:
                        break
                if value == 0:
                    break
                address += value
                starts.append(hex(address))
    for section in image.sections:
        if section['name'] != '__cstring':
            continue
        raw = data[section['offset']:section['offset'] + section['size']]
        offset = 0
        while offset < len(raw):
            end = raw.find(b'\0', offset)
            if end < 0:
                end = len(raw)
            if end > offset:
                value = raw[offset:end]
                strings.append({'address': hex(section['address'] + offset), 'bytes': len(value),
                                'utf8': value.decode('utf-8', 'replace'), 'hex': value.hex()})
            offset = end + 1
    return {'executable_sha256': hashlib.sha256(data).hexdigest(),
            'linked_libraries': libraries, 'symbols': symbols,
            'declared_function_starts': starts, 'cstrings': strings}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('executable', type=pathlib.Path)
    parser.add_argument('output', type=pathlib.Path)
    parser.add_argument('--function-index', type=pathlib.Path)
    args = parser.parse_args()
    data = args.executable.read_bytes()
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable baseline')
    result = decode(data)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2, ensure_ascii=False) + '\n')
    summary = {k: len(result[k]) for k in ['linked_libraries', 'symbols', 'declared_function_starts', 'cstrings']}
    if args.function_index:
        exported = {v['address'] for v in csv.DictReader(args.function_index.open(), delimiter='\t')}
        missing = [v for v in result['declared_function_starts'] if v not in exported]
        summary['declared_starts_absent_from_export'] = len(missing)
        summary['missing_addresses'] = missing
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
