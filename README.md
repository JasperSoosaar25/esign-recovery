# ESign 5.0.2 — source recovery

An unofficial reconstruction of the user's selected ESign 5.0.2 IPA, preserving original resources, metadata, code evidence and independently tested native source.

**The full original app is not yet buildable from this repository.** There is no source-built IPA, real iPhone run, iOS 27 compatibility result or running-app screenshot. No official original source release was obtained. Most application/UI, signing orchestration and crypto/parser implementation still need reconstruction. [Build status](docs/BUILD-STATUS.md) lists the outstanding requirements.

[Get started](docs/GETTING-STARTED.md) · [Build in Xcode](xcode/README.md) · [Development](DEVELOPMENT.md) · [Dependency map](docs/SIGNING-DEPENDENCIES.md) · [Contribute](CONTRIBUTING.md)

## Current verified result

The Xcode project builds **nineteen arm64 iOS static libraries** from recovered source. Open `ESignRecovery.xcodeproj`, select **RecoveredComponents** and build for a generic iOS device; or, on a Mac with Xcode:

```sh
python3 scripts/build_component_project.py
```

The latest [combined project report](docs/builds/component-project-722fbfdb.json) records all nineteen archives and their source/project hashes. All [21 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/40112283491) passed for source commit `722fbfdb`, including **137 tool tests**; [the verification record](docs/builds/verification-722fbfdb.json) records exact jobs. Current Apple builds use Xcode 27.1/iOS 27.1 on macOS 27.0.1 arm64, with an iOS 15.0 library deployment target. These are component tests and library compilation, not an app link or iOS 27 device result.

Current reviewed source covers **24 original class definitions / 167 metadata methods**, **three additional metadata-method body translations**, and **83 native helper/wrapper bodies**, plus documented blocks. Scalar fragments overlap some methods and are not added to those counts. The libraries exclude test backends and the original executable.

The latest addition is [original stacks and ASN.1 content source](reconstruction/asn1-primitives/): **ten bodies** covering stack new/num/pop/push/free/value, encoded BIT STRING/OBJECT/INTEGER conversion and OBJECT cleanup. Its [Apple report](docs/builds/asn1-primitives-722fbfdb.json) records **1,010 passing original-instruction/native C comparisons**, exercising **all 552 original instructions**. The **138 parser compositions** include **32 complete memory-BIO-to-value paths** with actual recovered parser, lifetime, stack and content bodies, including allocation/growth failure cleanup.

Earlier item/value/object components retain their separate 783, 2,065 and 1,775 comparisons. Original allocation/reference locking/ex-data/ERR state, CMS schemas/callbacks, certificate/P12 processing and most signing/application source still need recovery.

[All nineteen current native reports](docs/builds/all-components-722fbfdb.json) and [the latest verified snapshot](docs/builds/latest.json) give exact toolchain/source/library hashes. [Toolchain maintenance](docs/TOOLCHAIN.md) records the Capstone 5.0.9 update and cleaned-up manual study workflow. [REA was actually evaluated against this IPA](docs/REA.md); its inventory/Apple projection helps investigation, while native source recovery remains separate.

## Available source and evidence

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
| Original ASN.1 input | Four original bodies; 376 native comparisons, including 33 actual-memory-BIO compositions; 337/367 instructions exercised | [Source and evidence](reconstruction/asn1-input/) |
| Original ASN.1 item orchestration | Eight bodies; 783 comparisons, 56 entry-wrapper compositions and 990/999 instructions exercised | [Source and evidence](reconstruction/asn1-item/) |
| Original ASN.1 values and non-explicit templates | Four bodies; 2,065 comparisons, 541 compositions including 18 full memory-BIO-to-value chains; 920/923 instructions exercised | [Source and evidence](reconstruction/asn1-value/) |
| Original ASN.1 object lifetimes | Twenty bodies; 1,775 comparisons, all 959 instructions; 48 parser compositions including sixteen full memory-BIO-to-value paths | [Source and evidence](reconstruction/asn1-object/) |
| Original stacks and encoded primitive content | Ten bodies; 1,010 comparisons, all 552 instructions; 138 parser compositions including 32 full memory-BIO-to-value paths | [Source and evidence](reconstruction/asn1-primitives/) |
| Combined Xcode project | All nineteen recovered library targets build together for arm64 iOS; no test backends | [Project guide](xcode/README.md) |
| Main signing-path DER functions | 2 original native helper translations; 269 native fixtures passed, one original zero-number probe remains unverified | [Source and evidence](reconstruction/recursive-der/) |

