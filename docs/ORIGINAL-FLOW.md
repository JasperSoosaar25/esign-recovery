# Separate original-code control-flow studies

These files extend the investigation of original ESign code. They are **not** a replacement implementation, compilable original source, an app build, or a runtime test. No instructions or data bytes in the analysis input were patched. The baseline recovery snapshot remains unchanged.

The baseline native pass often ends a method at its first computed jump. The new tracer propagates small finite sets of register values across original instructions, follows direct branches, and reads initial pointer-table values. It also models both choices of boolean table indexes instead of selecting a convenient branch. Unknown targets remain unresolved. Other declared method/function entries stop traversal, and a step limit bounds the analysis.

The model assumes initial pointer values remain applicable, normal AAPCS64 callee-saved register behavior, and return from calls. It does not model runtime writes, all ARM64 instructions, arbitrary stack/heap state, every possible indirect target, or full native control flow. A zero unresolved-jump count in one selected model is not proof that an original function has been recovered correctly or completely.

## Selected studies

| Original class | Selector | Purpose of the study |
|---|---|---|
| `YYYTabBarViewController` | `generateSubViewController` | Root tab setup; 900 distinct instructions reached under this model |
| `AppDelegate` | `application:didFinishLaunchingWithOptions:` | Startup path |
| `YYYFileListViewController` | `initSubviews` | Original file-screen initialization |
| `YYYSettingTableViewController` | `initTableView` | Original settings table; unresolved control flow remains |
| `YYYSignHelper` | `preSignWithOption:` | Original signing preparation; unresolved control flow remains |

The [index](../analysis/original-flow/index.json) records per-study counts and file hashes. Each study has original-byte assembly, a graph with explicit assumptions, a TSV consumed by Ghidra, and separate pseudocode. Ghidra jump overrides apply only to its private analysis database. The inferred body can contain inaccurate types, globals, arguments, and control structure; original source boundaries remain unknown.

These outputs supplement, rather than overwrite, `recovered/`. `scripts/verify_original_flow.py` compares every included instruction byte with the baseline exact-byte listings, checks original selector/address/ABI identity, and verifies the study manifests. Those checks establish provenance and integrity, not semantic equivalence.

## Reproduce

Install the pinned `requirements-recovery.txt` in a virtual environment and restore the baseline snapshot. Obtain the official Ghidra 12.1.4 distribution and JDK 21, then run:

```sh
python3 scripts/run_original_flow.py /path/to/ESign.ipa \
  --ghidra-home /path/to/ghidra_12.1.4_PUBLIC \
  --java-home /path/to/jdk-21
python3 scripts/verify_original_flow.py
```

The exact executable hash is required. The executable and Ghidra project stay under ignored `private-input/`; application code is never executed. Reproduction overwrites the separate generated study files, so preserve any research edits first. See [BUILD-STATUS.md](BUILD-STATUS.md) for what is still required for an original-only build and real screenshots.
