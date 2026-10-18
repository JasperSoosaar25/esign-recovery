// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8dc60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITableViewHeaderFooterView : UITableViewHeaderFooterView
// ivar _parentTableView encoding=@"UITableView" offset=8
// ivar _type encoding=Q offset=16
// ivar _titleLabel encoding=@"UILabel" offset=24
// ivar _accessoryView encoding=@"UIView" offset=32
// ivar _contentEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=40
// ivar _accessoryViewMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=72
// property parentTableView attributes=T@"UITableView",W,N,V_parentTableView
// property type attributes=TQ,N,V_type
// property titleLabel attributes=T@"UILabel",R,N,V_titleLabel
// property accessoryView attributes=T@"UIView",&,N,V_accessoryView
// property contentEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_contentEdgeInsets
// property accessoryViewMargins attributes=T{UIEdgeInsets=dddd},N,V_accessoryViewMargins
// IMP 0x1004c8278 | @24@0:8@16
- (id)initWithReuseIdentifier:(id)arg0;
// IMP 0x1004c82c8 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004c8318 | v16@0:8
- (void)didInitialize;
// IMP 0x1004c8438 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x1004c8488 | @16@0:8
- (id)backgroundColor;
// IMP 0x1004c84cc | v16@0:8
- (void)updateAppearance;
// IMP 0x1004c9174 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004c9560 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004c9684 | v24@0:8@16
- (void)setAccessoryView:(id)arg0;
// IMP 0x1004c9758 | v24@0:8@16
- (void)setParentTableView:(id)arg0;
// IMP 0x1004c978c | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x1004c979c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c97b4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setAccessoryViewMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004c97cc | @16@0:8
- (id)parentTableView;
// IMP 0x1004c97ec | Q16@0:8
- (unsigned long long)type;
// IMP 0x1004c97fc | @16@0:8
- (id)titleLabel;
// IMP 0x1004c980c | @16@0:8
- (id)accessoryView;
// IMP 0x1004c981c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentEdgeInsets;
// IMP 0x1004c9834 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)accessoryViewMargins;
// IMP 0x1004c984c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
