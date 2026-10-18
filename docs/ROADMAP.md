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
