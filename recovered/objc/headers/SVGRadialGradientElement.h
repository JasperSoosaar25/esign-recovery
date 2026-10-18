// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93be0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGRadialGradientElement : SVGGradientElement
// ivar _hasSynthesizedProperties encoding=B offset=8
// ivar _cx encoding=@"SVGLength" offset=16
// ivar _cy encoding=@"SVGLength" offset=24
// ivar _r encoding=@"SVGLength" offset=32
// ivar _fx encoding=@"SVGLength" offset=40
// ivar _fy encoding=@"SVGLength" offset=48
// ivar _fr encoding=@"SVGLength" offset=56
// property hasSynthesizedProperties attributes=TB,N,V_hasSynthesizedProperties
// property cx attributes=T@"SVGLength",&,N,V_cx
// property cy attributes=T@"SVGLength",&,N,V_cy
// property r attributes=T@"SVGLength",&,N,V_r
// property fx attributes=T@"SVGLength",&,N,V_fx
// property fy attributes=T@"SVGLength",&,N,V_fy
// property fr attributes=T@"SVGLength",&,N,V_fr
// IMP 0x100586204 | @112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{?=ffff}48{CGAffineTransform=dddddd}64
- (id)newGradientLayerForObjectRect:(struct CGRect)arg0 viewportRect:(void * /* aggregate ? */)arg1 transform:(struct CGAffineTransform)arg2;
// IMP 0x100586c58 | v16@0:8
- (void)synthesizeProperties;
// IMP 0x100586fa8 | @16@0:8
- (id)cx;
// IMP 0x100586fb8 | v24@0:8@16
- (void)setCx:(id)arg0;
// IMP 0x100586fcc | @16@0:8
- (id)cy;
// IMP 0x100586fdc | v24@0:8@16
- (void)setCy:(id)arg0;
// IMP 0x100586ff0 | @16@0:8
- (id)r;
// IMP 0x100587000 | v24@0:8@16
- (void)setR:(id)arg0;
// IMP 0x100587014 | @16@0:8
- (id)fx;
// IMP 0x100587024 | v24@0:8@16
- (void)setFx:(id)arg0;
// IMP 0x100587038 | @16@0:8
- (id)fy;
// IMP 0x100587048 | v24@0:8@16
- (void)setFy:(id)arg0;
// IMP 0x10058705c | @16@0:8
- (id)fr;
// IMP 0x10058706c | v24@0:8@16
- (void)setFr:(id)arg0;
// IMP 0x100587080 | B16@0:8
- (BOOL)hasSynthesizedProperties;
// IMP 0x100587090 | v20@0:8B16
- (void)setHasSynthesizedProperties:(BOOL)arg0;
// IMP 0x1005870a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
