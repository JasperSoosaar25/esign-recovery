#!/usr/bin/env python3
"""Account for every entry of the original cached IPA without publishing inputs."""
import argparse
import hashlib
import io
import json
import pathlib
import zipfile

from audit_evidence import require
from verify_against_ipa import EXPECTED_IPA

ROOT = pathlib.Path(__file__).resolve().parents[1]


def audit(data, resource_manifest, expected_sha=EXPECTED_IPA):
    require(hashlib.sha256(data).hexdigest() == expected_sha, 'Wrong IPA baseline')
    retained = {v['archive_path']: v for v in resource_manifest['entries']}
    excluded = {'Payload/ESign.app/' + n for n in resource_manifest['excluded']}
    rows = []
    with zipfile.ZipFile(io.BytesIO(data)) as archive:
        require(archive.testzip() is None, 'Corrupt ZIP entry')
        infos = archive.infolist()
        require(len({v.filename for v in infos}) == len(infos), 'Duplicate ZIP paths')
        actual_files = {v.filename for v in infos if not v.is_dir()}
        require(not retained.keys() & excluded, 'Retained/excluded overlap')
        require(actual_files == retained.keys() | excluded, 'Unaccounted IPA file')
        for info in infos:
            row = {'archive_path': info.filename,
                   'kind': 'directory' if info.is_dir() else 'file',
                   'bytes': info.file_size, 'zip_crc32': f'{info.CRC:08x}'}
            if info.is_dir():
                row.update(status='directory-accounted', destination=None,
                           reason='ZIP directory entry; no file payload to omit.')
            else:
                payload = archive.read(info)
                row['sha256'] = hashlib.sha256(payload).hexdigest()
                if info.filename in retained:
                    item = retained[info.filename]
                    require(row['sha256'] == item['sha256'], 'Resource hash mismatch')
                    row.update(status='retained-exact', destination='recovered/' + item['path'],
                               reason='Original bytes retained in the lossless snapshot.')
                elif info.filename.endswith('/ESign'):
                    row.update(status='input-only-executable', destination=None,
                               reason='Compiled executable retained as local analysis input. Original code bytes, metadata, and native recovery are represented in the snapshot; this is not recovered buildable source.')
                elif info.filename.endswith(('.mobileprovision', '.mobileconfig')):
                    row.update(status='input-only-profile', destination=None,
                               reason='Provisioning/configuration input remains local; do not publish signing or device configuration material.')
                else:
                    row.update(status='input-only-signature', destination=None,
                               reason='Original code-signature seal is an input artifact, not application source.')
            rows.append(row)
    counts = {}
    for row in rows:
        counts[row['status']] = counts.get(row['status'], 0) + 1
    return {'ipa_sha256': expected_sha, 'zip_entries': len(rows),
            'files': len(actual_files), 'directories': len(rows) - len(actual_files),
            'unaccounted_entries': 0, 'status_counts': counts,
            'all_original_source_recovered': False, 'original_source_build_verified': False,
            'entries': rows}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=pathlib.Path)
    parser.add_argument('--output', type=pathlib.Path, default=ROOT / 'docs/ipa-entry-audit.json')
    args = parser.parse_args()
    manifest = json.loads((ROOT / 'recovered/resource-manifest.json').read_text())
    result = audit(args.ipa.read_bytes(), manifest)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({k: v for k, v in result.items() if k != 'entries'}, indent=2))


if __name__ == '__main__':
    main()
