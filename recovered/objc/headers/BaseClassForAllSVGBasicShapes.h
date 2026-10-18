// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91df8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BaseClassForAllSVGBasicShapes : SVGElement
// ivar _styleClass encoding=@"NSString" offset=8
// ivar _layerRect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=16
// ivar _pathForShapeInRelativeCoords encoding=^{CGPath=} offset=48
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=56
// property pathForShapeInRelativeCoords attributes=T^{CGPath=},N,V_pathForShapeInRelativeCoords
// property className attributes=T@"NSString",&,N
// property style attributes=T@"CSSStyleDeclaration",&,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// IMP 0x100568498 | @16@0:8
- (id)init;
// IMP 0x1005684ec | v16@0:8
- (void)dealloc;
// IMP 0x10056853c | v24@0:8^{CGPath=}16
- (void)setPathForShapeInRelativeCoords:(struct CGPath *)arg0;
// IMP 0x100568594 | @16@0:8
- (id)newLayer;
// IMP 0x1005685c8 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x1005685cc | ^{CGPath=}16@0:8
- (struct CGPath *)pathForShapeInRelativeCoords;
// IMP 0x1005685dc | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x1005685fc | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x10056861c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
