// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e058
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIToastBackgroundView : UIView
// ivar _shouldBlurBackgroundView encoding=B offset=8
// ivar _effectView encoding=@"UIVisualEffectView" offset=16
// ivar _styleColor encoding=@"UIColor" offset=24
// ivar _cornerRadius encoding=d offset=32
// property shouldBlurBackgroundView attributes=TB,N,V_shouldBlurBackgroundView
// property effectView attributes=T@"UIVisualEffectView",R,N,V_effectView
// property styleColor attributes=T@"UIColor",&,N,V_styleColor
// property cornerRadius attributes=Td,N,V_cornerRadius
// IMP 0x1004d61b4 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004d6280 | v20@0:8B16
- (void)setShouldBlurBackgroundView:(BOOL)arg0;
// IMP 0x1004d6418 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004d64cc | v24@0:8@16
- (void)setStyleColor:(id)arg0;
// IMP 0x1004d651c | v24@0:8d16
- (void)setCornerRadius:(double)arg0;
// IMP 0x1004d65d4 | B16@0:8
- (BOOL)shouldBlurBackgroundView;
// IMP 0x1004d65e4 | @16@0:8
- (id)effectView;
// IMP 0x1004d65f4 | @16@0:8
- (id)styleColor;
// IMP 0x1004d6604 | d16@0:8
- (double)cornerRadius;
// IMP 0x1004d6614 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004d6654 | v16@0:8
+ (void)initialize;
// IMP 0x1004d66c8 | v16@0:8
+ (void)setDefaultAppearance;
@end
