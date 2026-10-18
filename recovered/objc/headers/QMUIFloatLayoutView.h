// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c890a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIFloatLayoutView : UIView
// ivar _minimumItemSize encoding={CGSize="width"d"height"d} offset=8
// ivar _maximumItemSize encoding={CGSize="width"d"height"d} offset=24
// ivar _padding encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=40
// ivar _itemMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=72
// property padding attributes=T{UIEdgeInsets=dddd},N,V_padding
// property minimumItemSize attributes=T{CGSize=dd},N,V_minimumItemSize
// property maximumItemSize attributes=T{CGSize=dd},N,V_maximumItemSize
// property itemMargins attributes=T{UIEdgeInsets=dddd},N,V_itemMargins
// IMP 0x100480260 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004802b0 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100480300 | v16@0:8
- (void)didInitialize;
// IMP 0x100480344 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10048034c | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004803a8 | {CGSize=dd}36@0:8{CGSize=dd}16B32
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg0 shouldLayout:(BOOL)arg1;
// IMP 0x100480700 | @16@0:8
- (id)visibleSubviews;
// IMP 0x1004807d0 | B16@0:8
- (BOOL)shouldAlignRight;
// IMP 0x1004807ec | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)padding;
// IMP 0x100480804 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPadding:(struct UIEdgeInsets)arg0;
// IMP 0x10048081c | {CGSize=dd}16@0:8
- (struct CGSize)minimumItemSize;
// IMP 0x100480830 | v32@0:8{CGSize=dd}16
- (void)setMinimumItemSize:(struct CGSize)arg0;
// IMP 0x100480844 | {CGSize=dd}16@0:8
- (struct CGSize)maximumItemSize;
// IMP 0x100480858 | v32@0:8{CGSize=dd}16
- (void)setMaximumItemSize:(struct CGSize)arg0;
// IMP 0x10048086c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)itemMargins;
// IMP 0x100480884 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setItemMargins:(struct UIEdgeInsets)arg0;
@end
