// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b728
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUINavigationBarScrollingAnimator : QMUIScrollAnimator
// ivar _adjustsOffsetYWithInsetTopAutomatically encoding=B offset=8
// ivar _continuous encoding=B offset=9
// ivar _progressZeroReached encoding=B offset=10
// ivar _progressOneReached encoding=B offset=11
// ivar _navigationBar encoding=@"UINavigationBar" offset=16
// ivar _offsetYToStartAnimation encoding=d offset=24
// ivar _distanceToStopAnimation encoding=d offset=32
// ivar _animationBlock encoding=@? offset=40
// ivar _backgroundImageBlock encoding=@? offset=48
// ivar _shadowImageBlock encoding=@? offset=56
// ivar _tintColorBlock encoding=@? offset=64
// ivar _titleViewTintColorBlock encoding=@? offset=72
// ivar _statusbarStyleBlock encoding=@? offset=80
// ivar _barTintColorBlock encoding=@? offset=88
// property progressZeroReached attributes=TB,N,V_progressZeroReached
// property progressOneReached attributes=TB,N,V_progressOneReached
// property navigationBar attributes=T@"UINavigationBar",W,N,V_navigationBar
// property offsetYToStartAnimation attributes=Td,N,V_offsetYToStartAnimation
// property distanceToStopAnimation attributes=Td,N,V_distanceToStopAnimation
// property adjustsOffsetYWithInsetTopAutomatically attributes=TB,N,V_adjustsOffsetYWithInsetTopAutomatically
// property progress attributes=Tf,R,N
// property continuous attributes=TB,N,V_continuous
// property animationBlock attributes=T@?,C,N,V_animationBlock
// property backgroundImageBlock attributes=T@?,C,N,V_backgroundImageBlock
// property shadowImageBlock attributes=T@?,C,N,V_shadowImageBlock
// property tintColorBlock attributes=T@?,C,N,V_tintColorBlock
// property titleViewTintColorBlock attributes=T@?,C,N,V_titleViewTintColorBlock
// property statusbarStyleBlock attributes=T@?,C,N,V_statusbarStyleBlock
// property barTintColorBlock attributes=T@?,C,N,V_barTintColorBlock
// IMP 0x1004a9674 | @16@0:8
- (id)init;
// IMP 0x1004a9b1c | f16@0:8
- (float)progress;
// IMP 0x1004a9c5c | v24@0:8d16
- (void)setOffsetYToStartAnimation:(double)arg0;
// IMP 0x1004a9c7c | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x1004a9d04 | v16@0:8
- (void)resetState;
// IMP 0x1004a9d38 | @16@0:8
- (id)navigationBar;
// IMP 0x1004a9d58 | v24@0:8@16
- (void)setNavigationBar:(id)arg0;
// IMP 0x1004a9d6c | d16@0:8
- (double)offsetYToStartAnimation;
// IMP 0x1004a9d7c | d16@0:8
- (double)distanceToStopAnimation;
// IMP 0x1004a9d8c | v24@0:8d16
- (void)setDistanceToStopAnimation:(double)arg0;
// IMP 0x1004a9d9c | B16@0:8
- (BOOL)adjustsOffsetYWithInsetTopAutomatically;
// IMP 0x1004a9dac | v20@0:8B16
- (void)setAdjustsOffsetYWithInsetTopAutomatically:(BOOL)arg0;
// IMP 0x1004a9dbc | B16@0:8
- (BOOL)continuous;
// IMP 0x1004a9dcc | v20@0:8B16
- (void)setContinuous:(BOOL)arg0;
// IMP 0x1004a9ddc | @?16@0:8
- (id /* block */)animationBlock;
// IMP 0x1004a9dec | v24@0:8@?16
- (void)setAnimationBlock:(id /* block */)arg0;
// IMP 0x1004a9df8 | @?16@0:8
- (id /* block */)backgroundImageBlock;
// IMP 0x1004a9e08 | v24@0:8@?16
- (void)setBackgroundImageBlock:(id /* block */)arg0;
// IMP 0x1004a9e14 | @?16@0:8
- (id /* block */)shadowImageBlock;
// IMP 0x1004a9e24 | v24@0:8@?16
- (void)setShadowImageBlock:(id /* block */)arg0;
// IMP 0x1004a9e30 | @?16@0:8
- (id /* block */)tintColorBlock;
// IMP 0x1004a9e40 | v24@0:8@?16
- (void)setTintColorBlock:(id /* block */)arg0;
// IMP 0x1004a9e4c | @?16@0:8
- (id /* block */)titleViewTintColorBlock;
// IMP 0x1004a9e5c | v24@0:8@?16
- (void)setTitleViewTintColorBlock:(id /* block */)arg0;
// IMP 0x1004a9e68 | @?16@0:8
- (id /* block */)statusbarStyleBlock;
// IMP 0x1004a9e78 | v24@0:8@?16
- (void)setStatusbarStyleBlock:(id /* block */)arg0;
// IMP 0x1004a9e84 | @?16@0:8
- (id /* block */)barTintColorBlock;
// IMP 0x1004a9e94 | v24@0:8@?16
- (void)setBarTintColorBlock:(id /* block */)arg0;
// IMP 0x1004a9ea0 | B16@0:8
- (BOOL)progressZeroReached;
// IMP 0x1004a9eb0 | v20@0:8B16
- (void)setProgressZeroReached:(BOOL)arg0;
// IMP 0x1004a9ec0 | B16@0:8
- (BOOL)progressOneReached;
// IMP 0x1004a9ed0 | v20@0:8B16
- (void)setProgressOneReached:(BOOL)arg0;
// IMP 0x1004a9ee0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
