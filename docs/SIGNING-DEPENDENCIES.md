# Remaining original signing dependencies

## Current decoder state — 25 October 2026

The [DER/name/Unicode component](../reconstruction/asn1-encoding/) supplies 27 original bodies and closes the encoding/canonicalization path beneath the recovered X509 names and CMS parsers. All 2,045 comparisons pass, exercising 2,355 of 2,397 instructions. Fifty-five parser compositions reach canonical DER names through certificates, CRLs and memory-BIO-to-CMS fixtures; thirty additional cases use actual name re-encoding. The preceding X509 component retains all 456 comparisons, 839 instructions and five additional descriptors. [The latest reports](builds/latest.json) record exact source, Apple results and remaining boundaries.
| Original address | Role | Current source status |
| --- | --- | --- |
| 0x10061955c | asn1_item_ex_d2i | Supplied by ASN.1 item component; seven-way dispatch and callbacks tested |
| 0x10061938c | asn1_template_ex_d2i | Supplied; explicit tag/EOC handling tested |
| 0x10061a738 | asn1_check_tlen | Supplied; actual original header parser and cache tested |
| 0x10061aff4 / 0x10061b004 | CHOICE get/set | Supplied |
| 0x10061b0f8 | Encoding save/cache | Supplied |
| 0x10061b218 / 0x10061b230 | Field pointer / ADB resolver | Supplied; ADB native test controls OID/integer conversion |
| 0x10061a27c | asn1_d2i_ex_primitive | Supplied by value component; inlined indefinite-end search retained |
| 0x10061acc8 | asn1_template_noexp_d2i | Supplied; all 203 original instructions exercised |
| 0x100619f5c | asn1_ex_c2i | Supplied; bounded 30-byte dispatch and callback tested |
| 0x10061a964 | Specialized asn1_collect | Supplied; original five-argument ABI and nesting check retained |
| 0x10061b3ec / 0x10061b3f8 / 0x100612e1c | ASN1_TYPE new/free/set | Supplied with relocated original ANY descriptor |
| 0x10061d254 / 0x10061cfa4 / 0x10061d1e0 | ASN1_STRING type-new/set/free | Supplied; storage ownership and allocation-failure preservation tested |
| 0x1006111c4 / 0x100610d4c / 0x1006125f4 | Content-to-bit-string/object/integer | Supplied by primitive component; all 391 original instructions exercised |
| 0x100602154 / 0x100602610 / 0x100602560 / 0x100602494 / 0x100602124 / 0x100602624 | Stack new/num/pop/push/free/value | Supplied; all 130 instructions exercised, including post-reallocation reload/movement |
| 0x100610ffc | ASN1_OBJECT_free | Supplied; all 31 instructions exercised with ownership and mutation cases |
| 0x100617e98 / 0x100617f50 / 0x100618544 | Optional clear / primitive new/free | Supplied; bounded dispatch and callback paths tested |
| 0x10061b018 / 0x10061b074 / 0x10061b0a8 | References / encoding init/free | Supplied; underlying reference locking remains controlled |
| 0x100617b3c / 0x100617b44 | Item ex-new / recursive combine-new | Supplied by object component; allocation, fields, callbacks and failure cleanup tested |
| 0x10061848c / 0x100618494 / 0x10061809c | Item/template/recursive combine-free | Supplied; reverse fields, stacks, references and callbacks tested |
| 0x100612af0 | ASN1_INTEGER_get | Supplied; all 33 instructions exercised; encoded integer decoding is now supplied by the primitive component |
| 0x1005b3138 | OBJ_obj2nid | Supplied by OID component; declared target dependency |
| 0x10062fb30 | d2i_CMS_bio | Supplied; complete memory BIO/parser/schema compositions tested |
| 0x100b24750 | Original CMS item descriptor | All 53 referenced items / 149 templates / 257 graph nodes relocated; callback bodies remain explicit |
| 0x10062f838 / 0x10062f884 / 0x10062f8ac / 0x10062f918 / 0x10062f9a8 | CMS auxiliary callbacks | Supplied; key/certificate/EVP/stream dependencies remain controlled |
| 0x1006159c4 / 0x1006159d4 / 0x1006159e0 / 0x100615b08 / 0x100615bac / 0x1005d160c | LONG new/free-clear/decode/encode/print and 32-bit BN word-bit-count | Supplied; Original 32-bit word-bit-count supplied; BIO printf remains controlled |

