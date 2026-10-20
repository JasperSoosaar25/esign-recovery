import copy,gzip,json,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from recover_oid_lookup import database,validate,render_data
from build_oid_lookup import compare

class OIDLookupRecoveryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.db=database();cls.e=json.loads(gzip.decompress((ROOT/'reconstruction/oid-lookup/evidence.json.gz').read_bytes()))
        cls.metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    def test_original_static_data_regenerates_source(self):
        self.assertEqual(render_data(self.db),(ROOT/'reconstruction/oid-lookup/ESignOIDData.c').read_text())
    def test_changed_database_is_rejected(self):
        db=copy.deepcopy(self.db);db['objects'][22]['encoded']='00'
        with self.assertRaises(ValueError):validate(self.e,self.metadata,db)
    def test_changed_registry_global_is_rejected(self):
        e=copy.deepcopy(self.e);next(v for v in e['memory'] if v['address']=='0x100e93430')['bytes']='01'+'00'*7
        with self.assertRaises(ValueError):validate(e,self.metadata,self.db)
    def test_changed_native_lookup_instruction_is_rejected(self):
        e=copy.deepcopy(self.e);e['records'][0]['instructions'][0]['bytes']='00000000'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.db)
    def test_changed_memcmp_binding_is_rejected(self):
        e=copy.deepcopy(self.e);e['external_targets']['0x10093122c']='_strcmp'
        with self.assertRaises(ValueError):validate(e,self.metadata,self.db)
    @unittest.skipUnless(shutil.which('cc'),'C compiler is required')
    def test_compiled_source_matches_all_original_fixtures_and_database(self):
        with tempfile.TemporaryDirectory() as directory:
            library=Path(directory)/('oid.dylib' if sys.platform=='darwin' else 'oid.so')
            args=['cc','-std=c11','-Wall','-Wextra','-Werror','-fPIC','-dynamiclib' if sys.platform=='darwin' else '-shared']
            args += [str(ROOT/p) for p in ['reconstruction/oid-lookup/ESignOIDLookup.c','reconstruction/oid-lookup/ESignOIDData.c','tests/oid_lookup_test_adapter.c']]
            subprocess.run([*args,'-o',str(library)],check=True,capture_output=True,text=True)
            result=compare(library);self.assertEqual(result['source_behavior_fixture_comparisons'],5635);self.assertEqual(result['complete_static_object_records_compared'],958)
