import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path[:0]=[str(ROOT/'scripts'),str(ROOT/'tests')]
from recover_x509_state import validate,sources,FLAGS,compare
from x509_state_runtime import NativeScenario,name_der,cms_certificate_der
from x509_schema_data import schema
class X509StateRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/x509-state/evidence.json.gz').read_bytes()));cls.nodes=schema();cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']};cls.directory=tempfile.TemporaryDirectory();cls.library=Path(cls.directory.name)/('x509.dylib' if sys.platform=='darwin' else 'x509.so')
        if shutil.which('cc'):subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(cls.library)],check=True,capture_output=True,text=True)
    @classmethod
    def tearDownClass(cls):cls.directory.cleanup()
    def corrupt(self,address):
        e=copy.deepcopy(self.e);r=next(r for r in e['memory'] if r['address']==address);r['bytes']='00'*(len(r['bytes'])//2)
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_original_name_item_corruption_is_rejected(self):self.corrupt('0x100b1e748')
    def test_original_name_template_corruption_is_rejected(self):self.corrupt('0x100b1e720')
    def test_original_default_method_corruption_is_rejected(self):self.corrupt('0x100e02230')
    def test_original_default_pointer_corruption_is_rejected(self):self.corrupt('0x100e02228')
    def test_original_diagnostic_corruption_is_rejected(self):self.corrupt('0x100a5c7d1')
    def test_changed_original_instruction_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_changed_original_flow_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_changed_extension_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x100620150']='replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_missing_callback_body_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'].pop(2)
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_changed_additional_schema_is_rejected(self):
        nodes=copy.deepcopy(self.nodes);nodes.pop()
        with self.assertRaises(ValueError):validate(self.e,self.metadata,nodes)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):
        n=len(json.loads(gzip.decompress((ROOT/'reconstruction/x509-state/fixtures.json.gz').read_bytes())));self.assertEqual(compare(self.library),n)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_name_decoder_preserves_rdn_groups_and_exact_encoding(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='name_decode',data=name_der().hex()));self.assertEqual(r['returned'],1);self.assertEqual(r['decoded']['encoded'],name_der().hex());self.assertEqual([e['set'] for e in r['decoded']['entries']],[0,0,1]);self.assertEqual([bytes.fromhex(e['value']['bytes']) for e in r['decoded']['entries']],[b'Invented Name',b'Invented Org',b'ZZ']);self.assertEqual(r['decoded']['modified'],0)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_cms_parses_invented_certificate_and_crl_and_returns_payload(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='cms_bio',data=cms_certificate_der().hex()));self.assertEqual(r['content'],b'Invented certificate payload'.hex());signed=r['decoded']['fields']['d.signedData']['fields'];self.assertEqual(len(signed['certificates']),1);self.assertEqual(len(signed['crls']),1);cert=signed['certificates'][0]['fields']['d.certificate'];self.assertEqual(cert['fields']['cert_info']['fields']['subject']['encoded'],name_der().hex());self.assertEqual(signed['crls'][0]['fields']['d.crl']['item'],'X509_CRL')
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_crl_method_can_stop_cleanup_before_extension_destructors(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='crl_callback',operation=3,method_callback=True,method_free=0,present_free=True));self.assertEqual(r['returned'],0);self.assertEqual([x['call'] for x in r['effects']],['controlled-free'])
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_unmodified_name_uses_actual_cached_encoding_without_encoder(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='name_encode',modified=0));self.assertEqual(r['returned'],4);self.assertEqual(m.read_bytes(m.input,4),b'ABCD');self.assertFalse(any(x['call'] in ['name_canonicalize','ASN1_item_ex_i2d'] for x in r['effects']))
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_canonicalization_failure_preserves_cursor_and_clears_replaced_name(self):
        m=NativeScenario(self.library);r=m.evaluate(dict(op='name_decode',data=name_der().hex(),initial=True,canonical_result=0));self.assertEqual(r['returned'],0);self.assertIsNone(r['slot']);self.assertEqual(r['cursor'],'input');self.assertEqual(r['modeled_ERR_reason'],58)
