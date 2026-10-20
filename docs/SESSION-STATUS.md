# Independently verified recovery status — 20 October 2026

The current request authorizes native reverse engineering and decompilation, preserving original behavior where recoverable, and preparing a community development repository. New app features and the iOS 27 Liquid Glass redesign remain future work.

## Input boundary

The later user-supplied Filebin IPA downloaded successfully and is byte-for-byte identical to the recovery baseline. Its size is 7,522,792 bytes and its SHA-256 is `f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29`. The exact selected input is now verified. The earlier Pixeldrain URL itself remained inaccessible.

A fresh download of the secondary [compiled-IPA mirror](https://github.com/nooptr/esign/blob/master/esign_5.0.2_unsigned.ipa) also matches. A mirror match does not independently authenticate an original developer release.

## What was independently checked

The complete saved recovery was restored into a separate checkout. Its verifiers passed against the freshly downloaded secondary input:

- All 100 archive entries accounted for; all 63 retained resources match the IPA.
- All 1,104 class records and 142 category records match freshly parsed original metadata.
- All 9,612,732 native `__text` bytes and 70,077 static jump records pass the baseline comparison.
- All 57,245 identified native functions have indexed pseudocode output. This is export coverage, not semantic correctness or source completeness.
- All 3,396 selected app-method entries across 182 classes are covered by the expanded static traces. Their 358,448 unique instructions and 12,244 selector-call observations pass integrity checks.
- All 8,999 selector stubs and 901,266 bytes of native dispatch sections/binding data match the secondary input.
- All 105 current recovery-tool tests pass, including corruption, identity, selector, control-flow, scalar-provenance, finite-return, callback, signature-container, runtime import, and Mach-O layout rejection cases. The 215 compiled C scalar fragments also pass 35,840 comparisons with original ARM64 instruction execution.

The traces retain 419 unresolved jump records. Mutable runtime state, incomplete function boundaries, missing initialization, and decompiler type guesses remain reconstruction concerns. Do not present the counts as a percentage of recovered behavior.

## Build, screenshots, and next work

There is no complete source-built app target, source-built IPA, attached iPhone, or verified iOS 27 run here. Original or rebuilt running-app screenshots are unavailable. Historical images, mockups, repackaged original binaries, and unrelated signing apps cannot establish those results.

Exact-input verification is complete. The [native follow-up](NATIVE-RECONSTRUCTION.md) adds fuller decompilation and 215 source fragments with 35,840 original-instruction comparisons. Remaining source reconstruction needs most address-level method implementations, recovered initialization and globals, dependency reconciliation, an actual Xcode target, and behavior tests. Only a real app build followed by physical-device testing can support app equivalence and iOS 27 compatibility claims.

Contribution guides, issue/PR templates, integrity CI, a feature-ideas document, and a native Liquid Glass plan are provided. These prepare collaboration on the recovery; they do not turn it into the original developer's open-source project. New script/documentation licensing does not relicense ESign materials.

## Native localization component follow-up

All 10 original localization classes now have reconstructed Objective-C source for their 13 methods and one-time initialization block. Original-instruction/model checks cover 3,812 dictionary pairs, 18 locale configurations, and 7,931 lookups. The separate `native-localization` CI job compiles an arm64 iOS component library and tests the component on macOS Foundation; inspect its actual result and artifact report for a build claim. A successful component build does not supply the unreconstructed signing/UI/application implementation or a source-built IPA. Real iPhone runtime access remains unavailable in this session.

## Signing dependency follow-up

`YYYBlob`, `YYYBlobIndex`, and `YYYSuperBlob` now have all 38 methods reconstructed. The [Apple build and report](builds/signature-blobs-da8d0e0c.json) passed 57 source-behavior fixtures plus one Foundation API-contract check, with exact class-layout/method-ABI comparisons. The first native run caught an incorrect short-read assumption in the model; it was corrected, and the original empty-header parser result remains explicitly unverified.

`YYYOffsetNode` and `YYYMachHeader` now have all 17 methods reconstructed. Their [Apple build and report](builds/mach-header-11d8c9f9.json) passed 67 fixtures covering direct header memory effects and signed offset limits. Original metadata requires a non-fragile ivar slide; the model explicitly applies it and the new source's native layout matches that derived layout. This does not claim original-device observation.

The [earlier verification run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39141557974) builds those three native components and checks the full recovery snapshot. Their saved input reads also pass direct comparison with the exact selected IPA.

## Further signing recovery in this continuation

The three original entitlement classes now have all 41 methods and their dictionary callback reconstructed. Explicit Boolean/byte return hypotheses resolve the separate analysis view; the baseline traces remain intact. All 583 original-instruction fixtures passed against the compiled source on Apple Foundation, with exact original class metadata checks. See [the report](builds/entitlements-39df227c.json).

The five load-command wrappers now have all 20 original methods reconstructed, reusing the existing parent's five methods. All 86 native cases passed, including live backing-memory reads, independent pointer fields, mutable-string copying, and derived non-fragile inherited layouts. See [the report](builds/load-commands-28f7142b.json).

Tracing the actual `YYYArchO` DER-slot caller revealed a separate recursive encoder and length writer. Both original native functions now have source translations and 269 successful native comparisons. The numeric/Unicode/length quirks are retained. Integer zero did not return within a 10,000-instruction original probe; the result and native zero parity remain explicitly unverified, and it is excluded from native tests. See [the report](builds/recursive-der-26a3ef3a.json).

This continuation adds 61 original Objective-C methods and two native functions, with 938 successful native comparisons. The cumulative class-source scope is 23 original classes and 129 metadata methods, plus two native functions; this is not complete app recovery. The [seven-job run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39145448661) checks all six native components and the recovery snapshot. Read [the updated dependency map](SIGNING-DEPENDENCIES.md) for the remaining P12/CMS, code-directory, signing orchestration, application, and device work. No complete signer or app target, source-built IPA, iPhone installation, or genuine running-app screenshot has been produced.


## Requirements and code-directory continuation — 19 October

The requirements-slot method at `0x100777638` and its three native byte-writing block invocations now have reviewed source. All 117 original-instruction fixtures passed on Apple Foundation, and the source compiled into an arm64 iOS library. The original missing-input `strlen` truncation returns four bytes `fade0c01`; that behavior is deliberately retained. See [the exact report](builds/requirements-slot-7b0973dc.json).

The code-directory method at `0x10077473c`, two digest helpers, two hash block invocations, and the NSString UTF-8-length method body now have source translations. All 85 comparisons (65 code-directory/digest/string cases and 20 signature entitlement-flag cases) passed on Apple Foundation/CommonCrypto with real temporary-file reads/seeks, comparing bytes and getter/digest/file effects. Cases cover both hash modes, empty/nil inputs, Unicode/NUL identifiers, page boundaries, short files, a large file offset, and varying successive getter values. See [the exact report](builds/code-directory-fb1e67be.json).

These two components execute 1,983 and 1,544 distinct original instructions respectively in their explicit host models; these sets can overlap and are not added as distinct app coverage. New C names make the bodies compilable without inventing a full `YYYArchO` class. Four finite pointer-load hypotheses in the code-directory analysis are restricted to original BOOL indexes 0/1 and checked against exact table bytes. The baseline trace counts remain unchanged.

At that stage, there were 23 class definitions with 129 original metadata methods, three additional method-body translations, and four native function translations, plus the documented block translations. All 67 recovery-tool tests and all [nine CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39321304662) passed. Eight jobs build component libraries; one verifies the recovery. Xcode 16.4/iOS 18.5 was used for the two new Apple builds. Complete CMS/certificate processing, signing orchestration, application/UI reconstruction, an app target, an IPA, and physical iPhone execution remain unfinished.


## Original crypto continuation — 19 October UTC

Eight original native helper bodies now have source under `reconstruction/legacy-crypto/`. All 301 distinct instructions in those selected bodies execute across 355 original-instruction fixtures, and all 355 cases passed against the Apple-compiled source. The arm64 iOS library passed; see [the saved report](builds/legacy-crypto-c7190909.json) and [ten-job verification run](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39324139656). The source preserves 32-bit BN limbs, exact accessed LP64 offsets, reference transitions, callback mutation, cleanup order, and BIO/parser argument forwarding. RSA exponentiation and PEM parsing are still unreconstructed boundaries, not implementations supplied by these wrappers.

The alternate-CMS wrapper at `0x100778fa0` now has source and exact-IPA replay evidence under `reconstruction/rsa-wrapper/`, reusing the eight helpers. Twenty return-value cases include 32-bit length truncation and negative-result sign extension. Three original read-fault probes remain explicitly excluded from native source comparison. The source preserves diagnostic fallthrough rather than inventing new error guards. No embedded key bytes were read or published; the original global provider remains unresolved.

At the end of 19 October, the cumulative scope was 23 complete class definitions containing 129 original metadata methods, three separately exposed method-body translations, 13 native helper/wrapper bodies, and the documented blocks. All 75 tool tests pass. The [RSA wrapper Apple report](builds/rsa-wrapper-9ce17389.json) records 20 passing native comparisons and arm64 iOS compilation, using Xcode 16.4/iOS 18.5. Exact bundled OpenSSL patch identity, original algorithm/dependency reconstruction, CMS integration, full app/UI source, an application target, a source-built IPA, and genuine iPhone screenshots remain unfinished.

All [11 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39327012074) passed for source commit `9ce17389`: ten native component jobs and the complete recovery-integrity job, including 75 tool tests. The [verification record](builds/verification-9ce17389.json) records the exact jobs. The two new components pass 355 and 20 native boundary-behavior comparisons respectively; three wrapper fault probes remain excluded. No complete crypto backend, source-built app/IPA, or iPhone runtime result is established.

## Profile, CMS accessor and Xcode project — 20 October UTC

All 38 original methods of `YYYMobileprovision` now have reviewed source, exact metadata/layout checks and 148 passing Apple Foundation comparisons. The profile initializer/setup, 17 property pairs, serial-number membership and destruction preserve their original behavior. A further 146 native comparisons compose this source with the recovered CMS content accessor. BIO/CMS decoding, OID lookup and certificate parsing remain explicit controlled test boundaries; no actual profiles, certificates or keys are published. See [the integrated profile report](builds/mobileprovision-a8f0b930.json).

The original CMS content accessor at `0x10062edd8` now has its complete 71-instruction body translated. All 71 native cases pass, comparing returned live-field addresses, old/new pointer values, field mutation and original error effects. Its six-byte table and unsigned index guard support a separate explicit load/shift analysis; default analysis and baseline counts remain unchanged. See [the CMS report](builds/cms-content-d505e438.json).

The new `ESignRecovery.xcodeproj` builds all twelve recovered component libraries together for arm64 iOS, using a reproducible source manifest and shared scheme. Its [actual Xcode report](builds/component-project-a8f0b930.json) records every output archive, source/project hash and toolchain. The build works from a normal clone without the original IPA or restored analysis archives. Test backends, scalar evidence fragments and the original binary are excluded. This is new component build configuration, not the original author's project or an app target.

All [14 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39444090360) passed: twelve individual native component jobs, the combined Xcode project build and the complete recovery-integrity job, including 87 tool tests. The [verification record](builds/verification-a8f0b930.json) identifies the exact source commit and jobs. New native comparisons comprise 148 profile boundary cases, 146 composition cases reusing those fixtures, and 71 CMS accessor cases; these are not 365 distinct full-app behaviors. Xcode 16.4/iOS 18.5 was used; no iOS 27 device result is claimed.

At that stage, cumulative source scope was 24 original class definitions with 167 metadata methods, three separately exposed method-body translations and 14 native helper/wrapper bodies, plus documented blocks. Most original app/UI source, full P12/certificate/CMS algorithms and initialization, signing/archive/install orchestration, an actual app target, a source-built IPA and genuine iPhone screenshots remain unfinished. The next exact native boundaries and integration requirements are recorded in [the dependency map](SIGNING-DEPENDENCIES.md).


## OID continuation in the current pass

Five additional original bodies now implement object/name lookup and hash retrieval, with 958 exact static object records and 890 search indexes. Original ARM64 replay matches compiled local C in 5,635 cases; all 93 tool tests pass. The primary legacy OpenSSL table reference also matches every semantic record and search index, without establishing the exact linked patch. The [OID Apple report](builds/oid-lookup-9922c42e.json) verifies those comparisons and all static records. The [project report](builds/component-project-9922c42e.json) verifies all thirteen arm64 libraries. Expanded [CMS](builds/cms-content-9922c42e.json) and [profile](builds/mobileprovision-9922c42e.json) reports record 71 and 146 additional real-OID composition comparisons. Source totals now include 19 native helper/wrapper bodies. All reports identify source commit `9922c42e`, Xcode 16.4/iOS 18.5 and downloadable library artifacts. No full-app, IPA or device result has been produced.


All [15 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39451228940) passed for source commit `9922c42e`: thirteen individual native component jobs, the combined Xcode library build and full recovery integrity, including 93 tool tests. The [verification record](builds/verification-9922c42e.json) identifies every job and its exact scope. Original BIO/CMS decoding, certificate/P12 parsing, signing/archive/install orchestration and application/UI source remain unfinished; no source-built IPA or real iPhone screenshot has been produced.


## Original BIO input recovery — 20 October

The [new source](../reconstruction/bio-input/) reconstructs 18 original BIO/memory-buffer functions and their shared method descriptor. All 603 cases pass against compiled Apple C, exercising all 666 original instructions. The [native report](builds/bio-input-d49c5f05.json) covers creation, callbacks, read/write/reset/free sequences, buffer growth/failures, live state, truncation and 64-bit counters. The [combined project report](builds/component-project-d49c5f05.json) verifies all fourteen arm64 libraries with Xcode 16.4/iOS 18.5. All [16 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39457921121) and 99 tool tests passed; the [verification record](builds/verification-d49c5f05.json) identifies the exact source commit and jobs.

Current source scope is 24 classes/167 metadata methods, three separately exposed method-body translations and 37 native helper/wrapper bodies, plus documented blocks. Memory BIO now has original source; allocation/refcount/ex-data/cleansing/ERR primitives and file BIO/PEM operations still need original implementations. Actual ASN.1/CMS decoding, P12/certificate processing, signing/archive/install orchestration and app/UI source remain unfinished. No full app, source-built IPA, real iPhone run or genuine running-app screenshot was produced.


## Original ASN.1 input recovery — 20 October

Four original native bodies now have [recovered source](../reconstruction/asn1-input/): the ASN.1 header/length parser, BIO encoded-object reader, BIO/item wrapper and item-decoder entry wrapper. All 376 original-instruction/native C comparisons pass, including 33 cases composed with the actual memory BIO source. The fixtures exercise 337 of 367 instructions; index.json preserves the 30 unexercised addresses, including overflow/nesting paths. Partial output writes and cursor advancement, nested indefinite lengths, truncated pointer differences, chunked reads, diagnostics and cleanup remain tied to original bytes.

The [Apple report](builds/asn1-input-bfe2c88d.json) records native comparisons and arm64 compilation. The [combined Xcode report](builds/component-project-bfe2c88d.json) verifies all fifteen libraries. All [17 CI jobs](https://github.com/JasperSoosaar25/esign-recovery/actions/runs/39486599989) passed for source commit `bfe2c88d`, including 105 tool tests; [the verification record](builds/verification-bfe2c88d.json) identifies exact jobs and scope.

Current totals are 24 original class definitions/167 metadata methods, three separately exposed metadata-method body translations and 41 native helper/wrapper bodies, plus documented blocks. ERR state, allocation and the recursive item decoder remain controlled test boundaries. The next missing decoder is `ASN1_item_ex_d2i` at `0x10061955c`, followed by its type-specific helpers and the CMS schema graph. Original certificate/P12 processing, signing/archive/install orchestration and application/UI source remain unfinished. No complete app, source-built IPA, iPhone execution, iOS 27 result or running-app screenshot was produced.
