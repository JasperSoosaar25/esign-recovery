import copy
import pathlib
import struct
import sys
import unittest
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / 'scripts'))
try:
    from recover_dispatch import Dispatch, decode_stub, decoder
    from recover_objc import MachO
    from verify_app_analysis import check_call, original_identity
    CAPSTONE_AVAILABLE = True
except ModuleNotFoundError as error:
    if error.name != 'capstone':
        raise
    CAPSTONE_AVAILABLE = False


@unittest.skipUnless(CAPSTONE_AVAILABLE, 'Install pinned recovery requirements for dispatch tests')
class DispatchTests(unittest.TestCase):
    stub, selref, name, binding = 0x10094ba40, 0x100c62358, 0x1009c9b1e, 0x100afcb80
    code = bytes.fromhex('a11800f021ac41f9900d00b010c245f900021fd6')

    def image(self):
        image = MachO.__new__(MachO)
        image.data, image.sections, image.segments = b'', [], []
        image.binds = {self.binding: '_objc_msgSend'}
        for name, address, raw in [('__text', self.stub - 4, bytes.fromhex('01000014')),
                                   ('__objc_stubs', self.stub, self.code),
                                   ('__objc_selrefs', self.selref, struct.pack('<Q', self.name)),
                                   ('__objc_methname', self.name, b'exampleBoolean\0')]:
            offset = len(image.data)
            image.sections.append(dict(name=name, address=address, size=len(raw), offset=offset))
            image.segments.append(dict(vmaddr=address, vmsize=len(raw), fileoff=offset, filesize=len(raw)))
            image.data += raw
        return image

    def test_exact_stub_maps_original_selector(self):
        result = decode_stub(self.image(), decoder(), self.stub)
        self.assertEqual(result['selector'], 'exampleBoolean')
        self.assertEqual(result['bytes'], self.code.hex())
        self.assertEqual(result['message_send_slot'], hex(self.binding))

    def test_other_runtime_binding_is_rejected(self):
        image = self.image()
        image.binds[self.binding] = '_objc_msgSendSuper2'
        self.assertIsNone(decode_stub(image, decoder(), self.stub))

    def test_out_of_section_selector_pointer_is_rejected(self):
        image = self.image()
        offset = image.fileoff(self.selref)
        image.data = image.data[:offset] + struct.pack('<Q', self.name + 4096) + image.data[offset + 8:]
        self.assertIsNone(decode_stub(image, decoder(), self.stub))

    def test_truncated_stub_is_rejected(self):
        image = self.image()
        next(s for s in image.sections if s['name'] == '__objc_stubs')['size'] = 16
        self.assertIsNone(decode_stub(image, decoder(), self.stub))

    def test_wrong_selector_register_is_rejected(self):
        image = self.image()
        offset = image.fileoff(self.stub)
        image.data = image.data[:offset] + bytes([image.data[offset] & 0xe0]) + image.data[offset + 1:]
        self.assertIsNone(decode_stub(image, decoder(), self.stub))

    def test_direct_branch_thunk_is_recorded_without_receiver_claim(self):
        result = Dispatch(self.image()).resolve(self.stub - 4)
        self.assertEqual(result['selector'], 'exampleBoolean')
        self.assertEqual(result['direct_branch_thunks'][0]['target'], hex(self.stub))
        self.assertFalse(result['receiver_class_verified'])

    def test_looping_thunk_stays_unknown(self):
        image = self.image()
        image.data = bytes.fromhex('00000014') + image.data[4:]
        self.assertIsNone(Dispatch(image).resolve(self.stub - 4))

    def test_call_is_not_misidentified_as_tail_branch_thunk(self):
        image = self.image()
        image.data = bytes.fromhex('01000094') + image.data[4:]
        self.assertIsNone(Dispatch(image).resolve(self.stub - 4))

    def call(self):
        dispatch = Dispatch(self.image())
        address, target = self.stub - 16, self.stub - 4
        raw = struct.pack('<I', 0x94000000 | (((target - address) >> 2) & 0x3ffffff))
        return dispatch, {'address': hex(address), 'bytes': raw.hex(), 'mnemonic': 'bl',
                          'call_target': hex(target), 'objc_dispatch': dispatch.resolve(target)}

    def test_verified_call_chain_collects_original_thunk_bytes(self):
        dispatch, row = self.call()
        wanted = {}
        check_call(row, dispatch, wanted, decoder())
        self.assertEqual(wanted, {self.stub - 4: '01000014'})

    def test_forged_call_selector_is_rejected(self):
        dispatch, row = self.call()
        row['objc_dispatch']['selector'] = 'differentMethod'
        with self.assertRaisesRegex(ValueError, 'original selector stub'):
            check_call(row, dispatch, {}, decoder())

    def test_forged_thunk_target_is_rejected(self):
        dispatch, row = self.call()
        row['objc_dispatch']['direct_branch_thunks'][0]['target'] = hex(self.stub + 4)
        with self.assertRaisesRegex(ValueError, 'Thunk target mismatch'):
            check_call(row, dispatch, {}, decoder())

    def test_method_kind_is_part_of_original_identity(self):
        from audit_evidence import EXPECTED_EXECUTABLE
        method = dict(selector='flag', kind='-', type_encoding='B16@0:8', implementation='0x100004000')
        flow = dict(class_name='InventedClass', selector='flag', kind='-', abi='B16@0:8', entry='0x100004000',
                    executable_sha256=EXPECTED_EXECUTABLE, buildable_source=False, runtime_equivalence_verified=False)
        original_identity(flow, method, 'InventedClass')
        changed = copy.deepcopy(flow)
        changed['kind'] = '+'
        with self.assertRaisesRegex(ValueError, 'identity mismatch'):
            original_identity(changed, method, 'InventedClass')
