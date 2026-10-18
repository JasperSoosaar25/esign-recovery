// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90708
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageResizingTransformer : NSObject
// ivar _scaleMode encoding=Q offset=8
// ivar _size encoding={CGSize="width"d"height"d} offset=16
// property size attributes=T{CGSize=dd},N,V_size
// property scaleMode attributes=TQ,N,V_scaleMode
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549350 | @16@0:8
- (id)transformerKey;
// IMP 0x1005493b0 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549430 | {CGSize=dd}16@0:8
- (struct CGSize)size;
// IMP 0x100549438 | v32@0:8{CGSize=dd}16
- (void)setSize:(struct CGSize)arg0;
// IMP 0x100549440 | Q16@0:8
- (unsigned long long)scaleMode;
// IMP 0x100549448 | v24@0:8Q16
- (void)setScaleMode:(unsigned long long)arg0;
// IMP 0x1005492f8 | @40@0:8{CGSize=dd}16Q32
+ (id)transformerWithSize:(struct CGSize)arg0 scaleMode:(unsigned long long)arg1;
@end
