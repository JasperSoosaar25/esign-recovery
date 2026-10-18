// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e980
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUISliderStepControl : UIControl
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _indicator encoding=@"UIView" offset=16
// ivar _spacingBetweenTitleAndIndicator encoding=d offset=24
// ivar _indicatorSize encoding={CGSize="width"d"height"d} offset=32
// property titleLabel attributes=T@"UILabel",R,N,V_titleLabel
// property indicator attributes=T@"UIView",R,N,V_indicator
// property indicatorSize attributes=T{CGSize=dd},N,V_indicatorSize
// property spacingBetweenTitleAndIndicator attributes=Td,N,V_spacingBetweenTitleAndIndicator
// IMP 0x10050f4d8 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10050f760 | v32@0:8{CGSize=dd}16
- (void)setIndicatorSize:(struct CGSize)arg0;
// IMP 0x10050f7a0 | v24@0:8d16
- (void)setSpacingBetweenTitleAndIndicator:(double)arg0;
// IMP 0x10050f7dc | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10050f8cc | v16@0:8
- (void)layoutSubviews;
// IMP 0x10050fba4 | @16@0:8
- (id)titleLabel;
// IMP 0x10050fbb4 | @16@0:8
- (id)indicator;
// IMP 0x10050fbc4 | {CGSize=dd}16@0:8
- (struct CGSize)indicatorSize;
// IMP 0x10050fbd8 | d16@0:8
- (double)spacingBetweenTitleAndIndicator;
// IMP 0x10050fbe8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
