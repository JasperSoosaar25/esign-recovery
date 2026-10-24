# Build the recovered source in Xcode

The component build works from a normal clone; it does not need the original IPA or restored analysis archives. Open `ESignRecovery.xcodeproj` in Xcode, select the shared **RecoveredComponents** scheme and a generic iOS device destination, then choose **Product > Build**. It builds nineteen separate arm64 iOS static libraries directly from the reviewed source under `reconstruction/`. No Apple account, signing identity or attached phone is needed for these library builds.

From a Mac with Xcode:

```sh
python3 scripts/build_component_project.py
```

This verifies project generation, asks Xcode to list and build all targets, checks the nineteen output archives' arm64 architecture, and saves library/source/project hashes and the actual toolchain in `build/xcode-components/build-report.json`. The libraries appear under `build/xcode-components/libraries/`. CI preserves them together as a downloadable artifact. The existing individual component jobs separately compare behavior with original-instruction fixtures and check applicable Objective-C class ABI/layout.

This project is new build configuration for recovered components. It is not the author's project or an application target. It has no runnable UI or app bundle and produces no IPA. The compiler/archive stage does not resolve the missing original crypto/parser/global dependencies. The remaining allocation/ERR operations and CMS schema/callbacks, certificate/P12 implementation, full signing orchestration and application/UI still need recovery before an original app can link and run. Harness substitutes and the original executable are excluded from these targets. The scalar-accessor evidence fragments are not complete runtime class implementations and are excluded too.

Dependencies are built once: load commands use the Mach header/base library, requirements use signature containers, the RSA wrapper uses selected legacy crypto helpers, selected legacy crypto and profile code use the recovered BIO input library, the ASN.1 input library also uses that BIO source, the profile class uses the recovered CMS content accessor, and CMS content uses the recovered original OID lookup. A future app must link those archives once and supply the remaining original implementations. The static archives do not merge dependency archives or establish full-app linking/parity. Foundation/CommonCrypto calls remain original platform dependencies. The recovered library build target is iOS 15.0, matching current Xcode support. Original input metadata still requests iOS 11.0; only an actual tested OS/device result can establish compatibility.

`components.json` is the reviewed source/target manifest. Update it when adding a verified component, then run:

```sh
python3 scripts/generate_component_project.py
python3 scripts/generate_component_project.py --verify
```

The generated project contains no new app-runtime implementation. It preserves component source boundaries and uses the same unoptimized compiler mode as the existing behavior harnesses. Preserve each component's ownership, evidence and dependency notices. Read `DEVELOPMENT.md`, `docs/SIGNING-DEPENDENCIES.md` and `docs/BUILD-STATUS.md` before attempting app integration.

The [verified nineteen-target build](../docs/builds/component-project-722fbfdb.json) records source commit `722fbfdb`, all arm64 archives, exact project/source hashes, Xcode 27.1/iOS 27.1 and the downloadable artifact. Individual OID, CMS and profile reports separately record native behavior and composition checks.

The BIO target contains actual recovered method callbacks and buffer code. Its test-only allocator/refcount/ex-data/error adapters are excluded. The [current native component catalog](../docs/builds/all-components-722fbfdb.json) separately compares the source with original instruction execution; archive compilation does not supply the missing original backend primitives or CMS/certificate decoder.


The ASN.1 input target adds the original header/length reader, BIO object reader and two item-entry wrappers. Its [native report](../docs/builds/asn1-input-bfe2c88d.json) checks 376 original-instruction fixtures, including 33 memory-BIO compositions. The item body is now supplied by the ASN.1 item target. Primitive and non-explicit decoding now continue through the value target. Original construction/destruction and string storage now continue through the object target. The primitive target now supplies the parser's content and stack operations. ERR/allocator implementations remain unresolved. Its archive contains no harness substitutes or CMS schema replacement.


The ASN.1 item target supplies the main item body and seven helpers, reusing the existing header parser. Its [Apple report](../docs/builds/asn1-item-6e6b3629.json) records 783 comparisons, including 56 real entry-wrapper compositions. ASN.1 input and item libraries reference one another at the symbol level; archive target ordering is not a full link. A future application must link each archive once and supply the remaining original bodies. The [complete current component catalog](../docs/builds/all-components-722fbfdb.json) retains all nineteen native reports and artifact links.


The ASN.1 value target supplies the primitive decoder, value converter, specialized string collector and non-explicit template parser. Its 2,065 original/native comparisons exercise 920/923 instructions; 541 compositions include 18 complete memory-BIO-to-value chains. The archive contains only these original body translations. The object target now supplies String/ANY/item construction and cleanup. The primitive target supplies content-to-object/bit/integer conversion and the required stack operations. ERR/allocator implementations remain external. Read [its source/evidence guide](../reconstruction/asn1-value/) and [the latest verified report index](../docs/builds/latest.json).


The ASN.1 object target supplies twenty original construction/destruction, string, ANY, reference/cache and integer-retrieval bodies. It reuses the value/item/input/BIO targets. Its 1,775 comparisons exercise all 959 original instructions; 48 parser compositions include sixteen full memory-BIO-to-value paths. The relocated original ANY descriptor is checked natively. The archive excludes all controlled test boundaries. Read [the component guide](../reconstruction/asn1-object/) and [latest verified reports](../docs/builds/latest.json) before integration.


The ASN.1 primitive target supplies six original stack operations, encoded BIT STRING/OBJECT/INTEGER conversion and OBJECT cleanup. Its 1,010 comparisons exercise all 552 original instructions, with 138 parser compositions including 32 full memory-BIO-to-value paths. It reuses the existing object/value/item/input/BIO targets and excludes controlled allocator/ERR/OID test models. Read [its guide](../reconstruction/asn1-primitives/) and the [latest verified reports](../docs/builds/latest.json). CMS schemas/callbacks, certificate/P12, full signing and most application/UI implementations remain unfinished.
