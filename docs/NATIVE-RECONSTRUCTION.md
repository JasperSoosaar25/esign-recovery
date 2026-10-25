# Native reconstruction from the exact Filebin IPA

For the current verified source and library results, read [latest.json](builds/latest.json), [the build status](BUILD-STATUS.md), and [the dependency map](SIGNING-DEPENDENCIES.md). The historical analysis counts below remain separate from reviewed runtime source.

The exact user-selected IPA now matches the recovery baseline. This follow-up improves native method recovery without adding app features, a replacement UI, another signing engine, or a binary-backed app wrapper.

## Fuller original-byte decompilation

The earlier export often stopped at the first indirect jump. The new pass creates analysis-only function bodies from the independently indexed original instruction paths and records initial-pointer jump hypotheses in a separate Ghidra project. No executable bytes are patched.

| Result | Count |
|---|---:|
| Indexed app-candidate method entries attempted | 3,396 |
| Classes represented | 182 |
| Fuller pseudocode exports | 3,380 |
| Explicit remaining decompiler failures | 16 |
| Traced methods with unresolved indirect jumps | 378 |

The 16 remaining failures are recorded individually in [results.tsv](../analysis/native-methods/results.tsv). A fresh-process retry with a longer timeout recovered one additional export. Failure placeholders remain visibly marked; no successful body is invented for them. A returned pseudocode body is not a verified source implementation. The recorded initial-pointer, method-boundary, call-return, and decompiler-type assumptions remain material limitations.

Browse [class-focused views](../analysis/native-methods/classes/) and [the complete export manifest](../analysis/native-methods/index.json). For example, `YYYSignInfo`'s initializer now includes a 170-instruction modeled body rather than only its initial short jump stub. Its other methods still expose unresolved flow and inferred types where applicable.

The Java summary stream truncated despite complete individual output files. The completeness check rejected that index. Reconstruction of the index required all 3,396 individual files, original method/entry/ABI markers, correctly named C functions, and complete function endings or explicit failure records. The exporter now also writes separate per-method status files. The verifier compares every final row with the independently preserved original trace index and checks all file hashes and class aggregates.

Restore individual exports after cloning:

```sh
python3 scripts/unpack_evidence.py
python3 scripts/unpack_native_methods.py
python3 scripts/verify_native_methods.py
```

## Concrete C fragments: restricted scalar accessors

[accessors.c](../reconstruction/scalar-accessors/accessors.c) contains **215 machine-level C translations across 39 original classes**. They implement a restricted subset of scalar property getters and setters using original object offsets and original raw register/memory behavior. They are concrete compiled source fragments, not decompiler placeholders.

The translator accepts only finite, linear original instruction paths with one verified scalar ivar load or store, supported pointer-table branches, and a small set of explicit register operations. Unsupported methods are listed in the fragment index rather than guessed. C symbol names are newly generated navigation names; original class, selector, ABI encoding, ivar, offset, and entry address remain in the evidence and readable method table.

The C intentionally represents raw machine-level values. This matters for Boolean getters: `YYYDefaultSignConfig`'s `igonSign` loads a raw byte, while `YYYSignInfo`'s getter explicitly normalizes its byte with comparison and `cset`. The translation preserves that observed distinction. It does not infer behavior solely from the shared `B16@0:8` metadata.

Verification compiles the C with the host C compiler and compares it against execution of the original ARM64 accessor instructions in Unicorn 2.1.4. The checks use controlled synthetic object memory, original instruction bytes, and recorded initial pointer values. Every byte-sized accessor is checked across all 256 byte values; wider accessors use boundary/bit-pattern fixtures. **All 35,840 comparisons pass**, checking getter return bits and complete object-memory effects.

The verifier independently links each fragment to the earlier metadata and exact original instruction trace, replays its supported translation, and validates every emulated table read against the recorded original jump hypothesis. Negative tests reject forged selectors, original offsets, and pointer values.

```sh
python3 -m venv .venv
. .venv/bin/activate
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_scalar_accessors.py --verify
python3 -m unittest discover -s tests -v
```

The fragments require the original little-endian object layout and a valid object pointer. They neither define Objective-C classes nor register or replace methods in a running app. The controlled memory tests do not verify original object construction, Objective-C runtime dispatch, concurrent access, signing, installation, or general app behavior. Isolated instruction emulation is not an iPhone app run.

## Build and screenshot status

A complete source-built ESign app target still does not exist. Most source-level method implementations, class/global initialization, dependencies, and the build project remain unreconstructed. Fuller pseudocode and a verified accessor subset do not supply those missing pieces. No source-built IPA, iOS 27 app run, or genuine running-app screenshot is claimed.

See [BUILD-STATUS.md](BUILD-STATUS.md) for the outstanding app requirements and [IOS27-TESTING.md](IOS27-TESTING.md) for the device evidence needed. Recovered/reconstructed ESign-derived material retains its applicable ownership; this work does not relicense the original application.

## Complete localization source component

