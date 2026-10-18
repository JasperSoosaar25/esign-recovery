#!/usr/bin/env python3
"""Execute the original requirement-slot method and its three block invocations."""
import argparse
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
from recover_recursive_der import DERMachine
from recover_entitlements import validate_instruction_bytes, boundaries_and_branches, sparse_image
from recover_signature_blobs import BlobMachine, original_flows, RANGE_HELPER, NAMES, validate_inputs, FoundationError

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'reconstruction/requirements-slot'
METHOD = 0x100777638
HELPERS = (0x100777e78, 0x100777f54, 0x1007781cc)
GLOBALS = ((0x100e34b21, 0x100e34b2e), (0x100e34b39, 0x100e34b44),
           (0x100e34b4e, 0x100e34b58), (0x100e95e80, 0x100e95e84))
# Exact original encrypted literals, zero destinations, flag, CFString and
# block literals are pinned below after extraction, independently of fixtures.
EXTRA = {'0x100e34b14': 'df', '0x100e34b15': '9e', '0x100e34b16': '70', '0x100e34b17': 'f3', '0x100e34b18': '09', '0x100e34b19': '93', '0x100e34b1a': '3f', '0x100e34b1b': 'c4', '0x100e34b1c': '56', '0x100e34b1d': 'f8', '0x100e34b1e': 'ee', '0x100e34b1f': '91', '0x100e34b20': 'f1', '0x100e34b21': '7f', '0x100e34b22': '36', '0x100e34b23': 'c7', '0x100e34b24': '53', '0x100e34b25': '1f', '0x100e34b2e': '1d', '0x100e34b2f': 'b8', '0x100e34b30': '06', '0x100e34b31': 'a9', '0x100e34b32': '51', '0x100e34b33': 'bb', '0x100e34b34': 'da', '0x100e34b35': '46', '0x100e34b36': '8c', '0x100e34b37': 'd8', '0x100e34b38': '2c', '0x100e34b44': '16', '0x100e34b45': '12', '0x100e34b46': '65', '0x100e34b47': '54', '0x100e34b48': '6e', '0x100e34b49': '57', '0x100e34b4a': 'b9', '0x100e34b4b': '26', '0x100e34b4c': 'a7', '0x100e34b4d': '55', '0x100e34b60': '0000000000000000c807000000000000394be300010000000a00000000000000', '0x100e95e80': '00000000'}


def records(image, dispatch):
    boundaries, branches = boundaries_and_branches()
    methods = [json.loads(line) for line in gzip.decompress((ROOT / 'analysis/app-methods/YYYArchO.jsonl.gz').read_bytes()).splitlines()]
    method = next(r for r in methods if int(r['entry'], 16) == METHOD)
    result = [dict(method, role='original-requirements-slot-method')]
    for entry in HELPERS:
        record = walk(image.data, entry, boundaries, branches, image=image, dispatch=dispatch)
        require(not record['unresolved_indirect_jumps'] and not record['boundary_stops'], 'Incomplete requirements helper')
        result.append(dict(record, role='original-block-invoke'))
    result += original_flows()
    result.append(dict(walk(image.data, RANGE_HELPER, set(), {}, image=image), role='range-helper'))
    return result


