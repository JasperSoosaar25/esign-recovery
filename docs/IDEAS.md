# Ideas for future development

These are repository proposals, not implemented features. Preserve baseline evidence so future behavior changes can be reviewed.

| Idea | User benefit | Prerequisite / verification |
|---|---|---|
| Optional cyan and light-blue appearance | A cozy personal theme alongside system appearance | Reconstructed UI; light/dark, contrast, tint, and Dynamic Type checks |
| Native iOS 27 layout and appearance review | Predictable padding, safe areas, navigation, and accessibility | Build using the actual SDK and compare real screens on iPhone/iPad |
| Native Liquid Glass navigation and controls | Keep the app consistent with current Apple UI | Follow [the design plan](LIQUID-GLASS.md), remove conflicting custom bar backgrounds, and test accessibility and scrolling |
| Local certificate expiry and entitlement diagnostics | Explain why a sign/install attempt fails before wasting time | Certificate/profile parser; controlled fixtures; no private keys in logs |
| Clear dependency on external services | Help users distinguish local failures from unavailable servers | Reconstructed networking and service-failure tests |
| Private, exportable diagnostics | Easier bug reports with useful error context | Explicit redaction of keys, UDIDs, profile identities, paths, and tokens |
| Repository import validation and clearer errors | Make community sources easier to maintain | Defined schema, test fixtures, malformed/untrusted-input handling |
| Signing job progress and cancellation | Make long operations understandable and recoverable | Reconstructed signing engine; atomic output and cancellation tests |
| Accessibility and localized long-text checks | Keep the app usable with larger text and more languages | Real screen tests, VoiceOver, RTL, small screens, and keyboard support |

Security/privacy changes need evidence of current behavior first. No claim is made here that a particular telemetry path was removed or any signing protection changed.
