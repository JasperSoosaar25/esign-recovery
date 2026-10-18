// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d778
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBookmarksViewController : QMUICommonTableViewController
// ivar _dataSource encoding=@"NSMutableArray" offset=16
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// IMP 0x10014a5c8 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10014a7f4 | v16@0:8
- (void)addHandle;
// IMP 0x10014b444 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10014b458 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10014b4f8 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10014bc68 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x10014cc14 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10014d370 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10014d3c0 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x10014d58c | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10014d794 | @16@0:8
- (id)dataSource;
// IMP 0x10014d858 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x10014d8d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