class RequirementMachine(DERMachine):
    def __init__(self, chunks, records, bindings, classes, external, metadata):
        BlobMachine.__init__(self, chunks, records, bindings, classes, external, metadata)
        self.enumerations = []

    def message(self, selector, receiver, args):
        if receiver and self.value(receiver) == ('class', 'NSMutableData') and selector == 'dataWithLength:':
            require(args[0] < 1000000, 'Excessive modeled mutable data')
            return self.obj(bytearray(args[0]))
        return super().message(selector, receiver, args)

    def write(self, uc, access, address, size, value, user):
        if any(start <= address and address + size <= end for start, end in GLOBALS):
            return
        super().write(uc, access, address, size, value, user)

    def value(self, token):
        if token == 0x100e34b60:
            # Original CFString descriptor; record reads that host decoding uses.
            self.reads[(token, 32)] = True
            pointer, length = self.get64(token + 16), self.get64(token + 24)
            require(length == 10, 'Changed original requirement key string length')
            return bytes(self.uc.mem_read(pointer, length)).decode('ascii')
        return super().value(token)

    def code(self, uc, address, size, user):
        row = self.rows.get(address)
        if row and row['mnemonic'] == 'bl' and self.external.get(int(row.get('call_target', '0'), 16)) == '_strlen':
            self.visited.add(address)
            pointer, length = self.get(0), 0
            while True:
                self.reads[(pointer + length, 1)] = True
                if not bytes(uc.mem_read(pointer + length, 1))[0]: break
                length += 1
                require(length < 1024, 'Unbounded original strlen')
            self.calls.append('_strlen')
            for i in range(1, 19): uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), 0xcccc00000000 + i)
            uc.reg_write(arm.UC_ARM64_REG_X0, length)
            uc.reg_write(arm.UC_ARM64_REG_LR, address + 4)
            uc.reg_write(arm.UC_ARM64_REG_PC, address + 4)
            return
        super().code(uc, address, size, user)

    def invoke(self, entry, arguments):
        for i in range(31): self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), 0)
        self.uc.reg_write(arm.UC_ARM64_REG_SP, STACK + STACK_SIZE - 16)
        self.uc.reg_write(arm.UC_ARM64_REG_LR, STOP)
        self.uc.reg_write(arm.UC_ARM64_REG_NZCV, 0)
        for i, argument in enumerate(arguments): self.uc.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(i)), argument)
        self.foundation_exception = None
        self.uc.emu_start(entry, STOP, count=2000000)
        require(self.error is None, str(self.error))
        if self.foundation_exception: raise FoundationError(self.foundation_exception)
        require(self.uc.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Original requirement code did not return')
        return self.get(0)


def cases():
    result = []
    for a, b in [(None,None), ('id',None), (None,'CN'), ('',''), ('com.example.original','Apple Development: Example'),
                 ('ö💙','Ö\0Team'), ('a\0b','x'), ('x','💙')]:
        result.append({'op':'slot','bundle_id':a,'subject_cn':b})
    for length in range(25):
        result.append({'op':'slot','bundle_id':'b'*length,'subject_cn':'c'*(24-length)})
    rng = random.Random(502)
    words = {0, 1, 255, 256, 65535, 65536, 0x12345678, 0xffffffff, 0x100000000, MASK}
    words.update(rng.getrandbits(64) for _ in range(32))
    result += [{'op':'word','value':str(v)} for v in sorted(words)]
    result += [{'op':'string','value':v} for v in [None,'','a','ab','abc','abcd','ö💙','a\0b','x'*127,'x'*128,'x'*255,'x'*256]]
    result += [{'op':'bytes','data':bytes(rng.randrange(256) for _ in range(n)).hex()} for n in list(range(25))+[127,128,255,256,1024]]
    return result


def evaluate(machine, case):
    if case['op'] == 'slot':
        token = machine.invoke(METHOD, [0,0,machine.obj(case['bundle_id']),machine.obj(case['subject_cn'])])
        return {'data':bytes(machine.value(token)).hex()}
    token = machine.obj(bytearray(b'prefix'))
    if case['op'] == 'word': machine.invoke(HELPERS[0], [0,token,int(case['value'])])
    elif case['op'] == 'string': machine.invoke(HELPERS[1], [0,token,machine.obj(case['value'])])
    else:
        raw = bytes.fromhex(case['data']); pointer = machine.obj(('controlled-input', len(raw)))
        machine.uc.mem_write(pointer,raw)
        machine.invoke(HELPERS[2], [0,token,pointer,len(raw)])
    return {'data':bytes(machine.value(token)).hex()}


def validate(evidence, metadata, ipa=None):
    validate_instruction_bytes(evidence['records'])
    extra = {int(k,16): bytes.fromhex(v) for k,v in EXTRA.items()}
    validate_inputs(evidence, metadata, ipa, extra_inputs=extra)
    from verify_app_analysis import dispatch_evidence
    dispatch,_ = dispatch_evidence(ROOT)
    baseline = json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())
    require(records(sparse_image(evidence, baseline),dispatch) == evidence['records'], 'Changed requirement flows')


