# Original-instruction scalar accessor fragments

`accessors.c` contains 215 restricted machine-level C translations from 39 original ESign classes. `methods.tsv` maps the generated C symbols to their original selectors, ABI encodings, addresses, and ivars. `evidence.json.gz` preserves original instruction records and initial table bytes; `index.json` records source/evidence hashes and unsupported candidates.

The fragments compile as C and pass 35,840 comparisons against original ARM64 instruction execution in an emulator. They require the original little-endian object layout and valid object memory. They do not define Objective-C classes, register methods, implement the full signing pipeline, or produce an app/IPA. Source-level ownership and original-project provenance are not inferred from the C translation.

From the repository root, install `requirements-reconstruction.txt`, restore baseline evidence with `python3 scripts/unpack_evidence.py`, and run:

```sh
python3 scripts/recover_scalar_accessors.py --verify
```

Read [the native reconstruction guide](../../docs/NATIVE-RECONSTRUCTION.md) before reuse. Names such as `esign_scalar_0000` are generated C entry points; the method table carries the original names. These are machine-level fragments for source reconstruction, not drop-in replacements for changed class layouts.
