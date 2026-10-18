# Which IPA this recovery describes

The request received on 18 October 2026 supplies <https://pixeldrain.com/u/4wWjv3LF>. Both a direct download/metadata attempt and the browser displayed an unavailable-site result. No bytes, filename, or trustworthy checksum were obtained from that link. Its version and identity remain unconfirmed.

An existing local analysis input, `esign_5.0.2_unsigned 2.ipa`, is available from the earlier recovery. A second cached copy has exactly the same bytes. The recovery was independently checked against those bytes on 18 October 2026.

| Property | Cached baseline |
|---|---|
| Size | 7,522,792 bytes |
| SHA-256 | `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29` |
| Git blob SHA-1 | `a21c4b8b95f3bef2535e32f4ccf59b83fcc9ae85` |
| Bundle identifier | `p3.xyz.yyyue.esign` |
| App version / build | 5.0.2 / 1 |
| Executable SHA-256 | `809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154` |
| New Pixeldrain file matches | Unconfirmed |

The public compiled-IPA mirror at [nooptr/esign](https://github.com/nooptr/esign/tree/e48b19239ea1b1c725134350db8ab1a15ce3ff88) records the same Git blob and size. A mirror match identifies bytes, not official developer provenance or a source release.

To compare the newly linked file once it is available:

```sh
python3 scripts/unpack_evidence.py
python3 scripts/verify_against_ipa.py /path/to/esign_5.0.2_unsigned.ipa
```

A mismatching SHA-256 stops the verifier. Preserve this baseline and create a separate evidence snapshot for a different input. Do not replace the expected hash just to make the check pass.
