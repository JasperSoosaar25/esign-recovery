// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c907a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageFlippingTransformer : NSObject
// ivar _horizontal encoding=B offset=8
// ivar _vertical encoding=B offset=9
// property horizontal attributes=TB,N,V_horizontal
// property vertical attributes=TB,N,V_vertical
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005495ac | @16@0:8
- (id)transformerKey;
// IMP 0x10054960c | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549684 | B16@0:8
- (BOOL)horizontal;
// IMP 0x10054968c | v20@0:8B16
- (void)setHorizontal:(BOOL)arg0;
// IMP 0x100549694 | B16@0:8
- (BOOL)vertical;
// IMP 0x10054969c | v20@0:8B16
- (void)setVertical:(BOOL)arg0;
// IMP 0x10054955c | @24@0:8B16B20
+ (id)transformerWithHorizontal:(BOOL)arg0 vertical:(BOOL)arg1;
@end
