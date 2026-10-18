// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c801e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYModifyInstallAppViewController : QMUICommonTableViewController
// ivar _modifyInfo encoding=@"YYYModifyInfo" offset=16
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=24
// ivar _footerView encoding=@"YYYSignFooterView" offset=32
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property footerView attributes=T@"YYYSignFooterView",&,N,V_footerView
// property modifyInfo attributes=T@"YYYModifyInfo",&,N,V_modifyInfo
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1002d98d8 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1002d9ad8 | v16@0:8
- (void)resetModifyInfo;
// IMP 0x1002d9e7c | v16@0:8
- (void)saveHandle;
// IMP 0x1002db5c4 | v16@0:8
- (void)setupDataSource;
// IMP 0x1002e74c4 | v16@0:8
- (void)addOtherSection;
// IMP 0x1002e9b3c | v16@0:8
- (void)showAddDylib;
// IMP 0x1002ea7b4 | v16@0:8
- (void)showRemovedDylib;
// IMP 0x1002eafd0 | v24@0:8@16
- (void)imagePickerControllerDidCancel:(id)arg0;
// IMP 0x1002eb060 | v32@0:8@16@24
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
// IMP 0x1002eb314 | v16@0:8
- (void)initSubviews;
// IMP 0x1002ebb4c | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1002ebcc4 | @16@0:8
- (id)modifyInfo;
// IMP 0x1002ebcec | v24@0:8@16
- (void)setModifyInfo:(id)arg0;
// IMP 0x1002ebd68 | @16@0:8
- (id)tableHelper;
// IMP 0x1002ebd90 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x1002ebe2c | @16@0:8
- (id)footerView;
// IMP 0x1002ebe60 | v24@0:8@16
- (void)setFooterView:(id)arg0;
// IMP 0x1002ebe80 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
