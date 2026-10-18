import copy
import gzip
import json
from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'scripts'))
from recover_requirements_slot import validate
class RequirementEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/requirements-slot/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_reject_changed_instruction(self):
        evidence=copy.deepcopy(self.evidence);evidence['records'][1]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError): validate(evidence,self.metadata)
    def test_reject_changed_literal(self):
        evidence=copy.deepcopy(self.evidence)
        next(r for r in evidence['memory'] if r['address']=='0x100e34b14')['bytes']='00'
        with self.assertRaises(ValueError): validate(evidence,self.metadata)
    def test_reject_changed_helper_entry(self):
        evidence=copy.deepcopy(self.evidence);evidence['records'][1]['entry']='0x100777e7c'
        with self.assertRaises(ValueError): validate(evidence,self.metadata)
    def test_reject_changed_zero_fill_flag(self):
        evidence=copy.deepcopy(self.evidence)
        next(r for r in evidence['memory'] if r['address']=='0x100e95e80')['bytes']='01000000'
        with self.assertRaises(ValueError): validate(evidence,self.metadata)
