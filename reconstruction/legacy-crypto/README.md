# Selected original legacy-crypto helpers

Eight native instruction-body translations from the selected ESign executable:

| Observed entry | Recovered API role | New navigation symbol |
| --- | --- | --- |
| `0x1005d16a0` | `BN_num_bits`, including capacity-wide flag-4 path | `ESignRecoveredBNBits` |
| `0x1005f50f8` | `RSA_size` | `ESignRecoveredRSASize` |
| `0x1005efa0c` | `RSA_up_ref` | `ESignRecoveredRSAUpRef` |
| `0x10060c848` | `EVP_PKEY_get1_RSA` | `ESignRecoveredGet1RSA` |
| `0x1005f512c` | `RSA_private_encrypt` method dispatch | `ESignRecoveredRSAPrivateEncrypt` |
| `0x1005ef908` | `RSA_free` | `ESignRecoveredRSAFree` |
| `0x10060c954` | `EVP_PKEY_free` | `ESignRecoveredPKeyFree` |
| `0x10061f094` | `PEM_read_PrivateKey` FILE/BIO wrapper | `ESignRecoveredReadPrivateKey` |

The names are assigned for navigation. API identities are supported by the actual instruction bodies, field offsets, diagnostic filenames and source-line arguments, and frozen OpenSSL reference source. This identifies selected functions; **the exact bundled OpenSSL release and local changes remain unresolved**. No whole upstream library is substituted.

## Native layout and behavior

The original executable is arm64/LP64 but loads **32-bit BIGNUM limbs**, using `ldr w` and four-byte indexing. Do not assume the host OpenSSL layout. The accessed BN, RSA, RSA_METHOD, EVP_PKEY, and ASN.1-method prefixes have compile-time offset checks. They are accessed prefixes, not complete recovered original type declarations.

The bit-counting flag-4 path traverses `capacity` limbs, including limbs above the stored `top`. It retains the zero mask, 32-bit arithmetic, and source-level branchless word calculations. Fixture parity is not proof of compiled constant-time execution. RSA sizing retains the original signed-division behavior. Reference handling retains wraparound at the controlled boundary and the original cleanup order, optional callbacks, post-callback field reloads, engine finishing, attribute cleanup and payload clearing. Negative reference counts follow the original release path; no new policy is introduced.

`ESignLegacyCryptoDependencies.h` declares unreconstructed **original** native callees by their exact addresses. The static archive intentionally leaves these symbols unresolved. The RSA private-encrypt body dispatches through the original RSA_METHOD callback; the RSA calculation itself is not supplied by these three instructions. The PEM wrapper delegates to the original BIO/parser boundaries; it does not implement PEM decoding.

## Verification

355 fixtures execute all **301 distinct original instructions** in these eight bodies. Cases cover bit boundaries, zero and noncanonical top words, capacity-wide reads, ignored sign fields, 32/256/4096-bit sizes, reference transitions, type rejection, nil free inputs, callback mutation, cleanup order, return forwarding, BIO failure, parser failure, output-pointer preservation, and password-callback forwarding. Inputs are invented buffers and object prefixes; no certificate, key, password or original embedded signing input is included.

```sh
python3 scripts/recover_legacy_crypto.py --verify
python3 scripts/recover_legacy_crypto.py --verify --original-ipa /path/to/original.ipa
python3 scripts/build_legacy_crypto.py  # macOS + Xcode
```

The Apple harness compares the compiled source's outputs, memory state, callbacks and dependency-call records with original ARM64 execution. Unreconstructed callees have **controlled test implementations in the harness only**. These tests establish the selected bodies' behavior at those boundaries; they do not execute the original RSA exponentiation, PEM parser, complete CMS backend, complete signer, or app. Linux compilation independently matched the 262 BN cases before publication. The iOS library contains the recovered C object without the test implementations.

## Source family research and ownership

The native `p_lib.c` error line 287 and reference-release line 391 match the `OpenSSL_1_0_2u` reference, as do `rsa_lib.c` lines 216/265 and `pem_pkey.c` line 222. Examined `OpenSSL_1_0_2a` and `OpenSSL_1_0_1u` references instead place those `p_lib.c` lines at 279/383. The capacity-wide BN path is also present in the 1.0.2u reference. These observations narrow provenance but do not uniquely select a patch release or prove every native library file unchanged. See `reference-research.json` for URLs and hashes of the normalized comparison text.

These recovered bodies retain their original provenance and applicable OpenSSL/SSLeay ownership terms. The [OpenSSL/SSLeay notices](OPENSSL-LICENSE.txt) are preserved. New analysis/build scripts and test harnesses are separate tooling. This component does not relicense the ESign application or establish a source-built IPA/iPhone run.
