// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d7c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYP12ViewController : QMUICommonTableViewController
// ivar _filePath encoding=@"NSString" offset=16
// ivar _info encoding=@"NSDictionary" offset=24
// ivar _keys encoding=@"NSMutableArray" offset=32
// property info attributes=T@"NSDictionary",&,N,V_info
// property keys attributes=T@"NSMutableArray",&,N,V_keys
// property filePath attributes=T@"NSString",C,N,V_filePath
// IMP 0x10014f930 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001500b4 | v24@0:8@16
- (void)showInputPasswordAlertWithMessage:(id)arg0;
// IMP 0x1001506f0 | v24@0:8@16
- (void)verifyP12WithPassword:(id)arg0;
// IMP 0x100150af4 | v16@0:8
- (void)reloadData;
// IMP 0x100151bf0 | v16@0:8
- (void)searchProfile;
// IMP 0x1001535b0 | v16@0:8
- (void)initTableView;
// IMP 0x1001539a0 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x100153c34 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
// IMP 0x100153d8c | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100153e1c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1001540fc | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1001544b8 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1001557e4 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100155c4c | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x100156444 | @16@0:8
- (id)filePath;
// IMP 0x10015646c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1001564f8 | @16@0:8
- (id)info;
// IMP 0x100156520 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x100156580 | @16@0:8
- (id)keys;
// IMP 0x1001565a8 | v24@0:8@16
- (void)setKeys:(id)arg0;
// IMP 0x100156644 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