def run(ipa=None, original_ipa=None):
    metadata = {c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as z: data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong executable')
        image=MachO(data); flows=records(image,Dispatch(image)); bindings=image.binds
        classes={n:int(metadata[n]['address'],16) for n in NAMES}
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        external={}; cs=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);cs.detail=True
        for record in flows:
            for row in record['instructions']:
                if row['mnemonic'] not in ('b','bl'): continue
                target=int(row.get('call_target',row['operands'].lstrip('#')),16)
                off=image.fileoff(target);ins=list(cs.disasm(data[off:off+12],target))
                if len(ins)==3 and [i.mnemonic for i in ins]==['adrp','ldr','br']:
                    slot=ins[0].operands[1].imm+ins[1].operands[1].mem.disp
                    if slot in bindings: external[target]=bindings[slot]
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():
            require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed requirement file: '+name)
        evidence=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(evidence,metadata,original_ipa)
        flows=evidence['records'];classes=evidence['classes'];bindings={int(k,16):v for k,v in evidence['bindings'].items()};external={int(k,16):v for k,v in evidence['external_targets'].items()}
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in evidence['memory']]
        chunks += [(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    machine=RequirementMachine(chunks,flows,bindings,classes,external,metadata)
    results=[]
    for case in cases():
        try: row={'input':case,'result':evaluate(machine,case)}
        except FoundationError as ex: row={'input':case,'exception':str(ex)}
        results.append(row)
    require(all(e in machine.visited for e in (METHOD,*HELPERS)),'Unexercised requirement function')
    if ipa:
        reads=set(machine.reads) | {(int(s,16),8) for f in flows for r in f['instructions'] for s in r.get('pointer_slots',[])}
        memory=[]
        for address,size in sorted(reads):
            segment=next(s for s in image.segments if s['vmaddr']<=address<s['vmaddr']+s['vmsize'])
            offset=address-segment['vmaddr'];raw=data[segment['fileoff']+offset:segment['fileoff']+min(offset+size,segment['filesize'])];raw+=bytes(size-len(raw))
            memory.append({'address':hex(address),'bytes':raw.hex()})
        evidence={'records':flows,'classes':classes,'memory':memory,'bindings':{hex(a):v for a,v in bindings.items() if any(a==at for at,_ in reads)},'external_targets':{hex(a):v for a,v in external.items()}}
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(evidence,separators=(',',':')).encode(),mtime=0))
        (OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        # Print only non-fixture static input bytes requiring a reviewed pin.
        if not EXTRA:
            print(json.dumps({'extra_inputs': [r for r in memory if 0x100e34000<=int(r['address'],16)<0x100e35000 or int(r['address'],16)==0x100e95e80]},indent=2))
        else: validate(evidence,metadata,ipa)
        index={'executable_sha256':EXPECTED_EXECUTABLE,'translated_original_method_bodies':1,'original_block_invocations':3,'fixtures':len(results),'original_instructions_executed':len(machine.visited),'foundation_arc_calls_are_models':True,'full_YYYArchO_class_reconstructed':False,'complete_signing_pipeline':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else: require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed requirement fixture behavior')
    print(json.dumps({'result':'PASS','fixtures':len(results),'original_instructions_executed':len(machine.visited),'full_app_built_or_run':False},indent=2))
    machine.close()

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path)
    a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
