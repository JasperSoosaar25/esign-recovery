# Original-only build and screenshot status — 25 October 2026

**The recovered libraries build; the complete original ESign application does not yet build from source.** The runtime implementation must come from original ESign recovery. A substitute signer, replacement UI, original-binary wrapper or mock screenshot would not satisfy the request.

| Requirement | Current verified result |
| --- | --- |
| Match the selected IPA | Confirmed; original input hashes unchanged |
| Account for original entries/resources | All 100 archive entries accounted for; all 63 retained resources exact |
| Preserve original code evidence | Complete saved byte listings, metadata, pseudocode and separate flow studies verified |
| Reconstruct reviewed native source | 24 classes / 167 metadata methods, three separate method-body translations and 117 native helper/wrapper bodies, plus documented blocks |
| Compile recovered components | All 21 arm64 libraries build with Xcode 27.1 / iOS 27.1 SDK, targeting iOS 15.0 |
| Run source/evidence checks | All 23 CI jobs and 167 tests pass for source commit `7940f841` |
| Obtain the author's original source/project | Not obtained |
| Link the complete original app from source | Not achieved |
| Produce a verified source-built IPA | Not achieved |
| Run it on an iPhone / iOS 27 | Not run |
| Supply genuine running-app screenshots | Not available |

The [combined Xcode report](builds/component-project-7940f841.json), [all twenty-one native reports](builds/all-components-7940f841.json), and [verification record](builds/verification-7940f841.json) identify the exact source commit, library hashes, SDK and test results. [latest.json](builds/latest.json) is the current verified report index. Original IPA metadata still declares iOS 11.0; the new component build target is iOS 15.0. SDK compilation does not establish device compatibility.

## Latest original source

[X509 name/certificate/CRL state](../reconstruction/x509-state/) supplies 22 original bodies, including all nine callbacks/name codecs previously referenced by the CMS graph. All 456 original-instruction/native C comparisons pass on Linux and Apple tooling, exercising all 839 instructions. The 79 parser composition cases include names, certificate/CRL items and memory-BIO-to-CMS cases containing both structures with their invented expected payload. Five additional descriptors and fifteen nodes are audited and relocated. [The Apple report](builds/x509-state-7940f841.json) records the exact result and controlled boundaries.

Earlier item/value/object/primitive/CMS components retain their independent 783, 2,065, 1,775, 1,010 and 805 comparisons. Name canonicalization/encoding/formatting, extension decoders, cryptographic operations, allocation/reference locking/ex-data/ERR state and P12 remain incomplete. Most signing/archive/install and application/UI source also remains unfinished. The fixtures do not establish certificate validation, signature verification, decryption or decompression. Controlled test callees are excluded from the iOS archives. [The dependency map](SIGNING-DEPENDENCIES.md) identifies exact next addresses.

## Why a full app and screenshots remain unavailable

The IPA contains a compiled device executable and resources, not the author's source project or source-level debug information. Most original initialization, application/UI bodies, signing/archive/install orchestration and native dependencies still need reconstruction. Metadata declarations and pseudocode exports cannot replace those implementations.

This workspace has Linux execution, with Apple compilation/native component tests performed on hosted macOS 27.0.1 arm64 runners. There is no attached physical iPhone. The original device executable is not an iOS simulator executable, and there is no complete source-built app target to launch. Historical screenshots, generated mockups and repackaged binaries do not establish the requested runtime result.

## Maintenance and continuation

Capstone is updated to 5.0.9; Unicorn 2.1.4 and both pinned GitHub Actions were confirmed current. The two obsolete branch-specific study workflows were consolidated into one manual dependency study. REA 6.7.0 was actually evaluated against the exact IPA; [the report](REA.md) separates successful inventory from unavailable Linux/macOS-specific native inspection.

Read [DEVELOPMENT.md](../DEVELOPMENT.md), [the roadmap](ROADMAP.md), and [the current session status](SESSION-STATUS.md). The [earlier detailed status](https://github.com/JasperSoosaar25/esign-recovery/blob/4c3b4f7795fcd20c09a5eadfe7a17b7e8476c3b8/docs/BUILD-STATUS.md) and all historical build reports remain available. No original baseline archive or recovered resource was rewritten to make these updates pass.
