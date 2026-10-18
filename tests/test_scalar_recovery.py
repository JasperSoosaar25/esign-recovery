"""Reject reconstructed fragments that claim a forged original identity or table."""
import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
try:
    from recover_scalar_accessors import validate_records
except ImportError:
    validate_records = None


@unittest.skipIf(validate_records is None, 'Install requirements-reconstruction.txt')
class ScalarRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.records = json.loads(gzip.decompress((ROOT / 'reconstruction/scalar-accessors/evidence.json.gz').read_bytes()))

    def test_changed_original_offset_is_rejected(self):
        record = copy.deepcopy(self.records[0])
        record['offset'] += 1
        with self.assertRaises(ValueError):
            validate_records([record])

    def test_changed_original_selector_is_rejected(self):
        record = copy.deepcopy(self.records[0])
        record['selector'] = 'notAnOriginalSelector'
        with self.assertRaises(ValueError):
            validate_records([record])

    def test_forged_initial_pointer_is_rejected(self):
        record = copy.deepcopy(next(row for row in self.records if row['initial_image_data_reads']))
        record['initial_image_data_reads'][0]['bytes'] = '0000000000000000'
        with self.assertRaises(ValueError):
            validate_records([record])


if __name__ == '__main__':
    unittest.main()
