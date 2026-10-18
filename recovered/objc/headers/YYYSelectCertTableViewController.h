// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c813a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSelectCertTableViewController : QMUICommonTableViewController
// ivar _cert encoding=@ offset=16
// ivar _confirmBlock encoding=@? offset=24
// property dataSource attributes=T@"NSArray",R,N
// property cert attributes=T@,&,N,V_cert
// property confirmBlock attributes=T@?,C,N,V_confirmBlock
// IMP 0x10036abf8 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10036af8c | v16@0:8
- (void)initTableView;
// IMP 0x10036b2e0 | v16@0:8
- (void)confirmHandle;
// IMP 0x10036b424 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10036b444 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10036b514 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10036b840 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x10036b9c4 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10036bc0c | B32@0:8@16@24
- (BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1;
// IMP 0x10036bf88 | @32@0:8@16@24
- (id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1;
// IMP 0x10036c4dc | @32@0:8@16@24
- (id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1;
// IMP 0x10036c6c4 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10036c7f8 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10036c878 | @16@0:8
- (id)dataSource;
// IMP 0x10036c924 | @16@0:8
- (id)cert;
// IMP 0x10036c958 | v24@0:8@16
- (void)setCert:(id)arg0;
// IMP 0x10036c9bc | @?16@0:8
- (id /* block */)confirmBlock;
// IMP 0x10036c9f0 | v24@0:8@?16
- (void)setConfirmBlock:(id /* block */)arg0;
// IMP 0x10036ca08 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
