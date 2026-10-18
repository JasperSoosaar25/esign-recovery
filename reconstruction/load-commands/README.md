# Original-derived Mach-O load-command wrappers

All 20 original methods of `YYYLoadCommand`, `YYYDylibCommand`, `YYYRPathCommand`, `YYYlinkeditDataCommand`, and `YYYSegmentCommand` are reconstructed. The component uses the existing `YYYOffsetNode` parent from `reconstruction/mach-header/`; its five methods are reused, not counted as newly recovered. All original class/selector names, raw pointer types, copy properties, and applicable destruction behavior are retained.

The command base reads the live caller-owned `load_command` words. It does not copy or byte-swap them. Private dylib, rpath, segment, and linkedit pointers remain independent of the inherited base pointer. String properties use original nonatomic copy semantics: later mutation of an input mutable string does not alter the stored name/path. The two original string-field destructors clear those fields. Header backing storage must stay valid; the two command reads with a null/invalid pointer are outside the fixtures. These classes do not allocate/edit load-command space or perform app signing.

## Runtime layout

The original metadata stores all five subclasses with an instance start of 8, before Objective-C non-fragile ivar realization. Applying the same explicit objc4 rule as the header component yields a 16-byte slide for `YYYLoadCommand`, then 24-byte slides for its four subclasses. The resulting instance sizes are 32 bytes for the base command, 48 for dylib/rpath/segment wrappers, and 40 for the linkedit wrapper. These are derived layouts, not original-device observations.

The emulator finds each original offset-global address from that property's independently preserved getter instructions, keeps its saved initial value intact, then models the data fixup in memory. It follows inherited original methods and models the original copy-runtime call explicitly. No original instructions are patched. The parent source hashes are recorded so the compile/test dependency cannot silently change.

## Checks

The 86 fixtures execute 389 distinct original instructions and every original method entry across these five classes and their parent. They cover all five subclass identities, live pointer equality and backing-memory changes, both swap flags, unsigned word boundaries, inherited state isolation, null pointer storage/getters, immutable and mutable Unicode string copies, nil clearing, and destruction. Four negative tests reject changed method identity, a substituted retain call, changed initial offsets, and invalid layout preconditions.

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_load_commands.py --verify
python3 scripts/recover_load_commands.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_load_commands.py
```

The Apple job links the original-derived parent for native fixture tests, compares all six classes' actual runtime layouts/method ABIs with the derived original layouts, and compiles the five new classes into an arm64 iOS static library. That archive references the parent rather than embedding a second copy; an eventual app must also link the Mach-O header component. Consult the actual job and report for build status. These checks do not establish arbitrary object/subclass behavior, ARC lifetime or concurrency equivalence, a full signing pipeline, an ESign IPA, or iPhone/iOS 27 execution.

See the [parent's runtime explanation](../mach-header/README.md) and [remaining dependency map](../../docs/SIGNING-DEPENDENCIES.md). Original-derived materials retain their applicable ownership. The new tooling license does not relicense ESign.
