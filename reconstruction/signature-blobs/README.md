# Original-derived code-signature container source

This is the native Objective-C reconstruction of ESign 5.0.2's `YYYBlob`, `YYYBlobIndex`, and `YYYSuperBlob` classes. All 38 original metadata methods are represented, including synthesized accessors and ARC-generated destruction. The API names, original object layouts, data ownership attributes, and struct return types are preserved. Original addresses and ABI encodings are in `metadata.json` and `evidence.json.gz`.

This component reads and writes code-signature container bytes. It does **not** generate CMS signatures, parse signing certificates, sign/modify whole apps, install apps, or provide the complete ESign application. No signing engine is substituted.

## Evidence and checks

`recover_signature_blobs.py` executes the original instructions in Unicorn with explicit Foundation/ARC call models. Every original method and the original range helper are exercised. The 58 fixtures cover header byte order, unsigned widths, input validation/error paths, XML entitlements, declared-length mismatches, raw indexes, snapshot ownership behavior, offset recalculation, nested round trips, and enumeration across more than 16 entries. Header fixtures use changing getter values and check all four original getter evaluations per word. Destructor fixtures check original object fields are cleared.

The input-memory verifier checks class identities, selector stubs, runtime imports, branch table values, and instructions against independently preserved baseline evidence. An optional exact-IPA check compares every saved original data input with that executable. Four negative tests reject forged method, class, runtime, and jump-table evidence.

The separate Apple SDK job compiles a real arm64 iOS static library and compares the reconstructed source's complete fixture results against the original-instruction results on macOS Foundation. It also compares all class instance sizes, ivar names/offsets/types, superclass identities, and method ABI encodings against original metadata. Consult that job's actual result and build report before making a compilation claim.

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_signature_blobs.py --verify
python3 scripts/recover_signature_blobs.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_signature_blobs.py
```

## Original behavior retained

The blob parser uses all bytes after its eight-byte header, even when the declared header length differs. The super-blob parser checks the original embedded-signature magic, then uses adjacent slot offsets and the actual input length to delimit children. It does not validate the declared total length. Missing index records produce nil; a too-short non-nil super-blob input raises a range exception through Foundation. A child with an out-of-range offset can remain present with nil data. Serialization recalculates offsets from the currently stored index data. Index creation from a blob captures serialized bytes immediately; later changes to that blob do not replace the index's data snapshot.

These are recovery findings, not newly designed parsing rules. Nil super-blob input and mutated/malformed runtime objects can involve indeterminate original state and are outside the controlled fixtures. The source has not been presented as a hardened parser. Fixtures use invented payloads and team identifiers, and contain no real certificates or signing secrets.

Original code executes only in the instruction emulator. Foundation/ARC calls are modeled there; the compiled-source check uses the real macOS Foundation runtime. These checks do not establish original iPhone execution, arbitrary subclass/concurrency/lifetime equivalence, full signing correctness, or iOS 27 compatibility. Original-derived material retains its applicable ownership; the new tooling license does not relicense ESign.
