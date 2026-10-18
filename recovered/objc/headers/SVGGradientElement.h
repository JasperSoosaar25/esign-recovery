// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92ac8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGGradientElement : SVGElement
// ivar _gradientUnits encoding=i offset=8
// ivar _stops encoding=@"NSArray" offset=16
// ivar _locations encoding=@"NSArray" offset=24
// ivar _colors encoding=@"NSArray" offset=32
// ivar _spreadMethod encoding=Q offset=40
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=48
// property stops attributes=T@"NSArray",R,V_stops
// property locations attributes=T@"NSArray",R,V_locations
// property colors attributes=T@"NSArray",R,V_colors
// property gradientUnits attributes=Ti,R,V_gradientUnits
// property spreadMethod attributes=TQ,R,V_spreadMethod
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100573aec | v24@0:8@16
- (void)addStop:(id)arg0;
// IMP 0x100573b70 | @16@0:8
- (id)colors;
// IMP 0x100573d24 | @16@0:8
- (id)locations;
// IMP 0x100573f34 | i16@0:8
- (int)gradientUnits;
// IMP 0x100573ffc | Q16@0:8
- (unsigned long long)spreadMethod;
// IMP 0x1005740e0 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x100574114 | @24@0:8@16
- (id)getAttributeInheritedIfNil:(id)arg0;
// IMP 0x1005741e8 | @112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{?=ffff}48{CGAffineTransform=dddddd}64
- (id)newGradientLayerForObjectRect:(struct CGRect)arg0 viewportRect:(void * /* aggregate ? */)arg1 transform:(struct CGAffineTransform)arg2;
// IMP 0x1005741f0 | v16@0:8
- (void)synthesizeProperties;
// IMP 0x1005741f4 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x1005741f8 | @16@0:8
- (id)stops;
// IMP 0x100574208 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x100574228 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x100574248 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
