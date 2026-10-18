// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8fa10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDGraphicsImageRendererFormat : NSObject
// ivar _opaque encoding=B offset=8
// ivar _scale encoding=d offset=16
// ivar _preferredRange encoding=q offset=24
// ivar _uiformat encoding=@"UIGraphicsImageRendererFormat" offset=32
// property uiformat attributes=T@"UIGraphicsImageRendererFormat",&,N,V_uiformat
// property scale attributes=Td,N,V_scale
// property opaque attributes=TB,N,V_opaque
// property preferredRange attributes=Tq,N,V_preferredRange
// IMP 0x10053abe8 | d16@0:8
- (double)scale;
// IMP 0x10053ac2c | v24@0:8d16
- (void)setScale:(double)arg0;
// IMP 0x10053ac6c | B16@0:8
- (BOOL)opaque;
// IMP 0x10053aca8 | v20@0:8B16
- (void)setOpaque:(BOOL)arg0;
// IMP 0x10053ace0 | q16@0:8
- (long long)preferredRange;
// IMP 0x10053ad60 | v24@0:8q16
- (void)setPreferredRange:(long long)arg0;
// IMP 0x10053ae10 | @16@0:8
- (id)init;
// IMP 0x10053ae80 | @16@0:8
- (id)initForMainScreen;
// IMP 0x10053af40 | @16@0:8
- (id)uiformat;
// IMP 0x10053af48 | v24@0:8@16
- (void)setUiformat:(id)arg0;
// IMP 0x10053af54 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10053af20 | @16@0:8
+ (id)preferredFormat;
@end
