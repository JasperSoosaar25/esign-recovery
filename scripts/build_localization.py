#!/usr/bin/env python3
"""Build original-derived localization source with Apple SDKs; test Foundation.

Produces a static iOS library, not an application or IPA. The host test runs on
macOS, not on an iPhone; both distinctions are written into the build report.
"""
import argparse
import hashlib
import json
from pathlib import Path
import platform
import subprocess

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'reconstruction/localization'


def command(args):
    return subprocess.run(args, check=True, capture_output=True, text=True)


def build(output):
    if platform.system() != 'Darwin':
        raise SystemExit('Apple SDK compilation requires macOS with Xcode; no app build is claimed on this host.')
    output.mkdir(parents=True, exist_ok=True)
    sources = [SOURCE / 'ESignLocalization.m', SOURCE / 'ESignLocalizationTables.m']
    common = ['-fobjc-arc', '-fblocks', '-Wall', '-Wextra', '-Werror', '-I', str(SOURCE)]
    executable = output / 'localization-runtime-tests'
    command(['xcrun', '--sdk', 'macosx', 'clang', *common, *map(str, sources),
             str(ROOT / 'tests/localization_runtime.m'), '-framework', 'Foundation', '-o', str(executable)])
    actual = json.loads(command([str(executable), '--tables']).stdout)
    tables = {name: dict(pairs) for name, pairs in json.loads((SOURCE / 'dictionaries.json').read_text()).items()}
    assert actual == tables, 'Apple Foundation dictionaries differ from original instruction results'
    cases = json.loads((SOURCE / 'runtime-fixtures.json').read_text())
    all_keys = set().union(*(set(table) for table in tables.values())) | {'__ESign_recovery_missing_key__'}
    comparisons = sum(map(len, tables.values()))
    for index, fixture in enumerate(cases):
        run = command([str(executable), str(SOURCE / 'runtime-fixtures.json'), str(index)])
        actual = json.loads(run.stdout)
        expected = {key: fixture['cache'].get(key, key) for key in all_keys}
        assert actual['lookups'] == expected, 'Apple Foundation locale/fallback differs from original ARM64 result'
        assert actual['version'] == 100 and actual['locale_calls'] == 1, 'Original version/once semantics differ'
        assert actual['preinit'] == '__preinit' and actual['overlay'] == fixture['overlay'], 'Original overlay semantics differ'
        assert actual['first'] == '__ESign_recovery_missing_key__', 'Original first-lookup fallback differs'
        # Missing keys log in the non-Chinese branch only, including the
        # pre-init marker and repeated lookups around invalid overlay checks.
        expected_logs = 0 if fixture['chinese_flag'] else 2 * sum(key not in fixture['cache'] for key in all_keys) + 2
        assert run.stderr.count('yyy 翻译不存在：') == expected_logs, 'Original missing-translation logging differs'
        comparisons += len(expected) + len(fixture['overlay']) + 4
    objects = []
    for source in sources:
        obj = output / (source.stem + '.o')
        command(['xcrun', '--sdk', 'iphoneos', 'clang', '-target', 'arm64-apple-ios11.0',
                 *common, '-c', str(source), '-o', str(obj)])
        objects.append(obj)
    library = output / 'libESignLocalization.a'
    command(['xcrun', 'libtool', '-static', '-o', str(library), *map(str, objects)])
    report = {'result': 'PASS', 'component': 'original-derived ESign localization', 'classes': len(tables),
              'dictionary_pairs': sum(map(len, tables.values())), 'locale_fixtures': len(cases),
              'foundation_comparisons': comparisons,
              'toolchain': command(['xcrun', 'clang', '--version']).stdout.strip(),
              'xcode': command(['xcodebuild', '-version']).stdout.strip(),
              'iphoneos_sdk': command(['xcrun', '--sdk', 'iphoneos', '--show-sdk-version']).stdout.strip(),
              'library_sha256': hashlib.sha256(library.read_bytes()).hexdigest(),
              'source_files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},
              'host_runtime': platform.platform(), 'target': 'arm64-apple-ios11.0',
              'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_tested': False}
    (output / 'build-report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT / 'build/localization')
    build(parser.parse_args().output)
