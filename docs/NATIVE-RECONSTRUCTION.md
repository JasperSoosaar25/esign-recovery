# Native reconstruction from the exact Filebin IPA

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
