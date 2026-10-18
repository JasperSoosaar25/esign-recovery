# Original dispatch and complete app-method trace index

This follow-up adds original-byte research exports and analysis tools. It adds no app runtime implementation or replacement signing engine. The original source-built IPA and genuine running-app screenshots remain unfinished.

| Material | Verified scope |
|---|---:|
| Original selector-specific `objc_msgSend` stubs decoded | 8,999 |
| Additional original native code/data section bytes preserved | 901,266 |
| App-candidate classes traced | 182 |
| Indexed app method entries with a trace record | 3,396 of 3,396 |
| Distinct original instructions reached under the static model | 358,448 |
| Distinct call sites mapped to an original selector stub | 12,244 |
| Unresolved indirect-jump occurrences across method records | 419 |
| Methods containing at least one unresolved jump | 378 |
| Methods reaching the 20,000-step analysis limit | 0 |

The class scope is the existing `YYY` prefix plus `AppDelegate` heuristic. It does not establish ownership or cover every dependency method. An unresolved jump can appear in more than one trace; 419 is an occurrence count. Reaching instructions under the static model does not establish source completeness, correct function boundaries, or runtime equivalence.

Browse the [method summaries](../analysis/app-methods/methods.tsv), [trace manifest](../analysis/app-methods/index.json), and [selector index](../analysis/objc-dispatch/selector-stubs.tsv). Complete per-method graphs and original instruction bytes are losslessly compressed in one JSONL file per class. Each record includes method kind, ABI, entry address, reached instructions, assumptions, unknown jumps, and boundary stops. No indexed app method is silently omitted.

```sh
python3 scripts/read_method_trace.py YYYSignHelper 'preSignWithOption:'
python3 scripts/read_method_trace.py YYYSignInfo igonSign --json
```

## Exact mapping and remaining uncertainty

The decoder accepts only the exact five-instruction ARM64 linker pattern that loads a selector into `x1`, loads the message-send import into `x16`, and branches through `x16`. It checks original selector-pointer/name sections and an original dyld binding to `_objc_msgSend`. See [Apple's linker source](https://github.com/apple-oss-distributions/ld64/blob/main/src/ld/passes/objc_stubs.cpp) for the instruction pattern. Only direct `b` thunks are followed, with cycle and length limits.

A selector identifies the requested message, not its receiver class, selected implementation, or runtime return value. Annotations explicitly retain `receiver_class_verified: false`. Calls still invalidate caller-saved registers. No Boolean return-domain shortcut was added.

The unresolved settings jump at `0x10032f5b4` indexes a table using `w0` after `isKindOfClass:` through original stub `0x10094ba40`. Signing preparation reaches jump `0x100391cd8` after `igonSign` through original thunk `0x10039f93c` and stub `0x100947000`. Neither receiver nor return value was observed in a running app.

The original `igonSign` getter traces show why the shared metadata encoding `B16@0:8` is insufficient. Under the initial-pointer model, `YYYDefaultSignConfig` loads a byte from object offset `0x11`, while `YYYSignInfo` compares its byte with zero and normalizes the result using `cset`. Read both traces with `read_method_trace.py`. These are original-byte observations, not recovered original high-level source.

## Reproduction and checks

`analysis/objc-dispatch/` preserves exact excerpts of `__stubs`, `__stub_helper`, `__objc_stubs`, `__objc_selrefs`, and `__objc_methname`, plus original binding streams. They are partial research excerpts, not an executable or a binary-backed app target. The original executable remains excluded from Git.

The verifier checks compressed hashes, section identities against baseline metadata, replayed original binding records, and independent decoding of all selector stubs. It checks complete method indexing, class/selector/kind/ABI identities, counts, call/thunk chains, and every included original instruction against baseline byte listings. The optional IPA comparison checks new native excerpts directly against the known executable hash. These establish evidence integrity; static assumptions remain assumptions.

With pinned recovery requirements installed:

```sh
python3 scripts/recover_dispatch.py /path/to/ESign.ipa
python3 scripts/analyze_app_methods.py /path/to/ESign.ipa
python3 scripts/verify_app_analysis.py
python3 scripts/verify_app_analysis.py --ipa /path/to/ESign.ipa
```

Regeneration reads original bytes without executing them and overwrites the separate analysis exports. The baseline snapshot is unchanged. See [BUILD-STATUS.md](BUILD-STATUS.md) for the original-source build and physical-device validation requirements.
