# Recovery scope and limits

The cached analysis input is ESign 5.0.2. It contains compiled arm64 native code, resources, and runtime metadata, with no original native source, Xcode project, or dSYM. The Mach-O encryption command reports `cryptid = 0`. Static analysis does not execute or install the application. Its identity with the newly supplied Pixeldrain link is unconfirmed; see [input provenance](INPUT-PROVENANCE.md).

## Evidence categories

| Category | Meaning | Does not establish |
|---|---|---|
| Exact resource | Original archived bytes, SHA-256 retained | Editable original design assets or ownership transfer |
| Decoded metadata | Original selectors, ABI encodings, names, ivar offsets, and addresses read from Mach-O | Original source file boundaries, local names, comments, or authoring history |
| Decompiled | Ghidra returned C-like output for an identified function | Compilability, complete function boundaries, or correct behavior |
| Disassembled | Every `__text` byte appears in an address-indexed listing | That every listed word is reachable code or a correctly decoded instruction |
| Static branch index | A register trace resolves an indirect jump using a pointer's initial stored value | Runtime pointer values, absence of later writes, or full control-flow recovery |
| New tools/docs | Newly authored recovery scripts, integrity checks, and development materials | Original ESign implementation |

## Completed native export

The completed Ghidra 12.1.4 pass exported 57,245 non-external functions, with no tool-reported decompilation failure. All 3,396 method entries in the 182 `YYY…`/`AppDelegate` candidate classes have an export. Other bundled libraries are included too. Prefix matching helps navigation; it is not an authorship finding.

These counts are **output coverage**, not a percentage of original source recovered. Many functions terminate at indirect jumps because the binary uses pointer-table control flow. In particular, a short pseudocode body with one indirect call may omit substantial original behavior. The exact-byte listings and static branch index are supplied so contributors can investigate this rather than trusting a misleading success count.

The static branch resolver tracks register writes and resets at branches/calls. It records only aligned targets inside `__text` loaded through a known pointer slot. The index was compared directly with original branch bytes and original pointer values. It does not patch the input or claim runtime equivalence.

The native context export includes 15,615 C-string records, 1,622 link symbols, 39 linked-library records, and 47,812 declared function starts. Thirty-four declared starts are absent as distinct entries from the original Ghidra function index. They remain explicitly available in the native context and exact byte listings; they are not silently counted as decompiled functions. A declared start may conflict with an analyzer's inferred function boundary.

A stricter export audit found nine truncated native output chunks despite the old exporter's success counters. They were regenerated completely: 2,250 functions were re-exported from a fresh import of the exact executable, without the expensive whole-program analysis pass. Their names/labels follow the original index, but inferred body types and boundaries can differ. The verified published files now contain all 57,245 indexed function markers. The exporter checks write errors, and CI checks each marker against its indexed file. These repairs improve output completeness, not semantic equivalence.

## Reproducibility and omissions

The original Ghidra analysis was bounded to 1,200 seconds before export. Its Objective-C message analyzer had exceptions; runtime names were therefore applied separately from the independently decoded metadata. The native export script keeps explicit success/failure records and fallback disassembly rather than inventing bodies.

The 100-entry IPA contains 68 files and 32 directory entries. Of the files, 63 resources are retained exactly. Five are excluded: the main executable, its signature resource, one embedded provisioning profile, and two configuration profiles. The source tree records their paths and input hashes without redistributing those files. The executable is an analysis input, never a source-build dependency here.

No replacement app target or new runtime feature is included. Native dependency versions, licenses, initialization, signing behavior, installation behavior, and UI still require source reconstruction and validation. Future tests must use certificates and profiles controlled by the tester.

Primary format/tool references: [Apple objc4 runtime layouts](https://github.com/apple-oss-distributions/objc4/blob/main/runtime/objc-runtime-new.h), [Apple Mach-O structures](https://github.com/apple-oss-distributions/xnu/blob/main/EXTERNAL_HEADERS/mach-o/loader.h), [Ghidra 12.1.4](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build), and [Capstone](https://www.capstone-engine.org/).
