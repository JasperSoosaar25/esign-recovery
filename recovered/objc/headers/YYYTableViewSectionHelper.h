// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c802f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTableViewSectionHelper : NSObject
// ivar _autoDeselectRow encoding=B offset=8
// ivar _tableView encoding=@"UITableView" offset=16
// ivar _identifier encoding=@"NSString" offset=24
// ivar _section encoding=q offset=32
// ivar _header encoding=@"YYYTableViewHeaderFooterHelper" offset=40
// ivar _footer encoding=@"YYYTableViewHeaderFooterHelper" offset=48
// ivar _hiddenHandle encoding=@? offset=56
// ivar _cells encoding=@"NSMutableArray" offset=64
// property cells attributes=T@"NSMutableArray",&,N,V_cells
// property tableView attributes=T@"UITableView",W,N,V_tableView
// property identifier attributes=T@"NSString",C,N,V_identifier
// property section attributes=Tq,N,V_section
// property autoDeselectRow attributes=TB,N,V_autoDeselectRow
// property header attributes=T@"YYYTableViewHeaderFooterHelper",&,N,V_header
// property footer attributes=T@"YYYTableViewHeaderFooterHelper",&,N,V_footer
// property cellCount attributes=Tq,R,N
// property hiddenHandle attributes=T@?,C,N,V_hiddenHandle
// property isHidden attributes=TB,R,N
// IMP 0x1002f8020 | @32@0:8#16@?24
- (id)addCell:(Class)arg0 handle:(id /* block */)arg1;
// IMP 0x1002f842c | @24@0:8@?16
- (id)addCellHandle:(id /* block */)arg0;
// IMP 0x1002f84f4 | v24@0:8@16
- (void)addHeaderTitle:(id)arg0;
// IMP 0x1002f8644 | v24@0:8@?16
- (void)addHeaderHandle:(id /* block */)arg0;
// IMP 0x1002f89ac | v24@0:8@16
- (void)addFooterTitle:(id)arg0;
// IMP 0x1002f8b70 | v24@0:8@?16
- (void)addFooterHandle:(id /* block */)arg0;
// IMP 0x1002f8e28 | @24@0:8@16
- (id)cellHelperForIndexPath:(id)arg0;
// IMP 0x1002f91f8 | @16@0:8
- (id)cells;
// IMP 0x1002f92c0 | q16@0:8
- (long long)cellCount;
// IMP 0x1002f9584 | B16@0:8
- (BOOL)isHidden;
// IMP 0x1002f96a4 | @16@0:8
- (id)tableView;
// IMP 0x1002f96fc | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x1002f9720 | @16@0:8
- (id)identifier;
// IMP 0x1002f9740 | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x1002f97b8 | q16@0:8
- (long long)section;
// IMP 0x1002f97cc | v24@0:8q16
- (void)setSection:(long long)arg0;
// IMP 0x1002f97ec | B16@0:8
- (BOOL)autoDeselectRow;
// IMP 0x1002f9814 | v20@0:8B16
- (void)setAutoDeselectRow:(BOOL)arg0;
// IMP 0x1002f985c | @16@0:8
- (id)header;
// IMP 0x1002f987c | v24@0:8@16
- (void)setHeader:(id)arg0;
// IMP 0x1002f98ac | @16@0:8
- (id)footer;
// IMP 0x1002f98d8 | v24@0:8@16
- (void)setFooter:(id)arg0;
// IMP 0x1002f9950 | @?16@0:8
- (id /* block */)hiddenHandle;
// IMP 0x1002f997c | v24@0:8@?16
- (void)setHiddenHandle:(id /* block */)arg0;
// IMP 0x1002f9990 | v24@0:8@16
- (void)setCells:(id)arg0;
// IMP 0x1002f99f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
