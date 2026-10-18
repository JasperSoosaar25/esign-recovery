// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81760
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAListViewController : QMUICommonTableViewController
// ivar _folder encoding=@"NSString" offset=16
// ivar _baseUrl encoding=@"NSString" offset=24
// ivar _password encoding=@"NSString" offset=32
// ivar _dataSource encoding=@"NSMutableArray" offset=40
// ivar _page encoding=q offset=48
// ivar _popupAtBarButtonItem encoding=@"QMUIPopupMenuView" offset=56
// property baseUrl attributes=T@"NSString",C,N,V_baseUrl
// property password attributes=T@"NSString",C,N,V_password
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property page attributes=Tq,N,V_page
// property popupAtBarButtonItem attributes=T@"QMUIPopupMenuView",&,N,V_popupAtBarButtonItem
// property folder attributes=T@"NSString",C,N,V_folder
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1003a5b58 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1003a5f08 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x1003a6300 | v16@0:8
- (void)initTableView;
// IMP 0x1003a6570 | v16@0:8
- (void)handleRightBarButtonItemEvent;
// IMP 0x1003a674c | v16@0:8
- (void)headerRefresh;
// IMP 0x1003a6d1c | v16@0:8
- (void)footerRefresh;
// IMP 0x1003a7238 | v16@0:8
- (void)loginHandle;
// IMP 0x1003a735c | v16@0:8
- (void)showLoginedInfo;
// IMP 0x1003a7a18 | v16@0:8
- (void)showLoginAlert;
// IMP 0x1003a8c38 | v16@0:8
- (void)login;
// IMP 0x1003a9304 | v24@0:8@16
- (void)showRenameAlertWithInfo:(id)arg0;
// IMP 0x1003aa598 | v16@0:8
- (void)createFolder;
// IMP 0x1003ab618 | v16@0:8
- (void)uploadFile;
// IMP 0x1003abd4c | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x1003acb74 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x1003acba0 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1003acc74 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1003ad348 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1003ad424 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1003aee54 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x1003afbb4 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1003b1394 | @16@0:8
- (id)popupAtBarButtonItem;
// IMP 0x1003b2ba8 | @16@0:8
- (id)folder;
// IMP 0x1003b2bc4 | v24@0:8@16
- (void)setFolder:(id)arg0;
// IMP 0x1003b2c50 | @16@0:8
- (id)baseUrl;
// IMP 0x1003b2c78 | v24@0:8@16
- (void)setBaseUrl:(id)arg0;
// IMP 0x1003b2c84 | @16@0:8
- (id)password;
// IMP 0x1003b2cbc | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x1003b2d3c | @16@0:8
- (id)dataSource;
// IMP 0x1003b2d64 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1003b2dbc | q16@0:8
- (long long)page;
// IMP 0x1003b2df0 | v24@0:8q16
- (void)setPage:(long long)arg0;
// IMP 0x1003b2e0c | v24@0:8@16
- (void)setPopupAtBarButtonItem:(id)arg0;
// IMP 0x1003b2e64 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
