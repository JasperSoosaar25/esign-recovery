#!/usr/bin/env python3
"""Export fuller native method pseudocode from verified original-byte traces.

This is static research output, never a source-only app build or runtime proof.
"""
import argparse
import csv
import gzip
import hashlib
import json
import os
import re
from pathlib import Path
import subprocess
import zipfile

from audit_evidence import EXPECTED_EXECUTABLE, require

ROOT = Path(__file__).resolve().parents[1]


def prepare(ipa, private, selected=None):
    with zipfile.ZipFile(ipa) as archive:
        data = archive.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong original executable')
    private.mkdir(parents=True, exist_ok=True)
    (private / 'ESign').write_bytes(data)
    flows = private / 'flows'
    flows.mkdir(exist_ok=True)
    records = []
    with (private / 'jobs.tsv').open('w') as jobs:
        jobs.write('index\tclass\tkind\tselector\tabi\tentry\tflow\tinstructions\tunresolved_jumps\n')
        base = ROOT / 'analysis/app-methods'
        for item in json.loads((base / 'index.json').read_text())['files']:
            for line in gzip.decompress((base / item['path']).read_bytes()).splitlines():
                flow = json.loads(line)
                if selected and flow['class_name'] not in selected:
                    continue
                index = f'{len(records):05}'
                target = flows / (index + '.tsv')
                with target.open('w') as file:
                    file.write('address\tinitial_jump_target\n')
                    for row in flow['instructions']:
                        targets = ','.join(row['successors']) if row['mnemonic'] == 'br' and not row.get('unresolved_on_some_abstract_paths') else ''
                        file.write(row['address'] + '\t' + targets + '\n')
                row = [index, flow['class_name'], flow['kind'], flow['selector'], flow['abi'], flow['entry'],
                       str(target.resolve()), str(flow['instruction_count']), str(flow['unresolved_indirect_jumps'])]
                require(all('\t' not in value and '\n' not in value for value in row), 'Unsafe TSV field')
                jobs.write('\t'.join(row) + '\n')
                records.append({key: flow[key] for key in ['class_name', 'kind', 'selector', 'abi', 'entry',
                                'instruction_count', 'unresolved_indirect_jumps']})
    return records


