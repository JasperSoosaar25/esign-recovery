#!/usr/bin/env python3
"""Check original recursive DER helpers called by the main signing method."""
import argparse
import csv
import gzip
import hashlib
import json
from pathlib import Path
import random
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_localization import STACK, STACK_SIZE, STOP, MASK
from recover_entitlements import EntitlementMachine, validate_instruction_bytes, sparse_image, boundaries_and_branches
from recover_signature_blobs import FoundationError, validate_inputs

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/recursive-der'
ENCODE, LENGTH = 0x100776830, 0x10077f534


def caller():
    records = [json.loads(line) for line in gzip.decompress((ROOT / 'analysis/app-methods/YYYArchO.jsonl.gz').read_bytes()).splitlines()]
    result = next(r for r in records if r['selector'] == 'generateSlotBuildDerEntitlements:')
    return dict(result, role='original-DER-slot-caller')


def hypotheses(record):
    return {int(r['address'], 16): [0, 1] for r in record['instructions']
            if r.get('objc_dispatch', {}).get('selector') in ['isKindOfClass:', 'boolValue']}


def expanded(image, dispatch):
    boundaries, branches = boundaries_and_branches()
    records = []
    for entry, role in [(ENCODE, 'recursive-encoding-function'), (LENGTH, 'length-writing-function')]:
        assumptions = {}
        for _ in range(8):
            record = walk(image.data, entry, boundaries, branches, image=image, dispatch=dispatch,
                          call_return_values=assumptions)
            updated = hypotheses(record)
            if updated == assumptions:
                break
            assumptions = updated
        require(not record['unresolved_indirect_jumps'] and not record['boundary_stops'], 'Incomplete recursive DER flow')
        record['role'] = role
        records.append(record)
    return records + [caller()]


class DERMachine(EntitlementMachine):
    def message(self, selector, receiver, args):
        if not receiver:
            return 0
        value = self.value(receiver)
        if selector == 'unsignedLongLongValue':
            require(isinstance(value, (int, float)), 'Unexpected unsigned number receiver')
            return int(value) & MASK
        if selector == 'length' and isinstance(value, str):
            return len(value.encode('utf-16-le')) // 2
        if selector == 'length' and isinstance(value, (int, float)):
            raise FoundationError('NSInvalidArgumentException')
        if isinstance(value, dict) and 'ordered_pairs' in value:
            if selector == 'allKeys':
                return self.obj([key for key, _ in value['ordered_pairs']])
            if selector == 'objectForKeyedSubscript:':
                return next((v for key, v in value['ordered_pairs'] if self.value(key) == self.value(args[0])), 0)
        return super().message(selector, receiver, args)

    def code(self, uc, address, size, user):
        row = self.rows.get(address)
        if row and row['mnemonic'] == 'bl':
            name = self.external.get(int(row['call_target'], 16))
            if name in ('_CFBooleanGetTypeID', '_CFGetTypeID'):
                self.visited.add(address)
                # Only equality matters. Standard CFBoolean and CFNumber type
                # identities are distinct; this is an explicit external model.
                result = 11 if name == '_CFBooleanGetTypeID' or isinstance(self.value(self.get(0)), bool) else 12
                self.calls.append(name)
                uc.reg_write(arm.UC_ARM64_REG_X0, result)
                uc.reg_write(arm.UC_ARM64_REG_LR, address + 4)
                uc.reg_write(arm.UC_ARM64_REG_PC, address + 4)
                return
        super().code(uc, address, size, user)

    def run_function(self, entry, argument, budget=2000000, allow_budget_stop=False):
        for i in range(31):
            self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), 0)
        self.uc.reg_write(arm.UC_ARM64_REG_SP, STACK + STACK_SIZE - 16)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, STOP)
        self.uc.reg_write(arm.UC_ARM64_REG_X0, argument)
        self.uc.reg_write(arm.UC_ARM64_REG_NZCV, 0)
        self.foundation_exception = None
        self.uc.emu_start(entry, STOP, count=budget)
        require(self.error is None, str(self.error))
        if self.foundation_exception:
            raise FoundationError(self.foundation_exception)
        returned = self.uc.reg_read(arm.UC_ARM64_REG_PC) == STOP
        require(returned or allow_budget_stop, 'Original recursive DER function did not return')
        return returned, self.get(0)

    def make_input(self, spec):
        kind = spec['kind']
        if kind == 'nil': return 0
        if kind == 'number': return self.obj(int(spec['value']))
        if kind == 'array': return self.obj([self.make_input(v) for v in spec['items']])
        if kind == 'dictionary': return self.obj({'ordered_pairs': [(self.make_input(k), self.make_input(v)) for k, v in spec['pairs']]})
        if kind == 'unsupported': return self.obj({})
        require(kind in ['bool', 'string', 'fraction'], 'Unknown recursive DER input')
        return self.obj(spec['value'])


