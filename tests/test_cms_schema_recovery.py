import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path[:0]=[str(ROOT/'scripts'),str(ROOT/'tests')]
from recover_cms_schema import validate,sources,FLAGS,compare
from cms_schema_runtime import NativeScenario,messages,extended_messages,schema
class CMSSchemaRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/cms-schema/evidence.json.gz').read_bytes()));cls.nodes=schema();cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
        cls.directory=tempfile.TemporaryDirectory();cls.library=Path(cls.directory.name)/('cms.dylib' if sys.platform=='darwin' else 'cms.so')
        if shutil.which('cc'):subprocess.run(['cc',*FLAGS,'-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared',*[str(p) for p in sources()],'-o',str(cls.library)],check=True,capture_output=True,text=True)
    @classmethod
    def tearDownClass(cls):cls.directory.cleanup()
    def corrupt(self,address):
        e=copy.deepcopy(self.e);r=next(r for r in e['memory'] if r['address']==address);r['bytes']='00'*(len(r['bytes'])//2)
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_original_item_corruption_is_rejected(self):self.corrupt('0x100b24750')
    def test_original_adb_corruption_is_rejected(self):self.corrupt('0x100b24898')
    def test_original_callback_corruption_is_rejected(self):self.corrupt('0x100b24728')
    def test_original_long_function_table_corruption_is_rejected(self):self.corrupt('0x100e021e8')
    def test_original_dispatch_corruption_is_rejected(self):self.corrupt('0x100999dfc')
    def test_changed_schema_graph_is_rejected(self):
        nodes=copy.deepcopy(self.nodes);nodes.pop()
        with self.assertRaises(ValueError):validate(self.e,self.metadata,nodes)
    def test_changed_original_instruction_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][1]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_changed_original_flow_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][1]['instructions'][0]['successors']=[]
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    def test_changed_crypto_boundary_is_rejected(self):
        e=copy.deepcopy(self.e);e['native_boundaries']['0x10062eef4']='replacement'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.nodes)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_native_source_matches_every_original_fixture(self):
        count=len(json.loads(gzip.decompress((ROOT/'reconstruction/cms-schema/fixtures.json.gz').read_bytes())));self.assertEqual(compare(self.library),count)
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_all_seven_content_types_return_invented_payload(self):
        m=NativeScenario(self.library)
        for nid,data in messages().items():
            with self.subTest(nid=nid):
                result=m.evaluate(dict(op='cms_bio',data=data.hex()));self.assertTrue(result['decoded']);self.assertEqual(result['content'],(b'invented ciphertext' if nid in [23,26] else b'Invented CMS payload').hex());self.assertEqual(result['slot'],result['returned']);self.assertIn({'call':'free','pointer':result['slot']},result['effects'])
    @unittest.skipUnless(shutil.which('cc'),'C compiler required')
    def test_recipient_choices_attributes_unknown_oid_and_indefinite_content(self):
        m=NativeScenario(self.library)
        for name,data in extended_messages():
            with self.subTest(variant=name):
                result=m.evaluate(dict(op='cms_bio',data=data.hex()));self.assertTrue(result['decoded']);self.assertEqual(result['slot'],result['returned']);self.assertIn({'call':'free','pointer':result['slot']},result['effects']);self.assertEqual(result['content'],None if name=='unknown-null' else (b'invented ciphertext' if name=='enveloped-all-recipients' else b'Invented CMS payload').hex())
                if name=='enveloped-all-recipients':
                    recipients=result['decoded']['fields']['d.envelopedData']['fields']['recipientInfos'];self.assertEqual(len(recipients),5);self.assertEqual([next(iter(x['fields'])) for x in recipients],['d.ktri','d.kari','d.kekri','d.pwri','d.ori'])
    def test_all_signed_message_allocation_sites_have_failure_fixtures(self):
        f=json.loads(gzip.decompress((ROOT/'reconstruction/cms-schema/fixtures.json.gz').read_bytes()));f=[x for x in f if x['input'].get('nid')==22 and 'malloc_failures' in x['input']]
        self.assertEqual([x['input']['malloc_failures'][0] for x in f],list(range(37)));self.assertTrue(all(x['result']['returned'] is None for x in f[:36]));self.assertIsNotNone(f[36]['result']['returned'])
