import copy,gzip,json,sys,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_cms_content import validate,records,ADD
from recover_entitlements import sparse_image,boundaries_and_branches
from recover_method_flow import walk
from verify_app_analysis import dispatch_evidence
class CMSContentEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence=json.loads(gzip.decompress((ROOT/'reconstruction/cms-content/evidence.json.gz').read_bytes()))
        cls.baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text());cls.metadata={c['name']:c for c in cls.baseline['classes']}
    def test_changed_dispatch_byte_is_rejected(self):
        e=copy.deepcopy(self.evidence);next(r for r in e['memory'] if r['address']=='0x100999dd4')['bytes']='00'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_shift_analysis_is_rejected(self):
        e=copy.deepcopy(self.evidence);next(r for r in e['records'][0]['instructions'] if r['address']==hex(ADD))['explicit_shifted_add_analysis']=3
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_wrong_shift_is_rejected_by_analysis(self):
        image=sparse_image(self.evidence,self.baseline);d,_=dispatch_evidence(ROOT);starts,branches=boundaries_and_branches()
        with self.assertRaises(ValueError):walk(image.data,0x10062edd8,starts,branches,image=image,dispatch=d,shifted_add_addresses={ADD:3})
    def test_source_filename_change_is_rejected(self):
        e=copy.deepcopy(self.evidence);row=next(r for r in e['memory'] if r['address']=='0x100a618c1');row['bytes']='00'*10
        with self.assertRaises(ValueError):validate(e,self.metadata)
