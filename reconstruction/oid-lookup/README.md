# Original OID lookup and hash retrieval

This component translates five original ESign 5.0.2 native bodies and relocates its complete built-in OID object table. It supplies the actual lookup called by the recovered CMS content accessor, without host OpenSSL structures or a different crypto engine.

| Original function | Address | Instructions |
|---|---|---:|
| OBJ_obj2nid | `0x1005b3138` | 91 |
| OBJ_nid2obj | `0x1005b2eac` | 53 |
| OBJ_nid2sn | `0x1005b2f80` | 55 |
| OBJ_nid2ln | `0x1005b305c` | 55 |
| lh_retrieve, including inlined bucket/node search | `0x100602d34` | 61 |

`ESignOIDData.c` is generated from the original database at `0x100b0f140` and search indexes at `0x100981e18`. All 958 records, 890 indexes, encoded bytes, names, flags, nulls and shared/interior pointer relationships come from the exact pinned IPA. No certificate, private key, or provisioning data is included. The original added-object registry slot at `0x100e93430` initially contains zero. Registry creation, its actual hash/comparison callbacks, and ERR storage remain unrecovered; the source retains these boundaries. A caller-provided hash table is not proof of the missing original registry initializer.

The source preserves cached NIDs before length checks, unsigned static-table bounds, holes that raise errors, missing dynamic entries that raise different original line numbers, fallback after a registry miss, and input-length reload after callbacks. Hash retrieval preserves 64-bit counter wrap, dynamic bucket splitting, cached comparator loading, node hash rejection, comparator arguments, and the live link reload after a callback changes it. AArch64 division-by-zero remainder behavior is retained. Public function names beginning `ESignOriginal_` identify original addresses; other C names are new navigation names.

Run `python3 scripts/recover_oid_lookup.py --verify` after unpacking the repository snapshots. Add `--original-ipa /path/to/input.ipa` to compare every saved code/data input directly with the exact executable. Original instructions execute in Unicorn with only imported memcmp, ERR and invented hash/comparator callbacks controlled. All 5,635 results include return values/pointer identities, callback arguments and effects, counters, errors and post-callback input state. Compiled C passes the same fixtures and checks every field of all 958 static records. Corruption tests reject changed constants, globals, instructions and imported function identity.

314 of 315 recovered instructions execute. The retained branch at `0x1005b3274` is the no-match exit of a post-callback zero-length search; the pinned table contains a matching zero-length record, so these fixtures cannot take it. Static constants are not altered to manufacture coverage. Negative lengths with matching negative candidate lengths, invalid pointers and malformed table chains have no native parity claim.

`python3 scripts/build_oid_lookup.py` requires macOS/Xcode. It builds an arm64 iOS static archive and compares the compiled host code with the saved original results. The host test adapter, synthetic registry, and callbacks are excluded from the iOS archive. The component Xcode project includes this library and makes CMS content depend on it. Consult the exact CI report before making an Apple-build claim.

The primary OpenSSL references in `reference-research.json` match all 958 semantic records and all 890 search indexes. Function structure and original diagnostic line numbers also match that source family. This does not identify the exact linked patch: the table and bodies may be shared by several releases. The runtime implementation is translated from original instructions and extracted constants; current upstream source is not substituted. Preserve `OPENSSL-LICENSE.txt` and the repository ownership boundaries.

This component does not supply CMS/ASN.1 decoding, certificate parsing, a complete crypto backend, an ESign application, an IPA, or iPhone screenshots.
