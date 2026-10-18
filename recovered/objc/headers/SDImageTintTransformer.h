// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90848
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageTintTransformer : NSObject
// ivar _tintColor encoding=@"UIColor" offset=8
// property tintColor attributes=T@"UIColor",&,N,V_tintColor
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549838 | @16@0:8
- (id)transformerKey;
// IMP 0x1005498bc | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549938 | @16@0:8
- (id)tintColor;
// IMP 0x100549940 | v24@0:8@16
- (void)setTintColor:(id)arg0;
// IMP 0x10054994c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005497ec | @24@0:8@16
+ (id)transformerWithColor:(id)arg0;
@end
