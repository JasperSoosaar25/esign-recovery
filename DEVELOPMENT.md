# Developing from this recovery

## Current capability

This is a research and reconstruction base. It provides native implementation evidence, not a functioning source-only app. It has no Xcode project, replacement signing engine, development-panel injection, or modified IPA. Existing original functionality cannot be verified by compiling pseudocode.

The current user constraint requires original implementation under the hood. Do not substitute a different app, current upstream signing engine, replacement UI, or binary-backed wrapper. Read [the explicit build status](docs/BUILD-STATUS.md) before implementation work. A source-built lookalike would not meet the current request.

For actual app development, first reconstruct a small vertical slice with a real app target and behavior-level tests. Keep the original recovery snapshot separate from new source. Record implementation progress in the roadmap without presenting plans as finished functionality.

Run `python3 scripts/unpack_evidence.py` after cloning to restore the complete snapshot from the repository's archive parts. The script checks part/archive hashes and refuses to overwrite existing changed files. Native output, context, resources, and byte listings then appear at the paths used in this guide.

## Find an implementation

1. Search the headers and selector index, for example:

   ```sh
   rg -n 'sign|certificate|mobileprovision' recovered/objc/headers/YYYSignHelper.h
   rg 'YYYSignHelper' recovered/objc/methods.tsv
   ```

2. Open the class-focused excerpt in `recovered/app-pseudocode/YYYSignHelper.pseudo.m`. It links each selector to its original implementation address and ABI encoding.
3. Use the address to find the corresponding `native/part-*.c` through `functions.tsv`. Inspect the original-byte disassembly where decompiler output is incomplete or misleading. Many indirect jumps break Ghidra's inferred function bodies.
4. Consult `recovered/analysis/static-branches.tsv` for conservatively resolved *initial-image* table jumps. Writable pointer values can change at runtime. This index is supplementary evidence, not an execution trace.
5. Write readable new `.m`/`.mm` implementations under a separate future `src/` tree. Document original addresses, assumptions, dependencies, and test results. Generated headers require review of aggregate/block types and superclass imports before compilation.

## Reproduce static recovery

Python 3 runs metadata/resource recovery and verification. Capstone 5.0.6 is required for disassembly and static branch resolution. Use an isolated environment:

```sh
python3 -m venv .venv
. .venv/bin/activate
python3 -m pip install -r requirements-recovery.txt
python3 scripts/recover_objc.py /path/to/extracted/ESign /tmp/esign-objc
python3 scripts/recover_resources.py /path/to/ESign.ipa /tmp/esign-resources
python3 scripts/recover_strings.py /path/to/extracted/ESign /tmp/esign-strings.json
python3 scripts/recover_disassembly.py /path/to/extracted/ESign /tmp/esign-disassembly
python3 scripts/resolve_static_branches.py /path/to/extracted/ESign /tmp/esign-branches
```

Ghidra 12.1.4 and JDK 21 are needed for the native pass. Obtain Ghidra from [its official release](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build). Set `JAVA_HOME` to JDK 21, then run:

```sh
python3 scripts/run_ghidra.py /path/to/extracted/ESign --ghidra-home /path/to/ghidra_12.1.4_PUBLIC --skip-message-analyzer
python3 scripts/index_recovery.py
python3 scripts/verify_repository.py
```

`run_ghidra.py` writes a new research export under `recovered/decompiled/`; use a branch or disposable clone. It allows up to 1,200 seconds of analysis before export. The export uses four decompiler workers and records failures instead of inventing successful implementations. Never feed generated pseudocode into a build and label the result equivalent without reconstruction and testing.

The exact IPA hash is required for resource recovery; the executable hash is required for the native pass and branch index. Other versions need separate evidence snapshots, not edits to this baseline's expected hashes.

## From Windows or an iPhone

You can browse and edit documentation, review recovery output, propose features, or open pull requests on GitHub. Actions validates evidence integrity on Linux. Native UIKit development and simulator testing require a Mac with the appropriate Xcode/SDK; the original device binary requires a properly signed physical-device installation. No signing credentials are needed by this repository's CI.

## Expanded original-method traces

Read [the dispatch guide](docs/DISPATCH-RECOVERY.md). `python3 scripts/read_method_trace.py YYYSignHelper 'preSignWithOption:'` prints annotated original assembly. Install pinned recovery requirements and run `python3 scripts/verify_app_analysis.py` to check every indexed app-method trace and the original dispatch excerpts.

## Native source fragments and fuller decompilation

Read [the native reconstruction guide](docs/NATIVE-RECONSTRUCTION.md). The separate `reconstruction/scalar-accessors/` tree contains restricted machine-level C translations tied to original metadata and instructions. They require original object offsets and do not define classes or register replacement methods. Install `requirements-reconstruction.txt` and run `python3 scripts/recover_scalar_accessors.py --verify` to compile the fragments and compare them with original ARM64 snippets in an emulator.

Run `python3 scripts/unpack_native_methods.py` to restore individually indexed fuller decompiler outputs, then `python3 scripts/verify_native_methods.py`. Class-focused views are directly browsable under `analysis/native-methods/classes/`. Remaining failures and control-flow assumptions stay explicit in the index. None of these tools builds ESign.

## Compilable localization component

`reconstruction/localization/` now reconstructs all 13 original methods in the 10 `YYYLocalized*` classes and the one-time initialization block. Read its README for exact addresses, original-instruction fixtures, Foundation models, and limits. Run `python3 scripts/recover_localization.py --verify` after restoring the evidence. On macOS with Xcode, `python3 scripts/build_localization.py` compiles an arm64 iOS static library and tests the Objective-C component on Apple Foundation. Inspect the actual CI result and toolchain report before claiming compilation. A component library is not the ESign app target or an IPA.

## Compilable signing dependencies

`reconstruction/signature-blobs/` provides all 38 original methods of the three signature-container classes. Run `python3 scripts/recover_signature_blobs.py --verify`; an optional `--original-ipa /path/to/input.ipa` checks every saved original input read against the exact executable. `scripts/build_signature_blobs.py` builds the iOS library on a Mac and compares the source with original-instruction fixtures using Apple Foundation. One uninitialized short-header parser result is explicitly unverified; do not treat the API-contract fixture as proof of that original result.

`reconstruction/mach-header/` provides all 17 original methods of `YYYOffsetNode` and `YYYMachHeader`. Run `python3 scripts/recover_mach_header.py --verify`, optionally with the same exact-IPA argument. Its README explains the modeled non-fragile ivar slide; stored initial offsets are not already-realized subclass offsets. `scripts/build_mach_header.py` compiles the iOS library and checks macOS runtime layout and complete backing-memory effects. Preserve that distinction when adding inherited classes.

Both Apple builds have passed; their exact reports are under `docs/builds/`. Read [the remaining signing dependency map](docs/SIGNING-DEPENDENCIES.md) before reconstructing the crypto/certificate or full Mach-O pipeline. Passing these libraries does not supply an application target or device execution.
