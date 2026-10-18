"""Exercise rejection of corrupted evidence, not application behavior."""
import gzip
import hashlib
import json
import pathlib
import sys
import tempfile
import unittest

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / 'scripts'))
from audit_evidence import EXPECTED_EXECUTABLE, contained, verify_disassembly


class ListingIntegrityTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = pathlib.Path(self.temp.name)
        self.body = '0000000100001000  c0035fd6          ret\n'
        self.write_listing(self.body)

    def write_listing(self, body):
        compressed = gzip.compress(body.encode(), mtime=0)
        (self.root / 'text-0000.asm.gz').write_bytes(compressed)
        self.manifest = {'executable_sha256': EXPECTED_EXECUTABLE, 'vm_start': '0x100001000',
                         'machine_bytes': 4, 'chunks': [{'path': 'text-0000.asm.gz',
                         'vm_start': '0x100001000', 'vm_end': '0x100001004',
                         'machine_bytes': 4, 'instruction_records': 1,
                         'compressed_sha256': hashlib.sha256(compressed).hexdigest()}]}
        self.save_manifest()

    def save_manifest(self):
        (self.root / 'manifest.json').write_text(json.dumps(self.manifest))

    def test_valid_listing_reconstructs_original_bytes(self):
        result = verify_disassembly(self.root)
        self.assertEqual(result['text_sha256'], hashlib.sha256(bytes.fromhex('c0035fd6')).hexdigest())

    def test_corrupted_compressed_data_is_rejected(self):
        path = self.root / 'text-0000.asm.gz'
        path.write_bytes(path.read_bytes()[:-1])
        with self.assertRaisesRegex(ValueError, 'hash mismatch'):
            verify_disassembly(self.root)

    def test_gap_is_rejected_even_with_valid_chunk_hash(self):
        self.manifest['chunks'][0]['vm_start'] = '0x100001004'
        self.save_manifest()
        with self.assertRaisesRegex(ValueError, 'gap or overlap'):
            verify_disassembly(self.root)

    def test_instruction_address_mismatch_is_rejected(self):
        self.write_listing(self.body.replace('100001000', '100001004'))
        with self.assertRaisesRegex(ValueError, 'Noncontiguous'):
            verify_disassembly(self.root)

    def test_incorrect_byte_count_is_rejected(self):
        self.manifest['chunks'][0]['machine_bytes'] = 8
        self.save_manifest()
        with self.assertRaisesRegex(ValueError, 'byte count'):
            verify_disassembly(self.root)

    def test_duplicate_chunk_is_rejected(self):
        self.manifest['chunks'].append(dict(self.manifest['chunks'][0]))
        self.save_manifest()
        with self.assertRaisesRegex(ValueError, 'Duplicate'):
            verify_disassembly(self.root)

    def test_unindexed_file_is_rejected(self):
        (self.root / 'unlisted.asm.gz').write_bytes(b'anything')
        with self.assertRaisesRegex(ValueError, 'Unindexed'):
            verify_disassembly(self.root)

    def test_path_traversal_is_rejected(self):
        with self.assertRaisesRegex(ValueError, 'Unsafe'):
            contained(self.root, '../outside')


if __name__ == '__main__':
    unittest.main()
