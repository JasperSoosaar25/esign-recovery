# Verification record — rechecked 18 October 2026

This record separates static recovery validation from app verification. The supplied ESign application was not executed or installed here.

## Direct comparison with the cached IPA

The later Filebin link downloaded successfully and matches the baseline hash. The complete baseline and expanded dispatch checks were independently rerun against that exact user-selected download. The earlier Pixeldrain URL itself remained inaccessible. See [input provenance](INPUT-PROVENANCE.md).

`scripts/verify_against_ipa.py` checks the exact input hash, ZIP CRC, resource bytes, freshly decoded class/category metadata, section metadata, native context, pointer-table records, and every original `__text` byte represented by the listings. See [the machine-readable result](verification-input.json).

- Input SHA-256: `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`.
- Executable SHA-256: `809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154`.
- All 100 ZIP entries accounted for: 68 files and 32 directories; 63 exact resources plus 5 deliberately excluded input/signing/profile files.
- All 1,104 class records and 142 category records compared directly with freshly parsed original data.
- All 9,612,732 `__text` bytes match, across 147 compressed listings. Text section SHA-256: `ae565c9de9782f6383eb813df4946a4e96b32afec6b80a03dfb538cc77927287`.
- All 70,077 static branch records compared with original branch bytes and pointer-slot values. Runtime values are not modeled.

A fresh run of metadata/header generation reproduced all generated metadata/header files with no differences. A fresh NSString extraction reproduced the 8,486-record string export exactly.

## Recovery integrity

The repository verifier checks the full export hash manifest, disassembly hashes/address continuity/byte counts, class/category/method counts, selector index agreement, every native function marker and its indexed file, app-method coverage, and excluded-input file types. All 57,245 indexed functions now have an output marker; all 3,396 selected app method entries resolve to their indexed output.

The prior native export contained nine truncated chunks. The stronger audit rejected them. A fresh-import re-export replaced all nine chunks (2,250 functions), followed by regeneration of class-focused excerpts and the export hash manifest. The re-export does not establish source-level correctness. See [RECOVERY.md](RECOVERY.md).

Eight negative/positive tool tests check a valid byte listing and rejection of compressed corruption, gaps, wrong instruction addresses, wrong byte counts, duplicate chunks, unindexed files, and unsafe paths. These are integrity-tool tests, not ESign functional tests.

## Original-only follow-up

The separate [entry-by-entry audit](ipa-entry-audit.json) accounts for all 100 ZIP entries, including all 32 directories and the five deliberately unpublished input files. Each file has its byte count, CRC, hash, disposition, and reason; zero entries are unaccounted for.

Five [original-code flow studies](ORIGINAL-FLOW.md) include 5,904 distinct original instructions. Every instruction was compared with the preserved original `__text` listing, and method addresses/ABIs were compared with decoded metadata. The original executable hash is unchanged. Ghidra exports use separate initial-pointer jump hypotheses; they do not alter the baseline snapshot. Settings and signing-preparation studies still have unresolved indirect flow. None of these counts establishes complete source recovery or a running app.

Twenty-nine tool tests pass with the pinned recovery dependency installed: eight baseline listing tests, four entry-audit tests, five flow-tracer tests, and twelve dispatch/identity tests. The new tests reject invalid runtime bindings, selector pointers, truncated/wrong-register stubs, cyclic/non-tail thunks, forged selectors/targets, and changed method identities. Identifying a selector does not cause the tracer to invent a Boolean return value. No original-only source build, device execution, or new app screenshot was produced.

The [expanded analysis](DISPATCH-RECOVERY.md) covers all 3,396 indexed app-candidate method entries across 182 classes. All 358,448 distinct reached instructions match baseline original bytes. It independently decodes 8,999 selector stubs and checks 12,244 original call/thunk chains. The 901,266 native section bytes and binding streams passed direct comparison with the cached IPA. It retains 419 unresolved jump occurrences across 378 methods, with no step-limit stops. CI now verifies the complete method index and original dispatch excerpts.

## Not verified

The later [native reconstruction pass](NATIVE-RECONSTRUCTION.md) indexes all 3,396 app-candidate methods, exports fuller pseudocode for 3,380, and explicitly records 16 remaining decompiler failures after a fresh-process retry. All final method identities, markers, class aggregates, and hashes pass the native export verifier. Separately, 215 machine-level C accessor fragments across 39 classes pass 35,840 compiled-C/original-ARM64 fixture comparisons; 32 tool tests pass. These results do not establish complete app equivalence.

| Claim | Status |
|---|---|
| Original official native source obtained | No |
| Recovery baseline matches exact user-supplied Filebin IPA | Yes, byte-for-byte |
| Source-only ESign build | Incomplete; no app target |
| Same functionality/usability as original | Unverified |
| Signing and installation on a physical iPhone | Not run |
| ESign on iOS 27 / iPhone 13 | Not run |
| Running-app screenshots on iOS 27 | Unavailable in this environment |
| Full dependency version/license reconciliation | Incomplete |

The CI workflow validates the recovery repository. Its success does not turn any of these unverified app claims into a passed result.
