# Original ASN.1 values and non-explicit templates

Four original ESign 5.0.2 bodies are translated into C. This continues the actual recovered item/header/BIO chain, without linking a host OpenSSL parser or inventing a replacement CMS schema.

| Original address | Source-family role | Original instructions | Exercised |
| --- | --- | ---: | ---: |
| 0x100619f5c | asn1_ex_c2i | 200 | 199 |
| 0x10061a27c | asn1_d2i_ex_primitive, including inlined find-end | 303 | 302 |
| 0x10061a964 | Specialized asn1_collect with inlined header/content helpers | 217 | 216 |
| 0x10061acc8 | asn1_template_noexp_d2i | 203 | 203 |

All **2,065 original-ARM64/compiled-C comparisons** pass locally. They exercise **920/923** distinct original instructions. **541** fixtures compose actual recovered item, explicit-template, entry-wrapper or BIO paths, including **18 full memory-BIO-to-value compositions**. The three unexercised addresses remain in `index.json`: `0x10061a1f0`, `0x10061a4cc`, and `0x10061aac8`. Each is an edge whose preceding guarded dispatch or constant branch prevents execution in this study; no execution coverage is claimed for them.

## Reproduce

Restore the baseline with `scripts/unpack_evidence.py`, install `requirements-reconstruction.txt` in an isolated environment, then run:

```sh
python3 scripts/recover_asn1_value.py --verify
```

Verification replays committed instruction evidence and compares compiled source. It does not download or execute the IPA as an application. Optional `--original-ipa /path/to/input.ipa` checks saved reads directly. Generating evidence requires `--generate --original-ipa` and the exact hash-pinned original. On macOS, `python3 scripts/build_asn1_value.py` compares native behavior and separately compiles `libESignASN1Value.a` for arm64 iOS. The shared Xcode project includes this seventeenth component.

## Preserved behavior and ABI

The converter's original 30-byte dispatch table at `0x10099987f` is retained, with its unsigned type-minus-one guard, byte load at `0x10061a01c` and shifted target addition at `0x10061a020`. Its only unresolved indirect transfer is the primitive conversion callback at functions offset 40. Tests invoke that actual branch using an invented callback. The OpenSSL 1.0.2u reference identifies the family; it does not uniquely identify the bundled patch release. Original bytes and diagnostic line numbers remain authoritative.

Primitive values preserve implicit/optional/ANY rules, constructed-type rejection, encoded SEQUENCE/SET/OTHER content, nested indefinite-end counting, string collection, ownership transfer, null terminator, delayed cursor commit and cleanup order. The collector uses the original specialized five-argument ABI: tag/class checks are absent from this body. Its buffer append sign-extends the low 32 bits of the old length; nesting is limited at the original depth comparison. The no-explicit parser preserves stack clearing, push failure cleanup, tag/class flags and EOC handling.

The converter receives the complete original 64-bit length register in the navigation ABI. Length checks and calls to object/bit/integer decoders use the original signed low 32 bits; the callback and string setter observe the original register value. BOOLEAN writes only four bytes of its value slot. ANY stores its value at offset 8, including the original special NULL fixup. No defensive early returns or new normalizations are added to the runtime source.

Darwin stack packing for the existing cached-header checker and the ninth item-decoder argument is retained by the emulator. Tests compare return values, cursor changes, cache bytes including padding, caller-value mutation, string/ANY/object state, stack effects, buffer/data hashes, exact diagnostics and allocation/free ordering. Fixtures use invented schemas and data. Controlled callees retain memory for snapshots rather than actually freeing it.

A malformed implicit collection with a one-byte inner header can make the original cached-header routine copy uninitialized locals. Those cases are compared with a null TLC; undefined fresh-cache output is deliberately excluded. The runtime source retains the original behavior. No source equivalence is asserted for undefined state or invalid-pointer faults.

## Remaining original dependencies

String, ANY and item constructors/destructors; content-to-object/bit/integer decoding; stack primitives; ERR state; allocators/reference/ex-data and other crypto primitives remain controlled in this component's tests. Test adapters are excluded from its iOS archive and Xcode targets. Actual recovered BIO/header/item/template/collector/converter bodies execute in the composition fixtures; a controlled lower-level boundary is not presented as its original implementation.

Original CMS templates, certificate/P12 handling, signing orchestration and most application/UI bodies remain missing. These results do not establish a full application link, source-built IPA, iPhone run or screenshot. Preserve the adjacent OpenSSL/SSLeay notices and the repository ownership boundaries.