The primitive, object, value, item and ASN.1 input sources reference one another at the symbol level. The Xcode project builds component archives without merging them; it does not establish a complete link. Original ERR, allocation/reference/ex-data, PEM/RSA internals, certificate/P12 processing and application/signing orchestration remain incomplete. No host crypto engine or test parser is substituted into the archives.

The guarded original table is at `0x100999878`, bytes `2b003756737d00`, admitting only item types 0–6. Its complete separate flow is checked against original bytes and replayed. The generic baseline walker and baseline unresolved counts remain unchanged. The current manual ASN.1 study reproduces this fuller body.

## X509 callbacks now supplied

| Original address | Referenced role | Current source status |
| --- | --- | --- |
| 0x10061660c | X509 auxiliary callback | Supplied; cached-name/ex-data/extension cleanup order tested |
| 0x1006156ec | X509_PUBKEY auxiliary callback | Supplied; underlying key destruction remains external |
| 0x1006168c4 | X509_CRL auxiliary callback | Supplied; IDP/reason/critical/issuer state and live method callbacks tested |
| 0x100616890 | X509_CRL_INFO auxiliary callback | Supplied; actual stack comparator setter composed |
| 0x100615bfc / 0x100615cc8 | X509_NAME new/free | Supplied; allocation/ownership/failure cleanup tested |
| 0x100615d1c / 0x100615f14 / 0x1006160dc | X509_NAME decode/encode/print | Caller bodies supplied; nested name parser and cache/grouping behavior tested; deeper operations remain external |
| 0x100602068 / 0x100602654 / 0x10060258c | Stack comparator/set/pop-free | Supplied; pointer/null behavior and post-callback count/data reloads tested |
| 0x1005fe88c / 0x100619370 | BUF_MEM grow / tagged item entry | Supplied; bounded growth, errors and actual recursive parser composition tested |

## Original encoding and canonicalization now supplied

| Original address | Supplied role |
| --- | --- |
| 0x100618744 / 0x100618af0 / 0x100618fc8 / 0x1006190ec | Item / template / primitive / content encoding |
| 0x1006192a8 / 0x10061b184 | DER sorting comparator / cached encoding restore |
| 0x10061cd1c / 0x10061ce10 / 0x10061ce24 | DER header / EOC / encoded size |
| 0x10061107c / 0x100612454 | BIT STRING / INTEGER content output |
| 0x100616178 / 0x1006192e4 | Name canonicalization / tag-to-type bit |
| 0x100610fa0 / 0x1005b3dc4 / 0x10061cf50 | OBJECT allocation / OID duplication / string copy |
| 0x100614d44 / 0x100613d94 / 0x100613da0 | String-to-UTF8 / multibyte copy / bounded copy |
| 0x100614364 / 0x1006144c4 | String traversal / permissible type mask |
| 0x10061458c / 0x1006145a8 / 0x1006145cc / 0x1006145ec | ASCII / BMP / Universal / UTF8 output callbacks |
| 0x1006135a8 / 0x100613874 | Legacy UTF8 read / write |

The production archive uses Darwin ctype data and platform qsort/memcmp. Test models for those boundaries, error formatting and allocation are excluded. It preserves original six-byte UTF8 and canonical ASCII behavior, partial output on SET allocation failure and the original 32-bit negative allocator argument. No certificate trust or signature validation is established. Earlier components retain their independent controlled fixtures.

## Next original name/extension/crypto dependencies

| Original address | Role still required |
| --- | --- |
| 0x10061f458 / 0x100614624 | Name formatting / printing |
| 0x100620150 / 0x10062018c | CRL / revoked-entry extension decoding |
| 0x100620884 / 0x10060c0b4 | CRL digest / EVP SHA-1 method |
| 0x100616d34 / 0x100616f74 | Default CRL lookup / verification |
| 0x10061d308 / 0x1006134a4 | Integer comparison / ENUMERATED retrieval |
| 0x10062faac / 0x10062eef4 / 0x10062effc | CMS stream / data init / data final |