def cases():
    result = []
    lengths = {0, 1, 127, 128, 255, 256, MASK}
    for bit in range(64):
        lengths.update(v for v in [(1 << bit) - 1, 1 << bit, (1 << bit) + 1] if 0 <= v <= MASK)
    rng = random.Random(502)
    lengths.update(rng.getrandbits(64) for _ in range(32))
    result += [{'op': 'length', 'value': str(v)} for v in sorted(lengths)]
    values = [{'kind': 'nil'}, {'kind': 'bool', 'value': False}, {'kind': 'bool', 'value': True}, {'kind': 'unsupported'}]
    values += [{'kind': 'number', 'value': str(v)} for v in [1, 2, 5, 127, 128, 255, 256, 65535, 65536,
        (1 << 31) - 1, 1 << 31, (1 << 63) - 1, 1 << 63, MASK, -1, -(1 << 63)]]
    values += [{'kind': 'fraction', 'value': v} for v in [1.5, 42.75]]
    values += [{'kind': 'string', 'value': s} for s in ['', 'abc', 'ö💙', 'a\0b', 'x' * 127, 'x' * 128, 'x' * 255, 'x' * 256, 'x' * 1024]]
    values += [{'kind': 'array', 'items': [{'kind': 'string', 'value': f'value.{i}'} for i in range(n)]} for n in [0, 1, 16, 17, 33]]
    values += [{'kind': 'array', 'items': [{'kind': 'array', 'items': [{'kind': 'bool', 'value': True}]}, {'kind': 'unsupported'}]}]
    values += [{'kind': 'dictionary', 'pairs': [[{'kind': 'string', 'value': f'key.{i}'}, {'kind': 'bool', 'value': bool(i & 1)}] for i in range(n)]} for n in [0, 1, 2, 16, 17, 33]]
    values += [{'kind': 'dictionary', 'pairs': [[{'kind': 'string', 'value': k}, {'kind': 'string', 'value': 'ö💙'}]]} for k in ['ö💙', 'k' * 127, 'k' * 128]]
    values += [{'kind': 'dictionary', 'pairs': [[{'kind': 'number', 'value': '5'}, {'kind': 'bool', 'value': True}]]}]
    result += [{'op': 'encode', 'value': v} for v in values]
    result += [{'op': 'zero_integer_probe', 'instruction_budget': 10000}]
    return result


def evaluate(machine, case):
    if case['op'] == 'zero_integer_probe':
        returned, _ = machine.run_function(ENCODE, machine.obj(0), budget=case['instruction_budget'], allow_budget_stop=True)
        require(not returned, 'Original zero-integer probe unexpectedly returned; investigate before changing status')
        return {'function_result_unverified': 'did-not-return-within-budget', 'instruction_budget': case['instruction_budget']}
    if case['op'] == 'length':
        _, result = machine.run_function(LENGTH, int(case['value']))
    else:
        _, result = machine.run_function(ENCODE, machine.make_input(case['value']))
    return {'data': bytes(machine.value(result)).hex()}


def validate(evidence, metadata, ipa=None):
    records = evidence['records']
    require(len(records) == 3 and [r['entry'] for r in records[:2]] == [hex(ENCODE), hex(LENGTH)], 'Changed recursive DER function identity')
    require(records[-1] == caller(), 'Changed original recursive DER caller evidence')
    require(any(r.get('call_target') == hex(ENCODE) for r in records[-1]['instructions']), 'Original signing method does not call recursive helper')
    for record in records[:2]:
        expected = hypotheses(record)
        observed = {int(r['address'], 16): r['finite_call_return_hypothesis'] for r in record['instructions'] if 'finite_call_return_hypothesis' in r}
        require(expected == observed, 'Changed recursive DER finite call-return hypothesis')
    validate_instruction_bytes(records)
    validate_inputs(evidence, metadata, ipa, names=(), class_slots={})
    baseline = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    from verify_app_analysis import dispatch_evidence
    dispatch, _ = dispatch_evidence(ROOT)
    require(expanded(sparse_image(evidence, baseline), dispatch) == records, 'Changed recursive DER expanded flow')


