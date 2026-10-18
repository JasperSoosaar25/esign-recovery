// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e0e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIToastContentView : UIView
// ivar _customView encoding=@"UIView" offset=8
// ivar _textLabel encoding=@"UILabel" offset=16
// ivar _textLabelText encoding=@"NSString" offset=24
// ivar _detailTextLabel encoding=@"UILabel" offset=32
// ivar _detailTextLabelText encoding=@"NSString" offset=40
// ivar _customViewMarginBottom encoding=d offset=48
// ivar _textLabelMarginBottom encoding=d offset=56
// ivar _detailTextLabelMarginBottom encoding=d offset=64
// ivar _textLabelAttributes encoding=@"NSDictionary" offset=72
// ivar _detailTextLabelAttributes encoding=@"NSDictionary" offset=80
// ivar _minimumSize encoding={CGSize="width"d"height"d} offset=88
// ivar _insets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=104
// property customView attributes=T@"UIView",&,N,V_customView
// property textLabel attributes=T@"UILabel",R,N,V_textLabel
// property textLabelText attributes=T@"NSString",C,N,V_textLabelText
// property detailTextLabel attributes=T@"UILabel",R,N,V_detailTextLabel
// property detailTextLabelText attributes=T@"NSString",C,N,V_detailTextLabelText
// property insets attributes=T{UIEdgeInsets=dddd},N,V_insets
// property minimumSize attributes=T{CGSize=dd},N,V_minimumSize
// property customViewMarginBottom attributes=Td,N,V_customViewMarginBottom
// property textLabelMarginBottom attributes=Td,N,V_textLabelMarginBottom
// property detailTextLabelMarginBottom attributes=Td,N,V_detailTextLabelMarginBottom
// property textLabelAttributes attributes=T@"NSDictionary",&,N,V_textLabelAttributes
// property detailTextLabelAttributes attributes=T@"NSDictionary",&,N,V_detailTextLabelAttributes
// IMP 0x1004d6748 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004d67bc | v16@0:8
- (void)initSubviews;
// IMP 0x1004d6908 | v24@0:8@16
- (void)setCustomView:(id)arg0;
// IMP 0x1004d69ec | v24@0:8@16
- (void)setTextLabelText:(id)arg0;
// IMP 0x1004d6af4 | v24@0:8@16
- (void)setDetailTextLabelText:(id)arg0;
// IMP 0x1004d6bfc | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004d6c04 | {CGSize=dd}36@0:8{CGSize=dd}16B32
- (struct CGSize)sizeThatFits:(struct CGSize)arg0 shouldConsiderMinimumSize:(BOOL)arg1;
// IMP 0x1004d6e94 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004d731c | v16@0:8
- (void)tintColorDidChange;
// IMP 0x1004d7484 | v16@0:8
- (void)updateCustomViewTintColor;
// IMP 0x1004d758c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004d75d0 | v32@0:8{CGSize=dd}16
- (void)setMinimumSize:(struct CGSize)arg0;
// IMP 0x1004d7610 | v24@0:8d16
- (void)setCustomViewMarginBottom:(double)arg0;
// IMP 0x1004d764c | v24@0:8d16
- (void)setTextLabelMarginBottom:(double)arg0;
// IMP 0x1004d7688 | v24@0:8d16
- (void)setDetailTextLabelMarginBottom:(double)arg0;
// IMP 0x1004d76c4 | v24@0:8@16
- (void)setTextLabelAttributes:(id)arg0;
// IMP 0x1004d7788 | v24@0:8@16
- (void)setDetailTextLabelAttributes:(id)arg0;
// IMP 0x1004d784c | @16@0:8
- (id)customView;
// IMP 0x1004d785c | @16@0:8
- (id)textLabel;
// IMP 0x1004d786c | @16@0:8
- (id)textLabelText;
// IMP 0x1004d787c | @16@0:8
- (id)detailTextLabel;
// IMP 0x1004d788c | @16@0:8
- (id)detailTextLabelText;
// IMP 0x1004d789c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)insets;
// IMP 0x1004d78b4 | {CGSize=dd}16@0:8
- (struct CGSize)minimumSize;
// IMP 0x1004d78c8 | d16@0:8
- (double)customViewMarginBottom;
// IMP 0x1004d78d8 | d16@0:8
- (double)textLabelMarginBottom;
// IMP 0x1004d78e8 | d16@0:8
- (double)detailTextLabelMarginBottom;
// IMP 0x1004d78f8 | @16@0:8
- (id)textLabelAttributes;
// IMP 0x1004d7908 | @16@0:8
- (id)detailTextLabelAttributes;
// IMP 0x1004d7918 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004d79bc | v16@0:8
+ (void)initialize;
// IMP 0x1004d7a30 | v16@0:8
+ (void)setDefaultAppearance;
@end
