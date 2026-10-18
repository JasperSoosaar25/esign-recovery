#!/usr/bin/env python3
"""Resolve a conservative subset of ARM64 table jumps for static research only.

Never writes the executable. Values read from writable data are hypotheses about
the initial image, not proof of their value after initializers or runtime writes.
"""
import argparse
import csv
import hashlib
import json
import pathlib
import struct

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, CS_OP_IMM, CS_OP_MEM, CS_OP_REG
from recover_objc import MachO

EXPECTED = '809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154'


def resolve(data):
    image = MachO(data)
    text = next(s for s in image.sections if s['name'] == '__text')
    start, end = text['address'], text['address'] + text['size']
    dis = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    dis.detail = True
    dis.skipdata = True
    values, rows = {}, []
    for ins in dis.disasm(data[text['offset']:text['offset'] + text['size']], start):
        if ins.id == 0:
            values.clear()
            continue
        ops = ins.operands
        result = None
        if ins.mnemonic in ('adr', 'adrp') and len(ops) == 2 and ops[1].type == CS_OP_IMM:
            result = (ops[1].imm, None)
        elif ins.mnemonic == 'ldr' and len(ops) == 2 and ops[1].type == CS_OP_MEM:
            mem = ops[1].mem
            base = values.get(mem.base)
            if base and not mem.index and not ins.writeback and ins.reg_name(ops[0].reg).startswith('x'):
                slot = base[0] + mem.disp
                try:
                    result = (image.u64(slot), slot)
                except (ValueError, IndexError, struct.error):
                    pass
        elif ins.mnemonic == 'br' and len(ops) == 1 and ops[0].type == CS_OP_REG:
            known = values.get(ops[0].reg)
            if known and known[1] is not None and start <= known[0] < end and known[0] % 4 == 0:
                rows.append({'branch': hex(ins.address), 'pointer_slot': hex(known[1]),
                             'initial_target': hex(known[0]), 'instruction': ins.bytes.hex(),
                             'runtime_value_verified': False})
        # Invalidate all explicit and implicit writes before applying the value
        # computed from the previous register state. Never carry values across
        # calls or block boundaries; those can change registers and table slots.
        _, writes = ins.regs_access()
        for register in writes:
            values.pop(register, None)
            name = ins.reg_name(register)
            if name.startswith('w') and name[1:].isdigit():
                for prior in list(values):
                    if ins.reg_name(prior) == 'x' + name[1:]:
                        values.pop(prior)
        if result and ops[0].type == CS_OP_REG:
            values[ops[0].reg] = result
        if ins.mnemonic.startswith(('b.', 'cb', 'tb')) or ins.mnemonic in ('b', 'br', 'blr', 'bl', 'ret'):
            values.clear()
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('executable', type=pathlib.Path)
    parser.add_argument('output', type=pathlib.Path)
    args = parser.parse_args()
    data = args.executable.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Wrong executable baseline')
    rows = resolve(data)
    args.output.mkdir(parents=True, exist_ok=True)
    with (args.output / 'static-branches.tsv').open('w') as handle:
        writer = csv.DictWriter(handle, fieldnames=['branch', 'pointer_slot', 'initial_target', 'instruction', 'runtime_value_verified'], delimiter='\t')
        writer.writeheader()
        writer.writerows(rows)
    summary = {'executable_sha256': digest, 'resolved_initial_image_jumps': len(rows),
               'runtime_equivalence_verified': False,
               'assumptions': 'Static initial table values only; runtime writes and initializers are not modeled. Input binary is never modified.'}
    (args.output / 'static-branches-summary.json').write_text(json.dumps(summary, indent=2) + '\n')
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
