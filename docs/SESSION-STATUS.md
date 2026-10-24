# Verified recovery status — 24 October 2026

The original ESign recovery remains incomplete. No source-built ESign app/IPA or genuine running-iPhone screenshot is available. Future feature development and Liquid Glass UI changes remain separate work after source recovery.

## Current verified snapshot

Source commit: `c4146cf5904b1a219e99e660a92c3185c2b564de`.

- All 20 [CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/40108419657) passed, including 127 tool tests.
- All 18 recovered libraries built together with Xcode 27.1 / iOS 27.1 SDK on macOS 27.0.1 arm64, targeting iOS 15.0.
- Reviewed source covers 24 original class definitions and 167 metadata methods, three separately exposed metadata-method bodies and 73 native helper/wrapper bodies, plus documented blocks. Overlapping scalar fragments are not added to those counts.
- The latest twenty ASN.1 object-lifetime, string, ANY, reference/cache and integer-retrieval bodies pass 1,775 native C comparisons and exercise all 959 original instructions. Forty-eight parser compositions include sixteen full memory-BIO-to-value paths using actual recovered constructors, string setting and cleanup.
- The earlier item/value components retain their independent 783 and 2,065 comparisons, with their original controlled boundaries and unexercised addresses explicit.
- Capstone 5.0.9 passes the unchanged baseline and every component verifier. The selected exact input and baseline archive parts remain unchanged.

[Verification](builds/verification-c4146cf5.json), [combined project](builds/component-project-c4146cf5.json), [all component reports](builds/all-components-c4146cf5.json), [new object component](builds/asn1-object-c4146cf5.json), and [latest report index](builds/latest.json) retain source/toolchain/library hashes and artifact links.

## Original input and retained evidence

The selected Filebin input was confirmed byte-for-byte against the baseline. A commit-pinned mirror supplies the same compiled bytes; identity does not independently authenticate a developer release.

| Property | Verified value |
| --- | --- |
| IPA size | 7,522,792 bytes |
| IPA SHA-256 | f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29 |
| Executable SHA-256 | 809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154 |
| Archive entries accounted for | 100 |
| Retained exact resources | 63 |
| Native __text bytes preserved | 9,612,732 |
| Identified native function pseudocode exports | 57,245; export coverage is not correct-source coverage |
| Selected app-method traces | 3,396 entries / 182 classes; 358,448 unique instructions under the static model |
| Unresolved baseline jump records | 419, retained unchanged |

The 215 scalar source fragments separately pass 35,840 original-instruction comparisons. They do not define complete classes or an app. Read [input provenance](INPUT-PROVENANCE.md), [the IPA entry audit](ipa-entry-audit.json), and [the native guide](NATIVE-RECONSTRUCTION.md).

## REA and cleanup

REA's actual IPA inventory and Apple projection account for the selected archive and report complete coverage within their inventory. The Linux native-macOS inspection command reports unavailable; no native decompilation or CMS parsing by REA is claimed. [REA.md](REA.md) gives the pinned version, reproduced commands and exact limitations.

The build/continuation guides, roadmap, source counts and report links are refreshed. Obsolete branch-specific study workflows are replaced by one manual original-dependency workflow. Historical reports remain intact. [TOOLCHAIN.md](TOOLCHAIN.md) records dependency and SDK updates.

## Remaining work

The next original dependencies are encoded object/bit/integer conversion, object and stack primitives, allocation/reference locking/ERR state and the CMS schema graph. Original ANY/string/item constructors/destructors and integer retrieval are now supplied by the object component. Exact addresses are in [SIGNING-DEPENDENCIES.md](SIGNING-DEPENDENCIES.md). Certificate/P12 handling, full signing/archive/install orchestration and most application/UI source still need recovery. A full app link and genuine runtime testing remain necessary for the [build/screenshot requirements](BUILD-STATUS.md).

[Earlier detailed session history](https://github.com/JasperSoosaar25/esign-recovery/blob/4c3b4f7795fcd20c09a5eadfe7a17b7e8476c3b8/docs/SESSION-STATUS.md) and older reports preserve previous findings without mixing historical toolchains with the current snapshot.
