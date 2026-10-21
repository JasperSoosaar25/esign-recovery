# Future native design work

Status: planning only. The recovered libraries now compile with Xcode 27.1/iOS 27.1 SDK, but the original app target and UI remain unreconstructed. No app UI or behavior was changed in this recovery. iOS 27 is the requested future test target; no compatibility result is claimed. Start after a source-built app target and baseline navigation exist.

Apple's [Liquid Glass adoption guide](https://developer.apple.com/documentation/technologyoverviews/adopting-liquid-glass) describes building with current Xcode/SDKs, using system controls and navigation, and reviewing custom backgrounds that may obscure the system appearance. [Build a UIKit app with the new design](https://developer.apple.com/videos/play/wwdc2025/284/) explains UIKit navigation, bars, presentations, search, and controls. These are design references, not proof that this recovered app already supports the target OS.

| Work item | ESign starting point | Acceptance evidence |
|---|---|---|
| Rebuild tabs and navigation with system components | `YYYTabBarViewController`, navigation-controller declarations, QMUI-related classes | Screens and interaction tests on iPhone 13 and iPad; scrolling and safe areas correct |
| Review existing appearance overrides | Reconstructed bar/background/tint setup | System effects visible; no overlapping backgrounds, clipped text, or misaligned hit areas |
| Use native sheets, menus, alerts, and action anchors | Signing options, certificate selection, file actions | Correct source anchors, keyboard behavior, rotation, and dismissal |
| Use glass sparingly for controls and navigation | Custom progress and toolbar views | Content remains legible; no stacked visual effects obscuring lists |
| Keep cyan/light-blue accents optional | Reconstructed theme/settings code | System, light, dark, and increased-contrast variants; readable selected/disabled states |
| Respect accessibility settings | All custom visual effects and animations | Reduce Transparency, Reduce Motion, Increase Contrast, Dynamic Type, and VoiceOver results |
| Check performance and platform availability | Original-device comparison plus new source target | Frame-time/memory measurements; availability guards for deployment targets |

Keep this work separate from signing-pipeline reconstruction. For the first implementation, record exact Xcode/SDK versions, device model, OS build, commit, and before/after screenshots. Consult [IOS27-TESTING.md](IOS27-TESTING.md) for the full functional matrix. Updating an Info.plist version or adding blur does not establish native system design adoption.
