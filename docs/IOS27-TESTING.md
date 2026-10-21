# iOS 27 verification and screenshot plan

Current build evidence: all sixteen recovered static libraries compile with Xcode 27.1 and the iOS 27.1 SDK. This matrix still requires an actual app and device/simulator tests; library compilation does not mark its runtime checks complete. See [the current build report](builds/component-project-6e6b3629.json).

**Status: not run.** The available local host is Linux and has no Xcode, iOS simulator, attached iPhone, or connected iOS testing service. The supplied executable is a device arm64 binary built with the iPhoneOS 16.2 SDK. It cannot be treated as a simulator build simply by changing its platform metadata.

No source-only replacement app exists yet. A mockup, extracted storyboard, browser rendering, or unrelated development harness would not prove the supplied application runs on iOS 27. None is presented as a running-app screenshot.

## Comparison matrix

Run both a properly signed copy of the baseline and the future reconstruction on the same controlled device/setup. Record device model, exact iOS build, source commit, Xcode/SDK, input IPA hash, fixture identities, result, and relevant logs. Use test apps and signing material you control.

| Flow | Baseline on iOS 27 | Future source build on iOS 27 |
|---|---|---|
| Launch, initial agreement, foreground/background | Not tested | No app build yet |
| File browsing, Files import, share/open-in | Not tested | No app build yet |
| Archive extraction, file actions, document viewers | Not tested | No app build yet |
| Certificate/profile import and invalid-input errors | Not tested | No app build yet |
| Signing a harmless owned fixture | Not tested | No app build yet |
| Installation and first launch of the signed fixture | Not tested | No app build yet |
| Source import, browsing, downloads, network failures | Not tested | No app build yet |
| Settings, light/dark, Dynamic Type, RTL, safe areas | Not tested | No app build yet |
| Persistence, relaunch, cancellation, interrupted jobs | Not tested | No app build yet |

## Screenshot evidence

Capture first launch, file browser, app details, signing configuration, progress/result, source browser, and settings. Include light/dark and large-text views where relevant. Save a sidecar record with the exact device/OS/build and source commit. Redact signing identities and private device details. Mark every screenshot as baseline or reconstruction; do not reuse old-version screenshots as iOS 27 evidence.

The native design review should test iPhone 13 as a priority, plus a smaller viewport and iPad. A successful launch is only a startup check. Signing, installing, service availability, and UI parity each need their own results.
