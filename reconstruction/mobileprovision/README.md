# Original provisioning-profile class

All 38 metadata methods of `YYYMobileprovision` are reconstructed: initialization, setup, serial-number certificate membership, 17 getter/setter pairs, and ARC destruction. Its original class layout, declared types, copy/strong semantics and method ABI are retained. Two separate BOOL hypotheses (`setup` and NSString `isEqualToString:`) complete the initializer/membership analysis. Original table bytes and replay validate these hypotheses; baseline traces remain unchanged.

Setup creates a memory BIO, writes the input with a signed 32-bit length, compares its sign-extended result against a fresh full NSData length, decodes CMS content, and parses its plist with Foundation options zero. All original `YYYP12` certificate objects must initialize before new properties are committed. Failure preserves preexisting properties. The exact added key is `DeveloperCertificates_f`. Membership compares serial strings only, preserving nil behavior, case sensitivity and enumeration batches. The recovered path has no CMS signature-verification or BIO/CMS cleanup call; no new policy is added.

Four BIO/CMS routines and the certificate parser remain **unreconstructed original dependencies**, declared by their addresses in `ESignMobileprovisionDependencies.h`. The original content-slot accessor is now supplied by the [CMS content component](../cms-content/), which must be linked once. This library does not decode real CMS/certificates by itself. A future app must link the recovered dependencies and use one complete YYYP12 declaration. The harness's stand-in YYYP12 and controlled crypto boundary implementations are never included in the iOS archive.

Fixtures use invented data, plist payloads, certificate tokens, team/device labels and UUID values. They compare boundary arguments/order, profile state, real Foundation plist/data/date handling, failed initialization, existing-object failure state, serial matching, copy and strong identity/mutation, nil fields and destruction. They do not prove real cryptographic decoding, trust validation, whole-app signing or original-device state. Literal obfuscation is replaced with the exact decoded keys; original ciphertext, BSS and pointer-table evidence remain saved.

```sh
python3 scripts/recover_mobileprovision.py --verify
python3 scripts/recover_mobileprovision.py --verify --original-ipa /path/to/original.ipa
python3 scripts/build_mobileprovision.py  # macOS + Xcode
```

The Apple build runs 148 boundary fixtures and 146 additional comparisons composing the profile class with the actual recovered CMS content accessor; OID lookup remains controlled in that integration. It compares native class size, ivar types/offsets and all method ABI encodings with original metadata. The iOS static archive is built separately without test implementations. This component is not an application target, working signer, IPA or iPhone run. Recovered ESign ownership and repository licensing boundaries remain in force.

Research: Apple's [TN3125](https://developer.apple.com/documentation/technotes/tn3125-inside-code-signing-provisioning-profiles) describes profiles and developer-certificate payloads. Native identity is checked against original calls/layout and the primary OpenSSL [CMS content accessor](https://github.com/openssl/openssl/blob/OpenSSL_1_0_2u/crypto/cms/cms_lib.c). That narrows the source family; it does not uniquely identify the bundled release or substitute upstream code for original recovery.

The OID follow-up expands the native builder with a second set of 146 composition checks. These link the recovered CMS content accessor to the actual recovered OID source and original signed-data OID bytes (clearing the cached NID to force encoded-byte lookup). The existing 148 standalone and 146 controlled-OID composition checks remain. BIO/CMS decoding and YYYP12 parsing remain test boundaries; no full profile decoder or signature verification is claimed. Consult the new CI result for this extension.
