# Original-derived Mach-O header source

This reconstructs all 17 original methods of `YYYOffsetNode` and `YYYMachHeader` from ESign 5.0.2. The source keeps the original class hierarchy, selectors, pointer-backed header reads/writes, and offset state. Original addresses and ABIs are in the evidence and metadata files. It is one dependency of the Mach-O signing pipeline; it does not sign or install an app.

## Preserved behavior

The 32-bit pointer takes priority when both pointers are present. `magic`, `filetype`, `ncmds`, and `sizeofcmds` read native words without byte swapping. The inherited `shouldSwap` flag is stored but these header methods do not consult it. The two setters write directly into the selected caller-owned header; they do not copy it. `header_size` returns 28 when the 32-bit pointer is present and 32 otherwise, including when both pointers are null. `load_commands_offset` adds the unsigned 32-bit header size to the signed 64-bit offset with the original register wrapping. Initialization resets the two parent fields.

This follows the actual instructions, including their assumptions about valid backing pointers. It does not add format checks, automatic byte swapping, or null-pointer recovery. Reading the four header fields or writing the two words with both pointers null would dereference invalid memory; those calls are outside the fixtures. The caller must retain valid writable header storage. Concurrency, invalid BOOL byte representations, arbitrary subclass overrides, and original iPhone execution are not verified.

## Non-fragile ivar adjustment

The exact original metadata stores `YYYMachHeader`'s instance start as 8, instance size as 24, and its pointer offsets as 8 and 16. Its parent has instance size 24. Copying those offsets into an already initialized subclass would overlap parent state. Apple's [objc4 `reconcileInstanceVariables` / `moveIvars`](https://github.com/apple-oss-distributions/objc4/blob/main/runtime/objc-runtime-new.mm) slides the subclass's ivars to accommodate a larger parent. Applying that runtime rule here yields pointer offsets 24 and 32, and an instance size of 40.

The analysis emulator explicitly models this 16-byte data adjustment and inherited method dispatch. Original instruction bytes and saved initial offset inputs remain unchanged. The realized layout is a modeled inference from exact original metadata and Apple's runtime rule, not an observation from the original app on a device. The native check compares the new classes' actual Apple runtime sizes, ivar offsets/types, superclass identities, and method ABIs with this explicitly derived layout. The normal Mach-O header struct definitions come from the Apple SDK; see [Apple's loader header](https://github.com/apple-oss-distributions/xnu/blob/main/EXTERNAL_HEADERS/mach-o/loader.h).

## Reproduce

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_mach_header.py --verify
python3 scripts/recover_mach_header.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_mach_header.py
```

The 67 fixtures execute original instructions with explicit NSObject/ARC and ivar-realization models. They cover both header widths, both populated pointers, raw swapped magic values, independent parent state, signed offset limits and wrapping, full backing-memory changes, and randomized header words. Every original method entry executes. Four rejection tests protect method identity, initial offset inputs, the layout preconditions, and the explicit unobserved-device status. The Apple SDK job separately compiles an arm64 iOS static library and compares all fixture outputs on macOS. Consult its actual result before making a build claim. This is not an ESign app target, source-built IPA, iPhone screenshot, or iOS 27 compatibility result.

Original-derived materials retain their applicable ownership. The new recovery and test tooling license does not relicense ESign.
