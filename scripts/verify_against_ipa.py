#!/usr/bin/env python3
"""Compare published evidence directly with the exact input IPA, without execution."""
import argparse
import csv
import hashlib
import json
import pathlib
import zipfile

from audit_evidence import EXPECTED_EXECUTABLE, contained, require, verify_disassembly
from recover_objc import MachO
from recover_native_context import decode

EXPECTED_IPA = 'f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29'
ROOT = pathlib.Path(__file__).resolve().parents[1]


def verify(ipa, root=ROOT):
    require(hashlib.sha256(ipa.read_bytes()).hexdigest() == EXPECTED_IPA, 'Wrong input IPA')
    recovered = root / 'recovered'
    manifest = json.loads((recovered / 'resource-manifest.json').read_text())
    with zipfile.ZipFile(ipa) as archive:
        require(archive.testzip() is None, 'ZIP CRC failure')
        infos = archive.infolist()
        require(len({v.filename for v in infos}) == len(infos), 'Duplicate ZIP entries')
        require(len(infos) == 100, 'Wrong entry count')
        for item in manifest['entries']:
            data = archive.read(item['archive_path'])
            require(data == contained(recovered, item['path']).read_bytes(), 'Original resource differs: ' + item['path'])
        represented = {v['archive_path'] for v in manifest['entries']}
        excluded = {'Payload/ESign.app/' + v for v in manifest['excluded']}
        files = {v.filename for v in infos if not v.is_dir()}
        require(represented.isdisjoint(excluded) and represented | excluded == files, 'Incomplete archive accounting')
        executable = archive.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(executable).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
    image = MachO(executable)
    metadata = json.loads((recovered / 'objc/objc-metadata.json').read_text())
    require(image.classes() == metadata['classes'], 'Class metadata differs from input')
    require(image.categories() == metadata['categories'], 'Category metadata differs from input')
    require(image.sections == metadata['sections'], 'Section metadata differs from input')
    require(decode(executable) == json.loads((recovered / 'analysis/native-context.json').read_text()), 'Native context differs from input')
    listing = verify_disassembly(recovered / 'disassembly')
    section = next(v for v in image.sections if v['name'] == '__text')
    raw_text = executable[section['offset']:section['offset'] + section['size']]
    require(listing['text_sha256'] == hashlib.sha256(raw_text).hexdigest(), 'Listing bytes differ from original text')
    branches = list(csv.DictReader((recovered / 'analysis/static-branches.tsv').open(), delimiter='\t'))
    for row in branches:
        pointer = int(row['pointer_slot'], 16)
        require(image.u64(pointer) == int(row['initial_target'], 16), 'Static pointer target differs')
        offset = image.fileoff(int(row['branch'], 16))
        require(executable[offset:offset + 4].hex() == row['instruction'], 'Branch instruction bytes differ')
    return {'ipa_sha256': EXPECTED_IPA, 'executable_sha256': EXPECTED_EXECUTABLE,
            'zip_entries': len(infos), 'zip_files': len(files),
            'exact_resources': len(manifest['entries']), 'excluded_files': len(excluded),
            'classes_compared': len(metadata['classes']), 'categories_compared': len(metadata['categories']),
            'static_jump_records_compared': len(branches), **listing,
            'executed_or_installed': False, 'source_build_verified': False,
            'ios27_runtime_verified': False, 'semantic_equivalence_verified': False}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=pathlib.Path)
    parser.add_argument('--output', type=pathlib.Path)
    args = parser.parse_args()
    result = verify(args.ipa)
    rendered = json.dumps(result, indent=2) + '\n'
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(rendered)
    print(rendered, end='')


if __name__ == '__main__':
    main()
