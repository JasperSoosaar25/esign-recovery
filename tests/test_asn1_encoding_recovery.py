import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path[:0]=[str(ROOT/'scripts'),str(ROOT/'tests')]
from recover_asn1_encoding import validate,sources,FLAGS,compare
from asn1_encoding_runtime import NativeScenario
from x509_state_runtime import name_der,cms_certificate_der,tl
class ASN1EncodingRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/asn1-encoding/evidence.json.gz').read_bytes()));cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']};cls.directory=tempfile.TemporaryDirectory();cls.library=Path(cls.directory.name)/('encoding.dylib' if sys.platform=='darwin' else 'encoding.so')
        if shutil.which('cc'):subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(cls.library)],check=True,capture_output=True,text=True)
    @classmethod
    def tearDownClass(cls):cls.directory.cleanup()
    def corrupt(self,address):
        e=copy.deepcopy(self.e);r=next(r for r in e['memory'] if r['address']==address);r['bytes']='00'*(len(r['bytes'])//2)
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_encoder_dispatch_corruption_is_rejected(self):self.corrupt('0x100999862')
    def test_content_dispatch_corruption_is_rejected(self):self.corrupt('0x100999869')
    def test_mb_input_dispatch_corruption_is_rejected(self):self.corrupt('0x100999763')
    def test_mb_output_dispatch_corruption_is_rejected(self):self.corrupt('0x100999768')
    def test_original_type_mapping_corruption_is_rejected(self):self.corrupt('0x100999771')
    def test_diagnostic_corruption_is_rejected(self):self.corrupt('0x100a5c676')
    def test_original_instruction_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_original_flow_corruption_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_changed_darwin_binding_is_rejected(self):
        e=copy.deepcopy(self.e);e['bindings']['0x100afc558']='replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata)
    def test_missing_original_body_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'].pop()
        with self.assertRaises(ValueError):validate(e,self.metadata)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):self.assertEqual(compare(self.library),len(json.loads(gzip.decompress((ROOT/'reconstruction/asn1-encoding/fixtures.json.gz').read_bytes()))))
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_ascii_canonical_name_is_actual_der(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='canonicalize',entries=[dict(text=b' \tAbC\n \rDEF '.hex(),tag=12,set=0)]));expected=tl(49,tl(48,tl(6,bytes.fromhex('550403'))+tl(12,b'abc def')));self.assertEqual(r['returned'],1);self.assertEqual(r['canonical'],expected.hex())
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_actual_name_decode_reaches_canonical_encoder(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='name_decode',data=name_der().hex()));self.assertEqual(r['returned'],1);self.assertEqual(r['decoded']['encoded'],name_der().hex());self.assertIsNotNone(r['decoded']['canonical']);self.assertIn(b'invented name'.hex(),r['decoded']['canonical']);self.assertNotIn('name_canonicalize',[e['call'] for e in r['effects']])
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_cms_certificate_subject_and_crl_issuer_have_canonical_bytes(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='cms_bio',data=cms_certificate_der().hex()));self.assertEqual(r['content'],b'Invented certificate payload'.hex());signed=r['decoded']['fields']['d.signedData']['fields'];cert=signed['certificates'][0]['fields']['d.certificate']['fields']['cert_info']['fields'];crl=signed['crls'][0]['fields']['d.crl']['fields']['crl']['fields'];self.assertEqual(cert['issuer']['canonical'],cert['subject']['canonical']);self.assertEqual(crl['issuer']['canonical'],cert['subject']['canonical']);self.assertGreater(cert['subject']['canonical_length'],0)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_legacy_utf8_preserves_six_byte_and_surrogate_behavior(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='utf8_get',data='fdbfbfbfbfbf'));self.assertEqual(r['returned'],6);self.assertEqual(int.from_bytes(bytes.fromhex(r['argument'])[:8],'little'),0x7fffffff);self.assertEqual(m.evaluate(dict(op='utf8_get',data='eda080'))['returned'],3)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_der_set_output_is_sorted(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='template_encode',flags=2,stack=['7a','61','62']));self.assertEqual(r['returned'],11);self.assertEqual(bytes.fromhex(r['output'])[:11],b'1\x09\x04\x01a\x04\x01b\x04\x01z')
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_negative_canonical_length_uses_original_32_bit_allocator_argument(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='canonicalize',entries=[dict(text='4142',tag=12,set=0) for _ in range(6)],canonical_length_failure=True));self.assertEqual(r['returned'],0);self.assertEqual([e['size'] for e in r['effects'] if e.get('file')=='x_name.c'],['4294967295'])
