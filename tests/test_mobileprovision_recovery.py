import copy,gzip,json,sys,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_mobileprovision import validate
class MobileprovisionEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/mobileprovision/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_changed_CMS_decoder_boundary_is_rejected(self):
        e=copy.deepcopy(self.evidence);e['native_boundaries']['0x10062fb30']='decode_PKCS7'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_missing_property_method_is_rejected(self):
        e=copy.deepcopy(self.evidence);e['records'].pop()
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_serial_match_hypothesis_is_rejected(self):
        e=copy.deepcopy(self.evidence)
        row=next(r for f in e['records'] for r in f['instructions'] if r['address']=='0x10071ba2c');row['finite_call_return_hypothesis']=[1]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_formatter_key_is_rejected(self):
        e=copy.deepcopy(self.evidence);row=next(r for r in e['memory'] if r['address']=='0x100e0e950');row['bytes']='00'*len(bytes.fromhex(row['bytes']))
        with self.assertRaises(ValueError):validate(e,self.metadata)
