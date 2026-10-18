// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92c58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGImageElement : SVGElement
// ivar preserveAspectRatio encoding=@"SVGAnimatedPreserveAspectRatio" offset=8
// ivar _x encoding=d offset=16
// ivar _y encoding=d offset=24
// ivar _width encoding=d offset=32
// ivar _height encoding=d offset=40
// ivar _href encoding=@"NSString" offset=48
// ivar viewBox encoding={?="x"f"y"f"width"f"height"f} offset=56
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=72
// property href attributes=T@"NSString",&,N,V_href
// property x attributes=Td,R,N,V_x
// property y attributes=Td,R,N,V_y
// property width attributes=Td,R,N,V_width
// property height attributes=Td,R,N,V_height
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property className attributes=T@"NSString",&,N
// property style attributes=T@"CSSStyleDeclaration",&,N
// property viewBox attributes=T{?=ffff},N,VviewBox
// property preserveAspectRatio attributes=T@"SVGAnimatedPreserveAspectRatio",&,N,VpreserveAspectRatio
// IMP 0x100577510 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x100577768 | @16@0:8
- (id)newLayer;
// IMP 0x100577e58 | {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
- (struct CGRect)clipFrame:(struct CGRect)arg0 fromRatio:(double)arg1;
// IMP 0x100577fb4 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x100577fb8 | d16@0:8
- (double)aspectRatioFromWidthPerHeight;
// IMP 0x100578008 | d16@0:8
- (double)aspectRatioFromViewBox;
// IMP 0x100578058 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x100578078 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x100578098 | {?=ffff}16@0:8
- (void * /* aggregate ? */)viewBox;
// IMP 0x1005780b0 | v32@0:8{?=ffff}16
- (void)setViewBox:(void * /* aggregate ? */)arg0;
// IMP 0x1005780c8 | @16@0:8
- (id)preserveAspectRatio;
// IMP 0x1005780d8 | v24@0:8@16
- (void)setPreserveAspectRatio:(id)arg0;
// IMP 0x1005780ec | d16@0:8
- (double)x;
// IMP 0x1005780fc | d16@0:8
- (double)y;
// IMP 0x10057810c | d16@0:8
- (double)width;
// IMP 0x10057811c | d16@0:8
- (double)height;
// IMP 0x10057812c | @16@0:8
- (id)href;
// IMP 0x10057813c | v24@0:8@16
- (void)setHref:(id)arg0;
// IMP 0x100578150 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
