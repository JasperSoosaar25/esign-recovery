// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c478
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTableViewCellHelper : NSObject
// ivar _autoDeselectRow encoding=B offset=8
// ivar _tableView encoding=@"UITableView" offset=16
// ivar _identifier encoding=@"NSString" offset=24
// ivar _anyClass encoding=# offset=32
// ivar _height encoding=d offset=40
// ivar _cellNumber encoding=q offset=48
// ivar _configHandle encoding=@? offset=56
// ivar _didSelectRowHandle encoding=@? offset=64
// ivar _didDeselectRowHandle encoding=@? offset=72
// ivar _heightHandle encoding=@? offset=80
// ivar _cellNumberHandle encoding=@? offset=88
// ivar _editingStyleHandle encoding=@? offset=96
// ivar _commitEditingStyleHandle encoding=@? offset=104
// ivar _hiddenHandle encoding=@? offset=112
// property tableView attributes=T@"UITableView",W,N,V_tableView
// property identifier attributes=T@"NSString",C,N,V_identifier
// property anyClass attributes=T#,&,N,V_anyClass
// property height attributes=Td,N,V_height
// property cellNumber attributes=Tq,N,V_cellNumber
// property autoDeselectRow attributes=TB,N,V_autoDeselectRow
// property configHandle attributes=T@?,C,N,V_configHandle
// property didSelectRowHandle attributes=T@?,C,N,V_didSelectRowHandle
// property didDeselectRowHandle attributes=T@?,C,N,V_didDeselectRowHandle
// property heightHandle attributes=T@?,C,N,V_heightHandle
// property cellNumberHandle attributes=T@?,C,N,V_cellNumberHandle
// property editingStyleHandle attributes=T@?,C,N,V_editingStyleHandle
// property commitEditingStyleHandle attributes=T@?,C,N,V_commitEditingStyleHandle
// property hiddenHandle attributes=T@?,C,N,V_hiddenHandle
// IMP 0x100087908 | @16@0:8
- (id)init;
// IMP 0x100087a58 | B24@0:8@16
- (BOOL)isHiddenWithIndexPath:(id)arg0;
// IMP 0x100087c24 | @32@0:8@16@24
- (id)cellForTableView:(id)arg0 indexPath:(id)arg1;
// IMP 0x100087f38 | d24@0:8@16
- (double)heightForIndexPath:(id)arg0;
// IMP 0x100088264 | q16@0:8
- (long long)cellNumber;
// IMP 0x100088370 | @16@0:8
- (id)tableView;
// IMP 0x1000883e0 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x100088430 | @16@0:8
- (id)identifier;
// IMP 0x10008845c | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x1000884e0 | #16@0:8
- (Class)anyClass;
// IMP 0x10008850c | v24@0:8#16
- (void)setAnyClass:(Class)arg0;
// IMP 0x10008859c | d16@0:8
- (double)height;
// IMP 0x1000885bc | v24@0:8d16
- (void)setHeight:(double)arg0;
// IMP 0x1000885dc | v24@0:8q16
- (void)setCellNumber:(long long)arg0;
// IMP 0x1000885fc | B16@0:8
- (BOOL)autoDeselectRow;
// IMP 0x100088604 | v20@0:8B16
- (void)setAutoDeselectRow:(BOOL)arg0;
// IMP 0x100088624 | @?16@0:8
- (id /* block */)configHandle;
// IMP 0x100088654 | v24@0:8@?16
- (void)setConfigHandle:(id /* block */)arg0;
// IMP 0x100088668 | @?16@0:8
- (id /* block */)didSelectRowHandle;
// IMP 0x10008867c | v24@0:8@?16
- (void)setDidSelectRowHandle:(id /* block */)arg0;
// IMP 0x100088700 | @?16@0:8
- (id /* block */)didDeselectRowHandle;
// IMP 0x100088720 | v24@0:8@?16
- (void)setDidDeselectRowHandle:(id /* block */)arg0;
// IMP 0x100088798 | @?16@0:8
- (id /* block */)heightHandle;
// IMP 0x1000887ac | v24@0:8@?16
- (void)setHeightHandle:(id /* block */)arg0;
// IMP 0x100088830 | @?16@0:8
- (id /* block */)cellNumberHandle;
// IMP 0x100088838 | v24@0:8@?16
- (void)setCellNumberHandle:(id /* block */)arg0;
// IMP 0x10008884c | @?16@0:8
- (id /* block */)editingStyleHandle;
// IMP 0x100088860 | v24@0:8@?16
- (void)setEditingStyleHandle:(id /* block */)arg0;
// IMP 0x1000888cc | @?16@0:8
- (id /* block */)commitEditingStyleHandle;
// IMP 0x1000888ec | v24@0:8@?16
- (void)setCommitEditingStyleHandle:(id /* block */)arg0;
// IMP 0x100088970 | @?16@0:8
- (id /* block */)hiddenHandle;
// IMP 0x100088990 | v24@0:8@?16
- (void)setHiddenHandle:(id /* block */)arg0;
// IMP 0x100088a14 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
