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

This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/). This product includes cryptographic software written by Eric Young (eay@cryptsoft.com). Analysis models and controlled test callees are separate tooling, not runtime backend implementations or proof of complete RSA/PEM/CMS operation.
