// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87a88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIButton : UIButton
// ivar _adjustsTitleTintColorAutomatically encoding=B offset=8
// ivar _adjustsImageTintColorAutomatically encoding=B offset=9
// ivar _adjustsButtonWhenHighlighted encoding=B offset=10
// ivar _adjustsButtonWhenDisabled encoding=B offset=11
// ivar _tintColorAdjustsTitleAndImage encoding=@"UIColor" offset=16
// ivar _highlightedBackgroundColor encoding=@"UIColor" offset=24
// ivar _highlightedBorderColor encoding=@"UIColor" offset=32
// ivar _imagePosition encoding=Q offset=40
// ivar _spacingBetweenImageAndTitle encoding=d offset=48
// ivar _cornerRadius encoding=d offset=56
// ivar _highlightedBackgroundLayer encoding=@"CALayer" offset=64
// ivar _originBorderColor encoding=@"UIColor" offset=72
// property highlightedBackgroundLayer attributes=T@"CALayer",&,N,V_highlightedBackgroundLayer
// property originBorderColor attributes=T@"UIColor",&,N,V_originBorderColor
// property adjustsTitleTintColorAutomatically attributes=TB,N,V_adjustsTitleTintColorAutomatically
// property adjustsImageTintColorAutomatically attributes=TB,N,V_adjustsImageTintColorAutomatically
// property tintColorAdjustsTitleAndImage attributes=T@"UIColor",&,N,V_tintColorAdjustsTitleAndImage
// property adjustsButtonWhenHighlighted attributes=TB,N,V_adjustsButtonWhenHighlighted
// property adjustsButtonWhenDisabled attributes=TB,N,V_adjustsButtonWhenDisabled
// property highlightedBackgroundColor attributes=T@"UIColor",&,N,V_highlightedBackgroundColor
// property highlightedBorderColor attributes=T@"UIColor",&,N,V_highlightedBorderColor
// property imagePosition attributes=TQ,N,V_imagePosition
// property spacingBetweenImageAndTitle attributes=Td,N,V_spacingBetweenImageAndTitle
// property cornerRadius attributes=Td,N,V_cornerRadius
// IMP 0x1004544b0 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004545b4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100454604 | v16@0:8
- (void)didInitialize;
// IMP 0x100454654 | @16@0:8
- (id)_qmui_imageView;
// IMP 0x100454684 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100454b54 | {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// IMP 0x100454b64 | v16@0:8
- (void)layoutSubviews;
// IMP 0x100457594 | v24@0:8d16
- (void)setSpacingBetweenImageAndTitle:(double)arg0;
// IMP 0x1004575a4 | v24@0:8Q16
- (void)setImagePosition:(unsigned long long)arg0;
// IMP 0x1004575b4 | v24@0:8@16
- (void)setHighlightedBackgroundColor:(id)arg0;
// IMP 0x100457604 | v24@0:8@16
- (void)setHighlightedBorderColor:(id)arg0;
// IMP 0x100457654 | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x1004577cc | v20@0:8B16
- (void)setEnabled:(BOOL)arg0;
// IMP 0x100457884 | v16@0:8
- (void)adjustsButtonHighlighted;
// IMP 0x100457bbc | v20@0:8B16
- (void)setAdjustsTitleTintColorAutomatically:(BOOL)arg0;
// IMP 0x100457bcc | v16@0:8
- (void)updateTitleColorIfNeeded;
// IMP 0x100457d10 | v20@0:8B16
- (void)setAdjustsImageTintColorAutomatically:(BOOL)arg0;
// IMP 0x100457d30 | v16@0:8
- (void)updateImageRenderingModeIfNeeded;
// IMP 0x100457fe0 | v32@0:8@16Q24
- (void)setImage:(id)arg0 forState:(unsigned long long)arg1;
// IMP 0x100458078 | v16@0:8
- (void)tintColorDidChange;
// IMP 0x1004580d4 | v24@0:8@16
- (void)setTintColorAdjustsTitleAndImage:(id)arg0;
// IMP 0x100458148 | v24@0:8d16
- (void)setCornerRadius:(double)arg0;
// IMP 0x1004581b0 | B16@0:8
- (BOOL)adjustsTitleTintColorAutomatically;
// IMP 0x1004581c0 | B16@0:8
- (BOOL)adjustsImageTintColorAutomatically;
// IMP 0x1004581d0 | @16@0:8
- (id)tintColorAdjustsTitleAndImage;
// IMP 0x1004581e0 | B16@0:8
- (BOOL)adjustsButtonWhenHighlighted;
// IMP 0x1004581f0 | v20@0:8B16
- (void)setAdjustsButtonWhenHighlighted:(BOOL)arg0;
// IMP 0x100458200 | B16@0:8
- (BOOL)adjustsButtonWhenDisabled;
// IMP 0x100458210 | v20@0:8B16
- (void)setAdjustsButtonWhenDisabled:(BOOL)arg0;
// IMP 0x100458220 | @16@0:8
- (id)highlightedBackgroundColor;
// IMP 0x100458230 | @16@0:8
- (id)highlightedBorderColor;
// IMP 0x100458240 | Q16@0:8
- (unsigned long long)imagePosition;
// IMP 0x100458250 | d16@0:8
- (double)spacingBetweenImageAndTitle;
// IMP 0x100458260 | d16@0:8
- (double)cornerRadius;
// IMP 0x100458270 | @16@0:8
- (id)highlightedBackgroundLayer;
// IMP 0x100458280 | v24@0:8@16
- (void)setHighlightedBackgroundLayer:(id)arg0;
// IMP 0x100458294 | @16@0:8
- (id)originBorderColor;
// IMP 0x1004582a4 | v24@0:8@16
- (void)setOriginBorderColor:(id)arg0;
// IMP 0x1004582b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
