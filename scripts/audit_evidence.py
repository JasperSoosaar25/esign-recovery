#!/usr/bin/env python3
"""Integrity checks for exact byte listings; does not prove program behavior."""
import gzip
import hashlib
import json
import pathlib
import re

EXPECTED_EXECUTABLE = '809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154'


def require(condition, message):
    if not condition:
        raise ValueError(message)


def contained(root, relative):
    path = pathlib.Path(relative)
    require(not path.is_absolute() and '..' not in path.parts, 'Unsafe evidence path')
    result = (root / path).resolve()
    require(result.is_relative_to(root.resolve()), 'Evidence escapes root')
    return result


def verify_disassembly(directory):
    manifest = json.loads((directory / 'manifest.json').read_text())
    require(manifest['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong executable hash in disassembly')
    cursor = int(manifest['vm_start'], 16)
    total = 0
    digest = hashlib.sha256()
    seen = set()
    for chunk in manifest['chunks']:
        require(chunk['path'] not in seen, 'Duplicate disassembly chunk')
        seen.add(chunk['path'])
        raw = contained(directory, chunk['path']).read_bytes()
        require(hashlib.sha256(raw).hexdigest() == chunk['compressed_sha256'], 'Disassembly compressed hash mismatch')
        require(int(chunk['vm_start'], 16) == cursor, 'Disassembly gap or overlap')
        count = records = 0
        for line in gzip.decompress(raw).decode('utf-8').splitlines():
            if not line.strip() or line.startswith(';'):
                continue
            match = re.fullmatch(r'([0-9a-f]{16})  ([0-9a-f]+)\s+.*', line)
            require(match is not None, 'Malformed disassembly record')
            address = int(match[1], 16)
            encoded = bytes.fromhex(match[2])
            require(address == cursor and len(encoded) > 0, 'Noncontiguous instruction bytes')
            digest.update(encoded)
            cursor += len(encoded)
            count += len(encoded)
            records += 1
        require(count == chunk['machine_bytes'], 'Incorrect chunk byte count')
        require(records == chunk['instruction_records'], 'Incorrect instruction record count')
        require(cursor == int(chunk['vm_end'], 16), 'Incorrect disassembly chunk end')
        total += count
    require(total == manifest['machine_bytes'], 'Incorrect total text byte count')
    require({p.name for p in directory.glob('*.asm.gz')} == seen, 'Unindexed disassembly file')
    return {'text_bytes': total, 'text_sha256': digest.hexdigest(), 'chunks': len(seen)}


def verify_export_hashes(root):
    manifest = json.loads((root / 'recovered/export-manifest.json').read_text())
    require(manifest['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong export baseline')
    expected = set()
    for item in manifest['files']:
        require(item['path'] not in expected, 'Duplicate export manifest path')
        expected.add(item['path'])
        data = contained(root, item['path']).read_bytes()
        require(len(data) == item['bytes'], 'Export size mismatch: ' + item['path'])
        require(hashlib.sha256(data).hexdigest() == item['sha256'], 'Export hash mismatch: ' + item['path'])
    actual = {str(p.relative_to(root)) for p in (root / 'recovered').rglob('*')
              if p.is_file() and p.name != 'export-manifest.json'}
    require(actual == expected, 'Export manifest missing or extra file')
    return len(expected)
