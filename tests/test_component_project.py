import copy,json,sys,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from generate_component_project import validate,generated
class ComponentProjectTests(unittest.TestCase):
    def setUp(self):self.manifest=json.loads((ROOT/'xcode/components.json').read_text())
    def test_all_compilable_component_source_is_included_once(self):
        actual=validate(self.manifest)
        expected={str(p.relative_to(ROOT)) for p in (ROOT/'reconstruction').glob('*/ESign*') if p.suffix in ['.c','.m']}
        self.assertEqual(actual,expected)
        project=generated(self.manifest)['project.pbxproj']
        self.assertNotIn('com.apple.product-type.application',project);self.assertNotIn('tests/',project)
    def test_duplicate_runtime_source_is_rejected(self):
        c=self.manifest['components'][0];c['files'].append(next(p for p in c['files'] if p.endswith('.m')))
        with self.assertRaises(ValueError):validate(self.manifest)
    def test_dependency_cycle_is_rejected(self):
        a,b=self.manifest['components'][:2];a['dependencies']=[b['name']];b['dependencies']=[a['name']]
        with self.assertRaises(ValueError):validate(self.manifest)
    def test_fixture_input_is_not_a_runtime_source(self):
        self.manifest['components'][0]['files'].append('reconstruction/localization/runtime-fixtures.json')
        with self.assertRaises(ValueError):validate(self.manifest)
