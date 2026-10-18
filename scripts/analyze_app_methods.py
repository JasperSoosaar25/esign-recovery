#!/usr/bin/env python3
"""Trace every indexed app-candidate method, retaining limits and unknown jumps."""
import argparse
import csv
import hashlib
import json
import pathlib
import zipfile
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_dispatch import Dispatch, decoder, gzip_write
from recover_method_flow import walk

ROOT = pathlib.Path(__file__).resolve().parents[1]


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('ipa', type=pathlib.Path)
    p.add_argument('--output', type=pathlib.Path, default=ROOT / 'analysis/app-methods')
    args = p.parse_args()
    with zipfile.ZipFile(args.ipa) as archive:
        data = archive.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
    image, cs = MachO(data), decoder()
    dispatch = Dispatch(image, cs)
    metadata = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    native = json.loads((ROOT / 'recovered/analysis/native-context.json').read_text())
    boundaries = {int(v, 16) if isinstance(v, str) else v for v in native['declared_function_starts']}
    for cl in metadata['classes'] + metadata['categories']:
        boundaries.update(int(v['implementation'], 16) for v in cl['methods'])
    branches = {int(v['branch'], 16): v for v in csv.DictReader(
        (ROOT / 'recovered/analysis/static-branches.tsv').open(), delimiter='\t')}
    candidates = [c for c in metadata['classes'] if c['name'].startswith('YYY') or c['name'] == 'AppDelegate']
    args.output.mkdir(parents=True, exist_ok=True)
    methods, files, unique, calls, unknowns, limited = [], [], {}, set(), 0, 0
    for i, cl in enumerate(candidates):
        records = []
        path = args.output / (cl['name'] + '.jsonl.gz')
        for method in cl['methods']:
            result = walk(data, int(method['implementation'], 16), boundaries, branches,
                          image=image, decoder=cs, dispatch=dispatch)
            result.update(class_name=cl['name'], selector=method['selector'], kind=method['kind'],
                          abi=method['type_encoding'], executable_sha256=EXPECTED_EXECUTABLE)
            records.append(json.dumps(result, separators=(',', ':')))
            summary = {k: result[k] for k in ['class_name', 'selector', 'kind', 'abi', 'entry',
                       'instruction_count', 'static_table_edges', 'unresolved_indirect_jumps']}
            summary['step_limit_reached'] = any(v['reason'] == 'abstract-step-limit' for v in result['boundary_stops'])
            summary['trace_file'] = path.name
            summary['record'] = len(records)
            observations = [v for v in result['instructions'] if 'objc_dispatch' in v]
            summary['identified_dispatch_calls'] = len(observations)
            methods.append(summary)
            unknowns += result['unresolved_indirect_jumps']
            limited += summary['step_limit_reached']
            for row in result['instructions']:
                require(row['address'] not in unique or unique[row['address']] == row['bytes'], 'Inconsistent original bytes')
                unique[row['address']] = row['bytes']
            calls.update(v['address'] for v in observations)
        gzip_write(path, ('\n'.join(records) + '\n').encode())
        files.append({'path': path.name, 'bytes': path.stat().st_size,
                      'sha256': hashlib.sha256(path.read_bytes()).hexdigest(), 'method_records': len(records)})
        if (i + 1) % 10 == 0:
            print(f'{i+1}/{len(candidates)} classes; {len(methods)} method records', flush=True)
    index = {'executable_sha256': EXPECTED_EXECUTABLE, 'app_built_or_run': False,
             'buildable_source': False, 'runtime_equivalence_verified': False,
             'scope': 'All YYY-prefix/AppDelegate class method entries; prefix is a heuristic',
             'classes': len(candidates), 'method_entries': len(methods),
             'unique_original_instructions': len(unique), 'unique_identified_dispatch_calls': len(calls),
             'unresolved_jump_records': unknowns, 'methods_reaching_step_limit': limited,
             'files': files}
    (args.output / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    (args.output / 'methods.json').write_text(json.dumps(methods, indent=2) + '\n')
    with (args.output / 'methods.tsv').open('w') as f:
        columns = list(methods[0])
        writer = csv.DictWriter(f, fieldnames=columns, delimiter='\t', lineterminator='\n')
        writer.writeheader()
        writer.writerows(methods)
    print(json.dumps({k: v for k, v in index.items() if k != 'files'}, indent=2))


if __name__ == '__main__':
    main()