Pseudocode export coverage is not source completeness or proven behavior. The separate static study traces all 3,396 selected app-method entries, reaching 358,448 unique instructions and identifying 12,244 selector call sites under its model. It preserves 419 unresolved jump occurrences. Initial pointers, incomplete function boundaries and decompiler types need review. See [recovery limits](docs/RECOVERY.md), [dispatch analysis](docs/DISPATCH-RECOVERY.md) and [native reconstruction](docs/NATIVE-RECONSTRUCTION.md).

The separate 215 scalar C fragments across 39 classes pass 35,840 original-instruction comparisons. They require original object layouts and do not define complete runtime classes. Component READMEs preserve their individual assumptions and unverified cases, including the signature short-header result, recursive DER zero-number probe and OID no-match branch.

## Exact original input

The supplied [Filebin IPA](https://filebin.net/64tq7btmi8iixpru/esign_5.0.2_unsigned.ipa) was downloaded and matched the baseline byte-for-byte. Its size is **7,522,792 bytes** and SHA-256 is:

```text
f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29
```

[The getting-started guide](docs/GETTING-STARTED.md#original-selected-ipa) provides a commit-pinned mirror of those exact compiled input bytes. That IPA was not built from this repository. A matching mirror establishes identity, not independent authentication of an original developer release. The earlier Pixeldrain URL remained inaccessible. See [input provenance](docs/INPUT-PROVENANCE.md) and [the audit of all 100 IPA entries](docs/ipa-entry-audit.json).

## Reproduce verification

Restore the generated snapshots from their [hash-verified archive parts](evidence/archive-manifest.json):

```sh
python3 -m venv .venv
. .venv/bin/activate
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/unpack_evidence.py
python3 scripts/unpack_native_methods.py
python3 scripts/recover_asn1_input.py --verify
python3 scripts/recover_asn1_item.py --verify
python3 scripts/recover_asn1_value.py --verify
python3 scripts/recover_asn1_object.py --verify
python3 scripts/recover_asn1_primitives.py --verify
python3 -m unittest discover -s tests -v
```

[CONTRIBUTING.md](CONTRIBUTING.md) lists the full verifier set, also run by [Actions](.github/workflows/verify.yml). Normal verification uses committed evidence and invented fixtures. The ASN.1 generation workflow downloads the pinned original into memory, checks IPA/executable hashes and does not commit the binary. Unpacking preserves existing changed files by stopping on a mismatch.

The original binary's build metadata records iPhoneOS 16.2/Xcode 14.2 and a declared iOS 11.0 minimum. Metadata alone does not verify compatibility with a later OS.

## Continue development

Use [the navigation guide](docs/NAVIGATION.md) and [dependency map](docs/SIGNING-DEPENDENCIES.md) to connect original selectors and addresses to missing source. The item, primitive, collection and non-explicit template bodies are now recovered. Original ANY/string/item construction and destruction are now supplied. The required stack and encoded object/bit/integer operations are also supplied. Next are CMS schema relocation and callbacks, remaining runtime primitives, and certificate/P12 processing.

[The roadmap](docs/ROADMAP.md) separates recovery from future features. [Community ideas](docs/IDEAS.md) and [the Liquid Glass plan](docs/LIQUID-GLASS.md) cover later appearance, accessibility, diagnostics and signing improvements. They remain proposals until original source recovery and the requested app work are complete. Read [the independent session status](docs/SESSION-STATUS.md) for detailed evidence and historical reports.

New scripts, tests and documentation are MIT-licensed. Recovered ESign materials retain their original ownership and applicable terms; this repository does not relicense ESign as an open-source application. Preserve dependency notices. Read [LICENSE](LICENSE) and [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md). Original IPA/executable files, profiles, certificates, private keys and personal signing inputs are excluded from Git.
