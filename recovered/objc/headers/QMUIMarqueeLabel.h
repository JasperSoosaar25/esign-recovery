// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8ab10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIMarqueeLabel : UILabel
// ivar _automaticallyValidateVisibleFrame encoding=B offset=8
// ivar _shouldFadeAtEdge encoding=B offset=9
// ivar _textStartAfterFade encoding=B offset=10
// ivar _isFirstDisplay encoding=B offset=11
// ivar _speed encoding=d offset=16
// ivar _pauseDurationWhenMoveToEdge encoding=d offset=24
// ivar _spacingBetweenHeadToTail encoding=d offset=32
// ivar _fadeWidthPercent encoding=d offset=40
// ivar _displayLink encoding=@"CADisplayLink" offset=48
// ivar _offsetX encoding=d offset=56
// ivar _fadeStartPercent encoding=d offset=64
// ivar _fadeEndPercent encoding=d offset=72
// ivar _fadeLayer encoding=@"CAGradientLayer" offset=80
// ivar _textRepeatCount encoding=q offset=88
// ivar _textSize encoding={CGSize="width"d"height"d} offset=96
// ivar _prevBounds encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=112
// property displayLink attributes=T@"CADisplayLink",&,N,V_displayLink
// property offsetX attributes=Td,N,V_offsetX
// property textSize attributes=T{CGSize=dd},N,V_textSize
// property fadeStartPercent attributes=Td,N,V_fadeStartPercent
// property fadeEndPercent attributes=Td,N,V_fadeEndPercent
// property isFirstDisplay attributes=TB,N,V_isFirstDisplay
// property fadeLayer attributes=T@"CAGradientLayer",&,N,V_fadeLayer
// property textRepeatCount attributes=Tq,N,V_textRepeatCount
// property prevBounds attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_prevBounds
// property speed attributes=Td,N,V_speed
// property pauseDurationWhenMoveToEdge attributes=Td,N,V_pauseDurationWhenMoveToEdge
// property spacingBetweenHeadToTail attributes=Td,N,V_spacingBetweenHeadToTail
// property fadeWidthPercent attributes=Td,N,V_fadeWidthPercent
// property automaticallyValidateVisibleFrame attributes=TB,N,V_automaticallyValidateVisibleFrame
// property shouldFadeAtEdge attributes=TB,N,V_shouldFadeAtEdge
// property textStartAfterFade attributes=TB,N,V_textStartAfterFade
// IMP 0x10049eda0 | B16@0:8
- (BOOL)requestToStartAnimation;
// IMP 0x10049edfc | B16@0:8
- (BOOL)requestToStopAnimation;
// IMP 0x10049d900 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10049d968 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10049d9b8 | v16@0:8
- (void)didInitialize;
// IMP 0x10049da4c | v16@0:8
- (void)dealloc;
// IMP 0x10049dab4 | v16@0:8
- (void)didMoveToWindow;
// IMP 0x10049dbfc | v24@0:8d16
- (void)setFadeWidthPercent:(double)arg0;
// IMP 0x10049dc20 | v24@0:8@16
- (void)setText:(id)arg0;
// IMP 0x10049dcd0 | v24@0:8@16
- (void)setAttributedText:(id)arg0;
// IMP 0x10049dd80 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawTextInRect:(struct CGRect)arg0;
// IMP 0x10049e090 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10049e1c8 | q16@0:8
- (long long)textRepeatCountConsiderTextWidth;
// IMP 0x10049e220 | v24@0:8@16
- (void)handleDisplayLink:(id)arg0;
// IMP 0x10049e514 | B16@0:8
- (BOOL)shouldPlayDisplayLink;
// IMP 0x10049e674 | v20@0:8B16
- (void)setShouldFadeAtEdge:(BOOL)arg0;
// IMP 0x10049e6a4 | v16@0:8
- (void)checkIfShouldShowGradientLayer;
// IMP 0x10049eb28 | v24@0:8q16
- (void)setNumberOfLines:(long long)arg0;
// IMP 0x10049eb60 | d16@0:8
- (double)speed;
// IMP 0x10049eb70 | v24@0:8d16
- (void)setSpeed:(double)arg0;
// IMP 0x10049eb80 | d16@0:8
- (double)pauseDurationWhenMoveToEdge;
// IMP 0x10049eb90 | v24@0:8d16
- (void)setPauseDurationWhenMoveToEdge:(double)arg0;
// IMP 0x10049eba0 | d16@0:8
- (double)spacingBetweenHeadToTail;
// IMP 0x10049ebb0 | v24@0:8d16
- (void)setSpacingBetweenHeadToTail:(double)arg0;
// IMP 0x10049ebc0 | d16@0:8
- (double)fadeWidthPercent;
// IMP 0x10049ebd0 | B16@0:8
- (BOOL)automaticallyValidateVisibleFrame;
// IMP 0x10049ebe0 | v20@0:8B16
- (void)setAutomaticallyValidateVisibleFrame:(BOOL)arg0;
// IMP 0x10049ebf0 | B16@0:8
- (BOOL)shouldFadeAtEdge;
// IMP 0x10049ec00 | B16@0:8
- (BOOL)textStartAfterFade;
// IMP 0x10049ec10 | v20@0:8B16
- (void)setTextStartAfterFade:(BOOL)arg0;
// IMP 0x10049ec20 | @16@0:8
- (id)displayLink;
// IMP 0x10049ec30 | v24@0:8@16
- (void)setDisplayLink:(id)arg0;
// IMP 0x10049ec44 | d16@0:8
- (double)offsetX;
// IMP 0x10049ec54 | v24@0:8d16
- (void)setOffsetX:(double)arg0;
// IMP 0x10049ec64 | {CGSize=dd}16@0:8
- (struct CGSize)textSize;
// IMP 0x10049ec78 | v32@0:8{CGSize=dd}16
- (void)setTextSize:(struct CGSize)arg0;
// IMP 0x10049ec8c | d16@0:8
- (double)fadeStartPercent;
// IMP 0x10049ec9c | v24@0:8d16
- (void)setFadeStartPercent:(double)arg0;
// IMP 0x10049ecac | d16@0:8
- (double)fadeEndPercent;
// IMP 0x10049ecbc | v24@0:8d16
- (void)setFadeEndPercent:(double)arg0;
// IMP 0x10049eccc | B16@0:8
- (BOOL)isFirstDisplay;
// IMP 0x10049ecdc | v20@0:8B16
- (void)setIsFirstDisplay:(BOOL)arg0;
// IMP 0x10049ecec | @16@0:8
- (id)fadeLayer;
// IMP 0x10049ecfc | v24@0:8@16
- (void)setFadeLayer:(id)arg0;
// IMP 0x10049ed10 | q16@0:8
- (long long)textRepeatCount;
// IMP 0x10049ed20 | v24@0:8q16
- (void)setTextRepeatCount:(long long)arg0;
// IMP 0x10049ed30 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)prevBounds;
// IMP 0x10049ed48 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setPrevBounds:(struct CGRect)arg0;
// IMP 0x10049ed60 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
