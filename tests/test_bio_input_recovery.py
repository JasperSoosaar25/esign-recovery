import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_bio_input import validate
from build_bio_input import compare
class BIOInputRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/bio-input/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_changed_control_dispatch_byte_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100999490')['bytes']='00'*12
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_memory_method_descriptor_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100e00fd0')['bytes']='00'*80
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_initialization_literal_is_rejected(self):
        e=copy.deepcopy(self.e);next(r for r in e['memory'] if r['address']=='0x100999480')['bytes']='00'*16
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_function_bytes_are_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_original_memcpy_import_is_rejected(self):
        e=copy.deepcopy(self.e);e['external_targets']['0x100931238']='_memmove'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_all_original_fixtures(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('bio.dylib' if sys.platform=='darwin' else 'bio.so')
            subprocess.run(['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',str(ROOT/'reconstruction/bio-input/ESignBIOInput.c'),str(ROOT/'tests/bio_input_test_adapter.c'),'-o',str(library)],check=True,capture_output=True,text=True)
            self.assertEqual(compare(library),603)
