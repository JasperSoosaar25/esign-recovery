// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c907f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageRotationTransformer : NSObject
// ivar _fitSize encoding=B offset=8
// ivar _angle encoding=d offset=16
// property angle attributes=Td,N,V_angle
// property fitSize attributes=TB,N,V_fitSize
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005496f4 | @16@0:8
- (id)transformerKey;
// IMP 0x100549754 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x1005497cc | d16@0:8
- (double)angle;
// IMP 0x1005497d4 | v24@0:8d16
- (void)setAngle:(double)arg0;
// IMP 0x1005497dc | B16@0:8
- (BOOL)fitSize;
// IMP 0x1005497e4 | v20@0:8B16
- (void)setFitSize:(BOOL)arg0;
// IMP 0x1005496a4 | @28@0:8d16B24
+ (id)transformerWithAngle:(double)arg0 fitSize:(BOOL)arg1;
@end
