# Toolchain maintenance — 21 October 2026

| Tool | Current configuration | Verification |
| --- | --- | --- |
| Capstone | 5.0.9, pinned in requirements-recovery.txt | Updated from 5.0.6; all existing byte/flow verifiers and component comparisons rerun without changing baseline archives |
| Unicorn | 2.1.4 | Current published version checked; original-instruction tests retained |
| actions/checkout | v7.0.1, commit 3d3c42e5aac5ba805825da76410c181273ba90b1 | Existing pin already matches current release |
| actions/upload-artifact | v7.0.2, commit cf430e030ddbb5b0abf93d22962f4752f3646cd9 | Existing pin already matches current release |
| REA | Published 6.7.0, isolated optional tool | Actual IPA inventory/Apple projection recorded in [REA.md](REA.md); no app runtime dependency |
| Apple CI runner | xcode-27, selecting Xcode 27.1 explicitly | Stable 27.1 selected rather than the installed 27.2 beta; actual build reports record toolchain/SDK |
| Library deployment target | arm64 iOS 15.0 | Aligns with current Xcode supported targets; original input metadata remains iOS 11.0 |

The main verification workflow checks every component, all recovery tools and the generated Xcode project. Obsolete branch-specific BIO/ASN.1 generation workflows were replaced with one manual **Inspect selected original dependencies** workflow. It retains selected public algorithm study JSON, never an IPA, executable or signing inputs. The original scripts remain reproducible and the ASN.1 study now follows the complete bounded seven-way item dispatch.

The [current runner inventory](https://github.com/actions/runner-images/blob/main/images/macos/xcode-27-arm64-Readme.md) and [Apple's SDK requirements](https://developer.apple.com/xcode/system-requirements/) establish tool availability and supported deployment targets. Availability is distinct from a passing build. Historical reports preserve the exact Xcode 16.4/iOS 18.5 results for their historical commits. New reports must identify the actual tested source commit and SDK; an SDK build alone does not establish iOS runtime compatibility or a complete ESign application.
