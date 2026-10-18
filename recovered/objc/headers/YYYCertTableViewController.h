// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80280
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCertTableViewController : QMUICommonTableViewController
// ivar _dataSource encoding=@"NSMutableArray" offset=16
// ivar _finishCount encoding=q offset=24
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property finishCount attributes=Tq,N,V_finishCount
// IMP 0x1002f1300 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1002f1778 | v16@0:8
- (void)initTableView;
// IMP 0x1002f1aec | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1002f1bd4 | v16@0:8
- (void)loadData;
// IMP 0x1002f4128 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x1002f41a8 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1002f423c | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1002f45cc | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1002f4760 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1002f4cc0 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1002f512c | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x1002f51ac | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x1002f53b4 | @32@0:8@16@24
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
// IMP 0x1002f5fa8 | v32@0:8@16@24
- (void)shareCert:(id)arg0 atCell:(id)arg1;
// IMP 0x1002f67c4 | @16@0:8
- (id)dataSource;
// IMP 0x1002f6888 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1002f6938 | q16@0:8
- (long long)finishCount;
// IMP 0x1002f696c | v24@0:8q16
- (void)setFinishCount:(long long)arg0;
// IMP 0x1002f6988 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
