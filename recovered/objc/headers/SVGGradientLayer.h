// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92b18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGGradientLayer : CAGradientLayer
// ivar _gradientElement encoding=@"SVGGradientElement" offset=8
// ivar _viewportRect encoding={?="x"f"y"f"width"f"height"f} offset=16
// ivar _objectRect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=32
// ivar _absoluteTransform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=64
// property gradientElement attributes=T@"SVGGradientElement",&,N,V_gradientElement
// property objectRect attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_objectRect
// property viewportRect attributes=T{?=ffff},N,V_viewportRect
// property absoluteTransform attributes=T{CGAffineTransform=dddddd},N,V_absoluteTransform
// IMP 0x10057429c | v24@0:8^{CGContext=}16
- (void)renderInContext:(struct CGContext *)arg0;
// IMP 0x1005743b8 | ^{CGGradient=}16@0:8
- (struct CGGradient *)createCGGradient;
// IMP 0x10057467c | v24@0:8^{CGContext=}16
- (void)renderLinearGradientInContext:(struct CGContext *)arg0;
// IMP 0x1005749a0 | v24@0:8^{CGContext=}16
- (void)renderRadialGradientInContext:(struct CGContext *)arg0;
// IMP 0x100574f84 | @16@0:8
- (id)gradientElement;
// IMP 0x100574f94 | v24@0:8@16
- (void)setGradientElement:(id)arg0;
// IMP 0x100574fa8 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)objectRect;
// IMP 0x100574fc0 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setObjectRect:(struct CGRect)arg0;
// IMP 0x100574fd8 | {?=ffff}16@0:8
- (void * /* aggregate ? */)viewportRect;
// IMP 0x100574ff0 | v32@0:8{?=ffff}16
- (void)setViewportRect:(void * /* aggregate ? */)arg0;
// IMP 0x100575008 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)absoluteTransform;
// IMP 0x100575028 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setAbsoluteTransform:(struct CGAffineTransform)arg0;
// IMP 0x100575048 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
