// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8dfd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIToastAnimator : NSObject
// ivar _isShowing encoding=B offset=8
// ivar _isAnimating encoding=B offset=9
// ivar _toastView encoding=@"QMUIToastView" offset=16
// ivar _animationType encoding=q offset=24
// ivar _basicAnimationCompletion encoding=@? offset=32
// property isShowing attributes=TB,N,V_isShowing
// property isAnimating attributes=TB,N,V_isAnimating
// property basicAnimationCompletion attributes=T@?,C,N,V_basicAnimationCompletion
// property toastView attributes=T@"QMUIToastView",R,W,N,V_toastView
// property animationType attributes=Tq,N,V_animationType
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004d4e74 | @16@0:8
- (id)init;
// IMP 0x1004d4e7c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004d4e84 | @24@0:8@16
- (id)initWithToastView:(id)arg0;
// IMP 0x1004d4ef0 | v24@0:8@?16
- (void)showWithCompletion:(id /* block */)arg0;
// IMP 0x1004d4f78 | v24@0:8@?16
- (void)hideWithCompletion:(id /* block */)arg0;
// IMP 0x1004d5000 | v28@0:8B16@?20
- (void)zoomAnimationForShow:(BOOL)arg0 withCompletion:(id /* block */)arg1;
// IMP 0x1004d5468 | v28@0:8B16@?20
- (void)slideAnimationForShow:(BOOL)arg0 withCompletion:(id /* block */)arg1;
// IMP 0x1004d55ac | v28@0:8B16@?20
- (void)fadeAnimationForShow:(BOOL)arg0 withCompletion:(id /* block */)arg1;
// IMP 0x1004d5794 | v32@0:8@16@24
- (void)showSlideAnimationOnView:(id)arg0 withIndentifier:(id)arg1;
// IMP 0x1004d5be4 | v32@0:8@16@24
- (void)hideSlideAnimationOnView:(id)arg0 withIndentifier:(id)arg1;
// IMP 0x1004d6034 | v28@0:8@16B24
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
// IMP 0x1004d6138 | B16@0:8
- (BOOL)isShowing;
// IMP 0x1004d613c | B16@0:8
- (BOOL)isAnimating;
// IMP 0x1004d6140 | @16@0:8
- (id)toastView;
// IMP 0x1004d6158 | q16@0:8
- (long long)animationType;
// IMP 0x1004d6160 | v24@0:8q16
- (void)setAnimationType:(long long)arg0;
// IMP 0x1004d6168 | v20@0:8B16
- (void)setIsShowing:(BOOL)arg0;
// IMP 0x1004d6170 | v20@0:8B16
- (void)setIsAnimating:(BOOL)arg0;
// IMP 0x1004d6178 | @?16@0:8
- (id /* block */)basicAnimationCompletion;
// IMP 0x1004d6180 | v24@0:8@?16
- (void)setBasicAnimationCompletion:(id /* block */)arg0;
// IMP 0x1004d6188 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
