// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b778
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUINavigationBarScrollingSnapAnimator : QMUIScrollAnimator
// ivar _adjustsOffsetYWithInsetTopAutomatically encoding=B offset=8
// ivar _continuous encoding=B offset=9
// ivar _alreadyCalledScrollDownAnimation encoding=B offset=10
// ivar _alreadyCalledScrollUpAnimation encoding=B offset=11
// ivar _navigationBar encoding=@"UINavigationBar" offset=16
// ivar _offsetYToStartAnimation encoding=d offset=24
// ivar _animationBlock encoding=@? offset=32
// property alreadyCalledScrollDownAnimation attributes=TB,N,V_alreadyCalledScrollDownAnimation
// property alreadyCalledScrollUpAnimation attributes=TB,N,V_alreadyCalledScrollUpAnimation
// property navigationBar attributes=T@"UINavigationBar",W,N,V_navigationBar
// property offsetYToStartAnimation attributes=Td,N,V_offsetYToStartAnimation
// property adjustsOffsetYWithInsetTopAutomatically attributes=TB,N,V_adjustsOffsetYWithInsetTopAutomatically
// property animationBlock attributes=T@?,C,N,V_animationBlock
// property offsetYReached attributes=TB,R,N
// property continuous attributes=TB,N,V_continuous
// IMP 0x1004a9f94 | @16@0:8
- (id)init;
// IMP 0x1004aa19c | B16@0:8
- (BOOL)offsetYReached;
// IMP 0x1004aa2a8 | v24@0:8d16
- (void)setOffsetYToStartAnimation:(double)arg0;
// IMP 0x1004aa2c8 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x1004aa350 | v16@0:8
- (void)resetState;
// IMP 0x1004aa384 | @16@0:8
- (id)navigationBar;
// IMP 0x1004aa3a4 | v24@0:8@16
- (void)setNavigationBar:(id)arg0;
// IMP 0x1004aa3b8 | d16@0:8
- (double)offsetYToStartAnimation;
// IMP 0x1004aa3c8 | B16@0:8
- (BOOL)adjustsOffsetYWithInsetTopAutomatically;
// IMP 0x1004aa3d8 | v20@0:8B16
- (void)setAdjustsOffsetYWithInsetTopAutomatically:(BOOL)arg0;
// IMP 0x1004aa3e8 | @?16@0:8
- (id /* block */)animationBlock;
// IMP 0x1004aa3f8 | v24@0:8@?16
- (void)setAnimationBlock:(id /* block */)arg0;
// IMP 0x1004aa404 | B16@0:8
- (BOOL)continuous;
// IMP 0x1004aa414 | v20@0:8B16
- (void)setContinuous:(BOOL)arg0;
// IMP 0x1004aa424 | B16@0:8
- (BOOL)alreadyCalledScrollDownAnimation;
// IMP 0x1004aa434 | v20@0:8B16
- (void)setAlreadyCalledScrollDownAnimation:(BOOL)arg0;
// IMP 0x1004aa444 | B16@0:8
- (BOOL)alreadyCalledScrollUpAnimation;
// IMP 0x1004aa454 | v20@0:8B16
- (void)setAlreadyCalledScrollUpAnimation:(BOOL)arg0;
// IMP 0x1004aa464 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
