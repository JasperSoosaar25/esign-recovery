# Remaining original signing dependencies

This map uses the exact ESign 5.0.2 method metadata and expanded original-byte traces under `analysis/app-methods/`. Counts describe indexed method entries and unresolved static indirect flow. Zero unresolved jumps does not imply that readable source, types, dependencies, or behavior have been recovered. No upstream signing engine is substituted.

## Completed source boundaries

| Component | Reconstructed original scope | Actual Apple check |
|---|---|---|
| Localization | 10 classes, 13 methods and initialization block | iOS static library; 13,496 macOS Foundation comparisons |
| Signature containers | `YYYBlob`, `YYYBlobIndex`, `YYYSuperBlob`; 38 methods | iOS static library; 57 behavior fixtures plus one Foundation API check; original class/ABI checks |
| Mach-O header | `YYYOffsetNode`, `YYYMachHeader`; 17 methods | iOS static library; 67 fixtures and derived runtime-layout/ABI checks |
| Entitlement classes | `YYYEntitlementValue`, `YYYEntitlementBlob`, `YYYEntitlementsSuperBlob`; 41 methods and callback | iOS static library; 583 native fixtures and exact class/ABI checks |
| Load-command hierarchy | Five new command classes; 20 methods, reusing the parent | iOS static library; 86 native fixtures, string copies and derived inherited layouts |
| Actual signing-path DER helpers | Original functions at `0x100776830` and `0x10077f534`, with the original signing caller retained | iOS static library; 269 native fixtures; zero-number probe remains unverified |

See the exact reports under [builds/](builds/). The container parser's incomplete-header result and recursive DER integer-zero result remain unverified. The header/command ivar slides are explicit runtime models, not observed original-device state. Scalar accessor fragments are separate restricted C translations and can overlap these classes; do not add their count to these methods as if all were distinct recovered app behavior.

The main `YYYArchO` DER-slot method calls the recursive helper directly; it does not call the three-class encoder in that trace. Preserve the distinction when integrating recovered code. Both original paths retain encoding quirks and are not interchangeable standards-based encoders. The C helpers have newly assigned navigation symbols; they do not supply the entire `YYYArchO` implementation.

## Next implementation boundaries

| Original class | Indexed methods | Methods retaining unresolved jumps | Work still needed |
|---|---:|---:|---|
| `YYYP12` | 37 | 4 | P12/certificate initialization, native crypto ownership/layout, subject-name helpers, exact dependency identification |
| `YYYMobileprovision` | 38 | 2 | Data/profile extraction, plist/model population, certificate membership and formatting |
| `YYYSignAsset` | 22 | 4 | Certificate/profile composition, entitlement selection, ASN.1/CMS generation and dependent crypto routines |
| `YYYArchO` | 49 | 13 | Code directories/hashes, requirements and CMS slot generation, signature placement, file edits, orchestration; two DER callees now translated separately |
| `YYYMachO` | 34 | 8 | Mapping/slice selection, load-command editing, code directory/hash/signature placement, full signing integration |
| `YYYSignHelper` | 17 | 8 | Original preflight, archive/bundle coordination, signing options, completion/install orchestration |

The original `YYYSignAsset` CMS method has statically traced Objective-C flow, but that does not reconstruct its native cryptographic callees. Replacing those callees with current upstream routines without verifying the original implementation/version would break the current original-only constraint. Exact native crypto dependency versions, structure layouts, local changes, initialization, and ownership remain unresolved.

For each class, open its `.jsonl.gz` trace and [class-focused decompilation](../analysis/native-methods/classes/), then follow the original entry/selector/ABI. `scripts/read_method_trace.py` prints an individual annotated method. Unresolved examples include `YYYP12 setup`, `YYYMobileprovision containsCertificate:`, `YYYArchO generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:infoPlistData:requirementsSlot:codeResources:entitlementsSlot:entitlementsSlotDER:execSegFlags:`, `YYYMachO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:`, and `YYYSignHelper signWithSignOptions:delegate:`. The baseline still retains the old unknown entitlement branches; the new component records its separate finite-return assumptions and original execution checks. Follow incomplete computed branches from original instructions; do not fill them with guessed return values.

## Evidence needed for a usable app

Reconstruct and test the original native dependency chain, including initialization and runtime data fixups. Then add the actual application target with original navigation, import/persistence/archive handling, resources, signing orchestration, and installation behavior. Compare harmless test-app signing results using controlled fixtures and owned signing credentials. Record exact source commits, SDKs, and dependency identities before claiming app parity.

A real iPhone setup is still required for the original device binary and for genuine running-app screenshots. The existing macOS tests run reconstructed components; the arm64 iOS outputs are static libraries. Neither is an installable ESign IPA or an iOS 27 compatibility result. See [BUILD-STATUS.md](BUILD-STATUS.md) for the complete app boundary and [IOS27-TESTING.md](IOS27-TESTING.md) for required device evidence.
