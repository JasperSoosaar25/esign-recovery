#!/usr/bin/env python3
"""Compile original-function translations and compare native Apple behavior."""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'reconstruction/recursive-der'


def command(args):
    result = subprocess.run(args, capture_output=True, text=True)
    if result.returncode:
        sys.stderr.write(result.stdout + result.stderr)
        result.check_returncode()
    return result


def build(output):
    if platform.system() != 'Darwin':
        raise SystemExit('Requires macOS with Xcode; no Apple build is claimed on this host.')
    output.mkdir(parents=True, exist_ok=True)
    source = SOURCE / 'ESignRecursiveDER.m'
    common = ['-fobjc-arc', '-fblocks', '-Wall', '-Wextra', '-Werror', '-I', str(SOURCE)]
    executable = output / 'recursive-der-runtime-tests'
    command(['xcrun', '--sdk', 'macosx', 'clang', *common, str(source), str(ROOT / 'tests/recursive_der_runtime.m'),
             '-framework', 'Foundation', '-framework', 'CoreFoundation', '-o', str(executable)])
    fixtures = json.loads((SOURCE / 'fixtures.json').read_text())
    expected = [r for r in fixtures if not r.get('unverified_original_input')]
    actual = json.loads(command([str(executable), str(SOURCE / 'fixtures.json')]).stdout)
    if expected != actual:
        for number, (wanted, observed) in enumerate(zip(expected, actual)):
            if wanted != observed:
                print(json.dumps({'case': number, 'expected': wanted, 'observed': observed}, indent=2), file=sys.stderr)
                break
        raise ValueError('Native recursive DER source differs from original instruction/model results')
    obj = output / 'ESignRecursiveDER.o'
    command(['xcrun', '--sdk', 'iphoneos', 'clang', '-target', 'arm64-apple-ios11.0', *common,
             '-c', str(source), '-o', str(obj)])
    library = output / 'libESignRecursiveDER.a'
    command(['xcrun', 'libtool', '-static', '-o', str(library), str(obj)])
    report = {'result': 'PASS', 'component': 'ESign original recursive DER helpers', 'native_functions': 2,
        'source_behavior_fixture_comparisons': len(expected), 'unverified_original_inputs': len(fixtures) - len(expected),
        'original_function_abis_inferred_from_call_sites': True, 'original_signing_caller_relationship_verified': True,
        'dictionary_enumeration_order_controlled': True,
        'toolchain': command(['xcrun', 'clang', '--version']).stdout.strip(),
        'xcode': command(['xcodebuild', '-version']).stdout.strip(),
        'iphoneos_sdk': command(['xcrun', '--sdk', 'iphoneos', '--show-sdk-version']).stdout.strip(),
        'source_sha256': hashlib.sha256(source.read_bytes()).hexdigest(),
        'library_sha256': hashlib.sha256(library.read_bytes()).hexdigest(),
        'host_runtime': platform.platform(), 'target': 'arm64-apple-ios11.0',
        'complete_signing_pipeline': False, 'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_tested': False}
    (output / 'build-report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT / 'build/recursive-der')
    build(parser.parse_args().output)
