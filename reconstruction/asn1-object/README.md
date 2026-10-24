# Original ASN.1 object lifetimes

This component supplies twenty original ESign 5.0.2 bodies for item/primitive construction and destruction, optional-field clearing, encoding caches, reference handling, ANY/string ownership and integer retrieval. It continues the recovered BIO/header/item/value chain with actual recovered constructors, string setters and cleanup.

**1,775 original-ARM64/compiled-C comparisons pass locally and on Apple tooling, exercising all 959 distinct original instructions. [The Apple report](../../docs/builds/asn1-object-c4146cf5.json) records the exact tested source, Xcode 27.1 / iOS 27.1 SDK and library hashes.** Forty-eight parser compositions include sixteen full memory-BIO-to-value paths. These use invented schemas and data; they do not establish CMS or certificate parsing.

| Original address | Recovered role | Instructions |
| --- | --- | ---: |
| 0x100617b44 | Recursive combine-new | 213 |
| 0x100617b3c | Item ex-new wrapper | 2 |
| 0x10061809c | Recursive combine-free | 252 |
| 0x10061848c | Item ex-free wrapper | 2 |
| 0x100618494 | Template free, including stack members | 44 |
| 0x100617e98 | Specialized/inlined template/item/primitive clear | 46 |
| 0x100617f50 | Primitive new | 74 |
| 0x100618544 | Primitive free | 71 |
| 0x10061b018 | Reference initialization/change | 23 |
| 0x10061b074 | Encoding cache initialization | 13 |
| 0x10061b0a8 | Encoding cache free/reset | 20 |
| 0x100617b08 | Item-new return wrapper | 13 |
| 0x100618078 | Item-free value wrapper | 9 |
| 0x10061b3ec / 0x10061b3f8 | ANY new/free wrappers | 3 each |
| 0x100612e1c | ANY type/value setter | 28 |
| 0x10061d254 | String type-new | 25 |
| 0x10061cfa4 | String setter | 71 |
| 0x10061d1e0 | String free | 14 |
| 0x100612af0 | Integer get | 33 |

## Reproduce and build

Restore the repository evidence and install the pinned reconstruction requirements, then run:

```sh
python3 scripts/recover_asn1_object.py --verify
```

Normal verification replays committed original instruction evidence and compares compiled C. It does not need the IPA. Optional `--original-ipa /path/to/input.ipa` checks saved original reads directly. Generation requires `--generate --original-ipa` and the exact selected IPA/executable hashes. On macOS, `python3 scripts/build_asn1_object.py` runs native comparisons and separately compiles the arm64 iOS static archive. The shared Xcode project includes this eighteenth component. Test adapters are excluded from that archive and the project targets.

## Original control flow and data

Five original guarded byte-dispatch tables are retained at `0x100999838`, `0x10099983f`, `0x100999845`, `0x100999850` and `0x100999857`. The separate walker follows their original guards, byte loads and shifted additions. The remaining computed transfers are explicit callback boundaries. The baseline's apparent entry at `0x100618634` is an internal continuation of primitive-free, reached with its existing stack frame and callee-saved register state. Only this separate study suppresses that false boundary; baseline evidence stays unchanged.

The original ANY item at `0x100b1f0e8` is relocated into `ESignOriginalASN1AnyItem`. Original bytes and its `ASN1_ANY` name are retained in evidence. Native tests check all first 48 descriptor bytes and the relocated name before running fixtures. OpenSSL 1.0.2u references identify the source family; they do not uniquely identify the bundled patch release. Preserve the adjacent OpenSSL/SSLeay notices and ESign ownership boundaries.

## Preserved semantics

Construction retains pre/post callback results, cached callbacks, optional/ADB/stack handling, COMBINE ownership, allocation-failure preservation and original diagnostics. Recursive destruction visits sequence fields in reverse, reloads stack item descriptors for each member, honors reference counts and pre-free callback result 2, preserves external/compat callback behavior, and retains post-free cleanup order.

BOOLEAN defaults write only four bytes of a value slot. ANY allocation leaves its original four padding bytes untouched; fixture allocators fill them explicitly. MSTRING construction retains its type and flag behavior, including a metadata change during allocation. A missing primitive clear callback differs from the default BOOLEAN-clear path and is preserved. The original ANY Boolean and NULL union handling remains intact.

String setting preserves the signed low-32-bit length test, strlen fallback, 32-bit allocation-size addition, full register at the public navigation ABI, allocation/reallocation diagnostics and restoration of the old pointer after failure. A null input with a nonnegative length changes length/storage without adding a terminator. String free retains the original flag-16 ownership rule. Integer get retains original type/length checks, missing-data behavior, unsigned accumulation and signed result bits.

Comparisons cover returned values where defined, value/cursor mutation, exact diagnostics, allocation/reallocation/free order, callbacks, references, string/ANY/object state, encoding caches and storage hashes. Invented invalid object layouts and unsafe oversized-copy probes are not treated as proof. Test allocators retain freed storage for snapshots. No protective returns or replacement algorithms are inserted in runtime code.

## Remaining work

Object/bit/integer content decoders, stack primitives, allocators/reference locking, ERR state and object retrieval/free remain controlled boundaries in these tests. Previously recovered item, primitive, collection, header and memory-BIO bodies execute in the composition checks. Most original CMS schema/certificate/P12, signing/archive/install and application/UI implementations are still missing. These libraries do not establish a complete app link, source-built IPA, iPhone execution or genuine screenshot.
