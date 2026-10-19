# Original alternate-CMS RSA wrapper

`ESignRSASignWrapper.c` translates the native wrapper at `0x100778fa0`, called by the original `YYYArchO` alternate `useBugSign` CMS path. The exported C name is a new navigation name. This component reuses the eight original helper translations under `../legacy-crypto/`; it does not reconstruct the RSA implementation, PEM decoder, ASN.1 methods, or CMS backend behind their explicit boundaries.

The original ignores its third (key-pointer) argument and opens the embedded global at `0x100e34468` with `fmemopen`, using the fourth argument as its size and mode `r`. No embedded key bytes are published, read by the original-instruction fixtures, or provided by this library. The unresolved `ESignOriginalEmbeddedKey_100e34468` symbol records that dependency. A test-only invented token is never parsed or included in the iOS library.

The source preserves the original diagnostics, close/cleanup order, reference counts, signed 32-bit callback length, sign-extended result, and error fallthrough. File-open failure returns NULL without changing the output length. Allocation failure prints an error but still calls the RSA method with a NULL output. Signing result -1 prints an error, retains the allocated output, and writes -1 to the output length. These are recovered behaviors, not recommended new API contracts.

Twenty-three original-instruction fixtures include 20 return-value cases and three bounded fault probes. BIO creation or parser failure prints the read error, then faults in `EVP_PKEY_get1_RSA(NULL)` at `0x10060c850`. A wrong key type reports the type error, then the wrapper prints its RSA error and faults in `RSA_size(NULL)` at `0x1005f50fc`. These three inputs remain explicitly excluded from native source comparison; their original fault observations are not native fault-parity claims. No protective returns were invented in the source.

The verifier executes the original wrapper and eight reused helper instruction bodies in Unicorn. Native crypto dependencies, stdio, allocation, and RSA-method callbacks have explicit controlled test behavior. The native test compares call order/arguments, diagnostics, allocation sizes, returned pointer identities, and final reference/output-length state; it does not generate or compare RSA signature bytes. Literal obfuscation is replaced with the exact decoded diagnostics and file mode. Ciphertext, initial table pointers, original instruction bytes, and BSS inputs stay in the evidence; executable baseline evidence is unchanged.

Reproduce with pinned reconstruction requirements:

```sh
python3 scripts/recover_rsa_wrapper.py --verify
python3 scripts/recover_rsa_wrapper.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# macOS with Xcode:
python3 scripts/build_rsa_wrapper.py
```

The Apple build separately compiles an arm64 iOS static library without test adapters or an invented key provider. Link the legacy helper component once in a future app. Both libraries retain unresolved original dependencies. They do not form a working signer, application, IPA, or device run. Original OpenSSL-derived helpers retain the notices under `../legacy-crypto/`; new tooling licensing does not relicense ESign.
