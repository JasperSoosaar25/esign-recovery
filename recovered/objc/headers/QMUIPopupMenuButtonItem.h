// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8cce8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPopupMenuButtonItem : QMUIPopupMenuBaseItem
// ivar _image encoding=@"UIImage" offset=8
// ivar _button encoding=@"QMUIButton" offset=16
// ivar _highlightedBackgroundColor encoding=@"UIColor" offset=24
// ivar _imageMarginRight encoding=d offset=32
// property image attributes=T@"UIImage",&,N,V_image
// property button attributes=T@"QMUIButton",R,N,V_button
// property highlightedBackgroundColor attributes=T@"UIColor",&,N,V_highlightedBackgroundColor
// property imageMarginRight attributes=Td,N,V_imageMarginRight
// IMP 0x1004bc374 | v16@0:8
- (void)updateAppearanceForMenuButtonItem;
// IMP 0x1004bb90c | @16@0:8
- (id)init;
// IMP 0x1004bba54 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004bbab0 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004bbb48 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x1004bbbd4 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x1004bbc50 | v24@0:8d16
- (void)setImageMarginRight:(double)arg0;
// IMP 0x1004bbc60 | v16@0:8
- (void)updateButtonImageEdgeInsets;
// IMP 0x1004bbd90 | v24@0:8@16
- (void)setHighlightedBackgroundColor:(id)arg0;
// IMP 0x1004bbdf8 | v24@0:8@16
- (void)handleButtonEvent:(id)arg0;
// IMP 0x1004bc01c | v16@0:8
- (void)updateAppearance;
// IMP 0x1004bc1c0 | @16@0:8
- (id)image;
// IMP 0x1004bc1d0 | @16@0:8
- (id)button;
// IMP 0x1004bc1e0 | @16@0:8
- (id)highlightedBackgroundColor;
// IMP 0x1004bc1f0 | d16@0:8
- (double)imageMarginRight;
// IMP 0x1004bc200 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004bc254 | v16@0:8
+ (void)initialize;
// IMP 0x1004bc2c8 | v16@0:8
+ (void)setDefaultAppearanceForPopupMenuView;
// IMP 0x1004bb870 | @40@0:8@16@24@?32
+ (id)itemWithImage:(id)arg0 title:(id)arg1 handler:(id /* block */)arg2;
@end
