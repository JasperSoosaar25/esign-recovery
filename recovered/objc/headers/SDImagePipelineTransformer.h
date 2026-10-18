// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90668
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImagePipelineTransformer : NSObject
// ivar _transformers encoding=@"NSArray" offset=8
// ivar _transformerKey encoding=@"NSString" offset=16
// property transformers attributes=T@"NSArray",C,N,V_transformers
// property transformerKey attributes=T@"NSString",C,N,V_transformerKey
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100548ee4 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549058 | @16@0:8
- (id)transformers;
// IMP 0x100549060 | v24@0:8@16
- (void)setTransformers:(id)arg0;
// IMP 0x100549068 | @16@0:8
- (id)transformerKey;
// IMP 0x100549070 | v24@0:8@16
- (void)setTransformerKey:(id)arg0;
// IMP 0x100549078 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100548d34 | @24@0:8@16
+ (id)transformerWithTransformers:(id)arg0;
// IMP 0x100548dbc | @24@0:8@16
+ (id)cacheKeyForTransformers:(id)arg0;
@end
