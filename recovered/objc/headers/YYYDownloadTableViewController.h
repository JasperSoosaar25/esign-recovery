// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7ea10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDownloadTableViewController : QMUICommonTableViewController
// ivar _popupAtBarButtonItem encoding=@"QMUIPopupMenuView" offset=16
// ivar _setupView encoding=@"YYYDownloadSetupView" offset=24
// property dataSource attributes=T@"NSMutableOrderedSet",R,N
// property popupAtBarButtonItem attributes=T@"QMUIPopupMenuView",&,N,V_popupAtBarButtonItem
// property setupView attributes=T@"YYYDownloadSetupView",&,N,V_setupView
// IMP 0x10021966c | v16@0:8
- (void)viewDidLoad;
// IMP 0x100219c48 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100219ee4 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x10021a070 | v16@0:8
- (void)initTableView;
// IMP 0x10021a47c | v24@0:8@16
- (void)rightBarButtonHandle:(id)arg0;
// IMP 0x10021a704 | v16@0:8
- (void)scanQRCode;
// IMP 0x10021a794 | v16@0:8
- (void)showInputAddress;
// IMP 0x10021b1e0 | v24@0:8@16
- (void)gotoUrl:(id)arg0;
// IMP 0x10021b9bc | v16@0:8
- (void)gotoBookmarkList;
// IMP 0x10021ba58 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10021ba60 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10021bb0c | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10021bb84 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10021bdf4 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10021bf98 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10021bffc | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10021d088 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10021d144 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x10021d308 | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10021d5ec | v32@0:8@16@24
- (void)shareWithPath:(id)arg0 inView:(id)arg1;
// IMP 0x10021dba4 | @16@0:8
- (id)dataSource;
// IMP 0x10021dc40 | @16@0:8
- (id)popupAtBarButtonItem;
// IMP 0x10021e86c | @16@0:8
- (id)setupView;
// IMP 0x10021ea08 | v24@0:8@16
- (void)setPopupAtBarButtonItem:(id)arg0;
// IMP 0x10021ea28 | v24@0:8@16
- (void)setSetupView:(id)arg0;
// IMP 0x10021eaa0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
