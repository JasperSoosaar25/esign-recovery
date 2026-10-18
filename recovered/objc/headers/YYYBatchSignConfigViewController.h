// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7ea60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBatchSignConfigViewController : QMUICommonTableViewController
// ivar _signApps encoding=@"NSArray" offset=16
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=24
// ivar _cert encoding=@"YYYCertModel" offset=32
// ivar _dataSource encoding=@"NSMutableArray" offset=40
// ivar _footerView encoding=@"YYYSignFooterView" offset=48
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property cert attributes=T@"YYYCertModel",&,N,V_cert
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property footerView attributes=T@"YYYSignFooterView",&,N,V_footerView
// property signApps attributes=T@"NSArray",&,N,V_signApps
// IMP 0x10021ec60 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10021f344 | v24@0:8@16
- (void)addSectionWithOption:(id)arg0;
// IMP 0x10022303c | v16@0:8
- (void)setupDatasource;
// IMP 0x100223314 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10022348c | v16@0:8
- (void)signHandle;
// IMP 0x100223544 | v16@0:8
- (void)initSubviews;
// IMP 0x100223940 | @16@0:8
- (id)signApps;
// IMP 0x100223968 | v24@0:8@16
- (void)setSignApps:(id)arg0;
// IMP 0x1002239d8 | @16@0:8
- (id)tableHelper;
// IMP 0x100223a0c | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x100223a84 | @16@0:8
- (id)cert;
// IMP 0x100223aac | v24@0:8@16
- (void)setCert:(id)arg0;
// IMP 0x100223af0 | @16@0:8
- (id)dataSource;
// IMP 0x100223b0c | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100223b88 | @16@0:8
- (id)footerView;
// IMP 0x100223ba4 | v24@0:8@16
- (void)setFooterView:(id)arg0;
// IMP 0x100223c14 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
