# Original CMS content-slot accessor

`ESignOriginal_10062edd8` reconstructs the original native `CMS_get0_content` body used directly by the provisioning-profile path. It returns a live field address, not a copy. It retains the original content-type dispatch, nested LP64 offsets, fallback ASN1 type-4 handling, and exact ERR arguments (`cms_lib.c`, line 234). OID lookup and ERR state remain original unresolved dependencies; there is no replacement CMS decoder, trust check or signer.

All 71 original instructions are exercised in 71 fixtures. Tests compare returned slot identity, old/new pointed-to objects, exact field mutations and error effects. Cases cover data, signed, enveloped, digested, encrypted, authenticated and compressed content; unknown types, null content values and type rejection. Inputs are invented allocated prefixes with no profiles, certificates or keys.

The original byte-dispatch table is six bytes at `0x100999dd4`. The unsigned `nid-21 <= 5` guard bounds its index to 0–5. The separate trace pins those bytes, gives the byte load their exact finite domain, and explicitly enables the original shifted add by 2 only at `0x10062ee08`. That original instruction transfer is checked before analysis. The generic walker's default behavior remains unchanged. This is original-byte control-flow evidence, not an instruction patch or a new algorithm.

```sh
python3 scripts/recover_cms_content.py --verify
python3 scripts/recover_cms_content.py --verify --original-ipa /path/to/original.ipa
python3 scripts/build_cms_content.py  # macOS + Xcode
```

Native Apple tests use controlled OID/ERR boundaries, compare the source against original ARM64 execution and separately compile an arm64 iOS library. The function exports its original-address dependency name so the profile component can link it once. The accessed ASN1_STRING prefix is not a complete recovered OpenSSL type declaration. Source-family identity is supported by original instructions and the primary [OpenSSL CMS source](https://github.com/openssl/openssl/blob/OpenSSL_1_0_2u/crypto/cms/cms_lib.c); exact bundled patch identity remains unresolved. Preserve the [OpenSSL/SSLeay notices](OPENSSL-LICENSE.txt). This is not a complete CMS backend, application, IPA or iPhone result.

The new OID component supplies `ESignOriginal_1005b3138` and the complete original static database. The expanded builder retains its 71 controlled-boundary checks and adds 71 native composition checks using that actual lookup with original DER OID values where available. ERR and full CMS decoding remain external. The historical saved report predates this extension; consult its new CI result.
