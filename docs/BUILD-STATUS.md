# Original-only build and screenshot status

The current request is a buildable original ESign application, preserving the original implementation under the hood and proving its appearance with real screenshots. A replacement UI or signing engine does not meet this request. No replacement app implementation has been added.

| Requirement | Current result |
|---|---|
| Keep original resources | All 63 retained byte-for-byte |
| Account for every cached IPA entry | All 100 accounted for in [the entry audit](ipa-entry-audit.json) |
| Preserve original code evidence | Original code-section bytes, metadata, baseline pseudocode, and separate initial-pointer analysis |
| Obtain original native source/project | Not obtained |
| Compile the complete original app from native source | Not achieved |
| Produce a verified source-built IPA | Not achieved |
| Run the original app on iPhone/iOS 27 | Not run |
| Supply screenshots proving original/rebuilt UI equivalence | Not available |
| Match the exact user-selected IPA | Confirmed: the Filebin download matches the published baseline byte-for-byte |

The [native reconstruction follow-up](NATIVE-RECONSTRUCTION.md) adds fuller method pseudocode and 215 compiled C accessor fragments, checked against original ARM64 instructions for 35,840 fixtures. This is a narrow source-recovery result, not an original ESign app build. Most original class definitions, initialization, method source bodies, dependencies, and a complete app project are still missing. The localization component now has reconstructed Objective-C definitions for all 10 localization classes, 13 methods, and their initialization block. Its separate Apple SDK/host Foundation checks do not build or run the full application.

Signing dependencies now also have reconstructed source for the signature containers (38 methods), Mach-O header/base classes (17 methods), entitlement classes (41 methods and callback), and five load-command wrappers (20 additional methods). Two native functions directly used by the main DER signing-slot path are translated separately. The class-source scope is 23 original class definitions and 129 metadata methods; the separate method-body and native-function additions are recorded below. Reused parent methods and overlapping scalar fragments are not counted twice. Their arm64 iOS libraries and separate macOS runtime checks passed. They do not implement complete certificate/CMS generation, full Mach-O signing, archive handling, installation, or application UI. [The dependency map](SIGNING-DEPENDENCIES.md) records the remaining implementation boundaries.

## Why compilation is still blocked

The IPA ships an arm64 device executable and compiled resources. It does not contain the original native source project, source-level debug information, or an Xcode build configuration. The baseline Ghidra output contains many short stubs because indirect jumps split control flow. Output coverage is not source completeness, and metadata headers cannot supply missing method implementations.

The new `scripts/recover_method_flow.py` follows additional original instruction paths, including finite boolean-indexed pointer tables, under explicit static assumptions. The root tab-controller method yields 900 distinct instructions under that model, rather than ending at its first indirect jump. A separate Ghidra export uses those original-byte paths and jump hypotheses. No executable byte is patched. This improves research evidence; it does not prove runtime values, reconstruct every original type/global/initialization dependency, or produce compilable original source.

## Runtime and screenshot boundary

The [expanded analysis](DISPATCH-RECOVERY.md) now covers every one of the 3,396 indexed app-candidate method entries. Its 358,448 distinct original instructions and 12,244 identified selector call sites improve navigation and evidence. It retains 419 unresolved indirect-jump occurrences across 378 methods. Getter traces show why selector metadata alone cannot safely supply the missing return values. No original app target or replacement implementation was added.

This session runs on Linux, with no attached iOS device. Plugin discovery did not identify a relevant accessible device-testing integration. A hosted macOS build runner can compile a real project, but no original source project exists here yet, and the device executable is not an iOS-simulator executable. Changing its platform metadata, wrapping the original binary, rendering a mockup, or writing another app would not verify a source-built original ESign application.

Historical web screenshots can be reference material, but cannot prove this cached input or a future build ran on a particular OS. Do not label reference images or analysis output as new running-app screenshots.

## Required evidence before marking this complete

1. Obtain the genuine project or reconstruct the missing original implementation with address-level provenance and explicit uncertainty.
2. Resolve original initialization, globals, dependencies, resources, and build configuration without substituting another app or engine.
3. Compile and record the exact source commit, toolchain, platform, and dependency identities.
4. Run original and rebuilt apps on the same supported physical-device setup, test the core flows, and collect genuine screenshots.

