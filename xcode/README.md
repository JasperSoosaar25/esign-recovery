# Build the recovered source in Xcode

The component build works from a normal clone; it does not need the original IPA or restored analysis archives. Open `ESignRecovery.xcodeproj` in Xcode, select the shared **RecoveredComponents** scheme and a generic iOS device destination, then choose **Product > Build**. It builds fourteen separate arm64 iOS static libraries directly from the reviewed source under `reconstruction/`. No Apple account, signing identity or attached phone is needed for these library builds.

From a Mac with Xcode:

```sh
python3 scripts/build_component_project.py
```

This verifies project generation, asks Xcode to list and build all targets, checks the fourteen output archives' arm64 architecture, and saves library/source/project hashes and the actual toolchain in `build/xcode-components/build-report.json`. The libraries appear under `build/xcode-components/libraries/`. CI preserves them together as a downloadable artifact. The existing individual component jobs separately compare behavior with original-instruction fixtures and check applicable Objective-C class ABI/layout.

This project is new build configuration for recovered components. It is not the author's project or an application target. It has no runnable UI or app bundle and produces no IPA. The compiler/archive stage does not resolve the missing original crypto/parser/global dependencies. The BIO/CMS decoder, certificate/P12 implementation, full signing orchestration and application/UI still need recovery before an original app can link and run. Harness substitutes and the original executable are excluded from these targets. The scalar-accessor evidence fragments are not complete runtime class implementations and are excluded too.

Dependencies are built once: load commands use the Mach header/base library, requirements use signature containers, the RSA wrapper uses selected legacy crypto helpers, selected legacy crypto and profile code use the recovered BIO input library, the profile class uses the recovered CMS content accessor, and CMS content uses the recovered original OID lookup. A future app must link those archives once and supply the remaining original implementations. The static archives do not merge dependency archives or establish full-app linking/parity. Foundation/CommonCrypto calls remain original platform dependencies. Original deployment metadata requests iOS 11.0; only an actual tested OS/device result can establish compatibility.

`components.json` is the reviewed source/target manifest. Update it when adding a verified component, then run:

```sh
python3 scripts/generate_component_project.py
python3 scripts/generate_component_project.py --verify
```

The generated project contains no new app-runtime implementation. It preserves component source boundaries and uses the same unoptimized compiler mode as the existing behavior harnesses. Preserve each component's ownership, evidence and dependency notices. Read `DEVELOPMENT.md`, `docs/SIGNING-DEPENDENCIES.md` and `docs/BUILD-STATUS.md` before attempting app integration.

The [verified fourteen-target build](../docs/builds/component-project-d49c5f05.json) records source commit `d49c5f05`, all arm64 archives, exact project/source hashes, Xcode 16.4/iOS 18.5 and the downloadable artifact. Individual OID, CMS and profile reports separately record native behavior and composition checks.

The BIO target contains actual recovered method callbacks and buffer code. Its test-only allocator/refcount/ex-data/error adapters are excluded. The [native BIO report](../docs/builds/bio-input-d49c5f05.json) separately compares the source with original instruction execution; archive compilation does not supply the missing original backend primitives or CMS/certificate decoder.
