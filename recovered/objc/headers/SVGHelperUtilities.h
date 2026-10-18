// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92c30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGHelperUtilities : NSObject
// IMP 0x1005755e0 | {CGAffineTransform=dddddd}24@0:8@16
+ (struct CGAffineTransform)transformRelativeIncludingViewportForTransformableOrViewportEstablishingElement:(id)arg0;
// IMP 0x100575c7c | {CGAffineTransform=dddddd}24@0:8@16
+ (struct CGAffineTransform)transformAbsoluteIncludingViewportForTransformableOrViewportEstablishingElement:(id)arg0;
// IMP 0x100575d9c | v32@0:8@16@24
+ (void)configureCALayer:(id)arg0 usingElement:(id)arg1;
// IMP 0x100575f0c | @32@0:8@16^{CGPath=}24
+ (id)newCALayerForPathBasedSVGElement:(id)arg0 withPath:(struct CGPath *)arg1;
// IMP 0x100576b94 | @112@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32{CGAffineTransform=dddddd}64
+ (id)getGradientLayerWithId:(id)arg0 forElement:(id)arg1 withRect:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
// IMP 0x100576cfc | ^{CGColor=}24@0:8@16
+ (struct CGColor *)parseFillForElement:(id)arg0;
// IMP 0x100576d94 | ^{CGColor=}40@0:8@16@24@32
+ (struct CGColor *)parseFillForElement:(id)arg0 fromFill:(id)arg1 andOpacity:(id)arg2;
// IMP 0x100576da0 | ^{CGColor=}24@0:8@16
+ (struct CGColor *)parseStrokeForElement:(id)arg0;
// IMP 0x100576e38 | ^{CGColor=}40@0:8@16@24@32
+ (struct CGColor *)parseStrokeForElement:(id)arg0 fromStroke:(id)arg1 andOpacity:(id)arg2;
// IMP 0x100576e44 | ^{CGColor=}48@0:8@16@24@32@40
+ (struct CGColor *)parsePaintColorForElement:(id)arg0 paintColor:(id)arg1 paintOpacity:(id)arg2 defaultColor:(id)arg3;
// IMP 0x100577074 | v24@0:8@16
+ (void)parsePreserveAspectRatioFor:(id)arg0;
@end
