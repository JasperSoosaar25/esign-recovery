import copy
import gzip
import json
from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'scripts'))
from recover_code_directory import validate
class CodeDirectoryEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/code-directory/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_reject_forged_table_targets(self):
        evidence=copy.deepcopy(self.evidence)
        row=next(r for r in evidence['records'][0]['instructions'] if 'finite_load_result_hypothesis' in r)
        row['finite_load_result_hypothesis']=[0]
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_reject_wrong_table_bytes(self):
        evidence=copy.deepcopy(self.evidence)
        next(r for r in evidence['memory'] if r['address']=='0x100e35128')['bytes']='0000000000000000'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_reject_wrong_crypto_import(self):
        evidence=copy.deepcopy(self.evidence)
        address=next(k for k,v in evidence['external_targets'].items() if v=='_CC_SHA256')
        evidence['external_targets'][address]='_CC_SHA1'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_reject_wrong_helper_instruction(self):
        evidence=copy.deepcopy(self.evidence)
        evidence['records'][1]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
