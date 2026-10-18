// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a0c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePreviewViewTransitionAnimator : NSObject
// ivar _imagePreviewViewController encoding=@"QMUIImagePreviewViewController" offset=8
// ivar _duration encoding=d offset=16
// ivar _cornerRadiusMaskLayer encoding=@"CALayer" offset=24
// ivar _animationEnteringBlock encoding=@? offset=32
// ivar _animationBlock encoding=@? offset=40
// ivar _animationCompletionBlock encoding=@? offset=48
// property imagePreviewViewController attributes=T@"QMUIImagePreviewViewController",W,N,V_imagePreviewViewController
// property duration attributes=Td,N,V_duration
// property cornerRadiusMaskLayer attributes=T@"CALayer",R,N,V_cornerRadiusMaskLayer
// property animationEnteringBlock attributes=T@?,C,N,V_animationEnteringBlock
// property animationBlock attributes=T@?,C,N,V_animationBlock
// property animationCompletionBlock attributes=T@?,C,N,V_animationCompletionBlock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100492768 | @16@0:8
- (id)init;
// IMP 0x10049383c | v24@0:8@16
- (void)animateTransition:(id)arg0;
// IMP 0x10049406c | d24@0:8@16
- (double)transitionDuration:(id)arg0;
// IMP 0x100494070 | @16@0:8
- (id)imagePreviewViewController;
// IMP 0x100494088 | v24@0:8@16
- (void)setImagePreviewViewController:(id)arg0;
// IMP 0x100494094 | d16@0:8
- (double)duration;
// IMP 0x10049409c | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x1004940a4 | @16@0:8
- (id)cornerRadiusMaskLayer;
// IMP 0x1004940ac | @?16@0:8
- (id /* block */)animationEnteringBlock;
// IMP 0x1004940b4 | v24@0:8@?16
- (void)setAnimationEnteringBlock:(id /* block */)arg0;
// IMP 0x1004940bc | @?16@0:8
- (id /* block */)animationBlock;
// IMP 0x1004940c4 | v24@0:8@?16
- (void)setAnimationBlock:(id /* block */)arg0;
// IMP 0x1004940cc | @?16@0:8
- (id /* block */)animationCompletionBlock;
// IMP 0x1004940d4 | v24@0:8@?16
- (void)setAnimationCompletionBlock:(id /* block */)arg0;
// IMP 0x1004940dc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
