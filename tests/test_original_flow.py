import pathlib
import sys
import unittest
from unittest.mock import patch

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / 'scripts'))
try:
    from recover_method_flow import walk
    CAPSTONE_AVAILABLE = True
except ModuleNotFoundError as error:
    if error.name != 'capstone':
        raise
    CAPSTONE_AVAILABLE = False


@unittest.skipUnless(CAPSTONE_AVAILABLE, 'Install pinned recovery requirements for flow tests')
class OriginalFlowTests(unittest.TestCase):
    # A small ARM64 conditional pointer-table fixture. No app is executed.
    start = 0x100006c58
    code = bytes.fromhex('1f010071e8179f1ae964009029611c91285968f800011fd6c0035fd6c0035fd6')

    def image(self, data):
        outer = self
        class Image:
            sections = [{'name': '__text', 'address': outer.start, 'size': len(data)}]
            def fileoff(self, address): return address - outer.start
            def u64(self, address):
                return {0x100ca2718: outer.start + 24, 0x100ca2720: outer.start + 28}[address]
        return Image()

    def test_boolean_index_preserves_both_initial_targets(self):
        with patch('recover_method_flow.MachO', self.image):
            result = walk(self.code, self.start, set(), {})
        jump = next(v for v in result['instructions'] if v['mnemonic'] == 'br')
        self.assertEqual(jump['successors'], [hex(self.start + 24), hex(self.start + 28)])
        self.assertEqual(result['instruction_count'], 8)
        self.assertEqual(result['unresolved_indirect_jumps'], 0)
        self.assertFalse(result['runtime_equivalence_verified'])

    def test_another_function_entry_is_not_silently_merged(self):
        boundary = self.start + 28
        with patch('recover_method_flow.MachO', self.image):
            result = walk(self.code, self.start, {boundary}, {})
        self.assertNotIn(hex(boundary), [v['address'] for v in result['instructions']])
        self.assertIn({'address': hex(boundary), 'reason': 'other-declared-entry'}, result['boundary_stops'])

    def test_unknown_computed_jump_stays_unresolved(self):
        data = bytes.fromhex('00011fd6')  # br x8, with no known x8
        with patch('recover_method_flow.MachO', self.image):
            result = walk(data, self.start, set(), {})
        self.assertEqual(result['unresolved_indirect_jumps'], 1)

    def test_call_invalidates_caller_saved_table_base(self):
        # adrp x9; add x9; bl; ldr x8,[x9]; br x8. The call can
        # clobber x9, so its earlier concrete table base cannot be reused.
        data = bytes.fromhex('e964009029611c9101000094280140f900011fd6')
        with patch('recover_method_flow.MachO', self.image):
            result = walk(data, self.start, set(), {})
        self.assertEqual(result['unresolved_indirect_jumps'], 1)

    def test_selector_annotation_does_not_invent_boolean_return(self):
        data = bytes.fromhex('01000094e964009029611c91285960f800011fd6')
        class Dispatcher:
            def resolve(self, address):
                return dict(selector='exampleBoolean', stub=hex(address),
                            direct_branch_thunks=[], receiver_class_verified=False)
        with patch('recover_method_flow.MachO', self.image):
            result = walk(data, self.start, set(), {}, dispatch=Dispatcher())
        self.assertEqual(result['unresolved_indirect_jumps'], 1)
        self.assertIn('objc_dispatch', result['instructions'][0])

    def test_explicit_load_hypothesis_is_tagged_and_default_is_unchanged(self):
        # ldr x8,[x9]; br x8; ret. Unknown x9 stays unknown by default.
        data = bytes.fromhex('280140f900011fd6c0035fd6')
        with patch('recover_method_flow.MachO', self.image):
            baseline = walk(data, self.start, set(), {})
            finite = walk(data, self.start, set(), {},
                          load_result_values={self.start: [self.start + 8]})
        self.assertEqual(baseline['unresolved_indirect_jumps'], 1)
        self.assertEqual(finite['unresolved_indirect_jumps'], 0)
        self.assertEqual(finite['instructions'][0]['finite_load_result_hypothesis'], [self.start + 8])
        self.assertNotIn('finite_load_result_hypothesis', baseline['instructions'][0])

    def test_load_hypothesis_cannot_relabel_a_branch(self):
        with patch('recover_method_flow.MachO', self.image):
            with self.assertRaises(ValueError):
                walk(bytes.fromhex('00011fd6'), self.start, set(), {},
                     load_result_values={self.start: [0]})


if __name__ == '__main__':
    unittest.main()
