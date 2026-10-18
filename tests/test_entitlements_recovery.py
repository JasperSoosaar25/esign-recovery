import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_entitlements import ROOT, OUT, validate_records, validate


class EntitlementRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        cls.metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}

    def test_forged_boolean_return_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(r for f in evidence['records'] for r in f['instructions'] if r.get('finite_call_return_hypothesis') == [0, 1])
        row['finite_call_return_hypothesis'] = [1]
        with self.assertRaisesRegex(ValueError, 'call-return hypothesis'):
            validate_records(evidence['records'])

    def test_forged_callback_identity_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][-1]['entry'] = '0x10070d5b4'
        with self.assertRaisesRegex(ValueError, 'callback identity'):
            validate_records(evidence['records'])

    def test_changed_newly_reached_instruction_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(r for f in evidence['records'] for r in f['instructions'] if r['address'] == '0x10070bc74')
        row['bytes'] = 'e0030032'
        with self.assertRaisesRegex(ValueError, 'original byte listing'):
            validate_records(evidence['records'])

    def test_changed_block_literal_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(r for r in evidence['memory'] if r['address'] == '0x10097c650')
        row['bytes'] = '00' * 8
        with self.assertRaisesRegex(ValueError, 'data input'):
            validate(evidence, self.metadata)


if __name__ == '__main__':
    unittest.main()