Name formatting, extension parsing, hashing/key internals, several extension destructors, allocators/refcounts/ex-data/ERR and P12 remain unresolved. The new tests compose the actual nine X509 callers with the recovered parser, stack, object, OID and CMS bodies. Their invented certificate/CRL syntax and cached state are checked; certificate trust, signatures and complete crypto behavior are not established. Earlier component fixtures preserve their original boundaries.

## Earlier dependency studies

These notes record earlier commits and their then-unresolved boundaries. The current table above and source component READMEs supersede their continuation status; historical reports remain exact records of those earlier builds.

<details>
<summary>Earlier signing, crypto, BIO and ASN.1 investigations</summary>


This map uses the exact ESign 5.0.2 method metadata and expanded original-byte traces under `analysis/app-methods/`. Counts describe indexed method entries and unresolved static indirect flow. Zero unresolved jumps does not imply that readable source, types, dependencies, or behavior have been recovered. No upstream signing engine is substituted.

## Completed source boundaries

| Component | Reconstructed original scope | Actual Apple check |
|---|---|---|
| Localization | 10 classes, 13 methods and initialization block | iOS static library; 13,496 macOS Foundation comparisons |
| Signature containers | `YYYBlob`, `YYYBlobIndex`, `YYYSuperBlob`; 38 methods | iOS static library; 57 behavior fixtures plus one Foundation API check; original class/ABI checks |
| Mach-O header | `YYYOffsetNode`, `YYYMachHeader`; 17 methods | iOS static library; 67 fixtures and derived runtime-layout/ABI checks |
| Entitlement classes | `YYYEntitlementValue`, `YYYEntitlementBlob`, `YYYEntitlementsSuperBlob`; 41 methods and callback | iOS static library; 583 native fixtures and exact class/ABI checks |
| Load-command hierarchy | Five new command classes; 20 methods, reusing the parent | iOS static library; 86 native fixtures, string copies and derived inherited layouts |
| Requirements-slot method body | Original method `0x100777638` and three block invocations, exposed under new C navigation names | iOS static library; 117 native byte comparisons, original nil fallback/padding retained |
| Code-directory generation | Original method `0x10077473c`, NSString byte-length method body, two digest helpers and three block invocations | iOS static library; 65 native byte/getter/file/CommonCrypto cases plus 20 signature entitlement-flag cases |
| Selected legacy-crypto helpers | Eight original native bodies: BN bit count, RSA size/reference/free/dispatch, EVP key access/free, FILE/BIO PEM wrapper | iOS static library; 355 native boundary-behavior comparisons; actual RSA/PEM backend remains unreconstructed |
| Alternate-CMS RSA wrapper | Original `0x100778fa0`, reusing the eight helper bodies | iOS static library; 20 native boundary-behavior comparisons; three original fault probes excluded from native parity |
| Provisioning-profile class | All 38 `YYYMobileprovision` metadata methods, including setup/membership/properties/destruction | iOS static library; 148 native Foundation fixtures and exact metadata/layout checks; parser boundaries remain controlled |
| CMS content accessor | Original `CMS_get0_content` at `0x10062edd8`, 71 instructions | iOS library; 71 boundary checks and 71 real-OID composition checks |
| BIO input and memory buffers | Eighteen original bodies and complete memory method descriptor | iOS library; 603 Apple comparisons, all 666 instructions; primitive crypto-runtime boundaries remain external |
| OID lookup/database and registry retrieval | Five original bodies, 958 records and 890 search indexes | iOS library; 5,635 native comparisons; registry initialization/callbacks and ERR remain missing |
| Actual signing-path DER helpers | Original functions at `0x100776830` and `0x10077f534`, with the original signing caller retained | iOS static library; 269 native fixtures; zero-number probe remains unverified |

