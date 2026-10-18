// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e268
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignLogViewController : QMUICommonTableViewController
// ivar _needSign encoding=B offset=16
// ivar _signOptions encoding=@"NSArray" offset=24
// ivar _finishButton encoding=@"UIButton" offset=32
// ivar _installButton encoding=@"UIButton" offset=40
// ivar _reSignButton encoding=@"UIButton" offset=48
// ivar _app encoding=@"YYYSignAppInfoModel" offset=56
// ivar _dataSource encoding=@"NSMutableArray" offset=64
// ivar _helper encoding=@"YYYSignHelper" offset=72
// property finishButton attributes=T@"UIButton",&,N,V_finishButton
// property installButton attributes=T@"UIButton",&,N,V_installButton
// property reSignButton attributes=T@"UIButton",&,N,V_reSignButton
// property needSign attributes=TB,N,V_needSign
// property normalColor attributes=T@"UIColor",R,N
// property app attributes=T@"YYYSignAppInfoModel",&,N,V_app
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property helper attributes=T@"YYYSignHelper",&,N,V_helper
// property signOptions attributes=T@"NSArray",&,N,V_signOptions
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1001ccf08 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001cd228 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x1001cd318 | v16@0:8
- (void)finishHandle;
// IMP 0x1001cd69c | v16@0:8
- (void)resignHandle;
// IMP 0x1001cd760 | v16@0:8
- (void)installHandle;
// IMP 0x1001cd864 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x1001cd978 | v16@0:8
- (void)resign;
// IMP 0x1001cdb98 | v24@0:8@16
- (void)trollinstallApp:(id)arg0;
// IMP 0x1001d0624 | v24@0:8@16
- (void)installApp:(id)arg0;
// IMP 0x1001d34a4 | v32@0:8@16@24
- (void)signInfo:(id)arg0 signedApp:(id)arg1;
// IMP 0x1001d3618 | v32@0:8@16@24
- (void)signInfo:(id)arg0 logInfo:(id)arg1;
// IMP 0x1001d3680 | v28@0:8@16B24
- (void)signInfo:(id)arg0 finish:(BOOL)arg1;
// IMP 0x1001d3a50 | v24@0:8@16
- (void)addLog:(id)arg0;
// IMP 0x1001d4c44 | v28@0:8@16B24
- (void)addLog:(id)arg0 isError:(BOOL)arg1;
// IMP 0x1001d4f10 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x1001d4f6c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1001d500c | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1001d56b0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1001d5a60 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1001d5e5c | v16@0:8
- (void)initTableView;
// IMP 0x1001d6124 | B16@0:8
- (BOOL)needShowInstallButton;
// IMP 0x1001d63f4 | v16@0:8
- (void)layoutTableView;
// IMP 0x1001d641c | v16@0:8
- (void)initSubviews;
// IMP 0x1001da0fc | @16@0:8
- (id)normalColor;
// IMP 0x1001da188 | @16@0:8
- (id)signOptions;
// IMP 0x1001da1bc | v24@0:8@16
- (void)setSignOptions:(id)arg0;
// IMP 0x1001da230 | @16@0:8
- (id)finishButton;
// IMP 0x1001da264 | v24@0:8@16
- (void)setFinishButton:(id)arg0;
// IMP 0x1001da2cc | @16@0:8
- (id)installButton;
// IMP 0x1001da2f4 | v24@0:8@16
- (void)setInstallButton:(id)arg0;
// IMP 0x1001da398 | @16@0:8
- (id)reSignButton;
// IMP 0x1001da3c0 | v24@0:8@16
- (void)setReSignButton:(id)arg0;
// IMP 0x1001da438 | B16@0:8
- (BOOL)needSign;
// IMP 0x1001da460 | v20@0:8B16
- (void)setNeedSign:(BOOL)arg0;
// IMP 0x1001da4b0 | @16@0:8
- (id)app;
// IMP 0x1001da4c0 | v24@0:8@16
- (void)setApp:(id)arg0;
// IMP 0x1001da4f0 | @16@0:8
- (id)dataSource;
// IMP 0x1001da50c | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1001da57c | @16@0:8
- (id)helper;
// IMP 0x1001da598 | v24@0:8@16
- (void)setHelper:(id)arg0;
// IMP 0x1001da608 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
