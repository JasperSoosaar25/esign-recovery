// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88e08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIDisplayLinkAnimation : NSObject
// ivar _repeat encoding=B offset=8
// ivar _autoreverses encoding=B offset=9
// ivar _isReversing encoding=B offset=10
// ivar _repeatCount encoding=f offset=12
// ivar _displayLink encoding=@"CADisplayLink" offset=16
// ivar _fromValue encoding=@ offset=24
// ivar _toValue encoding=@ offset=32
// ivar _duration encoding=d offset=40
// ivar _easing encoding=q offset=48
// ivar _beginTime encoding=d offset=56
// ivar _animation encoding=@? offset=64
// ivar _animations encoding=@? offset=72
// ivar _willStartAnimation encoding=@? offset=80
// ivar _didStopAnimation encoding=@? offset=88
// ivar _timeOffset encoding=d offset=96
// ivar _curRepeatCount encoding=q offset=104
// property displayLink attributes=T@"CADisplayLink",&,N,V_displayLink
// property timeOffset attributes=Td,N,V_timeOffset
// property curRepeatCount attributes=Tq,N,V_curRepeatCount
// property isReversing attributes=TB,N,V_isReversing
// property fromValue attributes=T@,&,N,V_fromValue
// property toValue attributes=T@,&,N,V_toValue
// property duration attributes=Td,N,V_duration
// property easing attributes=Tq,N,V_easing
// property repeat attributes=TB,N,V_repeat
// property beginTime attributes=Td,N,V_beginTime
// property repeatCount attributes=Tf,N,V_repeatCount
// property autoreverses attributes=TB,N,V_autoreverses
// property animation attributes=T@?,C,N,V_animation
// property animations attributes=T@?,C,N,V_animations
// property willStartAnimation attributes=T@?,C,N,V_willStartAnimation
// property didStopAnimation attributes=T@?,C,N,V_didStopAnimation
// IMP 0x100477ba8 | @16@0:8
- (id)init;
// IMP 0x100477c7c | @56@0:8d16q24@32@40@?48
- (id)initWithDuration:(double)arg0 easing:(long long)arg1 fromValue:(id)arg2 toValue:(id)arg3 animation:(id /* block */)arg4;
// IMP 0x100477d4c | @40@0:8d16q24@?32
- (id)initWithDuration:(double)arg0 easing:(long long)arg1 animations:(id /* block */)arg2;
// IMP 0x100477dcc | v16@0:8
- (void)dealloc;
// IMP 0x100477e20 | v16@0:8
- (void)startAnimation;
// IMP 0x1004780a4 | v16@0:8
- (void)stopAnimation;
// IMP 0x100478130 | v24@0:8@16
- (void)handleDisplayLink:(id)arg0;
// IMP 0x100478364 | v16@0:8
- (void)beginToIncrease;
// IMP 0x1004783fc | v16@0:8
- (void)beginToDecrease;
// IMP 0x1004784b0 | q16@0:8
- (long long)preferredFramesPerSecond;
// IMP 0x100478540 | @16@0:8
- (id)displayLink;
// IMP 0x100478548 | v24@0:8@16
- (void)setDisplayLink:(id)arg0;
// IMP 0x100478554 | @16@0:8
- (id)fromValue;
// IMP 0x10047855c | v24@0:8@16
- (void)setFromValue:(id)arg0;
// IMP 0x100478568 | @16@0:8
- (id)toValue;
// IMP 0x100478570 | v24@0:8@16
- (void)setToValue:(id)arg0;
// IMP 0x10047857c | d16@0:8
- (double)duration;
// IMP 0x100478584 | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x10047858c | q16@0:8
- (long long)easing;
// IMP 0x100478594 | v24@0:8q16
- (void)setEasing:(long long)arg0;
// IMP 0x10047859c | B16@0:8
- (BOOL)repeat;
// IMP 0x1004785a4 | v20@0:8B16
- (void)setRepeat:(BOOL)arg0;
// IMP 0x1004785ac | d16@0:8
- (double)beginTime;
// IMP 0x1004785b4 | v24@0:8d16
- (void)setBeginTime:(double)arg0;
// IMP 0x1004785bc | f16@0:8
- (float)repeatCount;
// IMP 0x1004785c4 | v20@0:8f16
- (void)setRepeatCount:(float)arg0;
// IMP 0x1004785cc | B16@0:8
- (BOOL)autoreverses;
// IMP 0x1004785d4 | v20@0:8B16
- (void)setAutoreverses:(BOOL)arg0;
// IMP 0x1004785dc | @?16@0:8
- (id /* block */)animation;
// IMP 0x1004785e4 | v24@0:8@?16
- (void)setAnimation:(id /* block */)arg0;
// IMP 0x1004785ec | @?16@0:8
- (id /* block */)animations;
// IMP 0x1004785f4 | v24@0:8@?16
- (void)setAnimations:(id /* block */)arg0;
// IMP 0x1004785fc | @?16@0:8
- (id /* block */)willStartAnimation;
// IMP 0x100478604 | v24@0:8@?16
- (void)setWillStartAnimation:(id /* block */)arg0;
// IMP 0x10047860c | @?16@0:8
- (id /* block */)didStopAnimation;
// IMP 0x100478614 | v24@0:8@?16
- (void)setDidStopAnimation:(id /* block */)arg0;
// IMP 0x10047861c | d16@0:8
- (double)timeOffset;
// IMP 0x100478624 | v24@0:8d16
- (void)setTimeOffset:(double)arg0;
// IMP 0x10047862c | q16@0:8
- (long long)curRepeatCount;
// IMP 0x100478634 | v24@0:8q16
- (void)setCurRepeatCount:(long long)arg0;
// IMP 0x10047863c | B16@0:8
- (BOOL)isReversing;
// IMP 0x100478644 | v20@0:8B16
- (void)setIsReversing:(BOOL)arg0;
// IMP 0x10047864c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004786b8 | @48@0:8@16@24@?32@?40
+ (id)springAnimateWithFromValue:(id)arg0 toValue:(id)arg1 animation:(id /* block */)arg2 createdBlock:(id /* block */)arg3;
// IMP 0x1004786d4 | @56@0:8d16q24@32@40@?48
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 fromValue:(id)arg2 toValue:(id)arg3 animation:(id /* block */)arg4;
// IMP 0x1004786dc | @64@0:8d16q24@32@40@?48@?56
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 fromValue:(id)arg2 toValue:(id)arg3 animation:(id /* block */)arg4 createdBlock:(id /* block */)arg5;
// IMP 0x1004786e4 | @72@0:8d16q24@32@40@?48@?56@?64
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 fromValue:(id)arg2 toValue:(id)arg3 animation:(id /* block */)arg4 createdBlock:(id /* block */)arg5 didStopBlock:(id /* block */)arg6;
// IMP 0x1004788d4 | @32@0:8@?16@?24
+ (id)springAnimateWithAnimations:(id /* block */)arg0 createdBlock:(id /* block */)arg1;
// IMP 0x1004788e8 | @40@0:8d16q24@?32
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 animations:(id /* block */)arg2;
// IMP 0x1004788f0 | @48@0:8d16q24@?32@?40
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 animations:(id /* block */)arg2 createdBlock:(id /* block */)arg3;
// IMP 0x1004788f8 | @56@0:8d16q24@?32@?40@?48
+ (id)animateWithDuration:(double)arg0 easing:(long long)arg1 animations:(id /* block */)arg2 createdBlock:(id /* block */)arg3 didStopBlock:(id /* block */)arg4;
@end
