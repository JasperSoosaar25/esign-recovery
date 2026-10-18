// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81300
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYModifyDylibTableViewController : QMUICommonTableViewController
// ivar _dylibPath encoding=@"NSString" offset=16
// ivar _bundle encoding=@"YYYBundle" offset=24
// ivar _dataSources encoding=@"NSMutableArray" offset=32
// property bundle attributes=T@"YYYBundle",&,N,V_bundle
// property dataSources attributes=T@"NSMutableArray",&,N,V_dataSources
// property dylibPath attributes=T@"NSString",C,N,V_dylibPath
// IMP 0x100363250 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1003639e8 | v16@0:8
- (void)initTableView;
// IMP 0x100363c50 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100363c7c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100363d1c | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x100363e90 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1003640f4 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100364978 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x100365404 | v24@0:8@16
- (void)modifyDylib:(id)arg0;
// IMP 0x1003661f8 | @16@0:8
- (id)dylibPath;
// IMP 0x10036622c | v24@0:8@16
- (void)setDylibPath:(id)arg0;
// IMP 0x1003662b4 | @16@0:8
- (id)bundle;
// IMP 0x1003662d0 | v24@0:8@16
- (void)setBundle:(id)arg0;
// IMP 0x100366340 | @16@0:8
- (id)dataSources;
// IMP 0x100366374 | v24@0:8@16
- (void)setDataSources:(id)arg0;
// IMP 0x1003663cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
