// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80410
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppStoreSourceTableViewController : QMUICommonTableViewController
// ivar _dataSource encoding=@"NSMutableArray" offset=16
// ivar _toolView encoding=@"YYYListToolView" offset=24
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property toolView attributes=T@"YYYListToolView",&,N,V_toolView
// IMP 0x100301510 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1003020ac | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1003022e0 | v16@0:8
- (void)editItemHandle;
// IMP 0x100302cc8 | v16@0:8
- (void)selectAllItemHandle;
// IMP 0x1003036f4 | v16@0:8
- (void)deleteItemHandle;
// IMP 0x100304560 | v16@0:8
- (void)shareSourceHandle;
// IMP 0x100305408 | v16@0:8
- (void)refreshButtonState;
// IMP 0x100305a38 | v16@0:8
- (void)importAppStoreSource;
// IMP 0x100305a98 | v16@0:8
- (void)addHandle;
// IMP 0x100307054 | v24@0:8@16
- (void)addUrls:(id)arg0;
// IMP 0x100308f54 | v16@0:8
- (void)userAddSource;
// IMP 0x1003098cc | v24@0:8@16
- (void)addSourceWithUrl:(id)arg0;
// IMP 0x10030aca8 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10030ad6c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10030ad8c | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10030ae34 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
// IMP 0x10030ae64 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x10030aec0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10030b244 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10030b99c | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10030be90 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x10030bfc8 | @32@0:8@16@24
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
// IMP 0x10030cc9c | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10030ce78 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10030d084 | @16@0:8
- (id)dataSource;
// IMP 0x10030d0fc | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x10030d1a0 | @16@0:8
- (id)toolView;
// IMP 0x10030d1bc | v24@0:8@16
- (void)setToolView:(id)arg0;
// IMP 0x10030d1f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
