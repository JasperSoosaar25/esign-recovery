// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90758
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCroppingTransformer : NSObject
// ivar _rect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=8
// property rect attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_rect
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005494b0 | @16@0:8
- (id)transformerKey;
// IMP 0x1005494e8 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549544 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)rect;
// IMP 0x100549550 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setRect:(struct CGRect)arg0;
// IMP 0x100549450 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
+ (id)transformerWithRect:(struct CGRect)arg0;
@end
