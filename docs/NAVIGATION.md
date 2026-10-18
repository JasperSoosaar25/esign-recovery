# Find the recovered implementation

Start with the class declaration and its app-focused pseudocode. Both are derived from the cached baseline identified in [INPUT-PROVENANCE.md](INPUT-PROVENANCE.md). Names and selectors are evidence; intended responsibilities below are navigation inferences and need confirmation from code and tests.

| Area | Declaration | Decompiled excerpt |
|---|---|---|
| App startup | [AppDelegate.h](../recovered/objc/headers/AppDelegate.h) | [AppDelegate](../recovered/app-pseudocode/AppDelegate.pseudo.m) |
| Main tabs | [YYYTabBarViewController.h](../recovered/objc/headers/YYYTabBarViewController.h) | [YYYTabBarViewController](../recovered/app-pseudocode/YYYTabBarViewController.pseudo.m) |
| Files and import | [YYYFileListViewController.h](../recovered/objc/headers/YYYFileListViewController.h) | [YYYFileListViewController](../recovered/app-pseudocode/YYYFileListViewController.pseudo.m) |
| App signing | [YYYSignHelper.h](../recovered/objc/headers/YYYSignHelper.h) | [YYYSignHelper](../recovered/app-pseudocode/YYYSignHelper.pseudo.m) |
| Signing options | [YYYSignConfigViewController.h](../recovered/objc/headers/YYYSignConfigViewController.h) | [YYYSignConfigViewController](../recovered/app-pseudocode/YYYSignConfigViewController.pseudo.m) |
| Certificate model | [YYYCertModel.h](../recovered/objc/headers/YYYCertModel.h) | [YYYCertModel](../recovered/app-pseudocode/YYYCertModel.pseudo.m) |
| PKCS#12 parsing | [YYYP12.h](../recovered/objc/headers/YYYP12.h) | [YYYP12](../recovered/app-pseudocode/YYYP12.pseudo.m) |
| Provisioning profiles | [YYYMobileprovision.h](../recovered/objc/headers/YYYMobileprovision.h) | [YYYMobileprovision](../recovered/app-pseudocode/YYYMobileprovision.pseudo.m) |
| App installation | [YYYAppInstall.h](../recovered/objc/headers/YYYAppInstall.h) | [YYYAppInstall](../recovered/app-pseudocode/YYYAppInstall.pseudo.m) |
| Sources | [YYYSourceManager.h](../recovered/objc/headers/YYYSourceManager.h) | [YYYSourceManager](../recovered/app-pseudocode/YYYSourceManager.pseudo.m) |
| Archive handling | [YYYArchive.h](../recovered/objc/headers/YYYArchive.h) | [YYYArchive](../recovered/app-pseudocode/YYYArchive.pseudo.m) |
| Settings | [YYYSettingTableViewController.h](../recovered/objc/headers/YYYSettingTableViewController.h) | [YYYSettingTableViewController](../recovered/app-pseudocode/YYYSettingTableViewController.pseudo.m) |

Each excerpt records selector, implementation address, ABI encoding, and the Ghidra function body. Search [methods.tsv](../recovered/objc/methods.tsv) for other classes/selectors. After unpacking the snapshot, `recovered/decompiled/functions.tsv` locates the full native export for an address; `recovered/disassembly/` contains original machine bytes. `recovered/analysis/static-branches.tsv` supplements unresolved indirect jumps using initial pointer values.

The full snapshot also restores `recovered/resources/`, including original uploader HTML/JavaScript/CSS source as actually shipped, compiled storyboards, localization files, and other bundle resources. Those web files are authentic source resources; they are not the missing native iOS implementation.

The [expanded method index](../analysis/app-methods/methods.tsv) covers every indexed app-candidate method, including explicit unknown jumps. Run `python3 scripts/read_method_trace.py YYYSignHelper 'preSignWithOption:'` for annotated original assembly. The [dispatch guide](DISPATCH-RECOVERY.md) explains selector mappings, compressed records, and their verification limits.

Do not interpret a tiny indirect-call body as a complete method. Read [RECOVERY.md](RECOVERY.md) before reconstructing behavior. New implementation belongs in a separate future `src/` tree with original address references and behavior tests. There is no current app target to open in Xcode.