The absence of omitted archive entries does not imply that the original high-level source is recoverable in full. The audit deliberately keeps executable/signature/profile inputs separate from published recovered resources.

## Verified native component build

The localization component successfully compiled into an arm64 iOS static library in GitHub Actions. The macOS Foundation executable passed 13,496 comparisons against original-instruction/model results. Its [recorded build report](builds/localization-4b365572.json) identifies source commit `4b365572d94337345143afd329c8559c298a8060`, Xcode 16.4, the iOS 18.5 SDK, and the component-library artifact hash.

The [signature-container report](builds/signature-blobs-da8d0e0c.json) records a successful Apple build and native layout/ABI checks for all 38 methods, 57 source-behavior fixtures, and one Foundation partial-copy API check. An incomplete original header parser result remains unverified. The [Mach-O header report](builds/mach-header-11d8c9f9.json) records a successful Apple build, 67 fixture comparisons, and native layout/ABI checks against an explicitly modeled ivar realization. Original-device layout has not been observed. Both builds also used Xcode 16.4/iOS 18.5.

The [entitlement-class report](builds/entitlements-39df227c.json) records 583 native fixtures and exact metadata checks. The [load-command report](builds/load-commands-28f7142b.json) records 86 fixtures and derived inherited-layout/ABI checks. The [recursive DER report](builds/recursive-der-26a3ef3a.json) records 269 native comparisons for the actual signing-path helpers; one integer-zero input did not complete the bounded original probe and remains explicitly unverified. These builds used Xcode 16.4/iOS 18.5.

The [requirements report](builds/requirements-slot-7b0973dc.json) adds 117 native comparisons for the original requirements method body and its three byte-writing blocks. The [code-directory report](builds/code-directory-fb1e67be.json) adds 85 native comparisons: 65 for code-directory construction, its digest helpers and hash blocks, and the NSString byte-length body; 20 for the original signature entitlement-flag block. Exact bytes, repeated getters, Apple CommonCrypto calls, real file operations, and final file position agree with the original-instruction models. Both iOS libraries compiled with Xcode 16.4/iOS 18.5.

Current totals are 23 original class definitions with 129 methods, three additional original metadata-method body translations exposed as C navigation symbols, and 13 native helper/wrapper translations, plus documented blocks. This does not supply the full `YYYArchO` class.

The [earlier nine-job verification run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39321304662) passed 67 tool tests and recorded eight native component builds and full recovery checks. The current continuation adds the crypto helpers and RSA wrapper described below. These results do not change the incomplete full-app/IPA/iPhone status above; no iOS 27 SDK or device result is claimed.


## Original crypto continuation

Eight native legacy-crypto bodies now have original-instruction translations with 355 native Apple comparisons and arm64 iOS compilation. The [exact report](builds/legacy-crypto-c7190909.json) records Xcode 16.4/iOS 18.5. The accessed LP64 prefixes use original 32-bit BN limbs. Source-family identification is narrowed, but the exact OpenSSL patch release and complete backend remain unresolved.

The alternate-CMS RSA wrapper at `0x100778fa0` now has source that reuses those helpers. Twenty original return-value cases cover allocation, length truncation/sign extension, diagnostics and cleanup; three original null-read probes remain excluded from native comparison. The embedded key provider is intentionally unresolved and no private-key bytes are supplied. Actual RSA operations and PEM parsing remain explicit unreconstructed dependencies. All 75 current tool tests pass. The [wrapper report](builds/rsa-wrapper-9ce17389.json) records 20 passing native boundary-behavior comparisons and arm64 iOS compilation with Xcode 16.4/iOS 18.5.

These additions bring the separately translated native function bodies to 13; they do not add new complete Objective-C classes or metadata-method definitions. The full-app/IPA/iPhone requirements in the table above remain unmet.

All [11 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39327012074) passed for source commit `9ce17389`: ten native component jobs and the complete recovery-integrity job, including 75 tool tests. The [verification record](builds/verification-9ce17389.json) records the exact jobs. The two new components pass 355 and 20 native boundary-behavior comparisons respectively; three wrapper fault probes remain excluded. No complete crypto backend, source-built app/IPA, or iPhone runtime result is established.
