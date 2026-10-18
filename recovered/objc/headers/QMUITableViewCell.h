// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8dc10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITableViewCell : UITableViewCell
// ivar _enabled encoding=B offset=8
// ivar _initByTableView encoding=B offset=9
// ivar _style encoding=q offset=16
// ivar _parentTableView encoding=@"UITableView" offset=24
// ivar _cellPosition encoding=q offset=32
// ivar _defaultAccessoryImageView encoding=@"UIImageView" offset=40
// ivar _defaultAccessoryButton encoding=@"QMUIButton" offset=48
// ivar _defaultDetailDisclosureView encoding=@"UIView" offset=56
// ivar _imageEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=64
// ivar _textLabelEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=96
// ivar _detailTextLabelEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=128
// ivar _accessoryEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=160
// ivar _accessoryHitTestEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=192
// property initByTableView attributes=TB,N,V_initByTableView
// property cellPosition attributes=Tq,N,V_cellPosition
// property style attributes=Tq,N,V_style
// property defaultAccessoryImageView attributes=T@"UIImageView",&,N,V_defaultAccessoryImageView
// property defaultAccessoryButton attributes=T@"QMUIButton",&,N,V_defaultAccessoryButton
// property defaultDetailDisclosureView attributes=T@"UIView",&,N,V_defaultDetailDisclosureView
// property imageEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_imageEdgeInsets
// property textLabelEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_textLabelEdgeInsets
// property detailTextLabelEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_detailTextLabelEdgeInsets
// property accessoryEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_accessoryEdgeInsets
// property accessoryHitTestEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_accessoryHitTestEdgeInsets
// property enabled attributes=TB,N,GisEnabled,V_enabled
// property parentTableView attributes=T@"UITableView",W,N,V_parentTableView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004c80dc | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x1004c81e4 | v24@0:8@16
- (void)updateCellAppearanceWithIndexPath:(id)arg0;
// IMP 0x1004c5d14 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1004c5d78 | @40@0:8@16q24@32
- (id)initForTableView:(id)arg0 withStyle:(long long)arg1 reuseIdentifier:(id)arg2;
// IMP 0x1004c5e14 | @32@0:8@16@24
- (id)initForTableView:(id)arg0 withReuseIdentifier:(id)arg1;
// IMP 0x1004c5e20 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004c5e74 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004c69b4 | @16@0:8
- (id)qmui_tableView;
// IMP 0x1004c6a0c | v20@0:8B16
- (void)setEnabled:(BOOL)arg0;
// IMP 0x1004c6b88 | v16@0:8
- (void)initDefaultAccessoryImageViewIfNeeded;
// IMP 0x1004c6c10 | v16@0:8
- (void)initDefaultAccessoryButtonIfNeeded;
// IMP 0x1004c6ccc | v16@0:8
- (void)initDefaultDetailDisclosureViewIfNeeded;
// IMP 0x1004c6d30 | v24@0:8q16
- (void)setAccessoryType:(long long)arg0;
// IMP 0x1004c7a80 | v24@0:8@16
- (void)scrollViewWillBeginDragging:(id)arg0;
// IMP 0x1004c7ab4 | v28@0:8@16B24
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
// IMP 0x1004c7ae8 | @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(struct CGPoint)arg0 withEvent:(id)arg1;
// IMP 0x1004c7d5c | v24@0:8@16
- (void)handleAccessoryButtonEvent:(id)arg0;
// IMP 0x1004c7e78 | q16@0:8
- (long long)style;
// IMP 0x1004c7e88 | v24@0:8q16
- (void)setStyle:(long long)arg0;
// IMP 0x1004c7e98 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)imageEdgeInsets;
// IMP 0x1004c7eb0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setImageEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c7ec8 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textLabelEdgeInsets;
// IMP 0x1004c7ee0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextLabelEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c7ef8 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)detailTextLabelEdgeInsets;
// IMP 0x1004c7f10 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setDetailTextLabelEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c7f28 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)accessoryEdgeInsets;
// IMP 0x1004c7f40 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setAccessoryEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c7f58 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)accessoryHitTestEdgeInsets;
// IMP 0x1004c7f70 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setAccessoryHitTestEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004c7f88 | B16@0:8
- (BOOL)isEnabled;
// IMP 0x1004c7f98 | @16@0:8
- (id)parentTableView;
// IMP 0x1004c7fb8 | v24@0:8@16
- (void)setParentTableView:(id)arg0;
// IMP 0x1004c7fcc | q16@0:8
- (long long)cellPosition;
// IMP 0x1004c7fdc | v24@0:8q16
- (void)setCellPosition:(long long)arg0;
// IMP 0x1004c7fec | B16@0:8
- (BOOL)initByTableView;
// IMP 0x1004c7ffc | v20@0:8B16
- (void)setInitByTableView:(BOOL)arg0;
// IMP 0x1004c800c | @16@0:8
- (id)defaultAccessoryImageView;
// IMP 0x1004c801c | v24@0:8@16
- (void)setDefaultAccessoryImageView:(id)arg0;
// IMP 0x1004c8030 | @16@0:8
- (id)defaultAccessoryButton;
// IMP 0x1004c8040 | v24@0:8@16
- (void)setDefaultAccessoryButton:(id)arg0;
// IMP 0x1004c8054 | @16@0:8
- (id)defaultDetailDisclosureView;
// IMP 0x1004c8064 | v24@0:8@16
- (void)setDefaultDetailDisclosureView:(id)arg0;
// IMP 0x1004c8078 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
