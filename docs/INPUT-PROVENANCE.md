# Exact user-supplied IPA identity

On 18 October 2026 the user supplied this accessible file:

<https://filebin.net/64tq7btmi8iixpru/esign_5.0.2_unsigned.ipa>

It was downloaded through Filebin's normal file-download flow. The downloaded file is a valid ZIP with all entry CRCs passing. It is byte-for-byte identical to the earlier recovery baseline and to the independently downloaded secondary mirror. This resolves the earlier uncertainty about which IPA the recovery describes.

| Property | Exact downloaded Filebin input |
|---|---|
| Filename | `esign_5.0.2_unsigned.ipa` |
| Size | 7,522,792 bytes |
| SHA-256 | `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29` |
| Git blob SHA-1 | `a21c4b8b95f3bef2535e32f4ccf59b83fcc9ae85` |
| Bundle identifier | `p3.xyz.yyyue.esign` |
| Version / build | 5.0.2 / 1 |
| Executable SHA-256 | `809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154` |
| Match to published recovery baseline | Confirmed |

The earlier Pixeldrain URL was inaccessible from this environment. No claim is made about the bytes served by that URL itself. Filebin now supplies the exact user-selected input used for verification.

Both the complete baseline comparison and expanded native dispatch comparison were rerun against the Filebin download. They passed. Source reconstruction and runtime equivalence remain separate, incomplete tasks; matching an IPA does not obtain its original project or authenticate the file as an original developer release.

To repeat the comparison locally:

```sh
python3 scripts/unpack_evidence.py
python3 scripts/verify_against_ipa.py /path/to/esign_5.0.2_unsigned.ipa
python3 scripts/verify_app_analysis.py --ipa /path/to/esign_5.0.2_unsigned.ipa
```

Keep the original IPA and signing/profile inputs outside Git. Preserve the existing baseline if a different version is inspected later.
