// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7a1d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCopyDylibViewController : QMUICommonTableViewController
// ivar _appPath encoding=@"NSString" offset=16
// ivar _dataSource encoding=@"NSArray" offset=24
// property dataSource attributes=T@"NSArray",&,N,V_dataSource
// property appPath attributes=T@"NSString",C,N,V_appPath
// IMP 0x10000437c | v16@0:8
- (void)viewDidLoad;
// IMP 0x10000473c | v16@0:8
- (void)popViewController;
// IMP 0x1000047f0 | v16@0:8
- (void)loadDylibs;
// IMP 0x100005cc0 | v16@0:8
- (void)confirmHandle;
// IMP 0x1000062cc | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100006328 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1000063e0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1000066d8 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100006870 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x1000068e4 | @16@0:8
- (id)appPath;
// IMP 0x10000690c | v24@0:8@16
- (void)setAppPath:(id)arg0;
// IMP 0x100006918 | @16@0:8
- (id)dataSource;
// IMP 0x10000694c | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1000069bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
