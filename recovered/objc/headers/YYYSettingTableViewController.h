// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c805f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSettingTableViewController : QMUICommonTableViewController
// ivar _needShow encoding=B offset=16
// ivar _dataSource encoding=@"NSArray" offset=24
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=32
// property dataSource attributes=T@"NSArray",&,N,V_dataSource
// property needShow attributes=TB,N,V_needShow
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100327d64 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100328144 | v16@0:8
- (void)setupDataSource;
// IMP 0x10032ec8c | v24@0:8@16
- (void)downLoadIPA:(id)arg0;
// IMP 0x10032edac | v16@0:8
- (void)initTableView;
// IMP 0x1003300f8 | v24@0:8@16
- (void)safariViewControllerDidFinish:(id)arg0;
// IMP 0x1003304cc | v28@0:8@16B24
- (void)safariViewController:(id)arg0 didCompleteInitialLoad:(BOOL)arg1;
// IMP 0x10033056c | v16@0:8
- (void)getUDID;
// IMP 0x100330c40 | v24@0:8@16
- (void)getUDIDNoti:(id)arg0;
// IMP 0x10033132c | v16@0:8
- (void)copyUDID;
// IMP 0x100331a24 | v16@0:8
- (void)gotoThemeViewController;
// IMP 0x100331ae8 | v16@0:8
- (void)gotoCertManagerController;
// IMP 0x100331b5c | v16@0:8
- (void)gotoYYYSignConfigDefaultSetupViewController;
// IMP 0x100331c48 | v16@0:8
- (void)joinQQGroup;
// IMP 0x100332ffc | v24@0:8@16
- (void)openQQ:(id)arg0;
// IMP 0x1003345ac | v16@0:8
- (void)openTelegram;
// IMP 0x100334c1c | v16@0:8
- (void)openContract;
// IMP 0x100334c74 | v16@0:8
- (void)openHomePage;
// IMP 0x100335148 | v16@0:8
- (void)gotoYYYLanZouTableViewController;
// IMP 0x100335358 | v16@0:8
- (void)gotoYYYWiFiViewController;
// IMP 0x100335430 | v16@0:8
- (void)supportDeveloper;
// IMP 0x100336fa4 | v16@0:8
- (void)importFile;
// IMP 0x10033752c | v32@0:8@16@24
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
// IMP 0x1003386c0 | @16@0:8
- (id)dataSource;
// IMP 0x1003386e8 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x10033874c | B16@0:8
- (BOOL)needShow;
// IMP 0x100338774 | v20@0:8B16
- (void)setNeedShow:(BOOL)arg0;
// IMP 0x1003387b8 | @16@0:8
- (id)tableHelper;
// IMP 0x1003387e0 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x10033886c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
