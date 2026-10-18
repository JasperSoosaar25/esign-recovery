// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93c08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGRectElement : BaseClassForAllSVGBasicShapes
// ivar _x encoding=@"SVGLength" offset=48
// ivar _y encoding=@"SVGLength" offset=56
// ivar _width encoding=@"SVGLength" offset=64
// ivar _height encoding=@"SVGLength" offset=72
// ivar _rx encoding=@"SVGLength" offset=80
// ivar _ry encoding=@"SVGLength" offset=88
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=96
// property x attributes=T@"SVGLength",R,N,V_x
// property y attributes=T@"SVGLength",R,N,V_y
// property width attributes=T@"SVGLength",R,N,V_width
// property height attributes=T@"SVGLength",R,N,V_height
// property rx attributes=T@"SVGLength",R,N,V_rx
// property ry attributes=T@"SVGLength",R,N,V_ry
// property className attributes=T@"NSString",&,N
// property style attributes=T@"CSSStyleDeclaration",&,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// IMP 0x100587190 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x10058771c | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x10058773c | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x10058775c | @16@0:8
- (id)x;
// IMP 0x10058776c | @16@0:8
- (id)y;
// IMP 0x10058777c | @16@0:8
- (id)width;
// IMP 0x10058778c | @16@0:8
- (id)height;
// IMP 0x10058779c | @16@0:8
- (id)rx;
// IMP 0x1005877ac | @16@0:8
- (id)ry;
// IMP 0x1005877bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
