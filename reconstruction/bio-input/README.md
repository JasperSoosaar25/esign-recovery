# Original BIO input and memory-buffer source

This component reconstructs the original ESign BIO allocation, release, read/write/control dispatch, flag helpers, memory-buffer method descriptor and seven memory callbacks, plus three BUF_MEM helpers. It is translated from 18 original ARM64 bodies and the exact public algorithm constants in the pinned IPA. It is not a replacement crypto engine.

The original memory control switch uses a guarded twelve-byte dispatch table. The source preserves reference-count and callback truncation, cached callback pointers, post-callback method reloads, unsigned counters, copy/shift behavior, read-only cursor/reset behavior, failure state, cleansing/free order and original diagnostics. Allocation, refcount locking, ex-data storage and ERR storage remain explicit original dependencies. Test implementations of those boundaries are excluded from iOS archives.

The verifier replays original instructions in Unicorn and compares compiled C against the saved results. It also checks the relocated method descriptor's type, name and seven function pointers. Invented tests cover callback mutation, failures, buffer operations and composition. A few invalid-pointer or unbounded-memory inputs are deliberately excluded from native comparison. Consult the saved index for actual instruction coverage; unexercised addresses are never presented as executed.

Generation downloads an immutable public mirror and requires the exact selected IPA and executable hashes before extracting any input. It keeps the IPA in memory and publishes only the selected public algorithm code/data evidence and invented fixtures. It never exports embedded private signing inputs. Normal verification uses the committed evidence and restored baseline, without an IPA download.

All 603 original-instruction fixtures pass against Linux-compiled C, exercising all 666 instructions. The create/write/read/reset/free sequence, the shared method descriptor and all eighteen function bodies are included. The [Apple report](../../docs/builds/bio-input-d49c5f05.json) records the same 603 passing comparisons and an arm64 iOS archive; the [project report](../../docs/builds/component-project-d49c5f05.json) records all fourteen libraries. No complete CMS decoder, ESign app, IPA, iPhone run or screenshot is claimed. Preserve OPENSSL-LICENSE.txt and the repository ownership boundaries.

| Original body | Original address |
|---|---|
| BIO_new | `0x1005fedf0` |
| BIO_free | `0x1005feebc` |
| BIO_write | `0x1005ff090` |
| BIO_read | `0x1005fef88` |
| BIO_ctrl | `0x1005ff4e0` |
| BIO_s_mem | `0x1005ffa5c` |
| mem_write | `0x1005ffb0c` |
| mem_read | `0x1005ffbc8` |
| mem_puts | `0x1005ffc7c` |
| mem_gets | `0x1005ffcac` |
| mem_ctrl | `0x1005ffd40` |
| mem_new | `0x1005ffea0` |
| mem_free | `0x1005ffed8` |
| BUF_MEM_free | `0x1005fe850` |
| BIO_clear_flags | `0x1005fef5c` |
| BUF_MEM_grow_clean | `0x1005fe990` |
| BIO_set_flags | `0x1005fef78` |
| BUF_MEM_new | `0x1005fe7fc` |
