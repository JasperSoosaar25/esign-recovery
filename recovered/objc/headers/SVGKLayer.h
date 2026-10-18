// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93398
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKLayer : CALayer
// ivar _showBorder encoding=B offset=8
// ivar _SVGImage encoding=@"SVGKImage" offset=16
// ivar _startRenderTime encoding=@"NSDate" offset=24
// ivar _endRenderTime encoding=@"NSDate" offset=32
// property SVGImage attributes=T@"SVGKImage",&,N,V_SVGImage
// property showBorder attributes=TB,N,V_showBorder
// property startRenderTime attributes=T@"NSDate",&,N,V_startRenderTime
// property endRenderTime attributes=T@"NSDate",&,N,V_endRenderTime
// IMP 0x10057be9c | @16@0:8
- (id)init;
// IMP 0x10057bf18 | v24@0:8@16
- (void)setSVGImage:(id)arg0;
// IMP 0x10057c03c | v20@0:8B16
- (void)setShowBorder:(BOOL)arg0;
// IMP 0x10057c07c | v16@0:8
- (void)dealloc;
// IMP 0x10057c0c4 | @16@0:8
- (id)SVGImage;
// IMP 0x10057c0d4 | B16@0:8
- (BOOL)showBorder;
// IMP 0x10057c0e4 | @16@0:8
- (id)startRenderTime;
// IMP 0x10057c0f4 | v24@0:8@16
- (void)setStartRenderTime:(id)arg0;
// IMP 0x10057c108 | @16@0:8
- (id)endRenderTime;
// IMP 0x10057c118 | v24@0:8@16
- (void)setEndRenderTime:(id)arg0;
// IMP 0x10057c12c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10057be7c | @16@0:8
+ (id)layer;
@end
