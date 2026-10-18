// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d0e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYPlistFileEidtorViewController : QMUICommonTableViewController
// ivar _isJson encoding=B offset=16
// ivar _filePath encoding=@"NSString" offset=24
// ivar _plistInfo encoding=@ offset=32
// ivar _infoModel encoding=@"YYYPlistInfoModel" offset=40
// ivar _dataSources encoding=@"NSMutableArray" offset=48
// ivar _popupAtBarButtonItem encoding=@"QMUIPopupMenuView" offset=56
// property plistInfo attributes=T@,&,N,V_plistInfo
// property infoModel attributes=T@"YYYPlistInfoModel",&,N,V_infoModel
// property dataSources attributes=T@"NSMutableArray",&,N,V_dataSources
// property popupAtBarButtonItem attributes=T@"QMUIPopupMenuView",&,N,V_popupAtBarButtonItem
// property isJson attributes=TB,N,V_isJson
// property filePath attributes=T@"NSString",C,N,V_filePath
// IMP 0x1000dc214 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1000dcbcc | v16@0:8
- (void)savePlist;
// IMP 0x1000dcce4 | v16@0:8
- (void)initSubviews;
// IMP 0x1000dcde8 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x1000dcec4 | v16@0:8
- (void)setupPopupItems;
// IMP 0x1000de0d4 | v16@0:8
- (void)handleRightBarButtonItemEvent;
// IMP 0x1000de278 | v32@0:8@16@24
- (void)addPlistValueKey:(id)arg0 value:(id)arg1;
// IMP 0x1000decf8 | v24@0:8Q16
- (void)showAddKeyValueWithType:(unsigned long long)arg0;
// IMP 0x1000e00cc | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1000e01a0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1000e03a8 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1000e04e0 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x1000e05dc | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x1000e078c | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1000e0c40 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1000e2c3c | @16@0:8
- (id)filePath;
// IMP 0x1000e2c70 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1000e2cfc | @16@0:8
- (id)plistInfo;
// IMP 0x1000e2d30 | v24@0:8@16
- (void)setPlistInfo:(id)arg0;
// IMP 0x1000e2da4 | @16@0:8
- (id)infoModel;
// IMP 0x1000e2dcc | v24@0:8@16
- (void)setInfoModel:(id)arg0;
// IMP 0x1000e2e54 | @16@0:8
- (id)dataSources;
// IMP 0x1000e2e7c | v24@0:8@16
- (void)setDataSources:(id)arg0;
// IMP 0x1000e2ea8 | @16@0:8
- (id)popupAtBarButtonItem;
// IMP 0x1000e2ec4 | v24@0:8@16
- (void)setPopupAtBarButtonItem:(id)arg0;
// IMP 0x1000e2f50 | B16@0:8
- (BOOL)isJson;
// IMP 0x1000e2f8c | v20@0:8B16
- (void)setIsJson:(BOOL)arg0;
// IMP 0x1000e2fe0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
