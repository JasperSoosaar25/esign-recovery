# ESign 5.0.2 — source recovery

An unofficial recovery of a cached ESign 5.0.2 IPA, with native pseudocode, Objective-C declarations, original resources, and reproducible analysis tools.

**Input notice (18 October 2026):** the requested [Pixeldrain link](https://pixeldrain.com/u/4wWjv3LF) is inaccessible from this session. This recovery is verified against the cached IPA identified below, which matches a public compiled-IPA mirror. Its byte identity with the new Pixeldrain link remains **unconfirmed**. See [input provenance](docs/INPUT-PROVENANCE.md).

**This is not ESign's official source release. The native app cannot yet be built entirely from this repository.** No verified original native source release was found. Generated pseudocode needs substantial reconstruction, dependency work, and testing before it becomes a usable source project. No app features or UI changes are added in this recovery pass.

See [the latest independent verification and continuation status](docs/SESSION-STATUS.md) for what was checked against a fresh secondary-input download, what remains unresolved, and what is needed before producing an IPA or running-app screenshots.

The current build request requires the **original implementation only**. No replacement app or signing engine has been added. [Build and screenshot status](docs/BUILD-STATUS.md) records the unresolved requirements. [Every one of the cached IPA's 100 entries is accounted for](docs/ipa-entry-audit.json); original source completeness is a separate question.

[Separate original-code flow studies](docs/ORIGINAL-FLOW.md) follow additional original instructions beyond some baseline decompiler stubs. They preserve the original input and make their static assumptions explicit. They remain research output, not a built app.

[Expanded original-code analysis](docs/DISPATCH-RECOVERY.md) traces all 3,396 indexed app-candidate method entries, reaching 358,448 distinct original instructions under the static model. It maps 12,244 call sites to original selector stubs and retains 419 unresolved indirect-jump occurrences. All 8,999 selector stubs are decoded from preserved original bytes; receiver classes and return values remain unverified.

## What is available

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

“Decompiler output” means the tool returned pseudocode, not that it recovered correct source. Many functions contain unresolved indirect jumps; source-level behavior, full function boundaries, and UI equivalence remain uncertain. The class prefix is a navigation heuristic, not proof of authorship. See [recovery limits](docs/RECOVERY.md) and [verification results](docs/VERIFICATION.md).

The complete snapshot is stored losslessly in [hash-verified archive parts](evidence/archive-manifest.json) to keep generated data manageable in Git. Headers, app-focused pseudocode, readable plists, the method index, and contribution materials are browsable directly. After cloning, restore every generated native file, original resource, and byte listing with `python3 scripts/unpack_evidence.py`. No download or extra package is needed. Existing modified files are preserved: unpacking stops if one differs from the snapshot.

## For you and future contributors

Fork the repository and use the [code-navigation guide](docs/NAVIGATION.md) and [development guide](DEVELOPMENT.md) to find the original selector, ABI, resource, and implementation address relevant to your idea. [The roadmap](docs/ROADMAP.md) separates the unfinished source reconstruction from future features. [Ideas](docs/IDEAS.md) include cyan/light-blue appearance options, accessibility, safer certificate handling, and easier diagnostics. The [Liquid Glass plan](docs/LIQUID-GLASS.md) records the future native design work. These are proposals only.

```sh
python3 scripts/unpack_evidence.py
python3 scripts/verify_repository.py
python3 scripts/verify_original_flow.py
python3 scripts/verify_app_analysis.py
python3 -m unittest discover -s tests -v
```

These check recovery integrity. **They do not compile ESign or test signing.** The [Actions workflow](.github/workflows/verify.yml) runs the same checks on pushes and pull requests, including forks, without signing secrets.

Install the pinned `requirements-recovery.txt` in a virtual environment to run the expanded analysis verifier and all 29 tool tests; 17 analysis tests are skipped when Capstone is absent. No app runtime dependency is added by these analysis tests.

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
