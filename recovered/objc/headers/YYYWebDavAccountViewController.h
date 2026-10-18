// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d1d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDavAccountViewController : QMUICommonTableViewController
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=16
// ivar _url encoding=@"NSString" offset=24
// ivar _userName encoding=@"NSString" offset=32
// ivar _password encoding=@"NSString" offset=40
// ivar _davAccounts encoding=@"NSMutableArray" offset=48
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property url attributes=T@"NSString",C,N,V_url
// property userName attributes=T@"NSString",C,N,V_userName
// property password attributes=T@"NSString",C,N,V_password
// property davAccounts attributes=T@"NSMutableArray",&,N,V_davAccounts
// IMP 0x1000e7534 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1000e7a38 | v16@0:8
- (void)setupDataSource;
// IMP 0x1000eb944 | v16@0:8
- (void)gotoWebDAVFileList;
// IMP 0x1000ed198 | @16@0:8
- (id)tableHelper;
// IMP 0x1000ed1c0 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x1000ed238 | @16@0:8
- (id)url;
// IMP 0x1000ed260 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1000ed2ec | @16@0:8
- (id)userName;
// IMP 0x1000ed2fc | v24@0:8@16
- (void)setUserName:(id)arg0;
// IMP 0x1000ed37c | @16@0:8
- (id)password;
// IMP 0x1000ed3b0 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x1000ed430 | @16@0:8
- (id)davAccounts;
// IMP 0x1000ed458 | v24@0:8@16
- (void)setDavAccounts:(id)arg0;
// IMP 0x1000ed4c4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
