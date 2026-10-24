# Original-only build and screenshot status — 24 October 2026

**The recovered libraries build; the complete original ESign application does not yet build from source.** The runtime implementation must come from original ESign recovery. A substitute signer, replacement UI, original-binary wrapper or mock screenshot would not satisfy the request.

| Requirement | Current verified result |
| --- | --- |
| Match the selected IPA | Confirmed; original input hashes unchanged |
| Account for original entries/resources | All 100 archive entries accounted for; all 63 retained resources exact |
| Preserve original code evidence | Complete saved byte listings, metadata, pseudocode and separate flow studies verified |
| Reconstruct reviewed native source | 24 classes / 167 metadata methods, three separate method-body translations and 73 native helper/wrapper bodies, plus documented blocks |
| Compile recovered components | All 18 arm64 libraries build with Xcode 27.1 / iOS 27.1 SDK, targeting iOS 15.0 |
| Run source/evidence checks | All 20 CI jobs and 127 tests pass for source commit `c4146cf5` |
| Obtain the author's original source/project | Not obtained |
| Link the complete original app from source | Not achieved |
| Produce a verified source-built IPA | Not achieved |
| Run it on an iPhone / iOS 27 | Not run |
| Supply genuine running-app screenshots | Not available |

The [combined Xcode report](builds/component-project-c4146cf5.json), [all eighteen native reports](builds/all-components-c4146cf5.json), and [verification record](builds/verification-c4146cf5.json) identify the exact source commit, library hashes, SDK and test results. [latest.json](builds/latest.json) is the current verified report index. Original IPA metadata still declares iOS 11.0; the new component build target is iOS 15.0. SDK compilation does not establish device compatibility.

## Latest original source

[ASN.1 object lifetimes](../reconstruction/asn1-object/) now supplies twenty original bodies. All 1,775 original-instruction/native C comparisons pass on Linux and Apple tooling, exercising all 959 instructions. Forty-eight parser compositions include sixteen complete memory-BIO-to-value paths using actual recovered construction, string setting and cleanup. [The Apple report](builds/asn1-object-c4146cf5.json) preserves the exact result and scope.

The earlier item/value components retain their independent 783 and 2,065 comparisons. Encoded object/bit/integer conversion, object/stack primitives, allocation/reference locking/ERR state, CMS schema and certificate/P12 processing remain missing. Most signing/archive/install and application/UI implementation also remains unfinished. Controlled test callees are excluded from the iOS archives. [The dependency map](SIGNING-DEPENDENCIES.md) gives exact addresses and next work.

## Why a full app and screenshots remain unavailable

The IPA contains a compiled device executable and resources, not the author's source project or source-level debug information. Most original initialization, application/UI bodies, signing/archive/install orchestration and native dependencies still need reconstruction. Metadata declarations and pseudocode exports cannot replace those implementations.

This workspace has Linux execution, with Apple compilation/native component tests performed on hosted macOS 27.0.1 arm64 runners. There is no attached physical iPhone. The original device executable is not an iOS simulator executable, and there is no complete source-built app target to launch. Historical screenshots, generated mockups and repackaged binaries do not establish the requested runtime result.

## Maintenance and continuation

Capstone is updated to 5.0.9; Unicorn 2.1.4 and both pinned GitHub Actions were confirmed current. The two obsolete branch-specific study workflows were consolidated into one manual dependency study. REA 6.7.0 was actually evaluated against the exact IPA; [the report](REA.md) separates successful inventory from unavailable Linux/macOS-specific native inspection.

Read [DEVELOPMENT.md](../DEVELOPMENT.md), [the roadmap](ROADMAP.md), and [the current session status](SESSION-STATUS.md). The [earlier detailed status](https://github.com/JasperSoosaar25/esign-recovery/blob/4c3b4f7795fcd20c09a5eadfe7a17b7e8476c3b8/docs/BUILD-STATUS.md) and all historical build reports remain available. No original baseline archive or recovered resource was rewritten to make these updates pass.
