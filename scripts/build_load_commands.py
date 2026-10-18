#!/usr/bin/env python3
"""Compile Mach-O load-command source and compare Apple Foundation with originals."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'reconstruction/load-commands'


def command(args):
    result = subprocess.run(args, capture_output=True, text=True)
    if result.returncode:
        sys.stderr.write(result.stdout + result.stderr)
        result.check_returncode()
    return result


def build(output):
    if platform.system() != 'Darwin':
        raise SystemExit('Requires macOS with Xcode; no iOS build is claimed on this host.')
    output.mkdir(parents=True, exist_ok=True)
    source = SOURCE / 'ESignLoadCommands.m'
    common = ['-fobjc-arc', '-fblocks', '-Wall', '-Wextra', '-Werror', '-I', str(SOURCE)]
    executable = output / 'load-commands-runtime-tests'
    command(['xcrun', '--sdk', 'macosx', 'clang', *common, str(source),
             str(ROOT / 'reconstruction/mach-header/ESignMachHeader.m'), str(ROOT / 'tests/load_commands_runtime.m'), '-framework', 'Foundation', '-o', str(executable)])
    fixtures = json.loads((SOURCE / 'fixtures.json').read_text())
    runtime = json.loads(command([str(executable), str(SOURCE / 'fixtures.json')]).stdout)
    actual = runtime['fixtures']
    if actual != fixtures:
        for number, (expected, observed) in enumerate(zip(fixtures, actual)):
            if expected != observed:
                print(json.dumps({'case': number, 'expected': expected, 'observed': observed}, indent=2), file=sys.stderr)
                break
        raise ValueError('Apple Foundation/source differs from original ARM64/model results')
    original_metadata = json.loads((SOURCE / 'metadata.json').read_text())
    def canonical(classes):
        result = []
        for cl in classes:
            cl = dict(cl)
            cl['ivars'] = sorted(cl['ivars'], key=lambda v: v['name'])
            cl['methods'] = sorted(cl['methods'], key=lambda v: (v['kind'], v['selector']))
            result.append(cl)
        return sorted(result, key=lambda cl: cl['name'])
    if canonical(original_metadata) != canonical(runtime['metadata']):
        print(json.dumps({'original': canonical(original_metadata), 'compiled': canonical(runtime['metadata'])}, indent=2), file=sys.stderr)
        raise ValueError('Reconstructed classes differ from original class layout or method ABI')
    obj = output / 'ESignLoadCommands.o'
    command(['xcrun', '--sdk', 'iphoneos', 'clang', '-target', 'arm64-apple-ios11.0',
             *common, '-c', str(source), '-o', str(obj)])
    library = output / 'libESignLoadCommands.a'
    command(['xcrun', 'libtool', '-static', '-o', str(library), str(obj)])
    report = {'result': 'PASS', 'component': 'ESign original-derived Mach-O load-command classes', 'new_classes': 5, 'native_classes_checked': 6,
              'new_original_methods': 20, 'reused_parent_methods': 5, 'foundation_fixture_comparisons': len(fixtures),
              'derived_realized_class_layout_and_method_abis_verified': True,
              'ivar_realization_is_modeled': True, 'original_device_layout_observed': False,
              'toolchain': command(['xcrun', 'clang', '--version']).stdout.strip(),
              'xcode': command(['xcodebuild', '-version']).stdout.strip(),
              'iphoneos_sdk': command(['xcrun', '--sdk', 'iphoneos', '--show-sdk-version']).stdout.strip(),
              'source_sha256': hashlib.sha256(source.read_bytes()).hexdigest(),
              'parent_source_sha256': hashlib.sha256((ROOT / 'reconstruction/mach-header/ESignMachHeader.m').read_bytes()).hexdigest(),
              'library_sha256': hashlib.sha256(library.read_bytes()).hexdigest(),
              'host_runtime': platform.platform(), 'target': 'arm64-apple-ios11.0',
              'complete_signing_pipeline': False, 'full_app_built': False, 'source_built_ipa': False,
              'iphone_runtime_tested': False}
    (output / 'build-report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT / 'build/load-commands')
    build(parser.parse_args().output)
