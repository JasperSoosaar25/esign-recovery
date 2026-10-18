// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93f00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGTransform : NSObject
// ivar type encoding=i offset=8
// ivar angle encoding=f offset=12
// ivar matrix encoding=@"SVGMatrix" offset=16
// property type attributes=Ti,N,Vtype
// property matrix attributes=T@"SVGMatrix",&,N,Vmatrix
// property angle attributes=Tf,R,N,Vangle
// IMP 0x100589c90 | v24@0:8@16
- (void)setMatrix:(id)arg0;
// IMP 0x100589c94 | v24@0:8f16f20
- (void)setTranslate:(float)arg0 ty:(float)arg1;
// IMP 0x100589c98 | v24@0:8f16f20
- (void)setScale:(float)arg0 sy:(float)arg1;
// IMP 0x100589c9c | v28@0:8f16f20f24
- (void)setRotate:(float)arg0 cx:(float)arg1 cy:(float)arg2;
// IMP 0x100589ca0 | v20@0:8f16
- (void)setSkewX:(float)arg0;
// IMP 0x100589ca4 | v20@0:8f16
- (void)setSkewY:(float)arg0;
// IMP 0x100589ca8 | i16@0:8
- (int)type;
// IMP 0x100589cb0 | v20@0:8i16
- (void)setType:(int)arg0;
// IMP 0x100589cb8 | @16@0:8
- (id)matrix;
// IMP 0x100589cc0 | f16@0:8
- (float)angle;
// IMP 0x100589cc8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
