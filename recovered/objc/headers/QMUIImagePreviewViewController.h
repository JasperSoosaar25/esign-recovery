// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a070
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePreviewViewController : QMUICommonViewController
// ivar _dismissingGestureEnabled encoding=B offset=16
// ivar _canShowPresentingViewControllerWhenGesturing encoding=B offset=17
// ivar _originalStatusBarHidden encoding=B offset=18
// ivar _statusBarHidden encoding=B offset=19
// ivar _imagePreviewView encoding=@"QMUIImagePreviewView" offset=24
// ivar _backgroundColor encoding=@"UIColor" offset=32
// ivar _transitioningAnimator encoding=@"QMUIImagePreviewViewTransitionAnimator" offset=40
// ivar _presentingStyle encoding=Q offset=48
// ivar _dismissingStyle encoding=Q offset=56
// ivar _sourceImageView encoding=@? offset=64
// ivar _sourceImageRect encoding=@? offset=72
// ivar _sourceImageCornerRadius encoding=d offset=80
// ivar _dismissingGesture encoding=@"UIPanGestureRecognizer" offset=88
// ivar _gestureZoomImageView encoding=@"QMUIZoomImageView" offset=96
// ivar _gestureBeganLocation encoding={CGPoint="x"d"y"d} offset=104
// property dismissingGesture attributes=T@"UIPanGestureRecognizer",&,N,V_dismissingGesture
// property gestureBeganLocation attributes=T{CGPoint=dd},N,V_gestureBeganLocation
// property gestureZoomImageView attributes=T@"QMUIZoomImageView",W,N,V_gestureZoomImageView
// property canShowPresentingViewControllerWhenGesturing attributes=TB,N,V_canShowPresentingViewControllerWhenGesturing
// property originalStatusBarHidden attributes=TB,N,V_originalStatusBarHidden
// property statusBarHidden attributes=TB,N,V_statusBarHidden
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property imagePreviewView attributes=T@"QMUIImagePreviewView",R,N,V_imagePreviewView
// property transitioningAnimator attributes=T@"QMUIImagePreviewViewTransitionAnimator",&,N,V_transitioningAnimator
// property presentingStyle attributes=TQ,N,V_presentingStyle
// property dismissingStyle attributes=TQ,N,V_dismissingStyle
// property sourceImageView attributes=T@?,C,N,V_sourceImageView
// property sourceImageRect attributes=T@?,C,N,V_sourceImageRect
// property sourceImageCornerRadius attributes=Td,N,V_sourceImageCornerRadius
// property dismissingGestureEnabled attributes=TB,N,V_dismissingGestureEnabled
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004914e8 | v16@0:8
- (void)didInitialize;
// IMP 0x1004915b0 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x10049162c | @16@0:8
- (id)imagePreviewView;
// IMP 0x1004916dc | v16@0:8
- (void)initSubviews;
// IMP 0x1004917a8 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1004918f8 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1004919c4 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100491a24 | v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg0;
// IMP 0x100491a80 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x100491ad0 | v24@0:8Q16
- (void)setPresentingStyle:(unsigned long long)arg0;
// IMP 0x100491ae0 | v24@0:8@16
- (void)setTransitioningAnimator:(id)arg0;
// IMP 0x100491b2c | B16@0:8
- (BOOL)prefersStatusBarHidden;
// IMP 0x100491cc8 | v16@0:8
- (void)initObjectsForZoomStyleIfNeeded;
// IMP 0x100491d88 | v16@0:8
- (void)removeObjectsForZoomStyle;
// IMP 0x100491e20 | v24@0:8@16
- (void)handleDismissingPreviewGesture:(id)arg0;
// IMP 0x1004922e8 | v16@0:8
- (void)cancelDismissingGesture;
// IMP 0x100492390 | v16@0:8
- (void)resetDismissingGesture;
// IMP 0x10049244c | @24@0:8@16
- (id)visibleViewControllerWithViewController:(id)arg0;
// IMP 0x100492518 | @40@0:8@16@24@32
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
// IMP 0x10049251c | @24@0:8@16
- (id)animationControllerForDismissedController:(id)arg0;
// IMP 0x100492520 | @16@0:8
- (id)backgroundColor;
// IMP 0x100492530 | @16@0:8
- (id)transitioningAnimator;
// IMP 0x100492540 | Q16@0:8
- (unsigned long long)presentingStyle;
// IMP 0x100492550 | Q16@0:8
- (unsigned long long)dismissingStyle;
// IMP 0x100492560 | v24@0:8Q16
- (void)setDismissingStyle:(unsigned long long)arg0;
// IMP 0x100492570 | @?16@0:8
- (id /* block */)sourceImageView;
// IMP 0x100492580 | v24@0:8@?16
- (void)setSourceImageView:(id /* block */)arg0;
// IMP 0x10049258c | @?16@0:8
- (id /* block */)sourceImageRect;
// IMP 0x10049259c | v24@0:8@?16
- (void)setSourceImageRect:(id /* block */)arg0;
// IMP 0x1004925a8 | d16@0:8
- (double)sourceImageCornerRadius;
// IMP 0x1004925b8 | v24@0:8d16
- (void)setSourceImageCornerRadius:(double)arg0;
// IMP 0x1004925c8 | B16@0:8
- (BOOL)dismissingGestureEnabled;
// IMP 0x1004925d8 | v20@0:8B16
- (void)setDismissingGestureEnabled:(BOOL)arg0;
// IMP 0x1004925e8 | @16@0:8
- (id)dismissingGesture;
// IMP 0x1004925f8 | v24@0:8@16
- (void)setDismissingGesture:(id)arg0;
// IMP 0x10049260c | {CGPoint=dd}16@0:8
- (struct CGPoint)gestureBeganLocation;
// IMP 0x100492620 | v32@0:8{CGPoint=dd}16
- (void)setGestureBeganLocation:(struct CGPoint)arg0;
// IMP 0x100492634 | @16@0:8
- (id)gestureZoomImageView;
// IMP 0x100492654 | v24@0:8@16
- (void)setGestureZoomImageView:(id)arg0;
// IMP 0x100492668 | B16@0:8
- (BOOL)canShowPresentingViewControllerWhenGesturing;
// IMP 0x100492678 | v20@0:8B16
- (void)setCanShowPresentingViewControllerWhenGesturing:(BOOL)arg0;
// IMP 0x100492688 | B16@0:8
- (BOOL)originalStatusBarHidden;
// IMP 0x100492698 | v20@0:8B16
- (void)setOriginalStatusBarHidden:(BOOL)arg0;
// IMP 0x1004926a8 | B16@0:8
- (BOOL)statusBarHidden;
// IMP 0x1004926b8 | v20@0:8B16
- (void)setStatusBarHidden:(BOOL)arg0;
// IMP 0x1004926c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004913c8 | @16@0:8
+ (id)appearance;
// IMP 0x1004913d8 | v16@0:8
+ (void)initialize;
// IMP 0x10049144c | v16@0:8
+ (void)initAppearance;
@end
