// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c917d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageTransition : NSObject
// ivar _avoidAutoSetImage encoding=B offset=8
// ivar _duration encoding=d offset=16
// ivar _timingFunction encoding=@"CAMediaTimingFunction" offset=24
// ivar _animationOptions encoding=Q offset=32
// ivar _prepares encoding=@? offset=40
// ivar _animations encoding=@? offset=48
// ivar _completion encoding=@? offset=56
// property avoidAutoSetImage attributes=TB,N,V_avoidAutoSetImage
// property duration attributes=Td,N,V_duration
// property timingFunction attributes=T@"CAMediaTimingFunction",&,N,V_timingFunction
// property animationOptions attributes=TQ,N,V_animationOptions
// property prepares attributes=T@?,C,N,V_prepares
// property animations attributes=T@?,C,N,V_animations
// property completion attributes=T@?,C,N,V_completion
// IMP 0x100557e10 | @16@0:8
- (id)init;
// IMP 0x100557e64 | B16@0:8
- (BOOL)avoidAutoSetImage;
// IMP 0x100557e6c | v20@0:8B16
- (void)setAvoidAutoSetImage:(BOOL)arg0;
// IMP 0x100557e74 | d16@0:8
- (double)duration;
// IMP 0x100557e7c | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x100557e84 | @16@0:8
- (id)timingFunction;
// IMP 0x100557e8c | v24@0:8@16
- (void)setTimingFunction:(id)arg0;
// IMP 0x100557e98 | Q16@0:8
- (unsigned long long)animationOptions;
// IMP 0x100557ea0 | v24@0:8Q16
- (void)setAnimationOptions:(unsigned long long)arg0;
// IMP 0x100557ea8 | @?16@0:8
- (id /* block */)prepares;
// IMP 0x100557eb0 | v24@0:8@?16
- (void)setPrepares:(id /* block */)arg0;
// IMP 0x100557eb8 | @?16@0:8
- (id /* block */)animations;
// IMP 0x100557ec0 | v24@0:8@?16
- (void)setAnimations:(id /* block */)arg0;
// IMP 0x100557ec8 | @?16@0:8
- (id /* block */)completion;
// IMP 0x100557ed0 | v24@0:8@?16
- (void)setCompletion:(id /* block */)arg0;
// IMP 0x100557ed8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100557f20 | @16@0:8
+ (id)fadeTransition;
// IMP 0x100557f28 | @24@0:8d16
+ (id)fadeTransitionWithDuration:(double)arg0;
// IMP 0x100557f78 | @16@0:8
+ (id)flipFromLeftTransition;
// IMP 0x100557f80 | @24@0:8d16
+ (id)flipFromLeftTransitionWithDuration:(double)arg0;
// IMP 0x100557fd0 | @16@0:8
+ (id)flipFromRightTransition;
// IMP 0x100557fd8 | @24@0:8d16
+ (id)flipFromRightTransitionWithDuration:(double)arg0;
// IMP 0x100558028 | @16@0:8
+ (id)flipFromTopTransition;
// IMP 0x100558030 | @24@0:8d16
+ (id)flipFromTopTransitionWithDuration:(double)arg0;
// IMP 0x100558080 | @16@0:8
+ (id)flipFromBottomTransition;
// IMP 0x100558088 | @24@0:8d16
+ (id)flipFromBottomTransitionWithDuration:(double)arg0;
// IMP 0x1005580d8 | @16@0:8
+ (id)curlUpTransition;
// IMP 0x1005580e0 | @24@0:8d16
+ (id)curlUpTransitionWithDuration:(double)arg0;
// IMP 0x100558130 | @16@0:8
+ (id)curlDownTransition;
// IMP 0x100558138 | @24@0:8d16
+ (id)curlDownTransitionWithDuration:(double)arg0;
@end
