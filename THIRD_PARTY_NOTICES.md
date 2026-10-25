# Attribution and ownership

ESign is the original application's name. Its native implementation and resources were supplied for recovery; this unofficial project does not claim authorship of them or an original-source release by their developer. The bundled service/ownership agreement is preserved as an exact resource for reference, not applied as a new license for this repository.

The exact GCDWebUploader `index.html`, `css/index.css`, and `js/index.js` files identify Pierre-Olivier Latour (2012–2019) and contain their complete three-clause BSD redistribution notice. Other bundled uploader dependencies include notices for Bootstrap/Twitter, jQuery/jQuery Foundation, blueimp/Sebastian Tschan, Respond.js/Scott Jehl, Jeditable/Mika Tuupola and Dylan Verheul, and HTML5 Shiv. Their individual notices remain in the recovered resource files. Do not remove them when making development copies.

Metadata also identifies bundled native library classes, including QMUI, GCDWebServer, SDWebImage, CocoaLumberjack, SVGKit, class-dump, and XAD-related classes. A class-name fingerprint does not establish the exact upstream version, local modifications, or full dependency license set. Native dependency attribution/version reconciliation remains part of a source-only port; no current upstream tree was substituted as if it were exact recovered ESign code.

Ghidra is a separately downloaded analysis tool from the National Security Agency project, under its own distribution licenses; it is not bundled in this repository. The newly written export script is distinct from Ghidra's generated pseudocode.

Original native excerpts in `analysis/objc-dispatch/` and original instruction bytes in `analysis/app-methods/` retain the ownership boundaries of the baseline recovered materials. The MIT license on new scripts does not relicense those excerpts. Apple's linker source is referenced for recognizing instruction patterns; no replacement runtime code from that source is incorporated.

## Additional native reconstruction outputs

The `analysis/native-methods/` pseudocode and `reconstruction/scalar-accessors/` C fragments derive from ESign native instructions. They retain the same ownership/provenance boundaries as other recovered ESign material. New tooling/documentation licensing does not relicense these app-derived outputs or the original application. The C entry-point names are generated reconstruction names, not claims about the author's original source symbols.

The reconstructed Objective-C localization classes, dictionaries, and original-instruction fixtures in `reconstruction/localization/` are also ESign-derived material, not a relicensed original project. The surrounding analysis/build scripts and test harness are new tooling.

The Objective-C classes and original-instruction fixtures in `reconstruction/signature-blobs/` and `reconstruction/mach-header/` are likewise original-derived ESign material. Apple's objc4 source is referenced to explain the modeled non-fragile ivar realization; its runtime implementation is not copied into the app. Mach-O struct definitions are imported from the Apple SDK at build time. The recovery models and native test harnesses remain separate new tooling; they are not substitute runtime signing code.

The additional classes in `reconstruction/entitlements/` and `reconstruction/load-commands/`, and the two native function translations in `reconstruction/recursive-der/`, are ESign-derived implementations with original addresses and evidence. Their names and surrounding test infrastructure do not confer a new license on the underlying app behavior. CoreFoundation and Foundation calls use Apple's SDK/runtime; their implementations are not bundled or replaced by the analysis models. The recursive helpers' public C names are newly assigned navigation labels, not recovered original source symbols.

## Selected legacy cryptographic functions

`reconstruction/legacy-crypto/` recovers eight original native helper bodies with evidence of OpenSSL 1.0.2-family provenance. Diagnostic source lines and implementation/layout details are compared with frozen upstream references; the exact bundled release and local changes remain unresolved. A complete upstream crypto library is not substituted. The applicable legacy OpenSSL/SSLeay license and acknowledgements are retained in [OPENSSL-LICENSE.txt](reconstruction/legacy-crypto/OPENSSL-LICENSE.txt).

`reconstruction/cms-content/` also reconstructs the original CMS content-slot accessor with the same source-family and ownership boundaries. Its [OpenSSL/SSLeay notices](reconstruction/cms-content/OPENSSL-LICENSE.txt) are preserved. Its explicit OID/ERR test boundaries do not implement a CMS backend.

This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/). This product includes cryptographic software written by Eric Young (eay@cryptsoft.com). Analysis models and controlled test callees are separate tooling, not runtime backend implementations or proof of complete RSA/PEM/CMS operation.


The original OID lookup, static object/name/OID tables and LHASH retrieval translations in `reconstruction/oid-lookup/` preserve the same legacy OpenSSL/SSLeay notices in `OPENSSL-LICENSE.txt`. Its primary source-family comparison is recorded in `reference-research.json`. These recovered materials are not relicensed by the MIT license for new recovery tools. The exact linked OpenSSL patch is not established.


The eighteen BIO/memory-buffer translations and original memory-method descriptor in `reconstruction/bio-input/` preserve the legacy OpenSSL/SSLeay notices in its `OPENSSL-LICENSE.txt`. The runtime source is tied to original ESign instructions and exact public algorithm constants; source-family references are documented without identifying a unique linked patch. New analysis tools/tests do not relicense these recovered implementations.

The ASN.1 input and item-orchestration source in `reconstruction/asn1-input/` and `reconstruction/asn1-item/` preserves original-derived ESign/OpenSSL ownership and the respective OpenSSL/SSLeay notices. The item/template/cache/selector translations are tied to original ARM64 instructions. Reference source-family identification does not uniquely identify a linked patch release. Controlled constructors/destructors and primitive-value test callbacks are separate harness code, excluded from iOS archives.

The four ASN.1 primitive/converter/collector/non-explicit-template bodies in `reconstruction/asn1-value/` likewise preserve the adjacent OpenSSL/SSLeay notices. Original instruction evidence, the bounded converter dispatch table and controlled dependency fixtures distinguish these translations from current upstream or host-library implementations. ANY/string/stack/content-decoder test boundaries are excluded from iOS archives.

The twenty object-lifetime and value-storage bodies in `reconstruction/asn1-object/` retain the adjacent OpenSSL/SSLeay notices. Their source-family references, original instruction evidence, bounded tables and relocated ANY item remain separately auditable. The reconstruction does not identify an exact bundled patch release or relicense ESign. Controlled allocators, stack/content/object operations and ERR test boundaries are excluded from iOS archives.

The ten original stack, BIT STRING, OBJECT and INTEGER bodies in `reconstruction/asn1-primitives/` retain adjacent OpenSSL/SSLeay notices and original-derived ESign ownership. Their reference manifest records the examined OpenSSL 1.0.2u family files without uniquely identifying a bundled patch. The test ERR-reason/OID models and allocators remain harness-only and are excluded from iOS archives.


The relocated CMS schema and original CMS/LONG callbacks in `reconstruction/cms-schema/`, the name/certificate/CRL state in `reconstruction/x509-state/`, and the 27 DER encoding, canonical-name, ownership and legacy UTF8/multibyte bodies in `reconstruction/asn1-encoding/` preserve the respective adjacent OpenSSL/SSLeay notices. Exact original instructions and data remain authoritative; frozen primary source-family references do not establish an exact bundled patch or a license for the ESign application. Test-only ctype, sorting, comparison, error, allocation and unresolved-crypto models are excluded from the iOS archives.
