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
- All 32 recovery-tool tests pass, including corruption, identity, selector, control-flow, and scalar-provenance rejection cases. The 215 compiled C scalar fragments also pass 35,840 comparisons with original ARM64 instruction execution.

The traces retain 419 unresolved jump records. Mutable runtime state, incomplete function boundaries, missing initialization, and decompiler type guesses remain reconstruction concerns. Do not present the counts as a percentage of recovered behavior.

## Build, screenshots, and next work

There is no complete source-built app target, source-built IPA, attached iPhone, or verified iOS 27 run here. Original or rebuilt running-app screenshots are unavailable. Historical images, mockups, repackaged original binaries, and unrelated signing apps cannot establish those results.

Exact-input verification is complete. The [native follow-up](NATIVE-RECONSTRUCTION.md) adds fuller decompilation and 215 source fragments with 35,840 original-instruction comparisons. Remaining source reconstruction needs most address-level method implementations, recovered initialization and globals, dependency reconciliation, an actual Xcode target, and behavior tests. Only a real app build followed by physical-device testing can support app equivalence and iOS 27 compatibility claims.

Contribution guides, issue/PR templates, integrity CI, a feature-ideas document, and a native Liquid Glass plan are provided. These prepare collaboration on the recovery; they do not turn it into the original developer's open-source project. New script/documentation licensing does not relicense ESign materials.
