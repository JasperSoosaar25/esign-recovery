// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c932a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKImageView : UIView
// ivar _showBorder encoding=B offset=8
// ivar _image encoding=@"SVGKImage" offset=16
// ivar _timeIntervalForLastReRenderOfSVGFromMemory encoding=d offset=24
// property image attributes=T@"SVGKImage",&,N,V_image
// property showBorder attributes=TB,N,V_showBorder
// property timeIntervalForLastReRenderOfSVGFromMemory attributes=Td,R,N,V_timeIntervalForLastReRenderOfSVGFromMemory
// IMP 0x10057ba4c | @16@0:8
- (id)init;
// IMP 0x10057bac8 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10057bb74 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10057bc14 | @24@0:8@16
- (id)initWithSVGKImage:(id)arg0;
// IMP 0x10057bc2c | {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// IMP 0x10057bcbc | @16@0:8
- (id)image;
// IMP 0x10057bccc | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x10057bce0 | B16@0:8
- (BOOL)showBorder;
// IMP 0x10057bcf0 | v20@0:8B16
- (void)setShowBorder:(BOOL)arg0;
// IMP 0x10057bd00 | d16@0:8
- (double)timeIntervalForLastReRenderOfSVGFromMemory;
// IMP 0x10057bd10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
