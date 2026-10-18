// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93f50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGUseElement : SVGElement
// ivar x encoding=@"SVGLength" offset=8
// ivar y encoding=@"SVGLength" offset=16
// ivar width encoding=@"SVGLength" offset=24
// ivar height encoding=@"SVGLength" offset=32
// ivar instanceRoot encoding=@"SVGElementInstance" offset=40
// ivar animatedInstanceRoot encoding=@"SVGElementInstance" offset=48
// ivar transform encoding={CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} offset=56
// property x attributes=T@"SVGLength",&,N,Vx
// property y attributes=T@"SVGLength",&,N,Vy
// property width attributes=T@"SVGLength",&,N,Vwidth
// property height attributes=T@"SVGLength",&,N,Vheight
// property instanceRoot attributes=T@"SVGElementInstance",&,N,VinstanceRoot
// property animatedInstanceRoot attributes=T@"SVGElementInstance",&,N,VanimatedInstanceRoot
// property transform attributes=T{CGAffineTransform=dddddd},N,Vtransform
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100589cd4 | @16@0:8
- (id)newLayer;
// IMP 0x100589cf8 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x100589d90 | @16@0:8
- (id)x;
// IMP 0x100589da0 | v24@0:8@16
- (void)setX:(id)arg0;
// IMP 0x100589db4 | @16@0:8
- (id)y;
// IMP 0x100589dc4 | v24@0:8@16
- (void)setY:(id)arg0;
// IMP 0x100589dd8 | @16@0:8
- (id)width;
// IMP 0x100589de8 | v24@0:8@16
- (void)setWidth:(id)arg0;
// IMP 0x100589dfc | @16@0:8
- (id)height;
// IMP 0x100589e0c | v24@0:8@16
- (void)setHeight:(id)arg0;
// IMP 0x100589e20 | @16@0:8
- (id)instanceRoot;
// IMP 0x100589e30 | v24@0:8@16
- (void)setInstanceRoot:(id)arg0;
// IMP 0x100589e44 | @16@0:8
- (id)animatedInstanceRoot;
// IMP 0x100589e54 | v24@0:8@16
- (void)setAnimatedInstanceRoot:(id)arg0;
// IMP 0x100589e68 | {CGAffineTransform=dddddd}16@0:8
- (struct CGAffineTransform)transform;
// IMP 0x100589e88 | v64@0:8{CGAffineTransform=dddddd}16
- (void)setTransform:(struct CGAffineTransform)arg0;
// IMP 0x100589ea8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
