import copy
import gzip
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recover_load_commands import ROOT, OUT, validate, layouts


class LoadCommandRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(gzip.decompress((OUT / 'evidence.json.gz').read_bytes()))
        cls.metadata = {cl['name']: cl for cl in json.loads((ROOT / 'recovered/objc/objc-metadata.json').read_text())['classes']}

    def test_changed_command_method_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['records'][5]['selector'] = 'differentCmd'
        with self.assertRaisesRegex(ValueError, 'method evidence'):
            validate(evidence, self.metadata)

    def test_copy_cannot_silently_become_retain(self):
        evidence = copy.deepcopy(self.evidence)
        evidence['external_targets']['0x1009314d8'] = '_objc_retain'
        with self.assertRaisesRegex(ValueError, 'runtime target'):
            validate(evidence, self.metadata)

    def test_changed_original_ivar_input_is_rejected(self):
        evidence = copy.deepcopy(self.evidence)
        row = next(row for row in evidence['memory'] if row['address'] == '0x100c79260')
        row['bytes'] = '18000000'
        with self.assertRaisesRegex(ValueError, 'data input'):
            validate(evidence, self.metadata)

    def test_invalid_initial_layout_is_rejected(self):
        metadata = copy.deepcopy(self.metadata)
        metadata['YYYLoadCommand']['ivars'][0]['offset'] = 24
        with self.assertRaisesRegex(ValueError, 'initial ivar layout'):
            layouts(metadata)


if __name__ == '__main__':
    unittest.main()
