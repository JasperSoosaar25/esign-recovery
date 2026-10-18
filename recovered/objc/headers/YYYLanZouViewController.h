// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7be48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYLanZouViewController : QMUICommonTableViewController
// ivar _needRefresh encoding=B offset=16
// ivar _folderId encoding=@"NSString" offset=24
// ivar _folderList encoding=@"NSMutableArray" offset=32
// ivar _dataSource encoding=@"NSMutableArray" offset=40
// ivar _loginItem encoding=@"UIBarButtonItem" offset=48
// ivar _userName encoding=@"NSString" offset=56
// ivar _password encoding=@"NSString" offset=64
// ivar _page encoding=q offset=72
// ivar _qrCodeView encoding=@"YYYLanZouQRCodeView" offset=80
// ivar _addButton encoding=@"UIButton" offset=88
// property folderList attributes=T@"NSMutableArray",&,N,V_folderList
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property loginItem attributes=T@"UIBarButtonItem",&,N,V_loginItem
// property userName attributes=T@"NSString",C,N,V_userName
// property password attributes=T@"NSString",C,N,V_password
// property page attributes=Tq,N,V_page
// property qrCodeView attributes=T@"YYYLanZouQRCodeView",&,N,V_qrCodeView
// property addButton attributes=T@"UIButton",&,N,V_addButton
// property needRefresh attributes=TB,N,V_needRefresh
// property folderId attributes=T@"NSString",C,N,V_folderId
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1003fe93c | v16@0:8
- (void)loginSetup;
// IMP 0x1003ff180 | v16@0:8
- (void)refreshLoginItemTitle;
// IMP 0x1003ff4bc | v16@0:8
- (void)login;
// IMP 0x1004004f0 | v16@0:8
- (void)loginHandle;
// IMP 0x100402568 | B16@0:8
- (BOOL)isLogin;
// IMP 0x100042244 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100042368 | v16@0:8
- (void)initTableView;
// IMP 0x100042d8c | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x100042efc | v16@0:8
- (void)createFolder;
// IMP 0x1000442c0 | v16@0:8
- (void)uploadFile;
// IMP 0x100044898 | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x1000457b4 | v16@0:8
- (void)addButtonHandle;
// IMP 0x100045bd8 | v16@0:8
- (void)headerRefresh;
// IMP 0x1000466f8 | v16@0:8
- (void)footerRefresh;
// IMP 0x100046c68 | v32@0:8@16@?24
- (void)getFileInfoWithFileListModel:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1000473f8 | v24@0:8@16
- (void)deleteFileAtIndexPath:(id)arg0;
// IMP 0x100047ca4 | v24@0:8@16
- (void)showMoveFileToFolderAtIndexPath:(id)arg0;
// IMP 0x100049294 | v24@0:8@16
- (void)moveFileNoti:(id)arg0;
// IMP 0x10004961c | v24@0:8@16
- (void)showSharedQRCodeAtIndexPath:(id)arg0;
// IMP 0x1000498e0 | v24@0:8@16
- (void)setupPwdAtIndexPath:(id)arg0;
// IMP 0x10004aca4 | v24@0:8@16
- (void)closeFileLockAtIndexPath:(id)arg0;
// IMP 0x10004b434 | v24@0:8@16
- (void)downloadFileAtIndexPath:(id)arg0;
// IMP 0x10004c508 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10004c534 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10004c6b4 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
// IMP 0x10004c9b4 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10004d7e0 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x10004e9dc | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10004ed1c | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10004edb8 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x10004ee6c | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10004f7a0 | v16@0:8
- (void)loadSubviews;
// IMP 0x100051c98 | @16@0:8
- (id)folderId;
// IMP 0x100051ccc | v24@0:8@16
- (void)setFolderId:(id)arg0;
// IMP 0x100051cf0 | @16@0:8
- (id)folderList;
// IMP 0x100051d18 | v24@0:8@16
- (void)setFolderList:(id)arg0;
// IMP 0x100051db0 | @16@0:8
- (id)dataSource;
// IMP 0x100051dcc | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100051e10 | @16@0:8
- (id)loginItem;
// IMP 0x100051e38 | v24@0:8@16
- (void)setLoginItem:(id)arg0;
// IMP 0x100051e90 | @16@0:8
- (id)userName;
// IMP 0x100051eb8 | v24@0:8@16
- (void)setUserName:(id)arg0;
// IMP 0x100051f34 | @16@0:8
- (id)password;
// IMP 0x100051f68 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x100051ff0 | q16@0:8
- (long long)page;
// IMP 0x100052028 | v24@0:8q16
- (void)setPage:(long long)arg0;
// IMP 0x100052050 | @16@0:8
- (id)qrCodeView;
// IMP 0x10005206c | v24@0:8@16
- (void)setQrCodeView:(id)arg0;
// IMP 0x100052108 | @16@0:8
- (id)addButton;
// IMP 0x100052124 | v24@0:8@16
- (void)setAddButton:(id)arg0;
// IMP 0x10005215c | B16@0:8
- (BOOL)needRefresh;
// IMP 0x100052184 | v20@0:8B16
- (void)setNeedRefresh:(BOOL)arg0;
// IMP 0x1000521ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
