// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c813f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMobileprovisionViewerViewController : QMUICommonTableViewController
// ivar _filePath encoding=@"NSString" offset=16
// ivar _provisionData encoding=@"NSData" offset=24
// ivar _keys encoding=@"NSMutableArray" offset=32
// ivar _info encoding=@"NSDictionary" offset=40
// property keys attributes=T@"NSMutableArray",&,N,V_keys
// property info attributes=T@"NSDictionary",&,N,V_info
// property filePath attributes=T@"NSString",C,N,V_filePath
// property provisionData attributes=T@"NSData",&,N,V_provisionData
// IMP 0x10036ec6c | v16@0:8
- (void)viewDidLoad;
// IMP 0x10037303c | v16@0:8
- (void)popViewController;
// IMP 0x1003730c0 | v16@0:8
- (void)initTableView;
// IMP 0x1003734a8 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x1003736c4 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
// IMP 0x1003738bc | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10037399c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100373b7c | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100373ef4 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1003754a8 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100375c5c | @16@0:8
- (id)filePath;
// IMP 0x100375c90 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x100375d1c | @16@0:8
- (id)provisionData;
// IMP 0x100375d50 | v24@0:8@16
- (void)setProvisionData:(id)arg0;
// IMP 0x100375de8 | @16@0:8
- (id)keys;
// IMP 0x100375e10 | v24@0:8@16
- (void)setKeys:(id)arg0;
// IMP 0x100375e84 | @16@0:8
- (id)info;
// IMP 0x100375eb8 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x100375f1c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
