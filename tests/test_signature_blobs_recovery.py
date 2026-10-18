import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_signature_blobs import ROOT, OUT, validate_inputs, validate_records


class SignatureBlobRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        cls.metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}

    def test_changed_original_container_method_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][0]['entry'] = '0x1007724c8'
        with self.assertRaisesRegex(ValueError, 'method evidence'):
            validate_records(evidence['records'])

    def test_changed_original_runtime_target_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['external_targets']['0x1009314e4'] = '_objc_release'
        with self.assertRaisesRegex(ValueError, 'runtime target'):
            validate_inputs(evidence, self.metadata)

    def test_changed_original_jump_slot_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        slots = {slot for record in evidence['records'] for row in record['instructions'] for slot in row.get('pointer_slots', [])}
        row = next(row for row in evidence['memory'] if row['address'] in slots)
        row['bytes'] = '00' * 8
        with self.assertRaisesRegex(ValueError, 'jump-table value'):
            validate_inputs(evidence, self.metadata)

    def test_forged_original_container_class_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['classes']['YYYBlob'] += 8
        with self.assertRaisesRegex(ValueError, 'class identity'):
            validate_inputs(evidence, self.metadata)


if __name__ == '__main__':
    unittest.main()
