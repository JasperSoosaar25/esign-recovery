import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_recursive_der import ROOT, OUT, validate


class RecursiveDERRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        cls.metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}

    def test_wrong_function_entry_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][0]['entry'] = '0x100776834'
        with self.assertRaisesRegex(ValueError, 'function identity'):
            validate(evidence, self.metadata)

    def test_wrong_original_signing_caller_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][-1]['selector'] = 'differentSigningMethod:'
        with self.assertRaisesRegex(ValueError, 'caller evidence'):
            validate(evidence, self.metadata)

    def test_forged_type_test_result_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(r for r in evidence['records'][0]['instructions'] if 'finite_call_return_hypothesis' in r)
        row['finite_call_return_hypothesis'] = [0]
        with self.assertRaisesRegex(ValueError, 'call-return hypothesis'):
            validate(evidence, self.metadata)

    def test_wrong_cf_identity_import_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['external_targets']['0x10092f3fc'] = '_CFBooleanGetTypeID'
        with self.assertRaisesRegex(ValueError, 'runtime target'):
            validate(evidence, self.metadata)


if __name__ == '__main__':
    unittest.main()
