import hashlib
import io
import json
import pathlib
import sys
import unittest
import zipfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / 'scripts'))
from audit_ipa_entries import audit


class EntryAuditTests(unittest.TestCase):
    def fixture(self):
        stream = io.BytesIO()
        with zipfile.ZipFile(stream, 'w') as z:
            z.writestr('Payload/ESign.app/', b'')
            z.writestr('Payload/ESign.app/readme.txt', b'original resource')
            z.writestr('Payload/ESign.app/ESign', b'fixture executable')
        data = stream.getvalue()
        manifest = {'entries': [{'archive_path': 'Payload/ESign.app/readme.txt',
                                'path': 'resources/readme.txt',
                                'sha256': hashlib.sha256(b'original resource').hexdigest()}],
                    'excluded': ['ESign']}
        return data, manifest, hashlib.sha256(data).hexdigest()

    def test_every_entry_has_a_disposition(self):
        data, manifest, digest = self.fixture()
        result = audit(data, manifest, digest)
        self.assertEqual(result['zip_entries'], 3)
        self.assertEqual(result['unaccounted_entries'], 0)
        self.assertEqual(sum(result['status_counts'].values()), 3)
        self.assertFalse(result['original_source_build_verified'])

    def test_silent_omission_is_rejected(self):
        data, manifest, digest = self.fixture()
        manifest['excluded'] = []
        with self.assertRaisesRegex(ValueError, 'Unaccounted'):
            audit(data, manifest, digest)

    def test_changed_resource_is_rejected(self):
        data, manifest, digest = self.fixture()
        manifest['entries'][0]['sha256'] = '0' * 64
        with self.assertRaisesRegex(ValueError, 'Resource hash'):
            audit(data, manifest, digest)

    def test_wrong_ipa_is_rejected(self):
        data, manifest, _ = self.fixture()
        with self.assertRaisesRegex(ValueError, 'Wrong IPA'):
            audit(data, manifest, '0' * 64)


if __name__ == '__main__':
    unittest.main()
