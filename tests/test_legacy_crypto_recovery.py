import copy
import gzip
import json
from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'scripts'))
from recover_legacy_crypto import validate
class LegacyCryptoEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/legacy-crypto/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_wrong_native_dependency_is_rejected(self):
        evidence=copy.deepcopy(self.evidence);evidence['native_boundaries']['0x1005b1044']='free'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_changed_BN_limb_load_is_rejected(self):
        evidence=copy.deepcopy(self.evidence)
        row=next(r for r in evidence['records'][0]['instructions'] if r['address']=='0x1005d16b8')
        row['bytes']='00000000'
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_changed_diagnostic_filename_is_rejected(self):
        evidence=copy.deepcopy(self.evidence)
        next(r for r in evidence['memory'] if r['address']=='0x100a5b924')['bytes']='78'*8
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
    def test_hidden_callback_resolution_is_rejected(self):
        evidence=copy.deepcopy(self.evidence)
        next(r for r in evidence['records'] if r['role']=='private_encrypt')['unresolved_indirect_jumps']=0
        with self.assertRaises(ValueError):validate(evidence,self.metadata)
