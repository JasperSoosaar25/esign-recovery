import copy
import gzip
import json
from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'scripts'))
from recover_rsa_wrapper import validate,KEY
class RSAWrapperEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/rsa-wrapper/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_changed_wrapper_entry_is_rejected(self):
        evidence=copy.deepcopy(self.evidence);evidence['records'][-1]['entry']='0x100778fa4'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_changed_literal_ciphertext_is_rejected(self):
        evidence=copy.deepcopy(self.evidence)
        row=next(r for r in evidence['memory'] if r['address']=='0x100e34d73');row['bytes']='0000'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_fake_safe_error_branch_is_rejected(self):
        evidence=copy.deepcopy(self.evidence)
        row=next(r for r in evidence['records'][-1]['instructions'] if len(r.get('successors',[]))>1)
        row['successors']=['0x100778fa0']
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_embedded_key_memory_is_rejected(self):
        evidence=copy.deepcopy(self.evidence);evidence['memory'].append({'address':hex(KEY),'bytes':'00'})
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
