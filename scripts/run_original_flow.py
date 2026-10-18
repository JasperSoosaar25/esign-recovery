#!/usr/bin/env python3
"""Reproduce five separate original-byte flow studies; never builds an app."""
import argparse
import hashlib
import json
import os
import pathlib
import subprocess
import sys
import zipfile

from audit_evidence import EXPECTED_EXECUTABLE, require

ROOT = pathlib.Path(__file__).resolve().parents[1]
STUDIES = [('YYYTabBarViewController', 'generateSubViewController'),
           ('AppDelegate', 'application:didFinishLaunchingWithOptions:'),
           ('YYYFileListViewController', 'initSubviews'),
           ('YYYSettingTableViewController', 'initTableView'),
           ('YYYSignHelper', 'preSignWithOption:')]


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('ipa', type=pathlib.Path)
    p.add_argument('--ghidra-home', type=pathlib.Path, required=True)
    p.add_argument('--java-home', type=pathlib.Path, required=True)
    args = p.parse_args()
    properties = (args.ghidra_home / 'Ghidra/application.properties').read_text()
    require('application.version=12.1.4\n' in properties, 'Use the pinned Ghidra 12.1.4 distribution')
    private = ROOT / 'private-input/original-flow'
    private.mkdir(parents=True, exist_ok=True)
    binary = private / 'ESign'
    with zipfile.ZipFile(args.ipa) as z:
        data = z.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
    binary.write_bytes(data)
    project = private / 'project'
    project.mkdir(exist_ok=True)
    output = ROOT / 'analysis/original-flow'
    output.mkdir(parents=True, exist_ok=True)
    env = os.environ.copy()
    env['JAVA_HOME'] = str(args.java_home.resolve())
    summaries = []
    for i, (class_name, selector) in enumerate(STUDIES):
        subprocess.run([sys.executable, str(ROOT / 'scripts/recover_method_flow.py'),
                        str(args.ipa.resolve()), '--class-name', class_name,
                        '--selector', selector, '--output', str(output)], check=True)
        stem = class_name + '-' + selector.replace(':', '_')
        flow = json.loads((output / (stem + '.json')).read_text())
        name = 'Original_' + class_name + '_' + selector.replace(':', '_')
        cmd = [str(args.ghidra_home.resolve() / 'support/analyzeHeadless'),
               str(project), 'ESignOriginalFlow']
        cmd += ['-import', str(binary), '-overwrite'] if i == 0 else ['-process', 'ESign']
        cmd += ['-noanalysis', '-scriptPath', str(ROOT / 'scripts/ghidra'),
                '-postScript', 'ExportOriginalFlow.java', str(output / (stem + '.tsv')),
                flow['entry'], str(private / (stem + '.pseudo.c')), name]
        exported = private / (stem + '.pseudo.c')
        if exported.exists():
            exported.unlink()
        log_path = private / (stem + '.log')
        with log_path.open('w') as log:
            subprocess.run(cmd, env=env, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT, check=True)
        require(exported.is_file() and exported.stat().st_size > 300,
                'Ghidra did not produce a complete export')
        require('Exported ' + name + ' from ' in log_path.read_text(),
                'Ghidra did not report successful export')
        (output / (stem + '.pseudo.c')).write_bytes(exported.read_bytes())
        summaries.append({k: flow[k] for k in ['class_name', 'selector', 'entry', 'instruction_count',
                         'static_table_edges', 'unresolved_indirect_jumps', 'boundary_stops']})
        print('Exported original-byte study:', stem, flush=True)
    hashes = [{'path': str(f.relative_to(ROOT)), 'bytes': f.stat().st_size,
               'sha256': hashlib.sha256(f.read_bytes()).hexdigest()}
              for f in sorted(output.iterdir()) if f.is_file() and f.name != 'index.json']
    index = {'executable_sha256': EXPECTED_EXECUTABLE, 'ghidra_version': '12.1.4',
             'input_bytes_modified': False, 'app_built_or_run': False,
             'original_source_build_verified': False, 'runtime_equivalence_verified': False,
             'studies': summaries, 'files': hashes}
    (output / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    require(hashlib.sha256(binary.read_bytes()).hexdigest() == EXPECTED_EXECUTABLE,
            'Analysis input was modified')


if __name__ == '__main__':
    main()
