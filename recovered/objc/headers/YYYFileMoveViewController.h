// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c608
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYFileMoveViewController : QMUICommonTableViewController
// ivar _isMove encoding=B offset=16
// ivar _dirPath encoding=@"NSString" offset=24
// ivar _moveFile encoding=@"NSString" offset=32
// ivar _moveFiles encoding=@"NSArray" offset=40
// ivar _moveAtDir encoding=@"NSString" offset=48
// ivar _titleLabel encoding=@"UILabel" offset=56
// ivar _separatorView encoding=@"UIView" offset=64
// ivar _toolView encoding=@"UIView" offset=72
// ivar _createFolderButton encoding=@"UIButton" offset=80
// ivar _moveButton encoding=@"UIButton" offset=88
// ivar _dataSource encoding=@"NSMutableArray" offset=96
// ivar _files encoding=@"NSMutableArray" offset=104
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=112
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property separatorView attributes=T@"UIView",&,N,V_separatorView
// property toolView attributes=T@"UIView",&,N,V_toolView
// property createFolderButton attributes=T@"UIButton",&,N,V_createFolderButton
// property moveButton attributes=T@"UIButton",&,N,V_moveButton
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property files attributes=T@"NSMutableArray",&,N,V_files
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property dirPath attributes=T@"NSString",C,N,V_dirPath
// property moveFile attributes=T@"NSString",&,N,V_moveFile
// property isMove attributes=TB,N,V_isMove
// property moveFiles attributes=T@"NSArray",&,N,V_moveFiles
// property moveAtDir attributes=T@"NSString",&,N,V_moveAtDir
// IMP 0x10009ce00 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10009dca0 | v16@0:8
- (void)createFolder;
// IMP 0x10009e9c4 | v16@0:8
- (void)batchMove;
// IMP 0x1000a0944 | v16@0:8
- (void)moveHandle;
// IMP 0x1000a1b84 | v24@0:8@16
- (void)moveToPath:(id)arg0;
// IMP 0x1000a2250 | v16@0:8
- (void)loadFiles;
// IMP 0x1000a2ba0 | v16@0:8
- (void)setupData;
// IMP 0x1000a4318 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x1000a4564 | v16@0:8
- (void)dismissViewController;
// IMP 0x1000a4610 | v16@0:8
- (void)layoutTableView;
// IMP 0x1000a462c | v16@0:8
- (void)initSubviews;
// IMP 0x1000a5ae8 | v16@0:8
- (void)setupLayout;
// IMP 0x1000a90c4 | @16@0:8
- (id)dirPath;
// IMP 0x1000a90f8 | v24@0:8@16
- (void)setDirPath:(id)arg0;
// IMP 0x1000a9184 | @16@0:8
- (id)moveFile;
// IMP 0x1000a91b8 | v24@0:8@16
- (void)setMoveFile:(id)arg0;
// IMP 0x1000a91cc | B16@0:8
- (BOOL)isMove;
// IMP 0x1000a9208 | v20@0:8B16
- (void)setIsMove:(BOOL)arg0;
// IMP 0x1000a924c | @16@0:8
- (id)moveFiles;
// IMP 0x1000a9280 | v24@0:8@16
- (void)setMoveFiles:(id)arg0;
// IMP 0x1000a92a0 | @16@0:8
- (id)moveAtDir;
// IMP 0x1000a92bc | v24@0:8@16
- (void)setMoveAtDir:(id)arg0;
// IMP 0x1000a9334 | @16@0:8
- (id)titleLabel;
// IMP 0x1000a9368 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1000a93cc | @16@0:8
- (id)separatorView;
// IMP 0x1000a9400 | v24@0:8@16
- (void)setSeparatorView:(id)arg0;
// IMP 0x1000a9464 | @16@0:8
- (id)toolView;
// IMP 0x1000a948c | v24@0:8@16
- (void)setToolView:(id)arg0;
// IMP 0x1000a94fc | @16@0:8
- (id)createFolderButton;
// IMP 0x1000a9530 | v24@0:8@16
- (void)setCreateFolderButton:(id)arg0;
// IMP 0x1000a959c | @16@0:8
- (id)moveButton;
// IMP 0x1000a95c4 | v24@0:8@16
- (void)setMoveButton:(id)arg0;
// IMP 0x1000a965c | @16@0:8
- (id)dataSource;
// IMP 0x1000a9678 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1000a9704 | @16@0:8
- (id)files;
// IMP 0x1000a9738 | v24@0:8@16
- (void)setFiles:(id)arg0;
// IMP 0x1000a97a8 | @16@0:8
- (id)tableHelper;
// IMP 0x1000a97c4 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x1000a9834 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