See the exact reports under [builds/](builds/). The container parser's incomplete-header result and recursive DER integer-zero result remain unverified. The header/command ivar slides are explicit runtime models, not observed original-device state. Scalar accessor fragments are separate restricted C translations and can overlap these classes; do not add their count to these methods as if all were distinct recovered app behavior.

The main `YYYArchO` DER-slot method calls the recursive helper directly; it does not call the three-class encoder in that trace. Preserve the distinction when integrating recovered code. Both original paths retain encoding quirks and are not interchangeable standards-based encoders. The C helpers have newly assigned navigation symbols; they do not supply the entire `YYYArchO` implementation.

## Next implementation boundaries

| Original class | Indexed methods | Methods retaining unresolved jumps | Work still needed |
|---|---:|---:|---|
| `YYYP12` | 37 | 4 | P12/certificate initialization, native crypto ownership/layout, subject-name helpers, exact dependency identification |
| `YYYMobileprovision` | 38 | 2 | All class methods now translated; integrate recovered BIO input; recover actual ASN.1/CMS decoding and original P12 parsing, then verify real profiles |
| `YYYSignAsset` | 22 | 4 | Certificate/profile composition, entitlement selection, ASN.1/CMS generation and dependent crypto routines |
| `YYYArchO` | 49 | 13 | Requirements and code-directory bodies now translated separately; full class, XML/DER slot wrappers, CMS generation, signature placement, file edits, and orchestration still need integration/recovery |
| `YYYMachO` | 34 | 8 | Mapping/slice selection, load-command editing, code directory/hash/signature placement, full signing integration |
| `YYYSignHelper` | 17 | 8 | Original preflight, archive/bundle coordination, signing options, completion/install orchestration |

The original `YYYSignAsset` CMS method has statically traced Objective-C flow, but that does not reconstruct its native cryptographic callees. Replacing those callees with current upstream routines without verifying the original implementation/version would break the current original-only constraint. Selected BN/RSA/EVP/ASN.1 prefixes and ownership behavior are now checked for eight original helper bodies. The exact bundled OpenSSL release, remaining structures, algorithm implementations, local changes, and initialization remain unresolved. The observed 32-bit BN limbs differ from a typical host LP64 configuration; no host library layout can be assumed.

For each class, open its `.jsonl.gz` trace and [class-focused decompilation](../analysis/native-methods/classes/), then follow the original entry/selector/ABI. `scripts/read_method_trace.py` prints an individual annotated method. Unresolved baseline examples include `YYYP12 setup`, `YYYMobileprovision containsCertificate:`, `YYYMachO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:`, and `YYYSignHelper signWithSignOptions:delegate:`. The baseline still retains the old unknown entitlement branches; the new component records its separate finite-return assumptions and original execution checks. The code-directory component now resolves its separate view under explicit BOOL-index/table hypotheses and compares original execution with native source; its baseline unresolved entry remains historical evidence. Follow incomplete computed branches from original instructions; do not fill them with guessed return values.

## Evidence needed for a usable app

Reconstruct and test the original native dependency chain, including initialization and runtime data fixups. Then add the actual application target with original navigation, import/persistence/archive handling, resources, signing orchestration, and installation behavior. Compare harmless test-app signing results using controlled fixtures and owned signing credentials. Record exact source commits, SDKs, and dependency identities before claiming app parity.

A real iPhone setup is still required for the original device binary and for genuine running-app screenshots. The existing macOS tests run reconstructed components; the arm64 iOS outputs are static libraries. Neither is an installable ESign IPA or an iOS 27 compatibility result. See [BUILD-STATUS.md](BUILD-STATUS.md) for the complete app boundary and [IOS27-TESTING.md](IOS27-TESTING.md) for required device evidence.


## Next CMS and assembly findings

