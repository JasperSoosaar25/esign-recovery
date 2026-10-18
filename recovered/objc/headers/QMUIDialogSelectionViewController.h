// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88ca0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIDialogSelectionViewController : QMUIDialogViewController
// ivar _allowsMultipleSelection encoding=B offset=320
// ivar _rowHeight encoding=d offset=328
// ivar _tableView encoding=@"QMUITableView" offset=336
// ivar _items encoding=@"NSArray" offset=344
// ivar _selectedItemIndex encoding=q offset=352
// ivar _selectedItemIndexes encoding=@"NSMutableSet" offset=360
// ivar _cellForItemBlock encoding=@? offset=368
// ivar _heightForItemBlock encoding=@? offset=376
// ivar _canSelectItemBlock encoding=@? offset=384
// ivar _didSelectItemBlock encoding=@? offset=392
// ivar _didDeselectItemBlock encoding=@? offset=400
// property tableView attributes=T@"QMUITableView",&,N,V_tableView
// property rowHeight attributes=Td,N,V_rowHeight
// property items attributes=T@"NSArray",C,N,V_items
// property selectedItemIndex attributes=Tq,N,V_selectedItemIndex
// property selectedItemIndexes attributes=T@"NSMutableSet",&,N,V_selectedItemIndexes
// property allowsMultipleSelection attributes=TB,N,V_allowsMultipleSelection
// property cellForItemBlock attributes=T@?,C,N,V_cellForItemBlock
// property heightForItemBlock attributes=T@?,C,N,V_heightForItemBlock
// property canSelectItemBlock attributes=T@?,C,N,V_canSelectItemBlock
// property didSelectItemBlock attributes=T@?,C,N,V_didSelectItemBlock
// property didDeselectItemBlock attributes=T@?,C,N,V_didDeselectItemBlock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004748f8 | v16@0:8
- (void)didInitialize;
// IMP 0x100474b0c | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100474c70 | v24@0:8@16
- (void)setContentViewBackgroundColor:(id)arg0;
// IMP 0x100474cf8 | v24@0:8@16
- (void)setItems:(id)arg0;
// IMP 0x100474db0 | v24@0:8q16
- (void)setSelectedItemIndex:(long long)arg0;
// IMP 0x100474e00 | v24@0:8@16
- (void)setSelectedItemIndexes:(id)arg0;
// IMP 0x100474e44 | v20@0:8B16
- (void)setAllowsMultipleSelection:(BOOL)arg0;
// IMP 0x100474e58 | v24@0:8d16
- (void)setRowHeight:(double)arg0;
// IMP 0x100474e94 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100474ed0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1004750f0 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10047519c | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1004755f4 | d16@0:8
- (double)rowHeight;
// IMP 0x100475604 | @16@0:8
- (id)tableView;
// IMP 0x100475614 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x100475628 | @16@0:8
- (id)items;
// IMP 0x100475638 | q16@0:8
- (long long)selectedItemIndex;
// IMP 0x100475648 | @16@0:8
- (id)selectedItemIndexes;
// IMP 0x100475658 | B16@0:8
- (BOOL)allowsMultipleSelection;
// IMP 0x100475668 | @?16@0:8
- (id /* block */)cellForItemBlock;
// IMP 0x100475678 | v24@0:8@?16
- (void)setCellForItemBlock:(id /* block */)arg0;
// IMP 0x100475684 | @?16@0:8
- (id /* block */)heightForItemBlock;
// IMP 0x100475694 | v24@0:8@?16
- (void)setHeightForItemBlock:(id /* block */)arg0;
// IMP 0x1004756a0 | @?16@0:8
- (id /* block */)canSelectItemBlock;
// IMP 0x1004756b0 | v24@0:8@?16
- (void)setCanSelectItemBlock:(id /* block */)arg0;
// IMP 0x1004756bc | @?16@0:8
- (id /* block */)didSelectItemBlock;
// IMP 0x1004756cc | v24@0:8@?16
- (void)setDidSelectItemBlock:(id /* block */)arg0;
// IMP 0x1004756d8 | @?16@0:8
- (id /* block */)didDeselectItemBlock;
// IMP 0x1004756e8 | v24@0:8@?16
- (void)setDidDeselectItemBlock:(id /* block */)arg0;
// IMP 0x1004756f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100474834 | @16@0:8
+ (id)appearance;
// IMP 0x100474844 | v16@0:8
+ (void)initialize;
@end
