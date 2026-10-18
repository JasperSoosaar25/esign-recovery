// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b548
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIModalPresentationViewController : UIViewController
// ivar _shouldDimmedAppAutomatically encoding=B offset=8
// ivar _modal encoding=B offset=9
// ivar _visible encoding=B offset=10
// ivar _onlyRespondsToKeyboardEventFromDescendantViews encoding=B offset=11
// ivar _appearAnimated encoding=B offset=12
// ivar _disappearAnimated encoding=B offset=13
// ivar _viewWillAppearByPresentedViewController encoding=B offset=14
// ivar _hasAlreadyViewWillDisappear encoding=B offset=15
// ivar _willHideInView encoding=B offset=16
// ivar _avoidKeyboardLayout encoding=B offset=17
// ivar _delegate encoding=@"<QMUIModalPresentationViewControllerDelegate>" offset=24
// ivar _contentView encoding=@"UIView" offset=32
// ivar _contentViewController encoding=@"UIViewController<QMUIModalPresentationContentViewControllerProtocol>" offset=40
// ivar _maximumContentViewWidth encoding=d offset=48
// ivar _window encoding=@"QMUIModalPresentationWindow" offset=56
// ivar _dimmingView encoding=@"UIView" offset=64
// ivar _willHideByDimmingViewTappedBlock encoding=@? offset=72
// ivar _didHideByDimmingViewTappedBlock encoding=@? offset=80
// ivar _supportedOrientationMask encoding=Q offset=88
// ivar _animationStyle encoding=Q offset=96
// ivar _layoutBlock encoding=@? offset=104
// ivar _showingAnimation encoding=@? offset=112
// ivar _hidingAnimation encoding=@? offset=120
// ivar _previousKeyWindow encoding=@"UIWindow" offset=128
// ivar _appearCompletionBlock encoding=@? offset=136
// ivar _disappearCompletionBlock encoding=@? offset=144
// ivar _dimmingViewTapGestureRecognizer encoding=@"UITapGestureRecognizer" offset=152
// ivar _keyboardManager encoding=@"QMUIKeyboardManager" offset=160
// ivar _keyboardHeight encoding=d offset=168
// ivar _contentViewMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=176
// property window attributes=T@"QMUIModalPresentationWindow",&,N,V_window
// property previousKeyWindow attributes=T@"UIWindow",W,N,V_previousKeyWindow
// property visible attributes=TB,N,GisVisible,V_visible
// property appearAnimated attributes=TB,N,V_appearAnimated
// property appearCompletionBlock attributes=T@?,C,N,V_appearCompletionBlock
// property disappearAnimated attributes=TB,N,V_disappearAnimated
// property disappearCompletionBlock attributes=T@?,C,N,V_disappearCompletionBlock
// property viewWillAppearByPresentedViewController attributes=TB,N,V_viewWillAppearByPresentedViewController
// property hasAlreadyViewWillDisappear attributes=TB,N,V_hasAlreadyViewWillDisappear
// property willHideInView attributes=TB,N,V_willHideInView
// property dimmingViewTapGestureRecognizer attributes=T@"UITapGestureRecognizer",&,N,V_dimmingViewTapGestureRecognizer
// property keyboardManager attributes=T@"QMUIKeyboardManager",&,N,V_keyboardManager
// property keyboardHeight attributes=Td,N,V_keyboardHeight
// property avoidKeyboardLayout attributes=TB,N,V_avoidKeyboardLayout
// property delegate attributes=T@"<QMUIModalPresentationViewControllerDelegate>",W,N,V_delegate
// property contentView attributes=T@"UIView",&,N,V_contentView
// property contentViewController attributes=T@"UIViewController<QMUIModalPresentationContentViewControllerProtocol>",&,N,V_contentViewController
// property contentViewMargins attributes=T{UIEdgeInsets=dddd},N,V_contentViewMargins
// property maximumContentViewWidth attributes=Td,N,V_maximumContentViewWidth
// property shouldDimmedAppAutomatically attributes=TB,N,V_shouldDimmedAppAutomatically
// property dimmingView attributes=T@"UIView",&,N,V_dimmingView
// property willHideByDimmingViewTappedBlock attributes=T@?,C,N,V_willHideByDimmingViewTappedBlock
// property didHideByDimmingViewTappedBlock attributes=T@?,C,N,V_didHideByDimmingViewTappedBlock
// property modal attributes=TB,N,GisModal,V_modal
// property supportedOrientationMask attributes=TQ,N,V_supportedOrientationMask
// property animationStyle attributes=TQ,N,V_animationStyle
// property shownInWindowMode attributes=TB,R,N,GisShownInWindowMode
// property shownInPresentedMode attributes=TB,R,N,GisShownInPresentedMode
// property shownInSubviewMode attributes=TB,R,N,GisShownInSubviewMode
// property onlyRespondsToKeyboardEventFromDescendantViews attributes=TB,N,V_onlyRespondsToKeyboardEventFromDescendantViews
// property layoutBlock attributes=T@?,C,N,V_layoutBlock
// property showingAnimation attributes=T@?,C,N,V_showingAnimation
// property hidingAnimation attributes=T@?,C,N,V_hidingAnimation
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100531ae8 | v40@0:8@16@24@32
- (void)qmui_themeDidChangeByManager:(id)arg0 identifier:(id)arg1 theme:(id)arg2;
// IMP 0x10049f204 | @32@0:8@16@24
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
// IMP 0x10049f254 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10049f2a4 | v16@0:8
- (void)didInitialize;
// IMP 0x10049f3a0 | v16@0:8
- (void)awakeFromNib;
// IMP 0x10049f424 | v16@0:8
- (void)dealloc;
// IMP 0x10049f46c | B16@0:8
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
// IMP 0x10049f474 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10049f554 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10049f6f8 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x10049fc64 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x10049fcec | v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg0;
// IMP 0x1004a02cc | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x1004a0354 | v16@0:8
- (void)updateLayout;
// IMP 0x1004a03c0 | B16@0:8
- (BOOL)shouldDimmedAppAutomatically;
// IMP 0x1004a03dc | v24@0:8@16
- (void)setDimmingView:(id)arg0;
// IMP 0x1004a0494 | v16@0:8
- (void)initDefaultDimmingViewWithoutAddToView;
// IMP 0x1004a05d8 | v16@0:8
- (void)addTapGestureRecognizerToDimmingViewIfNeeded;
// IMP 0x1004a072c | v24@0:8@16
- (void)handleDimmingViewTapGestureRecognizer:(id)arg0;
// IMP 0x1004a0b50 | v24@0:8@16
- (void)setContentViewController:(id)arg0;
// IMP 0x1004a0bf4 | v24@0:8@?16
- (void)showingAnimationWithCompletion:(id /* block */)arg0;
// IMP 0x1004a11d4 | v28@0:8B16@?20
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x1004a1404 | v24@0:8@?16
- (void)hidingAnimationWithCompletion:(id /* block */)arg0;
// IMP 0x1004a1a0c | v28@0:8B16@?20
- (void)hideWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x1004a1a14 | v36@0:8B16@?20@28
- (void)hideWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1 sender:(id)arg2;
// IMP 0x1004a1b68 | v36@0:8@16B24@?28
- (void)showInView:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
// IMP 0x1004a1c24 | v36@0:8@16B24@?28
- (void)hideInView:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
// IMP 0x1004a1c2c | v44@0:8@16B24@?28@36
- (void)hideInView:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2 sender:(id)arg3;
// IMP 0x1004a1d8c | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)contentViewFrameForShowing;
// IMP 0x1004a1fa4 | B16@0:8
- (BOOL)isShownInWindowMode;
// IMP 0x1004a1fd8 | B16@0:8
- (BOOL)isShownInPresentedMode;
// IMP 0x1004a2064 | B16@0:8
- (BOOL)isShownInSubviewMode;
// IMP 0x1004a20d4 | B16@0:8
- (BOOL)isShowingPresentedViewController;
// IMP 0x1004a2160 | v24@0:8@16
- (void)keyboardWillChangeFrameWithUserInfo:(id)arg0;
// IMP 0x1004a2284 | B16@0:8
- (BOOL)shouldAutorotate;
// IMP 0x1004a22f4 | Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// IMP 0x1004a2368 | v24@0:8@?16
- (void)setQmui_prefersStatusBarHiddenBlock:(id /* block */)arg0;
// IMP 0x1004a23b0 | v24@0:8@?16
- (void)setQmui_preferredStatusBarStyleBlock:(id /* block */)arg0;
// IMP 0x1004a23f8 | v16@0:8
- (void)updateWindowStatusBarCapture;
// IMP 0x1004a24f0 | @16@0:8
- (id)childViewControllerForStatusBarHidden;
// IMP 0x1004a2570 | @16@0:8
- (id)childViewControllerForStatusBarStyle;
// IMP 0x1004a25f0 | @16@0:8
- (id)childViewControllerForHomeIndicatorAutoHidden;
// IMP 0x1004a2654 | @16@0:8
- (id)delegate;
// IMP 0x1004a2674 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1004a2688 | @16@0:8
- (id)contentView;
// IMP 0x1004a2698 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x1004a26ac | @16@0:8
- (id)contentViewController;
// IMP 0x1004a26bc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentViewMargins;
// IMP 0x1004a26d4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentViewMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004a26ec | d16@0:8
- (double)maximumContentViewWidth;
// IMP 0x1004a26fc | v24@0:8d16
- (void)setMaximumContentViewWidth:(double)arg0;
// IMP 0x1004a270c | @16@0:8
- (id)window;
// IMP 0x1004a271c | v24@0:8@16
- (void)setWindow:(id)arg0;
// IMP 0x1004a2730 | v20@0:8B16
- (void)setShouldDimmedAppAutomatically:(BOOL)arg0;
// IMP 0x1004a2740 | @16@0:8
- (id)dimmingView;
// IMP 0x1004a2750 | @?16@0:8
- (id /* block */)willHideByDimmingViewTappedBlock;
// IMP 0x1004a2760 | v24@0:8@?16
- (void)setWillHideByDimmingViewTappedBlock:(id /* block */)arg0;
// IMP 0x1004a276c | @?16@0:8
- (id /* block */)didHideByDimmingViewTappedBlock;
// IMP 0x1004a277c | v24@0:8@?16
- (void)setDidHideByDimmingViewTappedBlock:(id /* block */)arg0;
// IMP 0x1004a2788 | B16@0:8
- (BOOL)isModal;
// IMP 0x1004a2798 | v20@0:8B16
- (void)setModal:(BOOL)arg0;
// IMP 0x1004a27a8 | B16@0:8
- (BOOL)isVisible;
// IMP 0x1004a27b8 | v20@0:8B16
- (void)setVisible:(BOOL)arg0;
// IMP 0x1004a27c8 | Q16@0:8
- (unsigned long long)supportedOrientationMask;
// IMP 0x1004a27d8 | v24@0:8Q16
- (void)setSupportedOrientationMask:(unsigned long long)arg0;
// IMP 0x1004a27e8 | Q16@0:8
- (unsigned long long)animationStyle;
// IMP 0x1004a27f8 | v24@0:8Q16
- (void)setAnimationStyle:(unsigned long long)arg0;
// IMP 0x1004a2808 | B16@0:8
- (BOOL)onlyRespondsToKeyboardEventFromDescendantViews;
// IMP 0x1004a2818 | v20@0:8B16
- (void)setOnlyRespondsToKeyboardEventFromDescendantViews:(BOOL)arg0;
// IMP 0x1004a2828 | @?16@0:8
- (id /* block */)layoutBlock;
// IMP 0x1004a2838 | v24@0:8@?16
- (void)setLayoutBlock:(id /* block */)arg0;
// IMP 0x1004a2844 | @?16@0:8
- (id /* block */)showingAnimation;
// IMP 0x1004a2854 | v24@0:8@?16
- (void)setShowingAnimation:(id /* block */)arg0;
// IMP 0x1004a2860 | @?16@0:8
- (id /* block */)hidingAnimation;
// IMP 0x1004a2870 | v24@0:8@?16
- (void)setHidingAnimation:(id /* block */)arg0;
// IMP 0x1004a287c | @16@0:8
- (id)previousKeyWindow;
// IMP 0x1004a289c | v24@0:8@16
- (void)setPreviousKeyWindow:(id)arg0;
// IMP 0x1004a28b0 | B16@0:8
- (BOOL)appearAnimated;
// IMP 0x1004a28c0 | v20@0:8B16
- (void)setAppearAnimated:(BOOL)arg0;
// IMP 0x1004a28d0 | @?16@0:8
- (id /* block */)appearCompletionBlock;
// IMP 0x1004a28e0 | v24@0:8@?16
- (void)setAppearCompletionBlock:(id /* block */)arg0;
// IMP 0x1004a28ec | B16@0:8
- (BOOL)disappearAnimated;
// IMP 0x1004a28fc | v20@0:8B16
- (void)setDisappearAnimated:(BOOL)arg0;
// IMP 0x1004a290c | @?16@0:8
- (id /* block */)disappearCompletionBlock;
// IMP 0x1004a291c | v24@0:8@?16
- (void)setDisappearCompletionBlock:(id /* block */)arg0;
// IMP 0x1004a2928 | B16@0:8
- (BOOL)viewWillAppearByPresentedViewController;
// IMP 0x1004a2938 | v20@0:8B16
- (void)setViewWillAppearByPresentedViewController:(BOOL)arg0;
// IMP 0x1004a2948 | B16@0:8
- (BOOL)hasAlreadyViewWillDisappear;
// IMP 0x1004a2958 | v20@0:8B16
- (void)setHasAlreadyViewWillDisappear:(BOOL)arg0;
// IMP 0x1004a2968 | B16@0:8
- (BOOL)willHideInView;
// IMP 0x1004a2978 | v20@0:8B16
- (void)setWillHideInView:(BOOL)arg0;
// IMP 0x1004a2988 | @16@0:8
- (id)dimmingViewTapGestureRecognizer;
// IMP 0x1004a2998 | v24@0:8@16
- (void)setDimmingViewTapGestureRecognizer:(id)arg0;
// IMP 0x1004a29ac | @16@0:8
- (id)keyboardManager;
// IMP 0x1004a29bc | v24@0:8@16
- (void)setKeyboardManager:(id)arg0;
// IMP 0x1004a29d0 | d16@0:8
- (double)keyboardHeight;
// IMP 0x1004a29e0 | v24@0:8d16
- (void)setKeyboardHeight:(double)arg0;
// IMP 0x1004a29f0 | B16@0:8
- (BOOL)avoidKeyboardLayout;
// IMP 0x1004a2a00 | v20@0:8B16
- (void)setAvoidKeyboardLayout:(BOOL)arg0;
// IMP 0x1004a2a10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004a2b4c | B16@0:8
+ (BOOL)isAnyModalPresentationViewControllerVisible;
// IMP 0x1004a2c98 | B16@0:8
+ (BOOL)hideAllVisibleModalPresentationViewControllerIfCan;
// IMP 0x10049f11c | @16@0:8
+ (id)appearance;
// IMP 0x10049f12c | v16@0:8
+ (void)initialize;
// IMP 0x10049f1a0 | v16@0:8
+ (void)initAppearance;
@end
