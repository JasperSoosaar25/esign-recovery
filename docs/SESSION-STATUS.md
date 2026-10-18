# Independently verified recovery status — 18 October 2026

The current request authorizes native reverse engineering and decompilation, preserving original behavior where recoverable, and preparing a community development repository. New app features and the iOS 27 Liquid Glass redesign remain future work.

## Input boundary

The later user-supplied Filebin IPA downloaded successfully and is byte-for-byte identical to the recovery baseline. Its size is 7,522,792 bytes and its SHA-256 is `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`. The exact selected input is now verified. The earlier Pixeldrain URL itself remained inaccessible.

A fresh download of the secondary [compiled-IPA mirror](https://github.com/nooptr/esign/blob/master/esign_5.0.2_unsigned.ipa) also matches. A mirror match does not independently authenticate an original developer release.

## What was independently checked

The complete saved recovery was restored into a separate checkout. Its verifiers passed against the freshly downloaded secondary input:

- All 100 archive entries accounted for; all 63 retained resources match the IPA.
- All 1,104 class records and 142 category records match freshly parsed original metadata.
- All 9,612,732 native `__text` bytes and 70,077 static jump records pass the baseline comparison.
- All 57,245 identified native functions have indexed pseudocode output. This is export coverage, not semantic correctness or source completeness.
- All 3,396 selected app-method entries across 182 classes are covered by the expanded static traces. Their 358,448 unique instructions and 12,244 selector-call observations pass integrity checks.
- All 8,999 selector stubs and 901,266 bytes of native dispatch sections/binding data match the secondary input.
- All 56 recovery-tool tests pass, including corruption, identity, selector, control-flow, scalar-provenance, finite-return, callback, signature-container, runtime import, and Mach-O layout rejection cases. The 215 compiled C scalar fragments also pass 35,840 comparisons with original ARM64 instruction execution.

The traces retain 419 unresolved jump records. Mutable runtime state, incomplete function boundaries, missing initialization, and decompiler type guesses remain reconstruction concerns. Do not present the counts as a percentage of recovered behavior.

## Build, screenshots, and next work

There is no complete source-built app target, source-built IPA, attached iPhone, or verified iOS 27 run here. Original or rebuilt running-app screenshots are unavailable. Historical images, mockups, repackaged original binaries, and unrelated signing apps cannot establish those results.

Exact-input verification is complete. The [native follow-up](NATIVE-RECONSTRUCTION.md) adds fuller decompilation and 215 source fragments with 35,840 original-instruction comparisons. Remaining source reconstruction needs most address-level method implementations, recovered initialization and globals, dependency reconciliation, an actual Xcode target, and behavior tests. Only a real app build followed by physical-device testing can support app equivalence and iOS 27 compatibility claims.

Contribution guides, issue/PR templates, integrity CI, a feature-ideas document, and a native Liquid Glass plan are provided. These prepare collaboration on the recovery; they do not turn it into the original developer's open-source project. New script/documentation licensing does not relicense ESign materials.

## Native localization component follow-up

All 10 original localization classes now have reconstructed Objective-C source for their 13 methods and one-time initialization block. Original-instruction/model checks cover 3,812 dictionary pairs, 18 locale configurations, and 7,931 lookups. The separate `native-localization` CI job compiles an arm64 iOS component library and tests the component on macOS Foundation; inspect its actual result and artifact report for a build claim. A successful component build does not supply the unreconstructed signing/UI/application implementation or a source-built IPA. Real iPhone runtime access remains unavailable in this session.

## Signing dependency follow-up

`YYYBlob`, `YYYBlobIndex`, and `YYYSuperBlob` now have all 38 methods reconstructed. The [Apple build and report](builds/signature-blobs-da8d0e0c.json) passed 57 source-behavior fixtures plus one Foundation API-contract check, with exact class-layout/method-ABI comparisons. The first native run caught an incorrect short-read assumption in the model; it was corrected, and the original empty-header parser result remains explicitly unverified.

`YYYOffsetNode` and `YYYMachHeader` now have all 17 methods reconstructed. Their [Apple build and report](builds/mach-header-11d8c9f9.json) passed 67 fixtures covering direct header memory effects and signed offset limits. Original metadata requires a non-fragile ivar slide; the model explicitly applies it and the new source's native layout matches that derived layout. This does not claim original-device observation.

The [earlier verification run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39141557974) builds those three native components and checks the full recovery snapshot. Their saved input reads also pass direct comparison with the exact selected IPA.

## Further signing recovery in this continuation

The three original entitlement classes now have all 41 methods and their dictionary callback reconstructed. Explicit Boolean/byte return hypotheses resolve the separate analysis view; the baseline traces remain intact. All 583 original-instruction fixtures passed against the compiled source on Apple Foundation, with exact original class metadata checks. See [the report](builds/entitlements-39df227c.json).

The five load-command wrappers now have all 20 original methods reconstructed, reusing the existing parent's five methods. All 86 native cases passed, including live backing-memory reads, independent pointer fields, mutable-string copying, and derived non-fragile inherited layouts. See [the report](builds/load-commands-28f7142b.json).

Tracing the actual `YYYArchO` DER-slot caller revealed a separate recursive encoder and length writer. Both original native functions now have source translations and 269 successful native comparisons. The numeric/Unicode/length quirks are retained. Integer zero did not return within a 10,000-instruction original probe; the result and native zero parity remain explicitly unverified, and it is excluded from native tests. See [the report](builds/recursive-der-26a3ef3a.json).

This continuation adds 61 original Objective-C methods and two native functions, with 938 successful native comparisons. The cumulative class-source scope is 23 original classes and 129 metadata methods, plus two native functions; this is not complete app recovery. The [seven-job run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39145448661) checks all six native components and the recovery snapshot. Read [the updated dependency map](SIGNING-DEPENDENCIES.md) for the remaining P12/CMS, code-directory, signing orchestration, application, and device work. No complete signer or app target, source-built IPA, iPhone installation, or genuine running-app screenshot has been produced.
