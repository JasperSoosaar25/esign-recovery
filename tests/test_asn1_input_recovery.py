import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_asn1_input import validate
from build_asn1_input import compare
class ASN1InputRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-input/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_changed_original_header_bytes_are_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_diagnostic_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100a5cd61')['bytes']='00'*11
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_recursive_decoder_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x10061955c']='replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_reused_BIO_descriptor_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100e00fd0')['bytes']='00'*80
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_flow_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_original_fixtures(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('asn1.dylib' if sys.platform=='darwin' else 'asn1.so')
            sources=['reconstruction/asn1-input/ESignASN1Input.c','reconstruction/bio-input/ESignBIOInput.c','tests/bio_input_test_adapter.c','tests/asn1_input_test_adapter.c']
            subprocess.run(['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(ROOT/p) for p in sources],'-o',str(library)],check=True,capture_output=True,text=True)
            self.assertEqual(compare(library),len(json.loads(gzip.decompress((ROOT/'reconstruction/asn1-input/fixtures.json.gz').read_bytes()))))
