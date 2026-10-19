#!/usr/bin/env python3
"""Trace original ARM64 method bytes under explicit initial-pointer assumptions.

An analysis view only. Never patches the executable, invents source bodies, or
proves runtime equivalence. Stops at other declared function/method entries.
"""
import argparse
import csv
import hashlib
import json
import pathlib
import struct
import zipfile

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, CS_OP_IMM, CS_OP_REG, CS_OP_MEM
from capstone.arm64 import ARM64_EXT_INVALID, ARM64_EXT_UXTW, ARM64_EXT_UXTX, ARM64_SFT_INVALID, ARM64_SFT_LSL
from recover_objc import MachO
from audit_evidence import EXPECTED_EXECUTABLE, require
from recover_dispatch import Dispatch

ROOT = pathlib.Path(__file__).resolve().parents[1]


def walk(data, entry, boundary_starts, branches, limit=20000, *, image=None, decoder=None, dispatch=None,
         call_return_values=None, max_union=16, load_result_values=None):
    # Optional finite call-return hypotheses belong to separate analysis views.
    # Defaults preserve the baseline's unknown call results exactly.
    call_return_values = call_return_values or {}
    load_result_values = load_result_values or {}
    require(1 <= max_union <= 256 and all(1 <= len(v) <= max_union and
            all(isinstance(n, int) and 0 <= n < (1 << 64) for n in v)
            for v in call_return_values.values()), 'Invalid finite call-return hypothesis')
    require(all(isinstance(k, int) and 1 <= len(v) <= max_union and
            all(isinstance(n, int) and 0 <= n < (1 << 64) for n in v)
            for k, v in load_result_values.items()), 'Invalid finite load-result hypothesis')
    image = MachO(data) if image is None else image
    text = next(s for s in image.sections if s['name'] == '__text')
    lo, hi = text['address'], text['address'] + text['size']
    decoder = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN) if decoder is None else decoder
    decoder.detail = True
    instructions, states, pending, stops = {}, {}, [(entry, {})], set()
    processed = 0

    def reg(ins, number):
        name = ins.reg_name(number)
        return 'x' + name[1:] if name.startswith('w') else name

    def operand(ins, op, values):
        if op.type == CS_OP_IMM:
            return ((op.imm,), ())
        if op.type == CS_OP_REG:
            name = reg(ins, op.reg)
            if name in ('xzr', 'wzr'):
                return ((0,), ())
            return values.get(name)
        return None

    while pending:
        address, incoming = pending.pop()
        if not lo <= address < hi or address % 4:
            stops.add((address, 'outside-aligned-text'))
            continue
        if address != entry and address in boundary_starts:
            stops.add((address, 'other-declared-entry'))
            continue
        if address in states:
            merged = {}
            for k, value in states[address].items():
                other = incoming.get(k)
                if other is not None:
                    union = tuple(sorted(set(value[0] + other[0])))
                    if len(union) <= max_union:
                        merged[k] = (union, tuple(sorted(set(value[1] + other[1]))))
            if merged == states[address]:
                continue
            states[address] = merged
        else:
            states[address] = incoming.copy()
        if processed >= limit:
            stops.add((address, 'abstract-step-limit'))
            continue
        processed += 1
        values = states[address].copy()
        offset = image.fileoff(address)
        raw = data[offset:offset + 4]
        ins = next(decoder.disasm(raw, address, count=1), None)
        if ins is None or ins.size != 4:
            stops.add((address, 'undecoded-word'))
            continue
        row = instructions.setdefault(address, {'address': hex(address), 'bytes': raw.hex(),
                    'mnemonic': ins.mnemonic, 'operands': ins.op_str, 'successors': []})
        name, ops = ins.mnemonic, ins.operands
        immediate = [o.imm for o in ops if o.type == CS_OP_IMM]
        result = None
        if name in ('adr', 'adrp') and len(ops) == 2:
            result = operand(ins, ops[1], values)
        elif name in ('mov', 'movz') and len(ops) == 2:
            result = operand(ins, ops[1], values)
            if result and ops[1].shift.value:
                result = (tuple(v << ops[1].shift.value for v in result[0]), result[1])
        elif name in ('cset', 'csetm'):
            result = ((0, 1 if name == 'cset' else (1 << 64) - 1), ())
        elif name in ('csel', 'csinc', 'csinv', 'csneg') and len(ops) >= 3:
            left, right = operand(ins, ops[1], values), operand(ins, ops[2], values)
            if left and right:
                second = right[0]
                if name == 'csinc': second = tuple(v + 1 for v in second)
                if name == 'csinv': second = tuple(~v for v in second)
                if name == 'csneg': second = tuple(-v for v in second)
                result = (tuple(sorted(set(left[0] + second))), tuple(sorted(set(left[1] + right[1]))))
        elif name in ('add', 'sub', 'and', 'orr', 'eor', 'lsl', 'lsr') and len(ops) == 3:
            left, right = operand(ins, ops[1], values), operand(ins, ops[2], values)
            if left and right and not ops[2].shift.value:
                calculate = {'add': lambda x,y: x + y, 'sub': lambda x,y: x - y,
                             'and': lambda x,y: x & y, 'orr': lambda x,y: x | y,
                             'eor': lambda x,y: x ^ y, 'lsl': lambda x,y: x << (y & 63),
                             'lsr': lambda x,y: x >> (y & 63)}
                numbers = tuple(sorted({calculate[name](x,y) & ((1 << 64) - 1) for x in left[0] for y in right[0]}))
                if len(numbers) <= max_union:
                    result = (numbers, tuple(sorted(set(left[1] + right[1]))))
        elif name in ('ldr', 'ldur') and len(ops) == 2 and ops[1].type == CS_OP_MEM:
            mem = ops[1].mem
            base = values.get(reg(ins, mem.base))
            index = values.get(reg(ins, mem.index)) if mem.index else ((0,), ())
            supported_index = ops[1].ext in (ARM64_EXT_INVALID, ARM64_EXT_UXTW, ARM64_EXT_UXTX)
            supported_shift = ops[1].shift.type in (ARM64_SFT_INVALID, ARM64_SFT_LSL)
            if base and index and supported_index and supported_shift and not ins.writeback and ins.reg_name(ops[0].reg).startswith('x'):
                slots, loaded = [], []
                try:
                    for base_value in base[0]:
                        for index_value in index[0]:
                            # Only unsigned x/w indexes are modeled. Signed
                            # extensions require a separate verified transfer.
                            if mem.index and ins.reg_name(mem.index).startswith('w'):
                                index_value &= 0xffffffff
                            slot = base_value + (index_value << ops[1].shift.value) + mem.disp
                            slots.append(slot)
                            loaded.append(image.u64(slot))
                    numbers = tuple(sorted(set(loaded)))
                    if len(numbers) <= max_union:
                        result = (numbers, tuple(sorted(set(base[1] + index[1] + tuple(slots)))))
                except (ValueError, IndexError, OverflowError, struct.error):
                    pass
        if address in load_result_values:
            require(name in ('ldr', 'ldur', 'ldrb') and len(ops) == 2 and ops[0].type == CS_OP_REG,
                    'Finite load-result hypothesis is not a supported load')
            row['finite_load_result_hypothesis'] = sorted(set(load_result_values[address]))
            result = (tuple(row['finite_load_result_hypothesis']), ())
        _, writes = ins.regs_access()
        for register in writes:
            values.pop(reg(ins, register), None)
        if result and ops and ops[0].type == CS_OP_REG:
            value, slots = result
            if ins.reg_name(ops[0].reg).startswith('w'):
                value = tuple(sorted({v & 0xffffffff for v in value}))
            values[reg(ins, ops[0].reg)] = (value, slots)
        successors = []
        if name in ('ret', 'retaa', 'retab', 'eret', 'brk', 'udf'):
            row['termination'] = name
        elif name == 'br':
            known = values.get(reg(ins, ops[0].reg))
            branch = branches.get(address)
            if branch and known is None:
                slot, target = int(branch['pointer_slot'], 16), int(branch['initial_target'], 16)
                require(image.u64(slot) == target and branch['instruction'] == raw.hex(),
                        'Branch evidence does not match original input')
                known = ((target,), (slot,))
            if known and all(lo <= v < hi and v % 4 == 0 for v in known[0]):
                successors = list(known[0])
                row['pointer_slots'] = sorted(set(row.get('pointer_slots', []) + [hex(v) for v in known[1]]))
                if known[1]:
                    row['assumption'] = 'pointer-slots-keep-initial-image-values'
                    row['runtime_value_verified'] = False
            else:
                row['unresolved_on_some_abstract_paths'] = True
        elif name == 'b' and immediate:
            successors = [immediate[-1]]
        elif name.startswith('b.') or name in ('cbz', 'cbnz', 'tbz', 'tbnz'):
            require(bool(immediate), 'Conditional branch has no immediate target')
            successors = [immediate[-1], address + 4]
        elif name in ('braa', 'brab', 'braaz', 'brabz'):
            row['unresolved_on_some_abstract_paths'] = True
        else:
            successors = [address + 4]
            if name in ('bl', 'blr', 'blraa', 'blrab', 'blraaz', 'blrabz'):
                row['call_target'] = hex(immediate[-1]) if immediate else ins.op_str
                row['call_return_assumed'] = True
                if dispatch is not None and name == 'bl' and immediate:
                    observed = dispatch.resolve(immediate[-1])
                    if observed is not None:
                        row['objc_dispatch'] = observed
                # AAPCS64 callee-saved registers only. Calls may clobber the rest.
                values = {k: v for k, v in values.items() if k in {f'x{i}' for i in range(19, 30)}}
                if address in call_return_values:
                    row['finite_call_return_hypothesis'] = sorted(set(call_return_values[address]))
                    values['x0'] = (tuple(row['finite_call_return_hypothesis']), ())
        row['successors'] = sorted(set(row['successors'] + [hex(v) for v in successors]), key=lambda v: int(v, 16))
        pending.extend((v, values.copy()) for v in successors)
    return {'entry': hex(entry), 'instruction_count': len(instructions), 'abstract_steps': processed,
            'static_table_edges': sum('assumption' in v for v in instructions.values()),
            'unresolved_indirect_jumps': sum(v.get('unresolved_on_some_abstract_paths', False) for v in instructions.values()),
            'boundary_stops': [{'address': hex(a), 'reason': r} for a, r in sorted(stops)],
            'instructions': [instructions[k] for k in sorted(instructions)],
            'analysis_assumptions': ['Initial loaded pointer values', 'AAPCS64 callee-saved registers', 'Calls return to fallthrough', 'Other declared function entries are boundaries'],
            'runtime_equivalence_verified': False, 'buildable_source': False}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=pathlib.Path)
    parser.add_argument('--class-name', default='YYYTabBarViewController')
    parser.add_argument('--selector', default='generateSubViewController')
    parser.add_argument('--output', type=pathlib.Path, default=ROOT / 'analysis/original-flow')
    args = parser.parse_args()
    with zipfile.ZipFile(args.ipa) as archive:
        data = archive.read('Payload/ESign.app/ESign')
    require(hashlib.sha256(data).hexdigest() == EXPECTED_EXECUTABLE, 'Wrong executable')
    metadata = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    native = json.loads((ROOT / 'recovered/analysis/native-context.json').read_text())
    boundaries = {int(v, 16) if isinstance(v, str) else v for v in native['declared_function_starts']}
    for cl in metadata['classes'] + metadata['categories']:
        boundaries.update(int(v['implementation'], 16) for v in cl['methods'])
    cl = next(v for v in metadata['classes'] if v['name'] == args.class_name)
    method = next(v for v in cl['methods'] if v['selector'] == args.selector)
    branches = {int(v['branch'], 16): v for v in csv.DictReader((ROOT / 'recovered/analysis/static-branches.tsv').open(), delimiter='\t')}
    image = MachO(data)
    result = walk(data, int(method['implementation'], 16), boundaries, branches,
                  image=image, dispatch=Dispatch(image))
    result.update(executable_sha256=EXPECTED_EXECUTABLE, class_name=cl['name'],
                  selector=method['selector'], abi=method['type_encoding'],
                  origin='original instruction bytes; static control-flow hypotheses only')
    args.output.mkdir(parents=True, exist_ok=True)
    stem = args.class_name + '-' + args.selector.replace(':', '_')
    (args.output / (stem + '.json')).write_text(json.dumps(result, indent=2) + '\n')
    with (args.output / (stem + '.asm')).open('w') as f:
        f.write('; ORIGINAL INSTRUCTION BYTES — STATIC INITIAL-POINTER MODEL, NOT VERIFIED SOURCE\n')
        f.write('; Input executable SHA256 ' + EXPECTED_EXECUTABLE + '\n')
        for row in result['instructions']:
            f.write(f"{row['address']}  {row['bytes']}  {row['mnemonic']} {row['operands']}")
            if row.get('pointer_slots'):
                f.write(' ; INITIAL pointers ' + ','.join(row['pointer_slots']) + ' -> ' + ','.join(row['successors']))
            f.write('\n')
    with (args.output / (stem + '.tsv')).open('w') as f:
        f.write('address\tinitial_jump_target\n')
        for row in result['instructions']:
            target = ','.join(row['successors']) if row['mnemonic'] == 'br' and not row.get('unresolved_on_some_abstract_paths') else ''
            f.write(row['address'] + '\t' + target + '\n')
    print(json.dumps({k: v for k, v in result.items() if k != 'instructions'}, indent=2))


if __name__ == '__main__':
    main()
