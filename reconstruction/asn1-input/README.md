# Original ASN.1 input reconstruction

Four complete original bodies, translated from the pinned ESign 5.0.2 executable:

| Address | Original role |
| --- | --- |
| 0x10061cb98 | ASN1_get_object, including its inlined length reader |
| 0x10061300c | asn1_d2i_read_bio |
| 0x100613354 | ASN1_item_d2i_bio |
| 0x100619304 | ASN1_item_d2i entry wrapper |

The stream reader links the recovered BIO/BUF_MEM source, rather than a host OpenSSL implementation. Preserve partial reads, 16 KiB chunk growth, nested indefinite lengths, error ordering, output preservation on error, 32-bit pointer-difference truncation and original cleanup. The header parser preserves partial tag/class/length writes on failure and cursor advancement after TOO_LONG. Its source retains the original LP64 widths.

Run `python3 scripts/recover_asn1_input.py --verify` after restoring evidence. Generation requires the exact pinned original executable (obtained and hash-checked in memory); ordinary verification needs only saved original evidence. Synthetic data and controlled allocation, ERR and recursive-decoder boundaries are test code. A second path composes the stream reader with the actual recovered memory BIO method. The item wrappers are tested with a controlled original recursive-decoder boundary, not a fabricated working CMS parser. Context padding remains unspecified as in the original.

`python3 scripts/build_asn1_input.py` on macOS compares native C against original-instruction fixtures and builds the separate arm64 iOS archive without adapters. Read index.json and saved build reports for actual coverage and toolchain. Unexercised overflow paths remain explicit.

Original recursive ASN.1 templates/decoder, CMS schema, certificates, signing, most app code and UI remain missing. This component does not build the ESign application or an IPA, and supplies no iPhone or iOS 27 execution result. OpenSSL 1.0.2u source is a reference for identification, not proof of the exact linked patch version. Preserve the accompanying original OpenSSL/SSLeay license.
