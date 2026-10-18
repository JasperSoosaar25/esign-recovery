import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_mach_header import ROOT, OUT, validate, layouts


class MachHeaderRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        cls.metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}

    def test_changed_header_method_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][0]['entry'] = '0x10075e4f4'
        with self.assertRaisesRegex(ValueError, 'method evidence'):
            validate(evidence, self.metadata)

    def test_changed_initial_ivar_offset_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(r for r in evidence['memory'] if r['address'] == '0x100c79288')
        row['bytes'] = '18000000'  # runtime slide must not replace original input evidence
        with self.assertRaisesRegex(ValueError, 'data input'):
            validate(evidence, self.metadata)

    def test_hidden_ivar_slide_claim_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['runtime_model']['original_device_layout_observed'] = True
        with self.assertRaisesRegex(ValueError, 'runtime model'):
            validate(evidence, self.metadata)

    def test_wrong_superclass_layout_is_rejected(self):
        metadata = copy.deepcopy(self.metadata)
        metadata['YYYOffsetNode']['instance_size'] = 8
        with self.assertRaisesRegex(ValueError, 'class size'):
            layouts(metadata)


if __name__ == '__main__':
    unittest.main()
