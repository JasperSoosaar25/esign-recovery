// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7de58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBrightnessSlider : UIView
// ivar _drag encoding=B offset=8
// ivar _value encoding=f offset=12
// ivar _minimumValue encoding=f offset=16
// ivar _maximumValue encoding=f offset=20
// ivar _thumbView encoding=@"UIView" offset=24
// ivar _trackView encoding=@"UIView" offset=32
// ivar _leftImageView encoding=@"UIImageView" offset=40
// ivar _rightImageView encoding=@"UIImageView" offset=48
// ivar _pangGest encoding=@"UIPanGestureRecognizer" offset=56
// ivar _startX encoding=d offset=64
// ivar _defaultValue encoding=d offset=72
// ivar _sliderContentView encoding=@"UIView" offset=80
// property startX attributes=Td,N,V_startX
// property defaultValue attributes=Td,N,V_defaultValue
// property drag attributes=TB,N,V_drag
// property sliderContentView attributes=T@"UIView",&,N,V_sliderContentView
// property value attributes=Tf,N,V_value
// property minimumValue attributes=Tf,N,V_minimumValue
// property maximumValue attributes=Tf,N,V_maximumValue
// property thumbView attributes=T@"UIView",&,N,V_thumbView
// property trackView attributes=T@"UIView",&,N,V_trackView
// property leftImageView attributes=T@"UIImageView",&,N,V_leftImageView
// property rightImageView attributes=T@"UIImageView",&,N,V_rightImageView
// property pangGest attributes=T@"UIPanGestureRecognizer",&,N,V_pangGest
// IMP 0x1001a211c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1001a2384 | v16@0:8
- (void)styleChange;
// IMP 0x1001a2640 | v16@0:8
- (void)dealloc;
// IMP 0x1001a2748 | f16@0:8
- (float)getRate;
// IMP 0x1001a27fc | v24@0:8f16B20
- (void)setValue:(float)arg0 animated:(BOOL)arg1;
// IMP 0x1001a2cc0 | v20@0:8f16
- (void)setValue:(float)arg0;
// IMP 0x1001a2cd4 | v24@0:8@16
- (void)panHandle:(id)arg0;
// IMP 0x1001a318c | v16@0:8
- (void)layoutSubviews;
// IMP 0x1001a38f0 | v16@0:8
- (void)loadSubviews;
// IMP 0x1001a4358 | f16@0:8
- (float)value;
// IMP 0x1001a4374 | f16@0:8
- (float)minimumValue;
// IMP 0x1001a439c | v20@0:8f16
- (void)setMinimumValue:(float)arg0;
// IMP 0x1001a43c4 | f16@0:8
- (float)maximumValue;
// IMP 0x1001a43ec | v20@0:8f16
- (void)setMaximumValue:(float)arg0;
// IMP 0x1001a4428 | @16@0:8
- (id)thumbView;
// IMP 0x1001a4450 | v24@0:8@16
- (void)setThumbView:(id)arg0;
// IMP 0x1001a44c4 | @16@0:8
- (id)trackView;
// IMP 0x1001a44e0 | v24@0:8@16
- (void)setTrackView:(id)arg0;
// IMP 0x1001a4558 | @16@0:8
- (id)leftImageView;
// IMP 0x1001a458c | v24@0:8@16
- (void)setLeftImageView:(id)arg0;
// IMP 0x1001a45fc | @16@0:8
- (id)rightImageView;
// IMP 0x1001a4630 | v24@0:8@16
- (void)setRightImageView:(id)arg0;
// IMP 0x1001a4694 | @16@0:8
- (id)pangGest;
// IMP 0x1001a46bc | v24@0:8@16
- (void)setPangGest:(id)arg0;
// IMP 0x1001a46dc | d16@0:8
- (double)startX;
// IMP 0x1001a4704 | v24@0:8d16
- (void)setStartX:(double)arg0;
// IMP 0x1001a4758 | d16@0:8
- (double)defaultValue;
// IMP 0x1001a4780 | v24@0:8d16
- (void)setDefaultValue:(double)arg0;
// IMP 0x1001a47d0 | B16@0:8
- (BOOL)drag;
// IMP 0x1001a4800 | v20@0:8B16
- (void)setDrag:(BOOL)arg0;
// IMP 0x1001a481c | @16@0:8
- (id)sliderContentView;
// IMP 0x1001a4854 | v24@0:8@16
- (void)setSliderContentView:(id)arg0;
// IMP 0x1001a48c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
