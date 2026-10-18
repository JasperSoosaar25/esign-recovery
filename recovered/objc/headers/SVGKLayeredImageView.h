// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c933e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKLayeredImageView : SVGKImageView
// ivar _internalBorderLayer encoding=@"CAShapeLayer" offset=8
// property internalBorderLayer attributes=T@"CAShapeLayer",&,N,V_internalBorderLayer
// IMP 0x10057c18c | @16@0:8
- (id)init;
// IMP 0x10057c1a4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10057c248 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10057c29c | @24@0:8@16
- (id)initWithSVGKImage:(id)arg0;
// IMP 0x10057c3a8 | v24@0:8@16
- (void)populateFromImage:(id)arg0;
// IMP 0x10057c54c | @16@0:8
- (id)image;
// IMP 0x10057c590 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x10057c5e0 | B16@0:8
- (BOOL)showBorder;
// IMP 0x10057c61c | v20@0:8B16
- (void)setShowBorder:(BOOL)arg0;
// IMP 0x10057c654 | d16@0:8
- (double)timeIntervalForLastReRenderOfSVGFromMemory;
// IMP 0x10057c6f8 | @16@0:8
- (id)internalBorderLayer;
// IMP 0x10057c708 | v24@0:8@16
- (void)setInternalBorderLayer:(id)arg0;
// IMP 0x10057c71c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10057c180 | #16@0:8
+ (Class)layerClass;
@end
