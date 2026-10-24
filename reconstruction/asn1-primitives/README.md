# Original stacks and ASN.1 content decoders

Ten original ESign 5.0.2 bodies provide the stack operations used by the recovered parser, encoded BIT STRING/OBJECT/INTEGER conversion, and OBJECT cleanup. This continues the actual recovered BIO/header/item/template/value/lifetime chain with real stack and content operations.

**1,010 original-ARM64/compiled-C comparisons pass locally and on Apple tooling, exercising all 552 original instructions. [The Apple report](../../docs/builds/asn1-primitives-722fbfdb.json) records the tested source, Xcode 27.1 / iOS 27.1 SDK and exact hashes.** The 138 parser compositions include 32 complete memory-BIO-to-value paths. Fixtures use invented data and schemas, with controlled allocation and ERR boundaries. They do not establish complete CMS, certificate or app behavior.

| Original address | Recovered role | Instructions |
| --- | --- | ---: |
| 0x100602154 | Stack new-null with inlined initialization | 39 |
| 0x100602610 | Stack number | 5 |
| 0x100602560 | Stack pop | 11 |
| 0x100602494 | Stack push with specialized/inlined insertion | 51 |
| 0x100602124 | Stack free | 12 |
| 0x100602624 | Stack value | 12 |
| 0x1006111c4 | Content-to-BIT-STRING | 100 |
| 0x100610d4c | Content-to-OBJECT with inlined allocation/free | 149 |
| 0x1006125f4 | Content-to-INTEGER | 142 |
| 0x100610ffc | OBJECT free | 31 |

## Reproduce

Restore the baseline snapshots, install the pinned reconstruction requirements, then run:

```sh
python3 scripts/recover_asn1_primitives.py --verify
```

Normal verification uses committed original instructions and fixture outcomes, then compiles C and compares the complete recorded state. It does not download the IPA or run an application. `--original-ipa /path/to/input.ipa` additionally checks the exact saved reads against the pinned input. Generation requires `--generate --original-ipa` and the selected IPA/executable hashes.

On macOS run `python3 scripts/build_asn1_primitives.py`. It compares native behavior, then separately builds the arm64 iOS static archive without test adapters. The shared Xcode project includes this nineteenth component. Previous component tests retain their independently controlled boundaries; these new compositions supply all ten actual bodies together.

## Preserved behavior

The original stack is 32 bytes, with count at 0, pointer array at 8, sorted/capacity at 16/20, comparator at 24 and untouched padding at 4–7. Its original initializer at `0x100999638` records sorted 0/capacity 4. Push grows when capacity is at most count plus one, uses the original 32-bit allocation-size shift, reloads capacity/count after reallocation, and retains the original inclusive movement when the controlled reallocator changes count. Pop preserves the last array slot and sorted flag; negative counts return null, including the signed-overflow edge at INT32_MIN.

BIT STRING conversion preserves unused-bit checks and low-flag updates, partial flag mutation on failure, last-byte masking, empty payload behavior, cursor timing and unconditional old-data release. OBJECT conversion preserves base-128 validation, dynamic/static object reuse, post-allocation input-pointer reload, identifier retention, name clearing, buffer reuse and allocation-failure state. OBJECT cleanup reloads flags and fields after relevant free calls, retaining the original three ownership bits and cleanup order. Newly allocated OBJECT padding remains untouched.

INTEGER conversion preserves the tolerated empty encoding, removal of only one leading 00/FF byte, negative magnitude conversion, trailing-zero carry and the FF-then-zeroes expansion. Allocation uses the original low-32-bit length-plus-one value. Cursor commit and old-data release occur in the original order. A null value slot can return a separately allocated result; the OBJECT converter's explicit null-input checks remain distinct from the other converters.

Tests compare return values, live pointer arrays, untouched padding, counts/capacities/sorted flags, descriptor and value mutation, exact diagnostics, allocation/free order, complete storage hashes and final cursors. Mutation cases check original reload behavior around allocator/free boundaries. Rejected zero-size reallocation is compared without an unsafe native write. Oversized native copy/fault probes and invalid-pointer states are excluded; no new runtime guards are added to claim equivalence for them. Test allocators retain freed storage for snapshots and define their fill bytes explicitly.

The OpenSSL 1.0.2u files identify the source family. The original instruction bytes and diagnostics remain authoritative; an exact linked patch release is not identified. Preserve the adjacent OpenSSL/SSLeay notices and ESign ownership boundaries.

## Remaining original work

Allocators/reallocators, reference locking, ex-data and ERR state remain controlled boundaries. The fixtures use an explicit last-error-reason model for stream-reader branching and an invented static object for controlled OID registry retrieval; neither is a recovered ERR/registry backend. Separate recovered OID lookup source is available in the OID target. CMS schema relocation and its callbacks, certificate/P12 handling, full signing/archive/install orchestration and most application/UI source remain incomplete. These results do not establish a complete app link, source-built IPA, iPhone runtime result or genuine screenshot.
