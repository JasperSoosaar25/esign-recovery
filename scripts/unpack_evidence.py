#!/usr/bin/env python3
"""Restore the complete recovery snapshot from hash-verified repository parts.

Existing changed files are never overwritten. No application code is executed.
"""
import hashlib
import io
import json
import pathlib
import zipfile

from audit_evidence import contained, require

ROOT = pathlib.Path(__file__).resolve().parents[1]


def unpack(root=ROOT):
    manifest = json.loads((root / 'evidence/archive-manifest.json').read_text())
    parts = []
    for item in manifest['parts']:
        data = contained(root, item['path']).read_bytes()
        require(len(data) == item['bytes'], 'Archive part size mismatch')
        require(hashlib.sha256(data).hexdigest() == item['sha256'], 'Archive part hash mismatch')
        parts.append(data)
    data = b''.join(parts)
    require(len(data) == manifest['archive_bytes'], 'Archive size mismatch')
    require(hashlib.sha256(data).hexdigest() == manifest['archive_sha256'], 'Archive hash mismatch')
    with zipfile.ZipFile(io.BytesIO(data)) as archive:
        entries = archive.infolist()
        require(len(entries) == manifest['file_count'], 'Archive file count mismatch')
        require(sum(v.file_size for v in entries) == manifest['uncompressed_bytes'], 'Archive expanded size mismatch')
        require(len({v.filename for v in entries}) == len(entries), 'Duplicate archive paths')
        # Validate every path and every existing file before writing anything.
        for item in entries:
            require(item.filename.startswith('recovered/'), 'Unexpected archive root')
            require((item.external_attr >> 16) & 0o170000 == 0o100000, 'Archive entry is not a regular file')
            destination = contained(root, item.filename)
            require(not destination.is_symlink(), 'Symlink in recovery destination')
            payload = archive.read(item)
            if destination.exists():
                require(destination.is_file() and destination.read_bytes() == payload,
                        'Existing file changed; preserve your edits and use a clean checkout: ' + item.filename)
        count = 0
        for item in entries:
            destination = contained(root, item.filename)
            if destination.exists():
                continue
            destination.parent.mkdir(parents=True, exist_ok=True)
            with destination.open('xb') as handle:
                handle.write(archive.read(item))
            count += 1
    return {'snapshot_files': len(entries), 'restored_files': count,
            'archive_sha256': manifest['archive_sha256'], 'executed_app': False}


if __name__ == '__main__':
    print(json.dumps(unpack(), indent=2))
