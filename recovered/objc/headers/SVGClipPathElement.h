// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c927f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGClipPathElement : SVGElement
// ivar clipPathUnits encoding=i offset=8
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=16
// property clipPathUnits attributes=Ti,R,N,VclipPathUnits
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property className attributes=T@"NSString",&,N
// property style attributes=T@"CSSStyleDeclaration",&,N
// IMP 0x10056f9a4 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x10056fbe0 | @16@0:8
- (id)newLayer;
// IMP 0x10056fc2c | v32@0:8@16@24
- (void)layoutLayer:(id)arg0 toMaskLayer:(id)arg1;
// IMP 0x10056fef4 | i16@0:8
- (int)clipPathUnits;
// IMP 0x10056ff04 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x10056ff24 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
@end
