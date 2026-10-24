# Development and reconstruction roadmap

Completed evidence work is marked separately from source reconstruction. This repository does not yet deliver a usable source-built signer.

Current constraint: the runtime implementation must come from original ESign recovery, with no substitute app or signing engine. Read [BUILD-STATUS.md](BUILD-STATUS.md). Future feature ideas remain separate from this requirement.

## Available evidence

- [x] Identify and hash the cached ESign 5.0.2 input.
- [x] Confirm the later user-selected Filebin IPA has the same SHA-256 as this baseline. The earlier Pixeldrain URL remained inaccessible.
- [x] Recover Objective-C class/category metadata and selector/ABI indexes.
- [x] Export all functions identified in the completed Ghidra analysis, plus app-focused excerpts.
- [x] Preserve all `__text` bytes in disassembly listings and compare them with the original.
- [x] Preserve exact resources and readable plist/localization derivatives.
- [x] Add static pointer-table jump evidence, contribution materials, and integrity CI.

## Verified native source components

- [x] Reconstruct all 10 localization classes and 13 methods; pass the Apple library build and 13,496 Foundation comparisons.
- [x] Reconstruct all three signature-container classes and 38 methods; pass the Apple library build, 57 behavior fixtures, and one API check. Preserve the explicitly unverified short-header parser case.
- [x] Reconstruct the two Mach-O header/base classes and 17 methods; pass the Apple library build and 67 native fixture comparisons, with non-fragile ivar realization explicitly modeled.
- [x] Reconstruct the three entitlement classes, 41 methods, and original callback; pass 583 native comparisons and exact class/ABI checks.
- [x] Reconstruct five load-command wrapper classes and 20 additional methods; pass 86 native comparisons, original copy semantics, and derived inherited-layout checks.
- [x] Translate the separate recursive DER function actually called by the signing-slot method and its length writer; pass 269 native comparisons. Preserve the explicitly unverified integer-zero probe.

- [x] Reconstruct requirements-slot construction: 117 native comparisons.
- [x] Reconstruct CodeDirectory/digest/string/block bodies: 85 native comparisons.
- [x] Reconstruct eight selected legacy-crypto bodies and the alternate-CMS RSA wrapper: 355 and 20 native comparisons, preserving excluded fault probes.
- [x] Reconstruct all 38 provisioning-profile methods, original CMS content access and their native/OID composition checks; full CMS/certificate parsing remains missing.
- [x] Reconstruct original OID lookup/static data: five bodies, 958 objects, 890 indexes and 5,635 native comparisons.
- [x] Reconstruct original BIO/memory-buffer source: 18 bodies, 603 native comparisons and all 666 instructions exercised.
- [x] Reconstruct ASN.1 header/stream input and two item-entry wrappers: four bodies, 376 native comparisons, including 33 actual-memory-BIO compositions. Preserve the 30 unexercised input-layer instruction addresses; the item body is now supplied by the next component.
- [x] Reconstruct eight ASN.1 item/template/cache/selector helpers: 783 native comparisons, 990/999 instructions and 56 entry-wrapper compositions.
- [x] Reconstruct four ASN.1 value/converter/collector/non-explicit-template bodies: 2,065 comparisons, 920/923 instructions and 18 full memory-BIO-to-value chains within 541 compositions.
- [x] Reconstruct twenty ASN.1 object-lifetime, string, ANY and integer-retrieval bodies: 1,775 comparisons, all 959 instructions, 48 parser compositions including sixteen complete memory-BIO-to-value paths.
- [x] Update all eighteen component builds to Xcode 27.1/iOS 27.1 SDK with an iOS 15.0 library target; retain original iOS 11 metadata.
- [x] Evaluate REA against the exact IPA, update Capstone and consolidate manual study workflows.
- [x] Build eighteen component libraries through the shared Xcode project and retain exact source/toolchain reports.

These are components, not completed app features. Their reports are under `docs/builds/`. The [remaining signing dependency map](SIGNING-DEPENDENCIES.md) identifies unreconstructed original methods and unresolved static flow.

## Required for a source-only app

- [ ] Identify exact original native dependency versions/local modifications and reconcile licenses; preserve the original implementation rather than selecting a substitute engine.
- [ ] Reconstruct entry points, initialization, navigation, and resource loading in a real app target.
- [ ] Reconstruct file/document import, model persistence, and archive handling.
- [ ] Reconstruct certificate/profile parsing and signing configuration with controlled fixtures.
- [ ] Reconstruct the signing pipeline and compare results on harmless test apps using owned certificates.
- [ ] Reconstruct repositories, downloads, install flow, settings, and original screen behavior.
- [ ] Establish reproducible device/simulator builds and collect actual iOS 27 results.
- [ ] Complete the parity checklist and record remaining differences before making equivalence claims.

Each implementation needs a source file, original addresses, assumptions, attribution, and meaningful behavior tests. Do not mark a feature complete because Ghidra produced pseudocode or because a new app merely launches.

## Later improvements

See [IDEAS.md](IDEAS.md). They remain proposals until the relevant source exists and implementation is separately requested. No proposed appearance, telemetry, certificate, or signing changes are made in this recovery pass.
