// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93a00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGMatrix : NSObject
// ivar a encoding=f offset=8
// ivar b encoding=f offset=12
// ivar c encoding=f offset=16
// ivar d encoding=f offset=20
// ivar e encoding=f offset=24
// ivar f encoding=f offset=28
// property a attributes=Tf,N,Va
// property b attributes=Tf,N,Vb
// property c attributes=Tf,N,Vc
// property d attributes=Tf,N,Vd
// property e attributes=Tf,N,Ve
// property f attributes=Tf,N,Vf
// IMP 0x1005856b0 | @24@0:8@16
- (id)multiply:(id)arg0;
// IMP 0x1005856b8 | @16@0:8
- (id)inverse;
// IMP 0x1005856c0 | @24@0:8f16f20
- (id)translate:(float)arg0 y:(float)arg1;
// IMP 0x1005856c8 | @20@0:8f16
- (id)scale:(float)arg0;
// IMP 0x1005856d0 | @24@0:8f16f20
- (id)scaleNonUniform:(float)arg0 scaleFactorY:(float)arg1;
// IMP 0x1005856d8 | @20@0:8f16
- (id)rotate:(float)arg0;
// IMP 0x1005856e0 | @24@0:8f16f20
- (id)rotateFromVector:(float)arg0 y:(float)arg1;
// IMP 0x1005856e8 | @16@0:8
- (id)flipX;
// IMP 0x1005856f0 | @16@0:8
- (id)flipY;
// IMP 0x1005856f8 | @20@0:8f16
- (id)skewX:(float)arg0;
// IMP 0x100585700 | @20@0:8f16
- (id)skewY:(float)arg0;
// IMP 0x100585708 | f16@0:8
- (float)a;
// IMP 0x100585710 | v20@0:8f16
- (void)setA:(float)arg0;
// IMP 0x100585718 | f16@0:8
- (float)b;
// IMP 0x100585720 | v20@0:8f16
- (void)setB:(float)arg0;
// IMP 0x100585728 | f16@0:8
- (float)c;
// IMP 0x100585730 | v20@0:8f16
- (void)setC:(float)arg0;
// IMP 0x100585738 | f16@0:8
- (float)d;
// IMP 0x100585740 | v20@0:8f16
- (void)setD:(float)arg0;
// IMP 0x100585748 | f16@0:8
- (float)e;
// IMP 0x100585750 | v20@0:8f16
- (void)setE:(float)arg0;
// IMP 0x100585758 | f16@0:8
- (float)f;
// IMP 0x100585760 | v20@0:8f16
- (void)setF:(float)arg0;
@end
