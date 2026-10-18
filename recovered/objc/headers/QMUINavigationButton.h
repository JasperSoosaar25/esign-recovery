// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b8f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUINavigationButton : UIButton
// ivar _adjustsImageTintColorAutomatically encoding=B offset=8
// ivar _type encoding=Q offset=16
// ivar _buttonPosition encoding=q offset=24
// ivar _defaultHighlightedImage encoding=@"UIImage" offset=32
// ivar _defaultDisabledImage encoding=@"UIImage" offset=40
// property buttonPosition attributes=Tq,N,V_buttonPosition
// property defaultHighlightedImage attributes=T@"UIImage",&,N,V_defaultHighlightedImage
// property defaultDisabledImage attributes=T@"UIImage",&,N,V_defaultDisabledImage
// property type attributes=TQ,R,N,V_type
// property adjustsImageTintColorAutomatically attributes=TB,N,V_adjustsImageTintColorAutomatically
// IMP 0x1004aa4a0 | @16@0:8
- (id)init;
// IMP 0x1004aa4a8 | @24@0:8Q16
- (id)initWithType:(unsigned long long)arg0;
// IMP 0x1004aa4b0 | @32@0:8Q16@24
- (id)initWithType:(unsigned long long)arg0 title:(id)arg1;
// IMP 0x1004aa564 | @24@0:8@16
- (id)initWithImage:(id)arg0;
// IMP 0x1004aa5c4 | v16@0:8
- (void)renderButtonStyle;
// IMP 0x1004aaae4 | v32@0:8@16Q24
- (void)setImage:(id)arg0 forState:(unsigned long long)arg1;
// IMP 0x1004aae38 | v20@0:8B16
- (void)setAdjustsImageTintColorAutomatically:(BOOL)arg0;
// IMP 0x1004aae58 | v16@0:8
- (void)updateImageRenderingModeIfNeeded;
// IMP 0x1004ab0d8 | v16@0:8
- (void)tintColorDidChange;
// IMP 0x1004ab268 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)alignmentRectInsets;
// IMP 0x1004ab3c4 | Q16@0:8
- (unsigned long long)type;
// IMP 0x1004ab3d4 | B16@0:8
- (BOOL)adjustsImageTintColorAutomatically;
// IMP 0x1004ab3e4 | q16@0:8
- (long long)buttonPosition;
// IMP 0x1004ab3f4 | v24@0:8q16
- (void)setButtonPosition:(long long)arg0;
// IMP 0x1004ab404 | @16@0:8
- (id)defaultHighlightedImage;
// IMP 0x1004ab414 | v24@0:8@16
- (void)setDefaultHighlightedImage:(id)arg0;
// IMP 0x1004ab428 | @16@0:8
- (id)defaultDisabledImage;
// IMP 0x1004ab438 | v24@0:8@16
- (void)setDefaultDisabledImage:(id)arg0;
// IMP 0x1004ab44c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
