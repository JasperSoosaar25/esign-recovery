// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93960
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGLinearGradientElement : SVGGradientElement
// ivar _hasSynthesizedProperties encoding=B offset=8
// ivar _x1 encoding=@"SVGLength" offset=16
// ivar _y1 encoding=@"SVGLength" offset=24
// ivar _x2 encoding=@"SVGLength" offset=32
// ivar _y2 encoding=@"SVGLength" offset=40
// property hasSynthesizedProperties attributes=TB,N,V_hasSynthesizedProperties
// property x1 attributes=T@"SVGLength",&,N,V_x1
// property y1 attributes=T@"SVGLength",&,N,V_y1
// property x2 attributes=T@"SVGLength",&,N,V_x2
// property y2 attributes=T@"SVGLength",&,N,V_y2
// IMP 0x1005847c8 | @112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{?=ffff}48{CGAffineTransform=dddddd}64
- (id)newGradientLayerForObjectRect:(struct CGRect)arg0 viewportRect:(void * /* aggregate ? */)arg1 transform:(struct CGAffineTransform)arg2;
// IMP 0x100584eb4 | v16@0:8
- (void)synthesizeProperties;
// IMP 0x1005851f0 | @16@0:8
- (id)x1;
// IMP 0x100585200 | v24@0:8@16
- (void)setX1:(id)arg0;
// IMP 0x100585214 | @16@0:8
- (id)y1;
// IMP 0x100585224 | v24@0:8@16
- (void)setY1:(id)arg0;
// IMP 0x100585238 | @16@0:8
- (id)x2;
// IMP 0x100585248 | v24@0:8@16
- (void)setX2:(id)arg0;
// IMP 0x10058525c | @16@0:8
- (id)y2;
// IMP 0x10058526c | v24@0:8@16
- (void)setY2:(id)arg0;
// IMP 0x100585280 | B16@0:8
- (BOOL)hasSynthesizedProperties;
// IMP 0x100585290 | v20@0:8B16
- (void)setHasSynthesizedProperties:(BOOL)arg0;
// IMP 0x1005852a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
