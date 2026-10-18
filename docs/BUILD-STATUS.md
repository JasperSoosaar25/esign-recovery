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
