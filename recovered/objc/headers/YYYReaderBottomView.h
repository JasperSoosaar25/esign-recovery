// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c818a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYReaderBottomView : UIView
// ivar _showBrightness encoding=B offset=8
// ivar _showType encoding=Q offset=16
// ivar _stackView encoding=@"UIStackView" offset=24
// ivar _backgroundView encoding=@"UIView" offset=32
// ivar _toolView encoding=@"UIView" offset=40
// ivar _catalogButton encoding=@"UIButton" offset=48
// ivar _brightnessButton encoding=@"UIButton" offset=56
// ivar _fontButton encoding=@"UIButton" offset=64
// ivar _brightnessToolView encoding=@"YYYBrightnessToolView" offset=72
// ivar _fontToolView encoding=@"YYYFontToolView" offset=80
// ivar _showTypeChangeBlock encoding=@? offset=88
// property showBrightness attributes=TB,N,V_showBrightness
// property showType attributes=TQ,N,V_showType
// property stackView attributes=T@"UIStackView",&,N,V_stackView
// property backgroundView attributes=T@"UIView",&,N,V_backgroundView
// property toolView attributes=T@"UIView",&,N,V_toolView
// property catalogButton attributes=T@"UIButton",&,N,V_catalogButton
// property brightnessButton attributes=T@"UIButton",&,N,V_brightnessButton
// property fontButton attributes=T@"UIButton",&,N,V_fontButton
// property brightnessToolView attributes=T@"YYYBrightnessToolView",&,N,V_brightnessToolView
// property fontToolView attributes=T@"YYYFontToolView",&,N,V_fontToolView
// property showTypeChangeBlock attributes=T@?,C,N,V_showTypeChangeBlock
// IMP 0x1003cfb7c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1003cfdcc | B40@0:8{CGPoint=dd}16@32
- (BOOL)pointInside:(struct CGPoint)arg0 withEvent:(id)arg1;
// IMP 0x1003cfe78 | v16@0:8
- (void)dealloc;
// IMP 0x1003cff08 | v16@0:8
- (void)styleChange;
// IMP 0x1003d018c | @24@0:8@16
- (id)createButtonWithImageName:(id)arg0;
// IMP 0x1003d0460 | v24@0:8Q16
- (void)setShowType:(unsigned long long)arg0;
// IMP 0x1003d199c | v16@0:8
- (void)hiddenAll;
// IMP 0x1003d19b0 | v24@0:8@16
- (void)toolButtonHandle:(id)arg0;
// IMP 0x1003d1af4 | v16@0:8
- (void)loadSubviews;
// IMP 0x1003d2958 | @16@0:8
- (id)brightnessToolView;
// IMP 0x1003d2b9c | @16@0:8
- (id)fontToolView;
// IMP 0x1003d2d80 | Q16@0:8
- (unsigned long long)showType;
// IMP 0x1003d2d90 | @16@0:8
- (id)stackView;
// IMP 0x1003d2dc4 | v24@0:8@16
- (void)setStackView:(id)arg0;
// IMP 0x1003d2e34 | @16@0:8
- (id)backgroundView;
// IMP 0x1003d2e44 | v24@0:8@16
- (void)setBackgroundView:(id)arg0;
// IMP 0x1003d2ee8 | @16@0:8
- (id)toolView;
// IMP 0x1003d2f1c | v24@0:8@16
- (void)setToolView:(id)arg0;
// IMP 0x1003d2f80 | @16@0:8
- (id)catalogButton;
// IMP 0x1003d2f9c | v24@0:8@16
- (void)setCatalogButton:(id)arg0;
// IMP 0x1003d3034 | @16@0:8
- (id)brightnessButton;
// IMP 0x1003d305c | v24@0:8@16
- (void)setBrightnessButton:(id)arg0;
// IMP 0x1003d30c0 | @16@0:8
- (id)fontButton;
// IMP 0x1003d30f4 | v24@0:8@16
- (void)setFontButton:(id)arg0;
// IMP 0x1003d3158 | v24@0:8@16
- (void)setBrightnessToolView:(id)arg0;
// IMP 0x1003d31bc | v24@0:8@16
- (void)setFontToolView:(id)arg0;
// IMP 0x1003d31f4 | @?16@0:8
- (id /* block */)showTypeChangeBlock;
// IMP 0x1003d3228 | v24@0:8@?16
- (void)setShowTypeChangeBlock:(id /* block */)arg0;
// IMP 0x1003d32b4 | B16@0:8
- (BOOL)showBrightness;
// IMP 0x1003d32e8 | v20@0:8B16
- (void)setShowBrightness:(BOOL)arg0;
// IMP 0x1003d3324 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