`-[YYYArchO generateSlotBuildCMSSignatureWithSignAsset:sha1CodeDirectorySlot:sha256CodeDirectorySlot:]` starts at `0x1007783cc`. Its first unresolved baseline table is indexed by `YYYSignAsset.useBugSign`, an actual `B16@0:8` getter at `0x10075e138`. A separate scratch trace with only that BOOL return domain reaches 544 instructions and no unresolved indirect jumps; this is static research, not a reconstructed CMS method. The ordinary branch calls `generateCMSWithCodeDirectoryHash:altnateCodeDirectorySlot:`. The alternate branch mutates a fixed template and calls another native routine at `0x100778fa0`. That native wrapper now has a separate original-instruction translation and controlled-boundary fixtures in `reconstruction/rsa-wrapper/`, reusing eight translated helpers in `reconstruction/legacy-crypto/`. Its third key-pointer argument is ignored; the embedded provider is unresolved and its bytes are excluded. Actual RSA exponentiation, PEM decoding, and the whole CMS method remain unreconstructed. Three original error inputs fault after diagnostic fallthrough and are explicitly excluded from native source parity. Do not copy embedded private signing inputs into Git or replace these routines with guessed current upstream code.

`generateCodeSignatureWithSignAsset:bundleId:infoPlistData:codeResourcesData:` starts at `0x10077a4ec`. Further tracing reaches original entitlement merging and flag-selection blocks beyond its first `isExecute` branch. `mergeEntitlements` is BOOL, while `emptyEntitlements` is an NSDictionary object; their return domains must not be conflated. Its entitlement-flag block at `0x10077cb50` is now separately reconstructed and passes 20 native type/truth-value cases; subsequent computed jumps still need recovery before translating the assembly method. These exploratory findings do not add source-completeness claims or change baseline evidence.


## Selected crypto provenance and remaining callees

The eight helper bodies execute all 301 of their distinct original instructions in 355 fixtures and pass [native Apple comparisons](builds/legacy-crypto-c7190909.json). Frozen OpenSSL references narrow the source family: `p_lib.c` lines 287/391 match the 1.0.2u reference, while examined 1.0.2a and 1.0.1u references have 279/383. This is not a unique patch-release identification. See [the research manifest](../reconstruction/legacy-crypto/reference-research.json) and preserved OpenSSL/SSLeay notices.

Unreconstructed boundaries remain in [the dependency declarations](../reconstruction/legacy-crypto/ESignLegacyCryptoDependencies.h): reference locking, ERR state, allocators, engine/ex-data cleanup, BN/blinding cleanup, attribute-stack cleanup, BIO operations, and PEM BIO parsing. RSA_METHOD callbacks and ASN.1 key callbacks also remain dependencies. Test recorders establish the recovered bodies' boundary behavior only. They do not implement these algorithms for an app. Full `YYYP12`, ordinary `YYYSignAsset` CMS generation, alternate CMS template assembly, and `YYYArchO` signing orchestration still need original implementation recovery and integration.


## Profile integration and project build — 20 October

The profile class is now fully translated, with 148 invented-data fixtures covering plist/date/data handling, preexisting-object failure state, certificate-construction failure, serial membership, 17 property pairs and destruction. Its baseline's two unresolved records remain historical; the separate analysis restricts the original setup and NSString equality BOOL results and checks exact original table targets. The 2,427 instructions exercised in that model do not change baseline coverage counts.

The original CMS content accessor is separately recovered and exports the exact address dependency used by the profile class. Its six-byte dispatch table and unsigned 0–5 guard support the explicit byte-load/shifted-add analysis. All 71 original instructions and all table branches are exercised. The generic walker's default behavior is unchanged. The profile's additional [146 passing native integration comparisons](builds/mobileprovision-a8f0b930.json) use this recovered body, while OID lookup remains controlled. Complete CMS decoding and certificate/P12 parsing remain absent.

A [new Xcode project](../xcode/README.md) builds the twelve recovered libraries together. Its [actual report](builds/component-project-a8f0b930.json) records twelve arm64 iOS archives and exact source/project hashes. It contains no app target, test backends or original binary. This improves source development and dependency organization; it does not close the original crypto backend, full `YYYP12`, `YYYSignAsset`, Mach-O signing/installation or app/UI implementation requirements.


