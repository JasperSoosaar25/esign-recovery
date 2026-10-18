# Source search and identity

Checked 17 October 2026. Searches covered ESign 5.0.2, `yyyue`, `p3.xyz.yyyue.esign`, Objective-C projects, `轻松签`, `源码`, and `开源`. Public indexing and inspected repositories did not yield a verified release of the original native project. This is a bounded search result, not proof that private or unindexed source does not exist.

Rechecked 18 October 2026: the developer site still exposes a service-expiry notice, and the inspected `adamfernn/Esign-SOURCE` tree still lists documentation, a license, and screenshots rather than native implementation. English and Chinese source searches did not produce a verified original project. The new requested Pixeldrain link could not be fetched; cached-input verification must not be represented as verification of that link. [Input provenance](INPUT-PROVENANCE.md) records this distinction.

| Candidate | Inspected primary evidence | Finding |
|---|---|---|
| [Developer site](https://esign.yyyue.xyz/) | Home page | App information; warns the server will expire and will not be renewed. No native source project linked on the inspected page. |
| [nooptr/esign](https://github.com/nooptr/esign/tree/e48b19239ea1b1c725134350db8ab1a15ce3ff88) | Recursive tree at `e48b19239ea1b1c725134350db8ab1a15ce3ff88` | README plus a compiled IPA. Blob `a21c4b8b95f3bef2535e32f4ccf59b83fcc9ae85`, 7,522,792 bytes, matches the supplied IPA. |
| [iOS17/Esign](https://github.com/iOS17/Esign/tree/d7aa9f32160e847e0df7ba4635144ef68e72ad82) | Tree | README only, not native app source. |
| [adamfernn/Esign-SOURCE](https://github.com/adamfernn/Esign-SOURCE/tree/e028f95d3d34273e45347e0a6f7406672ab1b7ce) | Tree rechecked in this pass | README, license, and two screenshots. No native implementation. |
| [devnoname120/ESignClean](https://github.com/devnoname120/ESignClean) | Project README/tree in the earlier evidence record | A tweak for the compiled ESign app; does not supply its original implementation. |
| [Nyasami/Ksign](https://github.com/Nyasami/Ksign) | Project README in the earlier evidence record | Describes recreating ESign with Feather as its base. A separate application. |

Repository names such as “SOURCE”, download claims, or a generic license file were not accepted as evidence of the original native implementation. Neither Feather nor KravaSigner was substituted for ESign. The exact IPA was also rechecked directly: ZIP integrity passes, the executable hash matches the saved recovery, and the resource/metadata/native-byte comparison is recorded in `verification-input.json`.

The original developer site lists service availability risks. Future source reconstruction should separate local signing from external services and test service-dependent flows explicitly; this repository does not promise that those services remain functional.
