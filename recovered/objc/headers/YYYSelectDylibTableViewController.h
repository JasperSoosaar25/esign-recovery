// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d818
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSelectDylibTableViewController : QMUICommonTableViewController
// ivar _selectDylibs encoding=@"NSMutableArray" offset=16
// ivar _dataSource encoding=@"NSArray" offset=24
// ivar _confirmBlock encoding=@? offset=32
// property selectDylibs attributes=T@"NSMutableArray",&,N,V_selectDylibs
// property dataSource attributes=T@"NSArray",&,N,V_dataSource
// property confirmBlock attributes=T@?,C,N,V_confirmBlock
// IMP 0x10015cf78 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10015d720 | v16@0:8
- (void)confirmHandle;
// IMP 0x10015dac8 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10015db3c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10015dbcc | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10015df28 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10015e16c | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10015e1ec | @16@0:8
- (id)selectDylibs;
// IMP 0x10015e208 | v24@0:8@16
- (void)setSelectDylibs:(id)arg0;
// IMP 0x10015e294 | @16@0:8
- (id)dataSource;
// IMP 0x10015e2bc | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x10015e32c | @?16@0:8
- (id /* block */)confirmBlock;
// IMP 0x10015e360 | v24@0:8@?16
- (void)setConfirmBlock:(id /* block */)arg0;
// IMP 0x10015e3e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