def run(ipa=None, original_ipa=None):
    metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as archive:
            data = archive.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable input')
        image = MachO(data)
        records = expanded(image, Dispatch(image))
        bindings = image.binds
        chunks = [(s['vmaddr'], data[s['fileoff']:s['fileoff'] + s['filesize']] + bytes(s['vmsize'] - s['filesize']))
                  for s in image.segments if s['name'] != '__PAGEZERO']
        external, cs = {}, Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
        cs.detail = True
        for record in records:
            for row in record['instructions']:
                if row['mnemonic'] not in ['b', 'bl']: continue
                target = int(row.get('call_target', row['operands'].lstrip('#')), 16)
                off = image.fileoff(target)
                ins = list(cs.disasm(data[off:off + 12], target))
                if len(ins) == 3 and [v.mnemonic for v in ins] == ['adrp', 'ldr', 'br']:
                    slot = ins[0].operands[1].imm + ins[1].operands[1].mem.disp
                    if slot in bindings: external[target] = bindings[slot]
    else:
        index = json.loads((OUT / 'index.json').read_text())
        for name, digest in index['files'].items():
            require(Path(name).name == name and hashlib.sha256((OUT / name).read_bytes()).hexdigest() == digest,
                    'Changed recursive DER source/evidence file: ' + name)
        evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        validate(evidence, metadata, original_ipa)
        records = evidence['records']
        bindings = {int(k, 16): v for k, v in evidence['bindings'].items()}
        external = {int(k, 16): v for k, v in evidence['external_targets'].items()}
        chunks = [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(r['address'], 16), bytes.fromhex(r['bytes'])) for f in records for r in f['instructions']]
    machine = DERMachine(chunks, records, bindings, {}, external, metadata)
    results = []
    for case in cases():
        row = {'input': case}
        if case['op'] == 'zero_integer_probe': row['unverified_original_input'] = True
        try: row['result'] = evaluate(machine, case)
        except FoundationError as exception: row['exception'] = str(exception)
        results.append(row)
    require(ENCODE in machine.visited and LENGTH in machine.visited, 'Original DER helper not exercised')
    if ipa:
        reads = set(machine.reads) | {(int(slot, 16), 8) for record in records for row in record['instructions'] for slot in row.get('pointer_slots', [])}
        memory = [{'address': hex(a), 'bytes': data[image.fileoff(a):image.fileoff(a) + size].hex()} for a, size in sorted(reads)]
        evidence = {'records': records, 'classes': {}, 'memory': memory,
            'bindings': {hex(a): s for a, s in bindings.items() if any(a == at for at, _ in reads)},
            'external_targets': {hex(a): s for a, s in external.items()}}
        validate(evidence, metadata, ipa)
        (OUT / 'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence, separators=(',', ':')).encode(), mtime=0))
        (OUT / 'fixtures.json').write_text(json.dumps(results, indent=2) + '\n')
        index = {'executable_sha256': EXPECTED_EXECUTABLE, 'native_functions': 2, 'original_signing_caller_preserved': True,
            'fixtures': len(results), 'source_behavior_fixtures': len(results) - 1, 'unverified_original_inputs': 1,
            'original_instructions_executed': len(machine.visited), 'foundation_cf_arc_calls_are_models': True,
            'dictionary_order_controlled': True, 'full_app_built': False, 'source_built_ipa': False, 'iphone_runtime_verified': False,
            'files': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name != 'index.json'}}
        (OUT / 'index.json').write_text(json.dumps(index, indent=2) + '\n')
    else:
        require(results == json.loads((OUT / 'fixtures.json').read_text()), 'Changed recursive DER fixture behavior')
    print(json.dumps({'result': 'PASS', 'native_functions': 2, 'source_behavior_fixtures': len(results) - 1,
        'unverified_original_inputs': 1, 'original_instructions_executed': len(machine.visited), 'full_app_built_or_run': False}, indent=2))
    machine.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--original-ipa', type=Path)
    args = parser.parse_args()
    require(args.verify or args.ipa is not None, 'Supply the exact IPA or --verify')
    run(None if args.verify else args.ipa, args.original_ipa)
