// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d5c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIStaticTableViewCellDataSource : NSObject
// ivar _cellDataSections encoding=@"NSArray" offset=8
// ivar _tableView encoding=@"UITableView" offset=16
// property cellDataSections attributes=T@"NSArray",C,N,V_cellDataSections
// property tableView attributes=T@"UITableView",R,W,N,V_tableView
// IMP 0x1004c263c | @24@0:8@16
- (id)cellDataAtIndexPath:(id)arg0;
// IMP 0x1004c2874 | @24@0:8@16
- (id)reuseIdentifierForCellAtIndexPath:(id)arg0;
// IMP 0x1004c290c | @24@0:8@16
- (id)cellForRowAtIndexPath:(id)arg0;
// IMP 0x1004c2da8 | d24@0:8@16
- (double)heightForRowAtIndexPath:(id)arg0;
// IMP 0x1004c2dec | v24@0:8@16
- (void)didSelectRowAtIndexPath:(id)arg0;
// IMP 0x1004c3010 | v24@0:8@16
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg0;
// IMP 0x1004c3110 | v24@0:8@16
- (void)handleSwitcherEvent:(id)arg0;
// IMP 0x1004c2484 | @16@0:8
- (id)init;
// IMP 0x1004c24b8 | @24@0:8@16
- (id)initWithCellDataSections:(id)arg0;
// IMP 0x1004c2524 | v24@0:8@16
- (void)setCellDataSections:(id)arg0;
// IMP 0x1004c2568 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x1004c25f0 | @16@0:8
- (id)cellDataSections;
// IMP 0x1004c25f8 | @16@0:8
- (id)tableView;
// IMP 0x1004c2610 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
