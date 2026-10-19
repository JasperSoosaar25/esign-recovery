# ESign 5.0.2 — source recovery

An unofficial recovery of a cached ESign 5.0.2 IPA, with native pseudocode, Objective-C declarations, original resources, and reproducible analysis tools.

**Exact input confirmed (18 October 2026):** the newly supplied [Filebin IPA](https://filebin.net/64tq7btmi8iixpru/esign_5.0.2_unsigned.ipa) downloaded successfully and matches this recovery's baseline byte-for-byte. Its SHA-256 is `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`. The earlier inaccessible Pixeldrain link is no longer the input-verification blocker. See [input provenance](docs/INPUT-PROVENANCE.md).

**This is not ESign's official source release. The native app cannot yet be built entirely from this repository.** No verified original native source release was found. Generated pseudocode needs substantial reconstruction, dependency work, and testing before it becomes a usable source project. No app features or UI changes are added in this recovery pass.

See [the latest independent verification and continuation status](docs/SESSION-STATUS.md) for what was checked against a fresh secondary-input download, what remains unresolved, and what is needed before producing an IPA or running-app screenshots.

The current build request requires the **original implementation only**. No replacement app or signing engine has been added. [Build and screenshot status](docs/BUILD-STATUS.md) records the unresolved requirements. [Every one of the cached IPA's 100 entries is accounted for](docs/ipa-entry-audit.json); original source completeness is a separate question.

[Separate original-code flow studies](docs/ORIGINAL-FLOW.md) follow additional original instructions beyond some baseline decompiler stubs. They preserve the original input and make their static assumptions explicit. They remain research output, not a built app.

[Expanded original-code analysis](docs/DISPATCH-RECOVERY.md) traces all 3,396 indexed app-candidate method entries, reaching 358,448 distinct original instructions under the static model. It maps 12,244 call sites to original selector stubs and retains 419 unresolved indirect-jump occurrences. All 8,999 selector stubs are decoded from preserved original bytes; receiver classes and return values remain unverified.

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
python3 -m unittest discover -s tests -v
```

These check recovery integrity and recovered component behavior. **They do not compile the complete ESign app or verify complete signing.** The [Actions workflow](.github/workflows/verify.yml) runs the same checks on pushes and pull requests, including forks, without signing secrets.

Install the pinned `requirements-reconstruction.txt` in a virtual environment to run the compiled-C/original-ARM64 comparisons and all 67 tool tests. These packages are analysis dependencies, not app runtime dependencies.

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

Across these source components there are 23 original class definitions with 129 metadata methods, three additional metadata-method body translations with new C navigation names, and four native helper translations. Those C bodies do not create a replacement `YYYArchO` class. Scalar fragments overlap some methods and are not added to that count. Eight component-library builds and the recovery job run in CI. Complete CMS/certificate, signing orchestration, application/UI, app-target, and physical-device work remain unfinished.
