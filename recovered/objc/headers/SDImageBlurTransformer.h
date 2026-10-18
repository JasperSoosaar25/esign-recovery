// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90898
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageBlurTransformer : NSObject
// ivar _blurRadius encoding=d offset=8
// property blurRadius attributes=Td,N,V_blurRadius
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549998 | @16@0:8
- (id)transformerKey;
// IMP 0x1005499d8 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549a34 | d16@0:8
- (double)blurRadius;
// IMP 0x100549a3c | v24@0:8d16
- (void)setBlurRadius:(double)arg0;
// IMP 0x100549958 | @24@0:8d16
+ (id)transformerWithRadius:(double)arg0;
@end
