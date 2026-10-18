#!/usr/bin/env python3
"""Validate recovery integrity; never treat pseudocode as a source build."""
import csv
import json
import pathlib
import re
from audit_evidence import EXPECTED_EXECUTABLE, require, verify_disassembly, verify_export_hashes

ROOT = pathlib.Path(__file__).resolve().parents[1]


def main():
    r = ROOT / 'recovered'
    metadata = json.loads((r / 'objc/objc-metadata.json').read_text())
    summary = json.loads((r / 'objc/summary.json').read_text())
    classes, categories = metadata['classes'], metadata['categories']
    require(metadata['executable_sha256'] == EXPECTED_EXECUTABLE, 'Wrong executable baseline')
    require(len(classes) == summary['classes'] == 1104, 'Class count differs')
    require(len(categories) == summary['categories'] == 142, 'Category count differs')
    methods = [m for c in classes + categories for m in c['methods']]
    require(len(methods) == summary['methods'] == 19644, 'Method count differs')
    require(len({c['name'] for c in classes}) == len(classes), 'Duplicate classes')
    section = next(s for s in metadata['sections'] if s['name'] == '__text')
    for method in methods:
        require(section['address'] <= int(method['implementation'], 16) < section['address'] + section['size'], 'Method outside text')
    rows = list(csv.DictReader((r / 'objc/methods.tsv').open(), delimiter='\t'))
    expected = sorted(((c['class'] + '(' + c['name'] + ')' if 'class' in c else c['name']), m['kind'], m['selector'], m['implementation'], m['type_encoding']) for c in classes + categories for m in c['methods'])
    actual = sorted((v['class'], v['kind'], v['selector'], v['address'], v['type_encoding']) for v in rows)
    require(actual == expected, 'Selector index disagrees with raw metadata')
    export_count = verify_export_hashes(ROOT)
    listing = verify_disassembly(r / 'disassembly')
    decomp = r / 'decompiled'
    summary = json.loads((decomp / 'summary.json').read_text())
    functions = list(csv.DictReader((decomp / 'functions.tsv').open(), delimiter='\t'))
    require(len(functions) == summary['total_functions'] == 57245, 'Native function count differs')
    require(sum(v['status'] == 'decompiled' for v in functions) == summary['decompiled'], 'Native success count differs')
    require(sum(v['status'] == 'failed' for v in functions) == summary['failed'], 'Native failure count differs')
    bodies = {}
    for file in (decomp / 'native').glob('*.c'):
        for address in re.findall(r'/\* Address: (0x[0-9a-fA-F]+) \|', file.read_text()):
            require(int(address, 16) not in bodies, 'Duplicate native export')
            bodies[int(address, 16)] = str(file.relative_to(decomp))
    require(len(bodies) == len(functions), 'Native body/index count differs')
    for row in functions:
        require(bodies.get(int(row['address'], 16)) == row['file'], 'Native body missing from indexed file')
    coverage = json.loads((r / 'app-method-coverage.json').read_text())
    require(coverage['total_app_method_entries'] == len(coverage['methods']) == 3396, 'App method count differs')
    require(coverage['total_app_classes'] == 182, 'App candidate class count differs')
    indexed = {int(v['address'], 16): v for v in functions}
    for row in coverage['methods']:
        function = indexed.get(int(row['implementation'], 16))
        require(function and row['status'] == function['status'] and row['function_file'] == function['file'], 'App coverage disagrees with native index')
    prohibited = {'.ipa', '.dylib', '.p12', '.pfx', '.pem', '.key', '.mobileprovision', '.mobileconfig'}
    for path in r.rglob('*'):
        require(not path.is_symlink(), 'Symlink in recovered evidence')
        if path.is_file():
            require(path.suffix.lower() not in prohibited, 'Private/binary input in recovered evidence')
    for path in (ROOT / 'scripts').glob('*.py'):
        compile(path.read_text(), str(path), 'exec')
    print(json.dumps({'result': 'PASS', 'classes': len(classes), 'categories': len(categories), 'method_entries': len(methods), 'identified_native_functions': len(functions), 'integrity_manifest_files': export_count, **listing, 'source_build_verified': False, 'semantic_equivalence_verified': False}, indent=2))


if __name__ == '__main__':
    main()
