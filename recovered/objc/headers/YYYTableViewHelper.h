// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c814e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTableViewHelper : NSObject
// ivar _autoDeselectRow encoding=B offset=8
// ivar _tableView encoding=@"UITableView" offset=16
// ivar _sections encoding=@"NSMutableArray" offset=24
// property sections attributes=T@"NSMutableArray",&,N,V_sections
// property tableView attributes=T@"UITableView",W,N,V_tableView
// property autoDeselectRow attributes=TB,N,V_autoDeselectRow
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10037c950 | @24@0:8@16
- (id)initWithTableView:(id)arg0;
// IMP 0x10037cbbc | @24@0:8@?16
- (id)addSectionHandle:(id /* block */)arg0;
// IMP 0x10037cde8 | v16@0:8
- (void)reloadData;
// IMP 0x10037ce78 | v24@0:8@16
- (void)reloadSectionWithIdentifier:(id)arg0;
// IMP 0x10037ceec | v32@0:8@16q24
- (void)reloadSectionWithIdentifier:(id)arg0 rowAnimation:(long long)arg1;
// IMP 0x10037d420 | v24@0:8@16
- (void)reloadSectionWithIdentifiers:(id)arg0;
// IMP 0x10037d49c | v32@0:8@16q24
- (void)reloadSectionWithIdentifiers:(id)arg0 rowAnimation:(long long)arg1;
// IMP 0x10037d97c | @24@0:8@16
- (id)sectionWithIdentifier:(id)arg0;
// IMP 0x10037de1c | v16@0:8
- (void)clearData;
// IMP 0x10037dec4 | @24@0:8q16
- (id)sectionHelperWithSection:(long long)arg0;
// IMP 0x10037e03c | @24@0:8@16
- (id)cellHelperForIndexPath:(id)arg0;
// IMP 0x10037e19c | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10037e268 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10037e350 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10037e50c | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10037eac4 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10037eca0 | v32@0:8@16@24
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
// IMP 0x10037ee9c | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x10037f2bc | @32@0:8@16q24
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
// IMP 0x10037fd44 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
// IMP 0x1003800b8 | @32@0:8@16q24
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
// IMP 0x100380a4c | B32@0:8@16@24
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
// IMP 0x100380e18 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x100381068 | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x100381214 | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1003814d0 | @16@0:8
- (id)sections;
// IMP 0x1003815fc | @16@0:8
- (id)tableView;
// IMP 0x100381630 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x10038168c | B16@0:8
- (BOOL)autoDeselectRow;
// IMP 0x1003816c0 | v20@0:8B16
- (void)setAutoDeselectRow:(BOOL)arg0;
// IMP 0x100381708 | v24@0:8@16
- (void)setSections:(id)arg0;
// IMP 0x100381798 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10037cb20 | @24@0:8@16
+ (id)helperWithTableView:(id)arg0;
@end