def finish(output, records, input_ipa):
    rows = list(csv.DictReader((output / 'results.tsv').open(), delimiter='\t'))
    fields = ['index', 'class', 'kind', 'selector', 'abi', 'entry', 'instructions', 'unresolved_jumps', 'status', 'output', 'error']
    rebuilt = len(rows) != len(records)
    if rebuilt:
        # Some Java streaming indexes can be truncated while all independently
        # written method files are complete. Never infer a body from a log count.
        rows = []
        for number, original in enumerate(records):
            relative = f'methods/method-{number:05}.pseudo.c'
            text = (output / relative).read_text()
            failure = text.startswith('/* DECOMPILATION FAILED:')
            if not failure:
                require(text.rstrip().endswith('}'), 'Truncated native function body: ' + relative)
                require(f" * Method: {original['kind']}[{original['class_name']} {original['selector']}]\n" in text,
                        'Wrong native method marker: ' + relative)
                require(f" * Entry: {original['entry']}; original ABI: {original['abi']}\n" in text,
                        'Wrong native entry/ABI marker: ' + relative)
                require(re.search(r'\b' + re.escape(f"Recovered_{original['class_name']}_m{number:05}") + r'\s*\(', text),
                        'Wrong exported function name')
            rows.append(dict(zip(fields, [f'{number:05}', original['class_name'], original['kind'], original['selector'],
                        original['abi'], original['entry'], str(original['instruction_count']),
                        str(original['unresolved_indirect_jumps']), 'failed' if failure else 'exported',
                        relative, text.removeprefix('/* DECOMPILATION FAILED:').removesuffix(' */\n').strip() if failure else ''])))
        with (output / 'results.tsv').open('w') as file:
            writer = csv.DictWriter(file, fields, delimiter='\t', lineterminator='\n')
            writer.writeheader()
            writer.writerows(rows)
        print('Rebuilt the complete index from independently written method files.', flush=True)
    require(len(rows) == len(records), 'Incomplete method export')
    classes = {}
    for index, (row, original) in enumerate(zip(rows, records)):
        require(row['index'] == f'{index:05}', 'Wrong method order')
        require((row['class'], row['kind'], row['selector'], row['abi'], row['entry']) ==
                tuple(original[key] for key in ['class_name', 'kind', 'selector', 'abi', 'entry']), 'Wrong method identity')
        classes.setdefault(row['class'], []).append(row)
    classes_dir = output / 'classes'
    classes_dir.mkdir(exist_ok=True)
    for name, methods in classes.items():
        with (classes_dir / (name + '.pseudo.c')).open('w') as file:
            file.write('/* Static original-byte method decompilation. See index.json for limitations. */\n\n')
            for row in methods:
                file.write((output / row['output']).read_text() + '\n\n')
    paths = [output / 'results.tsv', *sorted((output / 'methods').glob('*.pseudo.c')),
             *sorted(classes_dir.glob('*.pseudo.c'))]
    summary = {'input_ipa_sha256': hashlib.sha256(Path(input_ipa).read_bytes()).hexdigest(),
               'executable_sha256': EXPECTED_EXECUTABLE, 'ghidra_version': '12.1.4',
               'trace_index_sha256': hashlib.sha256((ROOT / 'analysis/app-methods/index.json').read_bytes()).hexdigest(),
               'method_entries': len(rows), 'classes': len(classes),
               'exported_methods': sum(row['status'] == 'exported' for row in rows),
               'failed_methods': sum(row['status'] != 'exported' for row in rows),
               'methods_with_unresolved_jumps': sum(int(row['unresolved_jumps']) > 0 for row in rows),
               'index_rebuilt_from_complete_method_files': rebuilt,
               'input_bytes_modified': False, 'app_built_or_run': False, 'buildable_app_source': False,
               'semantic_equivalence_verified': False,
               'assumptions': ['Recorded original initial-pointer tables', 'Recorded call-return and ABI assumptions',
                               'Recorded method-entry boundaries', 'Decompiler-inferred C types'],
               'files': [{'path': str(path.relative_to(output)), 'bytes': path.stat().st_size,
                          'sha256': hashlib.sha256(path.read_bytes()).hexdigest()} for path in paths]}
    (output / 'index.json').write_text(json.dumps(summary, indent=2) + '\n')
    return {key: value for key, value in summary.items() if key != 'files'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path)
    parser.add_argument('--ghidra-home', type=Path, required=True)
    parser.add_argument('--java-home', type=Path, required=True)
    parser.add_argument('--class-name', action='append')
    parser.add_argument('--retry-failed', action='store_true')
    parser.add_argument('--finish-only', action='store_true')
    parser.add_argument('--output', type=Path, default=ROOT / 'analysis/native-methods')
    args = parser.parse_args()
    require('application.version=12.1.4\n' in (args.ghidra_home / 'Ghidra/application.properties').read_text(), 'Wrong Ghidra version')
    private = ROOT / 'private-input/native-methods'
    records = prepare(args.ipa, private, args.class_name)
    require(bool(records), 'No selected original methods')
    args.output.mkdir(parents=True, exist_ok=True)
    if args.finish_only:
        print(json.dumps(finish(args.output, records, args.ipa), indent=2))
        return
    project = private / 'project'
    project.mkdir(exist_ok=True)
    env = os.environ.copy()
    env['JAVA_HOME'] = str(args.java_home.resolve())
    command = [str(args.ghidra_home.resolve() / 'support/analyzeHeadless'), str(project.resolve()), 'ESignNativeMethods',
               '-import', str((private / 'ESign').resolve()), '-overwrite', '-noanalysis',
               '-scriptPath', str(ROOT / 'scripts/ghidra'), '-postScript', 'ExportAppMethods.java',
               str((private / 'jobs.tsv').resolve()), str(args.output.resolve())]
    if args.retry_failed:
        command.append('retry')
    log_path = private / 'ghidra.log'
    print('Decompiling', len(records), 'original method entries; log:', log_path, flush=True)
    with log_path.open('w') as log:
        subprocess.run(command, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
    summary = finish(args.output, records, args.ipa)
    require(hashlib.sha256((private / 'ESign').read_bytes()).hexdigest() == EXPECTED_EXECUTABLE, 'Original input changed')
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
