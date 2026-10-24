import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_asn1_primitives import validate
from build_asn1_primitives import compare,sources
class ASN1PrimitivesRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-primitives/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def memory_changed(self,address):
        e=copy.deepcopy(self.e);r=next(r for r in e['memory'] if r['address']==address);r['bytes']='00'*(len(r['bytes'])//2)
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_stack_initializer_corruption_is_rejected(self):self.memory_changed('0x100999638')
    def test_bit_string_diagnostic_corruption_is_rejected(self):self.memory_changed('0x100a5c5cc')
    def test_object_diagnostic_corruption_is_rejected(self):self.memory_changed('0x100a5c5b7')
    def test_integer_diagnostic_corruption_is_rejected(self):self.memory_changed('0x100a5c632')
    def test_stack_instruction_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_decoder_instruction_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['records'] if r['role']=='object')['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_flow_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_allocator_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x1005b137c']='unverified replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_missing_decoder_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'].pop()
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('primitives.dylib' if sys.platform=='darwin' else 'primitives.so')
            subprocess.run(['cc','-DESIGN_ASN1_VALUE_SOURCE','-DESIGN_ASN1_OBJECT_SOURCE','-DESIGN_ASN1_PRIMITIVES_SOURCE','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(library)],check=True,capture_output=True,text=True)
            fixtures=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-primitives/fixtures.json.gz').read_bytes()));self.assertEqual(compare(library),len(fixtures))
