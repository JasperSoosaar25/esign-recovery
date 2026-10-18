import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_localization import OUT, validate_inputs, validate_records


class LocalizationRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))

    def test_forged_original_language_class_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['classes']['YYYLocalized_chinese'] += 8
        with self.assertRaisesRegex(ValueError, 'class identity'):
            validate_inputs(evidence)

    def test_changed_original_runtime_import_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['external_targets']['0x1009314e4'] = '_objc_release'
        with self.assertRaisesRegex(ValueError, 'different original binding'):
            validate_inputs(evidence)

    def test_changed_original_method_identity_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][0]['entry'] = '0x100831da4'
        with self.assertRaisesRegex(ValueError, 'method evidence'):
            validate_records(evidence['records'])

    def test_changed_traditional_chinese_route_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        slot = next(v for v in evidence['memory'] if v['address'] == '0x100c730e8')
        slot['bytes'] = '00' * 8
        with self.assertRaisesRegex(ValueError, 'data inputs'):
            validate_inputs(evidence)


if __name__ == '__main__':
    unittest.main()
