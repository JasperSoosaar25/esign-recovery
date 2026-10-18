// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80050
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignConfigViewController : QMUICommonTableViewController
// ivar _showMore encoding=B offset=16
// ivar _isModifyOnly encoding=B offset=17
// ivar _filePath encoding=@"NSString" offset=24
// ivar _signInfo encoding=@"YYYSignInfo" offset=32
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=40
// ivar _footerView encoding=@"YYYSignFooterView" offset=48
// property signInfo attributes=T@"YYYSignInfo",&,N,V_signInfo
// property showMore attributes=TB,N,V_showMore
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property footerView attributes=T@"YYYSignFooterView",&,N,V_footerView
// property isModifyOnly attributes=TB,N,V_isModifyOnly
// property filePath attributes=T@"NSString",C,N,V_filePath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1002ab324 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1002ab6d4 | v16@0:8
- (void)setupDataSource;
// IMP 0x1002bf8bc | v16@0:8
- (void)addOtherSection;
// IMP 0x1002c5a50 | v16@0:8
- (void)showSelectEntitlementsFile;
// IMP 0x1002c63a4 | v16@0:8
- (void)showAddDylib;
// IMP 0x1002c8250 | v16@0:8
- (void)showRemovedDylib;
// IMP 0x1002c8a58 | v16@0:8
- (void)signHandle;
// IMP 0x1002c8d24 | v16@0:8
- (void)showMoreHandle;
// IMP 0x1002c8f80 | v16@0:8
- (void)showInputDuoKai;
// IMP 0x1002c9cb8 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1002c9f80 | v16@0:8
- (void)initTableView;
// IMP 0x1002ca588 | v24@0:8@16
- (void)imagePickerControllerDidCancel:(id)arg0;
// IMP 0x1002ca5ec | v32@0:8@16@24
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
// IMP 0x1002ca748 | B16@0:8
- (BOOL)isModifyOnly;
// IMP 0x1002ca7ec | @16@0:8
- (id)filePath;
// IMP 0x1002ca814 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1002ca838 | @16@0:8
- (id)signInfo;
// IMP 0x1002ca86c | v24@0:8@16
- (void)setSignInfo:(id)arg0;
// IMP 0x1002ca8d8 | B16@0:8
- (BOOL)showMore;
// IMP 0x1002ca900 | v20@0:8B16
- (void)setShowMore:(BOOL)arg0;
// IMP 0x1002ca92c | @16@0:8
- (id)tableHelper;
// IMP 0x1002ca954 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x1002ca9ec | @16@0:8
- (id)footerView;
// IMP 0x1002caa20 | v24@0:8@16
- (void)setFooterView:(id)arg0;
// IMP 0x1002caa90 | v20@0:8B16
- (void)setIsModifyOnly:(BOOL)arg0;
// IMP 0x1002caae0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
