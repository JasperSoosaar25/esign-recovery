# Original-derived entitlement encoding

This reconstructs all 41 original metadata methods in `YYYEntitlementValue`, `YYYEntitlementBlob`, and `YYYEntitlementsSuperBlob`, plus their original dictionary-enumeration callback. It is ESign 5.0.2's native encoding chain for the `0xfade7172` entitlement blob. It does not replace the signing engine or implement CMS, certificates, complete Mach-O signing, installation, or the application UI.

## Original behavior retained

All `NSNumber` inputs become one Boolean byte, including nonzero integers and fractional numbers. Other scalar inputs receive the original UTF-8 string conversion message; unsupported objects can raise `NSInvalidArgumentException`. A nil scalar produces an empty type-12 value. Arrays are handled by the key/value blob factory. Unsupported nested values are not silently converted into a different representation.

The original value and key/value length fields are only eight bits. `totalLength` and the misspelled `totalLenght` wrap accordingly. A key/value record uses a `0x81` prefix when its stored length is at least 128; its inner array retains the original single length byte. Payload data is not shortened to match a truncated length. At the outer level the factory sums truncated record totals in 32 bits, narrows `blobsLength` to 16 bits, and chooses the original `0x81`/`0x82` marker using the 32-bit count. This can produce inconsistent declared lengths for large or mutated inputs. These are observed recovery findings, not recommended general-purpose DER encoding rules.

The factory preserves the order supplied by `NSDictionary` enumeration. It does not sort keys or promise canonical byte order across Foundation implementations. Header serialization preserves the original live getter evaluations: four each for magic and length, and one threshold read followed by two reads for a two-byte blob length. Unreachable instructions after a stack-canary failure are not treated as live getter evaluations. Raw tag/length fields are serialized from the stored ivars as in the original.

## Evidence and verification

The baseline static tracer stopped at branches indexed directly by call returns. This separate analysis supplies explicit finite hypotheses: standard Boolean Foundation returns and the original Boolean getter are 0/1, while two identified calls to this class's byte-sized `length` return are 0–255. It does not invent unknown return values throughout the app or modify the baseline traces. Every hypothesis is recorded at its call site and checked against the selector/receiver context. The expanded traces and original callback contain 1,807 distinct instructions reached by the fixtures.

The verifier compares every expanded instruction with the preserved original byte listing, checks method/callback identity and original imports/classes, validates saved initial table inputs, and replays the expanded analysis from saved bytes. An optional exact-IPA comparison checks every saved data input directly. Original instructions run in Unicorn; Foundation, ARC, block enumeration, and synchronous byref disposal are explicit models. The callback's key/value conversion and counter mutation execute original instructions, not a replacement host implementation. Block copying, arbitrary runtime overrides, concurrency, and ARC lifetime equivalence remain outside this verification.

The 583 fixtures cover scalar/string/number/nil conversion, unsupported values and exceptions, Unicode, arrays, all 256 byte lengths, 127/128 and 255/256 boundaries, 16/17/33-entry enumeration, a 300-entry 16-bit overflow case, raw field mutation, changing header getters, nil/wrong-type plist inputs, and destructor field clearing. Multi-key native tests use a controlled `NSDictionary` subclass to supply the same external enumeration order as the model; empty and single-key cases also use ordinary Foundation dictionaries. Four negative tests reject narrowed Boolean assumptions, forged callbacks, changed newly reached instructions, and altered block-layout inputs.

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_entitlements.py --verify
python3 scripts/recover_entitlements.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_entitlements.py
```

The Apple SDK job compiles an arm64 iOS static library, compares every native fixture result with the original-instruction/model results on macOS Foundation, and checks all original class instance sizes, ivar offsets/types, superclass names, and method ABI encodings. Consult the actual job and report before claiming that build passed. A component library is not a source-built ESign IPA or a real iPhone run.

Foundation enumeration is documented by [Apple](https://developer.apple.com/documentation/foundation/nsdictionary/enumeratekeysandobjects%28_%3A%29?language=objc). Block layout and forwarding are described in [Clang's Apple Block ABI specification](https://clang.llvm.org/docs/Block-ABI-Apple.html). These references explain external runtime models; original app behavior comes from the exact input's instructions. Original-derived materials retain their applicable ownership. The new tooling license does not relicense ESign.
