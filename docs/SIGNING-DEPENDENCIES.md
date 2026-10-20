# Remaining original signing dependencies

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
| CMS content accessor | Original `CMS_get0_content` at `0x10062edd8`, 71 instructions | iOS static library; 71 native returned-field/mutation checks; OID/ERR boundaries controlled |
| Actual signing-path DER helpers | Original functions at `0x100776830` and `0x10077f534`, with the original signing caller retained | iOS static library; 269 native fixtures; zero-number probe remains unverified |

See the exact reports under [builds/](builds/). The container parser's incomplete-header result and recursive DER integer-zero result remain unverified. The header/command ivar slides are explicit runtime models, not observed original-device state. Scalar accessor fragments are separate restricted C translations and can overlap these classes; do not add their count to these methods as if all were distinct recovered app behavior.

The main `YYYArchO` DER-slot method calls the recursive helper directly; it does not call the three-class encoder in that trace. Preserve the distinction when integrating recovered code. Both original paths retain encoding quirks and are not interchangeable standards-based encoders. The C helpers have newly assigned navigation symbols; they do not supply the entire `YYYArchO` implementation.

## Next implementation boundaries

| Original class | Indexed methods | Methods retaining unresolved jumps | Work still needed |
|---|---:|---:|---|
| `YYYP12` | 37 | 4 | P12/certificate initialization, native crypto ownership/layout, subject-name helpers, exact dependency identification |
| `YYYMobileprovision` | 38 | 2 | All class methods now translated; connect the actual BIO/CMS decoder and original P12 parser, then verify real profiles |
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


The next OID dependency is the original `OBJ_obj2nid` role at `0x1005b3138`. A separate original-byte study reaches 91 instructions with no unresolved indirect jumps, including calls at `0x1005b318c` to `0x100602d34` and `0x1005b3218` to the imported stub `0x10093122c`. It still needs its original object prefixes, static OID data and mutable-registry behavior recovered and verified; this research adds no source-completeness claim. The profile's decoder wrapper at `0x10062fb30` has five original instructions, forwards its BIO/output arguments to `0x100613354`, and uses the original ASN.1 descriptor at `0x100b24750`. Recovering only that wrapper would not reconstruct the ASN.1/CMS decoder behind it.
