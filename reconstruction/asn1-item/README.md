# Original ASN.1 item orchestration

Eight complete body translations from the exact selected ESign 5.0.2 executable:

| Address | Original role |
| --- | --- |
| 0x10061955c | asn1_item_ex_d2i, including seven item-type dispatch cases |
| 0x10061938c | asn1_template_ex_d2i, including explicit tag/EOC handling |
| 0x10061a738 | asn1_check_tlen and its original header cache |
| 0x10061aff4 | asn1_get_choice_selector |
| 0x10061b004 | asn1_set_choice_selector |
| 0x10061b0f8 | asn1_enc_save and its inlined encoding-slot lookup |
| 0x10061b218 | asn1_get_field_ptr |
| 0x10061b230 | asn1_do_adb |

Run `python3 scripts/recover_asn1_item.py --verify` after restoring evidence. Generation additionally requires `--generate --original-ipa /path/to/exact.ipa`; it verifies both original hashes and never changes the original or baseline. The 783 invented-schema comparisons exercise 990/999 original instructions, including 639/640 in the main dispatcher. All template, selector, encoding-save, field-pointer and ADB helper instructions execute. The nine missing addresses remain in index.json. They include the conservative cache length check and one sequence loop transition; static recovery is not execution proof.

Fifty-six cases compose the previously recovered item-entry wrapper with this actual decoder body. Every tag-bit table entry is checked with matching and complementary masks. Native comparisons cover original LP64 structure offsets, seven-way dispatch, callbacks cached across mutation, CHOICE selection/cleanup, sequences and indefinite EOCs, explicit templates, optional fields, any-defined-by integer/OID selection, diagnostics, encoding-cache replacement/failure and full field/cursor state. `scripts/build_asn1_item.py` checks native C on Apple tools and compiles the separate arm64 archive without adapters.

The original Darwin stack ABI packs the expected class at offset 0, the optional byte at offset 4, and the context pointer at offset 8 for the 11-argument header checker. The recursive item depth occupies offset 0. Original instruction execution and the host C ABI are handled separately in the test harness.

The shared original-header parser is reused from `asn1-input`; source is compiled once per archive. The item dispatcher is now supplied by this library. Its primitive decoder (`0x10061a27c`), non-explicit template parser (`0x10061acc8`), constructors/destructors, ASN1_INTEGER conversion and ERR routines remain external original boundaries. The ADB native test controls OID conversion; the separate recovered OID library supplies its runtime symbol. The Xcode target uses ASN.1 input and OID targets. ASN.1 input also calls this item body: archive target ordering does not establish a complete link, and a future app must link both libraries once.

The original cache copies unspecified stack outputs after some malformed fresh headers. Such undefined fresh-cache output probes are excluded from native parity; no invented zero initialization is added to runtime source. Cached errors and fresh headers whose outputs are defined are tested. The original compatibility callback temporarily edits the first input tag byte; tests verify its exact restoration. Do not make input immutable or add protective returns that change original behavior.

The CMS ASN.1 schema graph, complete value decoders and certificate/P12 handling remain incomplete. This is neither a working full CMS decoder nor a source-built ESign app/IPA. No device execution or iOS 27 screenshot result is claimed. Preserve the accompanying OpenSSL/SSLeay notices; the 1.0.2u reference identifies a source family, not a unique linked patch release.