The original OID dependency now has source in [oid-lookup](../reconstruction/oid-lookup/): `OBJ_obj2nid` (`0x1005b3138`), `OBJ_nid2obj` (`0x1005b2eac`), `OBJ_nid2sn` (`0x1005b2f80`), `OBJ_nid2ln` (`0x1005b305c`), and `lh_retrieve` (`0x100602d34`). All 958 original records and 890 search indexes are relocated. Original-instruction replay and local compiled C match in 5,635 fixtures; 314/315 instructions execute, with the zero-length no-match branch retained but unexercised under the pinned table. Registry creation, its hash/comparison callback implementations, and ERR storage remain external. The [OID Apple report](builds/oid-lookup-9922c42e.json) records all 5,635 passing comparisons and all static records. The [CMS](builds/cms-content-9922c42e.json) and [profile](builds/mobileprovision-9922c42e.json) reports add 71 and 146 passing real-OID composition checks. The expanded [project report](builds/component-project-9922c42e.json) records all thirteen arm64 library archives.

The profile decoder wrapper at `0x10062fb30` has five original instructions, forwards its BIO/output arguments to `0x100613354`, and uses the original ASN.1 descriptor at `0x100b24750`. Recovering only that wrapper would not reconstruct the ASN.1/CMS decoder behind it. These BIO/ASN.1 decoder dependencies and `YYYP12` certificate initialization remain the next missing backend layers.


## BIO input boundary now supplied

The [BIO input component](../reconstruction/bio-input/) supplies original `BIO_new` (`0x1005fedf0`), `BIO_free` (`0x1005feebc`), `BIO_read` (`0x1005fef88`), `BIO_write` (`0x1005ff090`), `BIO_ctrl` (`0x1005ff4e0`), `BIO_s_mem` (`0x1005ffa5c`), flags, all seven memory-method callbacks and three BUF_MEM helpers. It preserves the original shared descriptor at `0x100e00fd0` and bounded byte-control dispatch at `0x100999490`. Its [Apple report](builds/bio-input-d49c5f05.json) records 603 native comparisons and all 666 instructions. The [Xcode build](builds/component-project-d49c5f05.json) contains fourteen recovered libraries.

The original allocator/reallocator, reference locking, ex-data, cleansing and ERR bodies remain unresolved external dependencies; test adapters are excluded from the archive. The next decoder layer is still `d2i_CMS_bio` (`0x10062fb30`) -> `ASN1_item_d2i_bio` (`0x100613354`) -> BIO ASN.1 reader (`0x10061300c`) and ASN.1 item decoder (`0x100619304`), with the original CMS descriptor at `0x100b24750`. Only the BIO input layer is now reconstructed; no full CMS or certificate decoding is claimed.


## ASN.1 input layer now supplied

[ASN.1 input source](../reconstruction/asn1-input/) now supplies `ASN1_get_object` (`0x10061cb98`, length helper inlined), `asn1_d2i_read_bio` (`0x10061300c`), `ASN1_item_d2i_bio` (`0x100613354`) and the `ASN1_item_d2i` entry wrapper (`0x100619304`). The [Apple report](builds/asn1-input-bfe2c88d.json) compares 376 fixtures, including 33 actual-memory-BIO compositions; 337/367 instructions execute. The [project report](builds/component-project-bfe2c88d.json) verifies fifteen libraries.

The entry wrapper still calls missing `ASN1_item_ex_d2i` at `0x10061955c`. Its initial type dispatch reads the signed item-type byte, admits only unsigned values 0–6, then loads a byte from `0x100999878` at `0x100619644` and branches to `0x100619650 + (byte << 2)`. The original table and every type-specific body need independent flow recovery before that implementation can be supplied. The inspected CMS item at `0x100b24750` is type 6, with two templates; its referenced template/callback graph is not yet relocated. The five-instruction CMS wrapper alone would not resolve that graph.

Keep ERR clear/peek/put, primitive allocation, core decoder and certificate/P12 code explicit. Do not replace them with a host OpenSSL parser or a fake CMS result in the runtime archive. The research script reproduces the selected dependency study from the exact hash-checked IPA; the matching 1.0.2u reference does not identify a unique linked patch release.

</details>
