// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93d98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGTextElement : SVGTextPositioningElement
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=8
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10058895c | @16@0:8
- (id)newLayer;
// IMP 0x100588ecc | @72@0:8@16{CGAffineTransform=dddddd}24
- (id)newCALayerForTextLayer:(id)arg0 transformAbsolute:(struct CGAffineTransform)arg1;
// IMP 0x1005899b0 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x1005899b4 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x1005899d4 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x1005890a0 | @24@0:8@16
+ (id)matchedFontWithElement:(id)arg0;
// IMP 0x100589384 | @48@0:8@16@24@32@40
+ (id)fontAttributesWithFontFamily:(id)arg0 fontStyle:(id)arg1 fontWeight:(id)arg2 fontStretch:(id)arg3;
// IMP 0x10058970c | @24@0:8@16
+ (id)fontFamiliesWithCSSValue:(id)arg0;
// IMP 0x100589918 | @16@0:8
+ (id)systemDefaultFontFamily;
@end
