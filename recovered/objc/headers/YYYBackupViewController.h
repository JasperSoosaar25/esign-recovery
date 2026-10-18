// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c4c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBackupViewController : QMUICommonTableViewController
// ivar _app encoding=@"YYYTrollAppInfo" offset=16
// ivar _dataSource encoding=@"NSMutableArray" offset=24
// ivar _backupPath encoding=@"NSString" offset=32
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=40
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property backupPath attributes=T@"NSString",C,N,V_backupPath
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property app attributes=T@"YYYTrollAppInfo",&,N,V_app
// IMP 0x100088b70 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1000896fc | v16@0:8
- (void)backupHandle;
// IMP 0x10008cee8 | v32@0:8@16@24
- (void)moveDic:(id)arg0 toDic:(id)arg1;
// IMP 0x10008d114 | v24@0:8@16
- (void)recoveryAlert:(id)arg0;
// IMP 0x10008d820 | v24@0:8@16
- (void)recovery:(id)arg0;
// IMP 0x100091e44 | v16@0:8
- (void)setupDataSource;
// IMP 0x100093e50 | v24@0:8@16
- (void)showRenameWithFilePath:(id)arg0;
// IMP 0x100094f54 | v16@0:8
- (void)importFile;
// IMP 0x1000954f0 | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x1000966cc | @16@0:8
- (id)app;
// IMP 0x1000966f4 | v24@0:8@16
- (void)setApp:(id)arg0;
// IMP 0x10009672c | @16@0:8
- (id)dataSource;
// IMP 0x100096760 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100096780 | @16@0:8
- (id)backupPath;
// IMP 0x1000967a8 | v24@0:8@16
- (void)setBackupPath:(id)arg0;
// IMP 0x100096828 | @16@0:8
- (id)tableHelper;
// IMP 0x100096838 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x10009689c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
