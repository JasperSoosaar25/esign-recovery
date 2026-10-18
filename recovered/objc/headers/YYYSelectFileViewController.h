// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e920
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSelectFileViewController : QMUICommonTableViewController
// ivar _multipleSelection encoding=B offset=16
// ivar _currentDirPath encoding=@"NSString" offset=24
// ivar _selectFileTypes encoding=@"NSArray" offset=32
// ivar _selectFileBlock encoding=@? offset=40
// ivar _selectFiles encoding=@"NSMutableArray" offset=48
// ivar _selectFilesBlock encoding=@? offset=56
// ivar _dataSource encoding=@"NSMutableArray" offset=64
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property currentDirPath attributes=T@"NSString",C,N,V_currentDirPath
// property selectFileTypes attributes=T@"NSArray",&,N,V_selectFileTypes
// property multipleSelection attributes=TB,N,V_multipleSelection
// property selectFileBlock attributes=T@?,C,N,V_selectFileBlock
// property selectFiles attributes=T@"NSMutableArray",&,N,V_selectFiles
// property selectFilesBlock attributes=T@?,C,N,V_selectFilesBlock
// IMP 0x1001fad88 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001fb404 | v16@0:8
- (void)confirmItemHandle;
// IMP 0x1001fb530 | v16@0:8
- (void)loadFiles;
// IMP 0x1001fc028 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1001fc0ec | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1001fccf8 | v32@0:8@16@24
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
// IMP 0x1001fcec0 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1001fd420 | B32@0:8@16@24
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
// IMP 0x1001fd670 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x1001fd74c | v16@0:8
- (void)popViewController;
// IMP 0x1001fd790 | v16@0:8
- (void)initTableView;
// IMP 0x1001fd870 | @16@0:8
- (id)selectFiles;
// IMP 0x1001fd93c | @16@0:8
- (id)currentDirPath;
// IMP 0x1001fd958 | v24@0:8@16
- (void)setCurrentDirPath:(id)arg0;
// IMP 0x1001fd9d8 | @16@0:8
- (id)selectFileTypes;
// IMP 0x1001fda0c | v24@0:8@16
- (void)setSelectFileTypes:(id)arg0;
// IMP 0x1001fda84 | B16@0:8
- (BOOL)multipleSelection;
// IMP 0x1001fdab8 | v20@0:8B16
- (void)setMultipleSelection:(BOOL)arg0;
// IMP 0x1001fdae0 | @?16@0:8
- (id /* block */)selectFileBlock;
// IMP 0x1001fdb08 | v24@0:8@?16
- (void)setSelectFileBlock:(id /* block */)arg0;
// IMP 0x1001fdb90 | v24@0:8@16
- (void)setSelectFiles:(id)arg0;
// IMP 0x1001fdc1c | @?16@0:8
- (id /* block */)selectFilesBlock;
// IMP 0x1001fdc50 | v24@0:8@?16
- (void)setSelectFilesBlock:(id /* block */)arg0;
// IMP 0x1001fdcd0 | @16@0:8
- (id)dataSource;
// IMP 0x1001fdd08 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1001fdd34 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
