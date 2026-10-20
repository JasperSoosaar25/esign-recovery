# Developing from this recovery

## Current capability

This is a research and reconstruction base. It provides native implementation evidence, not a functioning source-only app. It now has a [component-only Xcode project](xcode/README.md) for fourteen recovered libraries. It has no application target, replacement signing engine, development-panel injection, or modified IPA. Existing original functionality cannot be verified by compiling pseudocode.

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

## Entitlement and command source follow-up

`reconstruction/entitlements/` reconstructs all three original entitlement classes, 41 methods, and their enumeration callback. `python3 scripts/recover_entitlements.py --verify` reproduces its separate bounded-return analysis and all 583 original-instruction/model fixtures. `python3 scripts/build_entitlements.py` builds the iOS library and checks native bytes and exact metadata on a Mac. Preserve its original type conversions, truncated fields, and dictionary order; it is not a new standards-based encoder.

`reconstruction/load-commands/` reconstructs five command classes and 20 methods, reusing the existing parent implementation. Run `python3 scripts/recover_load_commands.py --verify` and, on a Mac, `python3 scripts/build_load_commands.py`. Its archive references the Mach-O header component's parent class; link that parent once in a future app. The 86 fixtures check live pointer reads, independent inherited/private fields, copy semantics, and modeled runtime ivar slides.

The actual `YYYArchO` DER-slot method calls the separate helper at `0x100776830`. `reconstruction/recursive-der/` translates it and its length writer, retaining the caller evidence. Run `python3 scripts/recover_recursive_der.py --verify` and `python3 scripts/build_recursive_der.py` on a Mac. Native checks cover 269 cases; a zero-number original probe remains unverified and is deliberately not executed by native tests. Public C names are newly assigned navigation names; full `YYYArchO` class source is still missing. The original number/Unicode/length quirks are documented in the component README.

All three new Apple builds passed with exact source/toolchain reports under `docs/builds/`. Each original-instruction verifier also accepts `--original-ipa /path/to/input.ipa`. Check the original signing caller before choosing between the two different entitlement encoders. Dependencies on native P12/ASN.1/CMS routines, full Mach-O orchestration, and original app/UI behavior still require recovery.


## Requirements and code-directory source

`reconstruction/requirements-slot/` translates the original requirements method and three block invocations. Run `python3 scripts/recover_requirements_slot.py --verify` and, on a Mac, `python3 scripts/build_requirements_slot.py`. The 117 native fixtures preserve binary word truncation, UTF-8 padding, and the four-byte missing-input fallback. Its iOS archive references the existing signature-container classes; link those once.

`reconstruction/code-directory/` translates the original code-directory method, its SHA-1/SHA-256 helpers and two hash block invocations, and the original NSString UTF-8-length method body. Run `python3 scripts/recover_code_directory.py --verify` and, on a Mac, `python3 scripts/build_code_directory.py`. Its 65 code-directory/digest/string fixtures compare bytes, getter order, digest calls, real temporary-file operations, and final file position, including getters whose values vary between calls. Twenty additional native cases check the separate original signature entitlement-flag block, accepting NSNumber values and rejecting other types. Original Apple CommonCrypto APIs are retained. Test adapters record calls and forward to real Apple functions; the iOS archive is compiled separately without adapters.

Both components passed native Apple comparisons and arm64 iOS SDK compilation; exact reports are under `docs/builds/`. Both verifiers accept `--original-ipa /path/to/input.ipa`. Their new C navigation symbols and the architecture-input protocol isolate original bodies without inventing the unfinished `YYYArchO` class. Four finite pointer-load hypotheses in the separate code-directory view are justified only for original BOOL indexes 0 and 1; saved original tables and replay checks validate the chosen targets. Baseline traces and unresolved counts remain unchanged.


## Original legacy crypto and alternate-CMS wrapper

`reconstruction/legacy-crypto/` translates eight original native bodies. `python3 scripts/recover_legacy_crypto.py --verify` replays all 355 controlled-boundary fixtures; `python3 scripts/build_legacy_crypto.py` compiles the Apple component and compares the same cases. Its [saved report](docs/builds/legacy-crypto-c7190909.json) records a passing Apple build. Preserve the original 32-bit BN limbs, LP64 offsets, reference semantics, post-callback reloads, and cleanup order. Do not assume host OpenSSL structures or replace unresolved original callees with a current upstream engine. The original private-encrypt body only dispatches a method callback; the PEM wrapper only delegates to BIO/parser boundaries.

`reconstruction/rsa-wrapper/` adds the original alternate-CMS RSA wrapper at `0x100778fa0`, reusing those eight bodies. Run `python3 scripts/recover_rsa_wrapper.py --verify` and, on a Mac, `python3 scripts/build_rsa_wrapper.py`. Both original-instruction verifiers accept `--original-ipa /path/to/input.ipa`. Twenty return-value cases cover length truncation/sign extension, allocations, diagnostics, callback arguments, reference counts, and cleanup; all passed in [the Apple build report](docs/builds/rsa-wrapper-9ce17389.json). Three original null-read probes are recorded but excluded from native source parity. Preserve error fallthrough; do not invent protective returns in recovered source.

