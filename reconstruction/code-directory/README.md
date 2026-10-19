# Original CodeDirectory generation

Reviewed, independently compilable translations of:

| Original body | Address | Source navigation name |
| --- | --- | --- |
| `-[YYYArchO generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:infoPlistData:requirementsSlot:codeResources:entitlementsSlot:entitlementsSlotDER:execSegFlags:]` | `0x10077473c` | `ESignRecoveredCodeDirectory` |
| `-[NSString(Code) y_length]` | `0x10076aa20` | `ESignRecoveredUTF8Length` |
| SHA-256 native helper | `0x100776104` | `ESignRecoveredSHA256` |
| SHA-1 native helper | `0x100776324` | `ESignRecoveredSHA1` |
| Captured digest block invoke | `0x100775ef4` | folded into `hashSlot` |
| Global SHA-1 block invoke | `0x100776570` | folded into `hashSlot` |
| Signature entitlement-flag block invoke | `0x10077cb50` | `ESignRecoveredEntitlementFlag` |

These C symbols and the dependency protocol are new navigation aids. This adds no replacement `YYYArchO` class. Its original method ABI is `@84@0:8B16@20@28@36@44@52@60@68Q76`. The original method receives entitlement data, DER entitlement data, and flags in three stack arguments after the six register arguments. The evidence emulator supplies that layout explicitly.

The original uses an 88-byte version `0x20400` header, 4 KiB pages, UTF-8 byte lengths, and SHA-1 or SHA-256 through imported Apple CommonCrypto. Five special payload hashes plus two zero slots precede the code-page hashes, in original reverse slot order. A nil team identifier returns nil. Nil digest input produces zero bytes; non-nil empty data produces the actual empty-input digest. It preserves the original four separate code-length header reads, eight executable-limit reads, two further code-length reads for division/remainder, 32-bit page multiplication, file seeks, short reads, and final file position.

`fixtures.json` includes 65 code-directory/digest/string-length cases and 20 additional signature entitlement-flag cases. Code-directory cases compare output bytes **and** getter, digest, and file effects for both hash modes. It includes nil/empty slots, missing and Unicode identifiers, embedded NULs, zero length, exact and partial pages, 17 pages, truncated/empty files, nil file handles, 64-bit flags/limits, and an offset beyond 4 GiB. The original instructions execute in Unicorn with explicit Foundation/ARC, file, and digest models. This is not iPhone execution.

The separate analysis view resolves four two-entry pointer loads under the explicit BOOL domain `{0,1}`. It retains exact original table bytes and tags every finite load-result hypothesis. Validation rejects altered targets, table bytes, instructions, or imports and reproduces the expanded flow. The broader baseline trace and its unresolved count remain untouched. Other BOOL representations, allocation failures, Foundation subclasses with unusual behavior, and >4 GiB data allocations are not established by this comparison.

```sh
python3 scripts/recover_code_directory.py --verify
python3 scripts/recover_code_directory.py --verify --original-ipa /path/to/original.ipa
python3 scripts/build_code_directory.py  # macOS + Xcode
```

The native comparison uses real Apple Foundation, CommonCrypto, and temporary-file `NSFileHandle` reads/seeks. Test adapters record digest calls and forward to the real Apple functions; the iOS static library is compiled separately without these adapters. Original deprecated digest calls are retained, with their deprecation warning suppressed explicitly. This component requires Foundation and CommonCrypto when linked. It does not supply CMS/certificate processing, signature-space editing, a complete signing pipeline, a full app, an IPA, or iPhone screenshots. Attribution and original-app licensing remain separate.


The separately recovered signature-assembly block at `0x10077cb50` reads a captured dictionary at block offset +32, looks up its key, and returns `boolValue` only when the object is an `NSNumber`. Missing values and other types return false; strings such as `YES` and `1` are not coerced. Twenty fixtures cover CFBoolean/NSNumber values, integer zero, fractions, strings, arrays, dictionaries, NSNull, a missing key, and a nil dictionary. Its `isKindOfClass:` and `boolValue` return hypotheses are explicitly restricted to 0/1 and validated by flow replay. This does not reconstruct the surrounding signature-assembly method. The separate recursive DER encoder's unresolved zero-number case is unchanged.
