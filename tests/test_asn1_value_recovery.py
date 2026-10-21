import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_asn1_value import validate
from build_asn1_value import compare,sources
class ASN1ValueRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-value/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_changed_original_type_dispatch_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x10099987f')['bytes']='00'*30
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_tag_bits_are_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x1009998a0')['bytes']='00'*248
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_core_instruction_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_flow_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_string_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x10061d254']='host-parser'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_error_string_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100a5c985')['bytes']='00'*7
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('asn1-value.dylib' if sys.platform=='darwin' else 'asn1-value.so')
            subprocess.run(['cc','-DESIGN_ASN1_VALUE_SOURCE','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(library)],check=True,capture_output=True,text=True)
            self.assertGreater(compare(library),2000)
