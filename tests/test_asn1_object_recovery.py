import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_asn1_object import validate
from build_asn1_object import compare,sources
class ASN1ObjectRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-object/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def changed_memory(self,address):
        e=copy.deepcopy(self.e);row=next(r for r in e['memory'] if r['address']==address);row['bytes']='00'*(len(row['bytes'])//2)
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_constructor_dispatch_corruption_is_rejected(self):self.changed_memory('0x100999838')
    def test_destructor_dispatch_corruption_is_rejected(self):self.changed_memory('0x100999850')
    def test_primitive_dispatch_corruption_is_rejected(self):self.changed_memory('0x100999857')
    def test_original_ANY_descriptor_corruption_is_rejected(self):self.changed_memory('0x100b1f0e8')
    def test_original_instruction_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_original_flow_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_allocation_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x1005b137c']='unverified replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('asn1-object.dylib' if sys.platform=='darwin' else 'asn1-object.so')
            subprocess.run(['cc','-DESIGN_ASN1_VALUE_SOURCE','-DESIGN_ASN1_OBJECT_SOURCE','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(library)],check=True,capture_output=True,text=True)
            fixtures=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-object/fixtures.json.gz').read_bytes()))
            self.assertEqual(compare(library),len(fixtures))
