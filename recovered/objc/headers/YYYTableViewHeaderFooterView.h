// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d9f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTableViewHeaderFooterView : UITableViewHeaderFooterView
// ivar _isFooter encoding=B offset=8
// ivar _titleLabel encoding=@"UILabel" offset=16
// ivar _tableView encoding=@"UITableView" offset=24
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property tableView attributes=T@"UITableView",W,N,V_tableView
// property isFooter attributes=TB,N,V_isFooter
// IMP 0x10016f034 | @24@0:8@16
- (id)initWithReuseIdentifier:(id)arg0;
// IMP 0x10016f18c | v16@0:8
- (void)didInitialize;
// IMP 0x10016f388 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)y_insets;
// IMP 0x10016f980 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10016fbb8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10016ff40 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x100170014 | @16@0:8
- (id)backgroundColor;
// IMP 0x1001700d8 | @16@0:8
- (id)titleLabel;
// IMP 0x100170100 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10017018c | @16@0:8
- (id)tableView;
// IMP 0x1001701b8 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x100170230 | B16@0:8
- (BOOL)isFooter;
// IMP 0x100170258 | v20@0:8B16
- (void)setIsFooter:(BOOL)arg0;
// IMP 0x10017029c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