The wrapper ignores the supplied key pointer and opens an embedded global. That provider remains unresolved; no embedded key bytes belong in Git or these fixtures. The native test's invented identity token, stdio/allocation adapters, and crypto recorders are harness-only. The iOS libraries contain the recovered objects without test implementations. Link the legacy helper component once. A successful component build does not supply RSA exponentiation, PEM parsing, CMS signing, an application target, an IPA, or an iPhone result. The selected crypto source-family research and preserved notices are under `reconstruction/legacy-crypto/`.


## Provisioning profiles, CMS content and the Xcode project

`reconstruction/mobileprovision/` supplies all 38 original `YYYMobileprovision` methods and exact metadata/layout checks. `python3 scripts/recover_mobileprovision.py --verify` replays 148 fixtures; on macOS, `python3 scripts/build_mobileprovision.py` compares native Foundation state and builds the iOS library. It preserves field population order, the `DeveloperCertificates_f` key, serial-string membership, copy/strong behavior, and failure preservation on existing objects. BIO/CMS decoding and original certificate parsing remain unreconstructed dependencies.

`reconstruction/cms-content/` supplies the actual original content-slot accessor used by that profile class. `python3 scripts/recover_cms_content.py --verify` exercises all 71 original instructions and compares the original live slot/mutation behavior in 71 cases. `scripts/build_cms_content.py` verifies the compiled C body on Apple tooling. Both original-instruction verifiers accept `--original-ipa /path/to/input.ipa`. The profile builder additionally composes its source with the recovered accessor for 146 passing native comparisons, leaving OID lookup and parser boundaries controlled. See [the earlier integrated report](docs/builds/mobileprovision-a8f0b930.json); the OID continuation below adds actual OID source composition.

Open `ESignRecovery.xcodeproj`, select **RecoveredComponents**, and build for a generic iOS device; or run `python3 scripts/build_component_project.py` on a Mac. The [project report](docs/builds/component-project-d49c5f05.json) verifies all fourteen actual arm64 library archives and exact source/project hashes. No account or signing key is needed for library compilation. The project is generated from `xcode/components.json`; run `python3 scripts/generate_component_project.py --verify` after edits. Dependency targets build once; test harnesses, fake parsers, scalar evidence fragments and the original binary are excluded. This does not resolve the missing app/backend implementations or create an executable target. Read [the project guide](xcode/README.md).


## Original OID database and registry retrieval

`reconstruction/oid-lookup/` translates the four original object/name lookup functions and the hash-table retrieval they call. It relocates all 958 original object records, 890 search indexes, encoded OIDs and shared name/data pointers. `python3 scripts/recover_oid_lookup.py --verify` checks 5,635 fixtures; the six additional tool tests include compiled C/database comparisons and corruption rejection. The original-instruction verifier accepts `--original-ipa`. The post-callback zero-length no-match branch remains unexercised because the pinned table contains a match; static data is preserved.

On macOS run `python3 scripts/build_oid_lookup.py`. The CMS builder adds 71 comparisons using this actual source, and the profile builder adds 146 using both original CMS content and OID lookup with actual encoded signed-data OID bytes. Existing controlled-boundary checks remain. Original registry creation/hash/comparator implementations, ERR state, CMS decoding and certificate parsing are still absent. The Xcode manifest now includes a thirteenth library and makes CMS content depend on OID lookup. The [OID report](docs/builds/oid-lookup-9922c42e.json), [CMS report](docs/builds/cms-content-9922c42e.json), [profile report](docs/builds/mobileprovision-9922c42e.json) and [project report](docs/builds/component-project-9922c42e.json) record passing Apple builds and native comparisons with Xcode 16.4/iOS 18.5. This is not a full-app or iOS 27 device result.


## Original BIO memory-input component

`reconstruction/bio-input/` supplies eighteen original bodies: BIO creation/release, read/write/control dispatch and flags, the complete memory method/callbacks, and BUF_MEM allocation/free/grow-clean. Its source and layout come from the exact original instructions and method descriptor. `python3 scripts/recover_bio_input.py --verify` replays 603 saved cases and compares local compiled C; all 666 recovered instructions are exercised. Six corruption/native-comparison tests bring the tool suite to 99. Normal verification uses committed evidence and restored baseline; `--generate` requires the exact pinned original bytes and is not a current-upstream substitute.

On macOS run `python3 scripts/build_bio_input.py`. The [Apple report](docs/builds/bio-input-d49c5f05.json) records all 603 comparisons and the arm64 iOS archive, using Xcode 16.4/iOS 18.5. The [project report](docs/builds/component-project-d49c5f05.json) records all fourteen libraries. The legacy crypto and profile targets now declare their BIO input dependency, without merging libraries or claiming a complete app link. Refcount locking, allocation/reallocation, ex-data, cleansing, ERR storage and file BIO/PEM parsing remain original boundaries. ASN.1/CMS decoding and certificate processing are still missing.
