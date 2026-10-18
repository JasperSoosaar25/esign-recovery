// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80500
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDAVFileListViewController : QMUICommonTableViewController
// ivar _davManager encoding=@"YYYWebDAVManager" offset=16
// ivar _folderURI encoding=@"NSString" offset=24
// ivar _popupAtBarButtonItem encoding=@"QMUIPopupMenuView" offset=32
// ivar _dataSource encoding=@"NSMutableArray" offset=40
// property popupAtBarButtonItem attributes=T@"QMUIPopupMenuView",&,N,V_popupAtBarButtonItem
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property davManager attributes=T@"YYYWebDAVManager",&,N,V_davManager
// property folderURI attributes=T@"NSString",C,N,V_folderURI
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10030e7f8 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10030e87c | v16@0:8
- (void)headerRefresh;
// IMP 0x10030f3d0 | v16@0:8
- (void)createFolder;
// IMP 0x10031059c | v24@0:8@16
- (void)showRenameAlertWithInfo:(id)arg0;
// IMP 0x100311c08 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100311c54 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100311ce4 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1003121f8 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100312308 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100313b54 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1003146a8 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x1003147c0 | v24@0:8@16
- (void)showDeleteConfirmWithInfo:(id)arg0;
// IMP 0x100315420 | v24@0:8@16
- (void)showScheetWithInfo:(id)arg0;
// IMP 0x1003170c8 | v16@0:8
- (void)uploadFile;
// IMP 0x1003177e8 | v24@0:8@16
- (void)uploadFileWithPath:(id)arg0;
// IMP 0x100317f3c | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x100318edc | v16@0:8
- (void)handleRightBarButtonItemEvent;
// IMP 0x100319118 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x10031939c | v16@0:8
- (void)initTableView;
// IMP 0x1003194b8 | @16@0:8
- (id)popupAtBarButtonItem;
// IMP 0x100319cd0 | @16@0:8
- (id)davManager;
// IMP 0x100319d04 | v24@0:8@16
- (void)setDavManager:(id)arg0;
// IMP 0x100319d68 | @16@0:8
- (id)folderURI;
// IMP 0x100319d9c | v24@0:8@16
- (void)setFolderURI:(id)arg0;
// IMP 0x100319dc0 | v24@0:8@16
- (void)setPopupAtBarButtonItem:(id)arg0;
// IMP 0x100319e30 | @16@0:8
- (id)dataSource;
// IMP 0x100319e64 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100319ed0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
