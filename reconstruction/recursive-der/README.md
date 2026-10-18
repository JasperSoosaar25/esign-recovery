# Original recursive DER helpers from the signing path

This is the reviewed translation of the original functions at `0x100776830` and `0x10077f534`. The first is directly called by `-[YYYArchO generateSlotBuildDerEntitlements:]`; the second is its length-writing helper. Their new C names are navigation labels, not recovered author symbols. Input/result calling conventions are inferred from original call sites and instructions. This is separate from the three original `YYYEntitlement*` classes, which implement a different encoding path.

`ESignRecoveredDERLength` writes the original unsigned 64-bit length representation. `ESignRecoveredDEREncode` recursively handles standard numbers, Boolean objects, strings, arrays, and dictionaries, with empty data for unsupported/nil scalar objects. It preserves ordinary Foundation dictionary key order rather than adding sorting. Original direct helper calls and recursive calls execute original instructions in the analysis emulator.

## Material original quirks and unresolved input

The numeric path passes the **number's value** to the length writer before emitting the number's minimal unsigned bytes. For example, the original result for integer 5 is `02 05 05`. Boolean true emits a payload byte of `01`. String lengths and dictionary key lengths use NSString's UTF-16 unit count while appending UTF-8 bytes; `ö💙` produces `0c03c3b6f09f9299`. Dictionary pair-length arithmetic adds a fixed two bytes for the key's tag/length. These findings are preserved even where the output is not a valid general-purpose DER representation. Do not replace them with a standard encoder while claiming unchanged original behavior.

An integer `NSNumber` zero did not return within a 10,000-instruction controlled original probe. Its path uses a do/while with a wrapping 32-bit shift counter. The translation retains those operations, but the complete original result and native-source parity for zero remain unverified. That input is explicitly excluded from native fixture comparisons. Boolean false is a different CFBoolean path and is covered. Other inputs that convert to unsigned zero are not covered by the successful number fixtures. No termination or resource-use claim is made for those cases.

## Verification

The separate expanded analysis records finite 0/1 return hypotheses at standard Boolean call sites, retains the original signing caller, compares every instruction with the original byte listing, verifies import/class/selector identities and initial table inputs, and reproduces both helper traces from saved bytes. An optional exact-IPA comparison checks every saved original data input. The baseline app traces are not modified. Foundation, CoreFoundation type identities, and ARC are explicit analysis models; lifetime, arbitrary overrides, concurrency, and original iPhone execution are outside the proof.

There are 269 source-behavior fixtures and one explicitly unverified original probe. The checks exercise 782 distinct original instructions. Coverage includes every length-width transition through 64 bits, randomized unsigned values, signed/unsigned number boundaries, standard CFBoolean distinction, fractions that convert to nonzero integers, nil/unsupported inputs, Unicode and embedded NUL strings, nested arrays, 16/17/33-key enumeration, long keys, and a non-string-key exception. Native multi-key fixtures use controlled `NSDictionary allKeys` ordering; empty and single-key cases also use ordinary dictionaries.

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_recursive_der.py --verify
python3 scripts/recover_recursive_der.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_recursive_der.py
```

The Apple job compares the translated source's results with all 269 verified fixtures on macOS Foundation/CoreFoundation and compiles an arm64 iOS static library. Consult the actual report before claiming the build passed. These native function translations do not implement or register the complete `YYYArchO` class, CMS generation, the rest of signing, an app target, an IPA, or iOS 27 compatibility. Original-derived material retains its applicable ownership; the new tooling license does not relicense ESign.
