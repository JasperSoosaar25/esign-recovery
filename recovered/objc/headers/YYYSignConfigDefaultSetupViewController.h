// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e970
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignConfigDefaultSetupViewController : QMUICommonTableViewController
// ivar _signInfo encoding=@"YYYDefaultSignConfig" offset=16
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=24
// property signInfo attributes=T@"YYYDefaultSignConfig",&,N,V_signInfo
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// IMP 0x1001fdfd4 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001fe1c8 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x1001fe234 | v16@0:8
- (void)setupDataSource;
// IMP 0x100211450 | @24@0:8Q16
- (id)remoteForType:(unsigned long long)arg0;
// IMP 0x10021195c | v16@0:8
- (void)showAddDylib;
// IMP 0x100212910 | v16@0:8
- (void)initTableView;
// IMP 0x100212984 | @16@0:8
- (id)signInfo;
// IMP 0x1002129f0 | v24@0:8@16
- (void)setSignInfo:(id)arg0;
// IMP 0x100212a8c | @16@0:8
- (id)tableHelper;
// IMP 0x100212ab4 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x100212b2c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
