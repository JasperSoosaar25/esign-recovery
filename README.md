# ESign 5.0.2 — source recovery

An unofficial recovery of a cached ESign 5.0.2 IPA, with native pseudocode, Objective-C declarations, original resources, and reproducible analysis tools.

**Exact input confirmed (18 October 2026):** the newly supplied [Filebin IPA](https://filebin.net/64tq7btmi8iixpru/esign_5.0.2_unsigned.ipa) downloaded successfully and matches this recovery's baseline byte-for-byte. Its SHA-256 is `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`. The earlier inaccessible Pixeldrain link is no longer the input-verification blocker. See [input provenance](docs/INPUT-PROVENANCE.md).

**This is not ESign's official source release. The native app cannot yet be built entirely from this repository.** No verified original native source release was found. Generated pseudocode needs substantial reconstruction, dependency work, and testing before it becomes a usable source project. No app features or UI changes are added in this recovery pass.

See [the latest independent verification and continuation status](docs/SESSION-STATUS.md) for what was checked against a fresh secondary-input download, what remains unresolved, and what is needed before producing an IPA or running-app screenshots.

The current build request requires the **original implementation only**. No replacement app or signing engine has been added. [Build and screenshot status](docs/BUILD-STATUS.md) records the unresolved requirements. [Every one of the cached IPA's 100 entries is accounted for](docs/ipa-entry-audit.json); original source completeness is a separate question.

[Separate original-code flow studies](docs/ORIGINAL-FLOW.md) follow additional original instructions beyond some baseline decompiler stubs. They preserve the original input and make their static assumptions explicit. They remain research output, not a built app.

[Expanded original-code analysis](docs/DISPATCH-RECOVERY.md) traces all 3,396 indexed app-candidate method entries, reaching 358,448 distinct original instructions under the static model. It maps 12,244 call sites to original selector stubs and retains 419 unresolved indirect-jump occurrences. All 8,999 selector stubs are decoded from preserved original bytes; receiver classes and return values remain unverified.

**Build recovered source in Xcode:** open [ESignRecovery.xcodeproj](ESignRecovery.xcodeproj/) and select **RecoveredComponents**. The [verified project build](docs/builds/component-project-d49c5f05.json) compiles all fourteen recovered libraries together for arm64 iOS. Read the [project guide](xcode/README.md) for outputs and remaining link dependencies. This project contains library targets; it does not provide an ESign application or IPA.

## What is available

The [new native reconstruction pass](docs/NATIVE-RECONSTRUCTION.md) adds fuller original-byte method decompilation and **215 machine-level C accessor implementations across 39 classes**. Compiled C was compared with original ARM64 instruction execution in an emulator for **35,840 fixtures**. These narrow source fragments require the original object layout; they do not define an app target or verify complete signing behavior.

| Material | Verified scope | Start here |
|---|---|---|
| Objective-C declarations | 1,104 classes, 142 categories, 19,644 method entries | [Headers](recovered/objc/headers), [method/address index](recovered/objc/methods.tsv) |
| Native pseudocode | Output for all 57,245 functions identified in the completed Ghidra pass | Full snapshot bundle; paths below |
| App-focused excerpts | 182 `YYY…`/`AppDelegate` classes; all 3,396 method entries indexed | [Class excerpts](recovered/app-pseudocode), [coverage](recovered/app-method-coverage.json) |
| Exact machine-byte listings | All 9,612,732 bytes of the executable's `__text` section | Full snapshot bundle: `recovered/disassembly/` |
| Exact bundle resources | 63 files; original hashes retained | Full snapshot bundle; [manifest](recovered/resource-manifest.json) |
| Decoded resources | 20 readable plist/localization derivatives | [Readable plists](recovered/readable-plists) |
| Native context | C strings, symbols, linked libraries, declared function starts, and static table-jump records | [Analysis context](recovered/analysis) |
| Expanded method traces | All 3,396 indexed app-candidate method entries, with explicit unknown jumps | [Method index](analysis/app-methods/methods.tsv), [reading guide](docs/DISPATCH-RECOVERY.md) |
| Original dispatch excerpts | 8,999 selector stubs; 901,266 exact native code/data section bytes | [Selector index](analysis/objc-dispatch/selector-stubs.tsv), [manifest](analysis/objc-dispatch/index.json) |
| Compilable localization component | 10 original classes, 13 methods and initialization block; Apple build/runtime checks passed | [Source and evidence](reconstruction/localization/) |
| Compilable signature containers | 3 original classes, 38 methods; 57 behavior fixtures and one API-contract check passed on Apple Foundation | [Source and evidence](reconstruction/signature-blobs/) |
| Compilable Mach-O header component | 2 original classes, 17 methods; 67 fixtures and derived runtime-layout checks passed | [Source and evidence](reconstruction/mach-header/) |
| Compilable entitlement classes | 3 original classes, 41 methods and enumeration callback; 583 native fixtures passed | [Source and evidence](reconstruction/entitlements/) |
| Compilable load-command hierarchy | 5 additional original classes, 20 methods; 86 native fixtures and inherited-layout checks passed | [Source and evidence](reconstruction/load-commands/) |
| Original requirements-slot body | Method body and three native block translations; 117 native byte comparisons passed | [Source and evidence](reconstruction/requirements-slot/) |
| Original code-directory generation | Two method-body translations, two digest helpers and three block invocations; 85 native comparisons passed | [Source and evidence](reconstruction/code-directory/) |
| Provisioning-profile class | All 38 methods, 148 original-instruction/Foundation fixtures; exact native class layout/method ABI checked | [Source and evidence](reconstruction/mobileprovision/) |
| CMS content accessor | Original 71-instruction body; 71 native live-field/mutation comparisons passed | [Source and evidence](reconstruction/cms-content/) |
| Selected crypto helpers and RSA wrapper | Eight helpers and alternate-CMS RSA wrapper; 355 and 20 native boundary comparisons | [Crypto](reconstruction/legacy-crypto/), [wrapper](reconstruction/rsa-wrapper/) |
| Original OID database and lookup | Five original bodies, 958 object records, 890 indexes; 5,635 native Apple comparisons passed | [Source and evidence](reconstruction/oid-lookup/) |
| Original BIO input and memory buffers | 18 original bodies and method descriptor; all 666 instructions exercised; 603 native Apple comparisons passed | [Source and evidence](reconstruction/bio-input/) |
| Combined Xcode project | All fourteen recovered library targets build together for arm64 iOS; no test backends | [Project guide](xcode/README.md) |
| Main signing-path DER functions | 2 original native helper translations; 269 native fixtures passed, one original zero-number probe remains unverified | [Source and evidence](reconstruction/recursive-der/) |

“Decompiler output” means the tool returned pseudocode, not that it recovered correct source. Many functions contain unresolved indirect jumps; source-level behavior, full function boundaries, and UI equivalence remain uncertain. The class prefix is a navigation heuristic, not proof of authorship. See [recovery limits](docs/RECOVERY.md) and [verification results](docs/VERIFICATION.md).

The complete snapshot is stored losslessly in [hash-verified archive parts](evidence/archive-manifest.json) to keep generated data manageable in Git. Headers, app-focused pseudocode, readable plists, the method index, and contribution materials are browsable directly. After cloning, restore every generated native file, original resource, and byte listing with `python3 scripts/unpack_evidence.py`. No download or extra package is needed. Existing modified files are preserved: unpacking stops if one differs from the snapshot.

## For you and future contributors

Fork the repository and use the [code-navigation guide](docs/NAVIGATION.md) and [development guide](DEVELOPMENT.md) to find the original selector, ABI, resource, and implementation address relevant to your idea. [The roadmap](docs/ROADMAP.md) separates the unfinished source reconstruction from future features. [Ideas](docs/IDEAS.md) include cyan/light-blue appearance options, accessibility, safer certificate handling, and easier diagnostics. The [Liquid Glass plan](docs/LIQUID-GLASS.md) records the future native design work. These are proposals only.

```sh
python3 scripts/unpack_evidence.py
python3 scripts/unpack_native_methods.py
python3 scripts/verify_repository.py
python3 scripts/verify_original_flow.py
python3 scripts/verify_app_analysis.py
python3 scripts/verify_native_methods.py
python3 scripts/recover_scalar_accessors.py --verify
python3 scripts/recover_localization.py --verify
python3 scripts/recover_signature_blobs.py --verify
python3 scripts/recover_mach_header.py --verify
python3 scripts/recover_entitlements.py --verify
python3 scripts/recover_load_commands.py --verify
python3 scripts/recover_recursive_der.py --verify
python3 scripts/recover_requirements_slot.py --verify
python3 scripts/recover_code_directory.py --verify
python3 scripts/recover_legacy_crypto.py --verify
python3 scripts/recover_rsa_wrapper.py --verify
python3 scripts/recover_mobileprovision.py --verify
python3 scripts/recover_cms_content.py --verify
python3 scripts/recover_oid_lookup.py --verify
python3 scripts/recover_bio_input.py --verify
python3 scripts/generate_component_project.py --verify
python3 -m unittest discover -s tests -v
```

These check recovery integrity and recovered component behavior. **They do not compile the complete ESign app or verify complete signing.** The [Actions workflow](.github/workflows/verify.yml) runs the same checks on pushes and pull requests, including forks, without signing secrets.

Install the pinned `requirements-reconstruction.txt` in a virtual environment to run the compiled-C/original-ARM64 comparisons and all 99 tool tests. These packages are analysis dependencies, not app runtime dependencies.

To check whether your local IPA matches this recovery's input:

```sh
python3 scripts/verify_against_ipa.py '/path/to/ESign.ipa' --output /tmp/esign-verification.json
```

See [CONTRIBUTING.md](CONTRIBUTING.md), [security reporting](SECURITY.md), and the [iOS 27 device-test checklist](docs/IOS27-TESTING.md). There is no installable source-built release yet. A device-only arm64 executable is not a simulator build, and no iOS 27 running-app screenshot or functional-equivalence result is claimed.

## Input identity

- ESign 5.0.2, build 1; bundle identifier `p3.xyz.yyyue.esign`.
- Supplied filename: `esign_5.0.2_unsigned 2.ipa`; size 7,522,792 bytes.
- IPA SHA-256: `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`.
- Executable SHA-256: `809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154`.
- Build metadata: iPhoneOS 16.2 SDK / Xcode 14.2; declared minimum iOS 11.0. These are original build facts, not iOS 27 compatibility evidence.

The input matches a [public compiled-IPA mirror](https://github.com/nooptr/esign/tree/e48b19239ea1b1c725134350db8ab1a15ce3ff88). This match does not authenticate the mirror as a developer release. [Research notes](docs/RESEARCH.md) explain the other candidates examined.

## Ownership

New scripts, tests, and documentation are MIT-licensed. Recovered ESign materials retain their original ownership and applicable terms; this repository does not make ESign an open-source-licensed application. Preserve bundled dependency notices. Read [LICENSE](LICENSE) and [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) before reuse or redistribution. The original IPA, executable, provisioning/configuration profiles, and private signing inputs are excluded from Git.

### Native localization reconstruction

[`reconstruction/localization/`](reconstruction/localization/) contains the complete 10-class localization component: 13 Objective-C methods, the original initialization behavior, and 3,812 original dictionary entries. Original ARM64/model checks cover 18 locales and 7,931 lookups. A separate macOS CI job compiles the source for arm64 iOS and tests the component with Apple Foundation; check its actual result and build report. This component does not provide a complete ESign application or IPA.

The native localization build and 13,496 Apple Foundation comparisons passed for source commit `4b365572`. See the [exact build report](docs/builds/localization-4b365572.json) and its workflow/artifact reference. The compiler used Xcode 16.4/iOS 18.5; no full app or iOS 27 device run is claimed.

### Native signing dependencies

[`reconstruction/signature-blobs/`](reconstruction/signature-blobs/) reconstructs `YYYBlob`, `YYYBlobIndex`, and `YYYSuperBlob`, including original byte order, index offsets, parsing quirks, accessors, and destruction. The [Apple build report](docs/builds/signature-blobs-da8d0e0c.json) records a successful arm64 iOS library build, 57 behavior fixtures, one partial-copy API check, and original layout/ABI comparisons. One incomplete original parser input remains explicitly unverified.

[`reconstruction/mach-header/`](reconstruction/mach-header/) reconstructs `YYYOffsetNode` and `YYYMachHeader`. The [Apple build report](docs/builds/mach-header-11d8c9f9.json) records a successful arm64 iOS library build and 67 runtime fixture comparisons. Its non-fragile ivar slide is an explicit runtime model; original-device layout has not been observed. Both components used Xcode 16.4/iOS 18.5. They do not generate CMS signatures or sign/install whole apps. [The remaining dependency map](docs/SIGNING-DEPENDENCIES.md) identifies the next original implementation requirements.

[`reconstruction/entitlements/`](reconstruction/entitlements/) adds all 41 methods and the enumeration callback of the original three-class entitlement encoder. Its [Apple report](docs/builds/entitlements-39df227c.json) records 583 successful native comparisons, including byte-length limits and the original 16-bit overflow behavior. [`reconstruction/load-commands/`](reconstruction/load-commands/) adds all 20 methods in five original command classes; its [Apple report](docs/builds/load-commands-28f7142b.json) records 86 successful native fixtures, string-copy behavior, and derived inherited-layout checks. The five parent methods are reused and not counted again.

The actual `YYYArchO` DER-slot method calls a separate recursive function. [`reconstruction/recursive-der/`](reconstruction/recursive-der/) translates that function and its length writer, with the original caller preserved as evidence. Its [Apple report](docs/builds/recursive-der-26a3ef3a.json) records 269 successful native comparisons. A zero-number input did not complete the bounded original probe and remains explicitly outside native parity claims. Original numeric/Unicode encoding quirks are retained. No complete `YYYArchO` implementation is supplied by these two helpers.

The original requirements-slot method body and its three byte-writing blocks now have [compilable source](reconstruction/requirements-slot/) and [117 successful native comparisons](docs/builds/requirements-slot-7b0973dc.json). The original four-byte nil fallback and UTF-8/padding behavior are retained. [Code-directory generation](reconstruction/code-directory/) now has source for its original method body, two digest helpers, two hash blocks, and the original NSString UTF-8-length method body. Its [85 native comparisons](docs/builds/code-directory-fb1e67be.json) check exact bytes, repeated getters, real file reads/seeks, Apple CommonCrypto calls in both hash modes, and the separately recovered signature entitlement-flag block.

[Selected legacy crypto helpers](reconstruction/legacy-crypto/) now reconstruct eight original bodies: BN bit count, RSA sizing/reference/free/method dispatch, EVP key access/free, and the FILE/BIO PEM wrapper. Their [Apple build report](docs/builds/legacy-crypto-c7190909.json) records 355 passing native comparisons and arm64 iOS SDK compilation. The original uses 32-bit BIGNUM limbs despite its arm64/LP64 ABI. Exact OpenSSL patch identity and the actual RSA/PEM/CMS backend remain unresolved; test implementations exist only at documented harness boundaries.

The [alternate-CMS RSA wrapper](reconstruction/rsa-wrapper/) at `0x100778fa0` also has source tied to exact IPA instruction execution. Its 23 fixtures include 20 return-value cases and three original fault probes excluded from native comparison. It retains the original diagnostic/error fallthrough and the ignored key-pointer argument. No embedded key bytes are supplied. Its [Apple report](docs/builds/rsa-wrapper-9ce17389.json) records 20 passing native comparisons and arm64 iOS compilation; actual RSA/PEM dependencies remain unreconstructed.

Across these source components there are 24 original class definitions with 167 metadata methods, three additional metadata-method body translations with new C navigation names, and 37 native helper/wrapper translations. Those C bodies do not create a replacement `YYYArchO` class. Scalar fragments overlap some methods and are not added to that count. Fourteen component-library builds, a combined Xcode project build and the recovery job run in CI. Complete CMS/certificate, signing orchestration, application/UI, app-target, and physical-device work remain unfinished.

All [11 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39327012074) passed for source commit `9ce17389`: ten native component jobs and the complete recovery-integrity job, including 75 tool tests. The [verification record](docs/builds/verification-9ce17389.json) records the exact jobs. The two new components pass 355 and 20 native boundary-behavior comparisons respectively; three wrapper fault probes remain excluded. No complete crypto backend, source-built app/IPA, or iPhone runtime result is established.

### Provisioning profiles and the shared Xcode project — 20 October

The complete 38-method profile class has [reviewed source](reconstruction/mobileprovision/) and [148 passing native comparisons plus two sets of 146 composition checks](docs/builds/mobileprovision-9922c42e.json). The second composition uses the recovered CMS accessor and actual original OID lookup with encoded signed-data OID bytes. The accessor's [71 standalone and 71 OID-composition comparisons](docs/builds/cms-content-9922c42e.json) also pass. The BIO memory-input source is now recovered separately; ASN.1/CMS decoding and certificate parsing remain original implementation dependencies.

The [original OID component](reconstruction/oid-lookup/) adds five native bodies, 958 object records and 890 search indexes. Its [Apple report](docs/builds/oid-lookup-9922c42e.json) records 5,635 passing compiled-source comparisons plus every static record and shared pointer identity. One zero-length no-match branch remains unexercised under the exact static table; the source retains it.

The [Xcode project](xcode/README.md) builds all thirteen recovered libraries together, without test backends or the original executable. Its [exact build report and library artifact](docs/builds/component-project-d49c5f05.json) record the real arm64 iOS outputs. The full signer, application source/target, source-built IPA and physical-iPhone screenshots remain unfinished.

All [15 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39451228940) passed for source commit `9922c42e`: thirteen individual native component jobs, the combined Xcode library build and full recovery integrity, including 93 tool tests. The [verification record](docs/builds/verification-9922c42e.json) identifies every job and its exact scope. Original BIO/CMS decoding, certificate/P12 parsing, signing/archive/install orchestration and application/UI source remain unfinished; no source-built IPA or real iPhone screenshot has been produced.

### Original BIO memory-input source

The [BIO component](reconstruction/bio-input/) now reconstructs the original memory-buffer method, creation/release, read/write/control dispatch, seven memory callbacks and three buffer helpers. All 18 bodies pass [603 Apple native comparisons](docs/builds/bio-input-d49c5f05.json), exercising all 666 recovered instructions. This includes a create/write/read/reset/free sequence and preserves callback mutation, flag/counter behavior, failure state and buffer effects. Allocation, reference locking, ex-data, cleansing and ERR implementations remain original dependencies.

All [16 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39457921121) passed for source commit `d49c5f05`, including 99 tool tests and the [fourteen-library Xcode build](docs/builds/component-project-d49c5f05.json). See the [verification record](docs/builds/verification-d49c5f05.json). The complete app, source-built IPA, original ASN.1/CMS and certificate backend, signing/app orchestration and real iPhone screenshots remain unfinished.