The follow-on `reconstruction/localization/` contains 10 original class definitions and all 13 localization methods, with a reconstructed one-time initialization block. Its 3,812 original dictionary entries, 18 locale configurations, and 7,931 lookups are checked against original ARM64 instruction execution with explicit Foundation/ARC models. Coverage includes version 100, pre-initialization overlays, missing-key logging/fallback, exact language matching, Chinese variants, and post-initialization overlays. The original instruction execution reaches 23,088 distinct instructions; no original executable bytes are patched.

`ESignLocalization.m` is reviewed reconstruction, and `ESignLocalizationTables.m` is generated original-data source. The source preserves original class/selector names and constructor API. This is the first whole native component rather than only machine-level accessor fragments. `scripts/build_localization.py` uses Apple SDKs to compile an arm64 iOS static library and compares the component on macOS Foundation against the captured original results. The CI job and attached build report state whether that run passed and name its toolchain. This is not an application build, iPhone execution, ARC lifetime proof, concurrency proof, or UI/signing/installation verification.

## Complete signature-container source component

[`reconstruction/signature-blobs/`](../reconstruction/signature-blobs/) contains the three original `YYYBlob`/`YYYBlobIndex`/`YYYSuperBlob` classes and all 38 metadata methods. Original instructions execute in the restricted model, reaching 2,099 distinct instructions. Fixtures preserve byte order, original unsigned range widths, repeated getter evaluations, XML entitlements, index snapshot behavior, parsing quirks, nested serialization, enumeration beyond 16 entries, and destructor field clearing.

The [Apple build report](builds/signature-blobs-da8d0e0c.json) records a successful arm64 iOS static library and 58 native checks: 57 source-behavior fixtures and one Foundation partial-copy contract check. The original empty super-blob parser header contains uninitialized fields; its result is explicitly not counted as recovered behavior. Native runtime class layouts and method ABIs match the original metadata. This container code does not generate CMS signatures or sign whole files/apps.

## Complete Mach-O header source component

[`reconstruction/mach-header/`](../reconstruction/mach-header/) contains `YYYOffsetNode`, `YYYMachHeader`, and all 17 original methods. Original instruction execution reaches 453 distinct instructions across 67 fixtures. The source preserves pointer priority, raw header word reads/writes, inherited offset/swap state, header size, repeated pointer getter calls, and wrapping offset arithmetic.

The original subclass metadata stores offsets before non-fragile runtime realization. The analysis models a 16-byte ivar slide according to Apple's objc4 rule, independently preserves the initial offset inputs, and marks original-device layout as unobserved. The [Apple build report](builds/mach-header-11d8c9f9.json) records a successful arm64 iOS library, all 67 native fixture comparisons, and exact class/method ABI checks against the explicitly derived runtime layout. Arbitrary subclasses, invalid backing pointers, and concurrency remain outside this verification.

Both new components' saved input reads pass comparison with the exact IPA. Four negative tests per component reject forged evidence and overclaimed status; that checkpoint had 44 passing tool tests. Their source and analysis models are separate. Read [SIGNING-DEPENDENCIES.md](SIGNING-DEPENDENCIES.md) for the remaining crypto/certificate, entitlement-encoding, and full Mach-O requirements; no complete ESign app or IPA is claimed.

## Entitlement classes and load-command hierarchy

[`reconstruction/entitlements/`](../reconstruction/entitlements/) now supplies all 41 original methods in three classes plus the original dictionary callback. Its separate traces add explicit finite call-return hypotheses and preserve original bytes and baseline traces. Every expanded word is checked, the flow reproduces from saved inputs, and all saved data reads match the exact IPA. The source retains original Boolean conversions, eight-/sixteen-bit length truncation, enum order, and serialization quirks. Its [Apple report](builds/entitlements-39df227c.json) records 583 native comparisons and exact class layout/method ABI checks.

[`reconstruction/load-commands/`](../reconstruction/load-commands/) supplies all 20 original methods in five command classes. It reuses the five parent methods already recovered, without counting them again. Its [Apple report](builds/load-commands-28f7142b.json) records 86 native comparisons, copied mutable strings, live caller-owned pointers, and class layouts/ABIs checked against explicit non-fragile ivar models. Parent source hashes and original initial offset inputs remain recorded.

## Actual main-path recursive DER functions

`-[YYYArchO generateSlotBuildDerEntitlements:]` calls a separate native recursive encoder at `0x100776830`, rather than the three-class encoder above. [`reconstruction/recursive-der/`](../reconstruction/recursive-der/) translates that function and the length writer at `0x10077f534`, retaining the original caller as evidence. Public C names are newly assigned navigation labels and source-level types are inferred from original call sites; this is not complete `YYYArchO` source.

The [Apple report](builds/recursive-der-26a3ef3a.json) records 269 native comparisons. Original integer-value length encoding, Boolean payloads, UTF-16/UTF-8 length mismatches, and dictionary length/order behavior remain explicit. One zero-number original probe did not return within 10,000 instructions; complete original result and native source parity for that input remain unverified. It is not counted among successful native comparisons.

These three follow-ups add 61 Objective-C methods and two native functions, with 938 successful native comparisons. Twelve new rejection tests bring the current suite to 56. All six component-library builds pass under the recorded Apple toolchain. Full code-directory/CMS/certificate, signing, application, and device recovery remain outstanding; see [the current dependency map](SIGNING-DEPENDENCIES.md).
