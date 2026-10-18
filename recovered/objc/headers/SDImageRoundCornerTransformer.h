// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c906b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageRoundCornerTransformer : NSObject
// ivar _cornerRadius encoding=d offset=8
// ivar _corners encoding=Q offset=16
// ivar _borderWidth encoding=d offset=24
// ivar _borderColor encoding=@"UIColor" offset=32
// property cornerRadius attributes=Td,N,V_cornerRadius
// property corners attributes=TQ,N,V_corners
// property borderWidth attributes=Td,N,V_borderWidth
// property borderColor attributes=T@"UIColor",&,N,V_borderColor
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549134 | @16@0:8
- (id)transformerKey;
// IMP 0x1005491f4 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x1005492a8 | d16@0:8
- (double)cornerRadius;
// IMP 0x1005492b0 | v24@0:8d16
- (void)setCornerRadius:(double)arg0;
// IMP 0x1005492b8 | Q16@0:8
- (unsigned long long)corners;
// IMP 0x1005492c0 | v24@0:8Q16
- (void)setCorners:(unsigned long long)arg0;
// IMP 0x1005492c8 | d16@0:8
- (double)borderWidth;
// IMP 0x1005492d0 | v24@0:8d16
- (void)setBorderWidth:(double)arg0;
// IMP 0x1005492d8 | @16@0:8
- (id)borderColor;
// IMP 0x1005492e0 | v24@0:8@16
- (void)setBorderColor:(id)arg0;
// IMP 0x1005492ec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005490a8 | @48@0:8d16Q24d32@40
+ (id)transformerWithRadius:(double)arg0 corners:(unsigned long long)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
@end
