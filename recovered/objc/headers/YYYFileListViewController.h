// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7ceb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYFileListViewController : QMUICommonTableViewController
// ivar _needReload encoding=B offset=16
// ivar _isRootDir encoding=B offset=17
// ivar _dirPath encoding=@"NSString" offset=24
// ivar _dataSource encoding=@"NSMutableArray" offset=32
// ivar _searchResults encoding=@"NSMutableArray" offset=40
// ivar _previewDataSource encoding=@"NSArray" offset=48
// ivar _popupAtBarButtonItem encoding=@"QMUIPopupMenuView" offset=56
// ivar _toolBar encoding=@"UIToolbar" offset=64
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property searchResults attributes=T@"NSMutableArray",&,N,V_searchResults
// property previewDataSource attributes=T@"NSArray",&,N,V_previewDataSource
// property popupAtBarButtonItem attributes=T@"QMUIPopupMenuView",&,N,V_popupAtBarButtonItem
// property needReload attributes=TB,N,V_needReload
// property isRootDir attributes=TB,N,V_isRootDir
// property toolBar attributes=T@"UIToolbar",&,N,V_toolBar
// property dirPath attributes=T@"NSString",C,N,V_dirPath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100118b64 | v16@0:8
- (void)createFolder;
// IMP 0x1001197cc | v16@0:8
- (void)createFile;
// IMP 0x100117380 | v16@0:8
- (void)importFiles;
// IMP 0x100117a78 | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x1001105e0 | v24@0:8@16
- (void)showFolderViewWithFile:(id)arg0;
// IMP 0x10011070c | v24@0:8@16
- (void)showPreviewWithFile:(id)arg0;
// IMP 0x1001171a0 | q24@0:8@16
- (long long)numberOfPreviewItemsInPreviewController:(id)arg0;
// IMP 0x1001171dc | @32@0:8@16q24
- (id)previewController:(id)arg0 previewItemAtIndex:(long long)arg1;
// IMP 0x100117288 | v24@0:8@16
- (void)playerViewControllerWillStopPictureInPicture:(id)arg0;
// IMP 0x10010fa34 | v24@0:8@16
- (void)didDismissSearchController:(id)arg0;
// IMP 0x10010fafc | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x10010b524 | v24@0:8@16
- (void)unzipFile:(id)arg0;
// IMP 0x10010c8cc | v24@0:8@16
- (void)zipFile:(id)arg0;
// IMP 0x10010d2d0 | v32@0:8@16@?24
- (void)zipFiles:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x10010dbf0 | v40@0:8@16@24@?32
- (void)zipFiles:(id)arg0 password:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x10010f010 | v32@0:8@16@24
- (void)zipFile:(id)arg0 password:(id)arg1;
// IMP 0x1000af7f4 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1000b0084 | B16@0:8
- (BOOL)shouldCustomizeNavigationBarTransitionIfHideable;
// IMP 0x1000b00b0 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x1000b0464 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x1000b08e0 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1000b0ec4 | v16@0:8
- (void)initSubviews;
// IMP 0x1000b1ee0 | v16@0:8
- (void)finishItemHandle;
// IMP 0x1000b1f04 | v16@0:8
- (void)selectAllItemHandle;
// IMP 0x1000b2874 | v16@0:8
- (void)moveItemHandle;
// IMP 0x1000b2c80 | v16@0:8
- (void)copyItemHandle;
// IMP 0x1000b3014 | v16@0:8
- (void)zipItemHandle;
// IMP 0x1000b3624 | v16@0:8
- (void)deleteItemHandle;
// IMP 0x1000b3fdc | v16@0:8
- (void)menuItemHandle;
// IMP 0x1000b41c4 | v16@0:8
- (void)refreshState;
// IMP 0x1000b4d88 | v24@0:8@16
- (void)webUploaderHandler:(id)arg0;
// IMP 0x1000b5378 | v20@0:8B16
- (void)changeSelectState:(BOOL)arg0;
// IMP 0x1000b6048 | v16@0:8
- (void)setupPopupItems;
// IMP 0x1000b8480 | v28@0:8@16B24
- (void)moveOrCopyFiles:(id)arg0 isMove:(BOOL)arg1;
// IMP 0x1000b88f4 | v28@0:8@16B24
- (void)moveOrCopyFile:(id)arg0 isMove:(BOOL)arg1;
// IMP 0x1000b8a4c | v32@0:8@16@24
- (void)showRenameFileAlertAtIndexPath:(id)arg0 tableView:(id)arg1;
// IMP 0x1000ba198 | v16@0:8
- (void)loadFiles;
// IMP 0x1000ba660 | v16@0:8
- (void)realReloadFiles;
// IMP 0x1000baa6c | v16@0:8
- (void)reloadFiles;
// IMP 0x1000bab24 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x1000bab98 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1000bad68 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1000bb1b8 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1000bb234 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1000bb2a0 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x1000bd158 | v32@0:8@16@24
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
// IMP 0x1000bd298 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1000bd904 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x1000bd9d8 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x1000bdbb0 | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1000be4d0 | v24@0:8@16
- (void)addFileAndReloadTableView:(id)arg0;
// IMP 0x1000be7a8 | @32@0:8@16@24
- (id)filePathAtIndexPath:(id)arg0 tableView:(id)arg1;
// IMP 0x1000bea48 | @16@0:8
- (id)dirPath;
// IMP 0x1000bea64 | v24@0:8@16
- (void)setDirPath:(id)arg0;
// IMP 0x1000bea7c | @16@0:8
- (id)dataSource;
// IMP 0x1000beab0 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1000beb28 | @16@0:8
- (id)searchResults;
// IMP 0x1000beb50 | v24@0:8@16
- (void)setSearchResults:(id)arg0;
// IMP 0x1000beb88 | @16@0:8
- (id)previewDataSource;
// IMP 0x1000bebb0 | v24@0:8@16
- (void)setPreviewDataSource:(id)arg0;
// IMP 0x1000bec24 | @16@0:8
- (id)popupAtBarButtonItem;
// IMP 0x1000bec4c | v24@0:8@16
- (void)setPopupAtBarButtonItem:(id)arg0;
// IMP 0x1000becb8 | B16@0:8
- (BOOL)needReload;
// IMP 0x1000becf4 | v20@0:8B16
- (void)setNeedReload:(BOOL)arg0;
// IMP 0x1000bed3c | B16@0:8
- (BOOL)isRootDir;
// IMP 0x1000bed70 | v20@0:8B16
- (void)setIsRootDir:(BOOL)arg0;
// IMP 0x1000bed98 | @16@0:8
- (id)toolBar;
// IMP 0x1000bedcc | v24@0:8@16
- (void)setToolBar:(id)arg0;
// IMP 0x1000bee3c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
