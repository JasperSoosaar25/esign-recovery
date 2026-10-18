// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e1b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIToastView : UIView
// ivar _removeFromSuperViewWhenHide encoding=B offset=8
// ivar _parentView encoding=@"UIView" offset=16
// ivar _willShowBlock encoding=@? offset=24
// ivar _didShowBlock encoding=@? offset=32
// ivar _willHideBlock encoding=@? offset=40
// ivar _didHideBlock encoding=@? offset=48
// ivar _toastAnimator encoding=@"QMUIToastAnimator" offset=56
// ivar _toastPosition encoding=q offset=64
// ivar _maskView encoding=@"UIView" offset=72
// ivar _contentView encoding=@"UIView" offset=80
// ivar _backgroundView encoding=@"UIView" offset=88
// ivar _hideDelayTimer encoding=@"NSTimer" offset=96
// ivar _offset encoding={CGPoint="x"d"y"d} offset=104
// ivar _marginInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=120
// property hideDelayTimer attributes=T@"NSTimer",W,N,V_hideDelayTimer
// property parentView attributes=T@"UIView",R,W,N,V_parentView
// property willShowBlock attributes=T@?,C,N,V_willShowBlock
// property didShowBlock attributes=T@?,C,N,V_didShowBlock
// property willHideBlock attributes=T@?,C,N,V_willHideBlock
// property didHideBlock attributes=T@?,C,N,V_didHideBlock
// property toastAnimator attributes=T@"QMUIToastAnimator",&,N,V_toastAnimator
// property toastPosition attributes=Tq,N,V_toastPosition
// property removeFromSuperViewWhenHide attributes=TB,N,V_removeFromSuperViewWhenHide
// property maskView attributes=T@"UIView",R,N,V_maskView
// property contentView attributes=T@"UIView",&,N,V_contentView
// property backgroundView attributes=T@"UIView",&,N,V_backgroundView
// property offset attributes=T{CGPoint=dd},N,V_offset
// property marginInsets attributes=T{UIEdgeInsets=dddd},N,V_marginInsets
// IMP 0x1004d7c40 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004d7c8c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004d7cd8 | @24@0:8@16
- (id)initWithView:(id)arg0;
// IMP 0x1004d7d58 | v16@0:8
- (void)dealloc;
// IMP 0x1004d7dbc | v16@0:8
- (void)didInitialize;
// IMP 0x1004d8008 | v16@0:8
- (void)didMoveToSuperview;
// IMP 0x1004d80b8 | v16@0:8
- (void)removeFromSuperview;
// IMP 0x1004d810c | @16@0:8
- (id)defaultAnimator;
// IMP 0x1004d813c | @16@0:8
- (id)defaultBackgrondView;
// IMP 0x1004d815c | @16@0:8
- (id)defaultContentView;
// IMP 0x1004d817c | v24@0:8@16
- (void)setBackgroundView:(id)arg0;
// IMP 0x1004d8264 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x1004d834c | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004d8a4c | v16@0:8
- (void)registerNotifications;
// IMP 0x1004d8aa4 | v16@0:8
- (void)removeNotifications;
// IMP 0x1004d8af4 | v24@0:8@16
- (void)statusBarOrientationDidChange:(id)arg0;
// IMP 0x1004d8b40 | v20@0:8B16
- (void)showAnimated:(BOOL)arg0;
// IMP 0x1004d8eb0 | v20@0:8B16
- (void)hideAnimated:(BOOL)arg0;
// IMP 0x1004d90e8 | v20@0:8B16
- (void)didHideWithAnimated:(BOOL)arg0;
// IMP 0x1004d91c0 | v28@0:8B16d20
- (void)hideAnimated:(BOOL)arg0 afterDelay:(double)arg1;
// IMP 0x1004d928c | v24@0:8@16
- (void)handleHideTimer:(id)arg0;
// IMP 0x1004d92d0 | v32@0:8{CGPoint=dd}16
- (void)setOffset:(struct CGPoint)arg0;
// IMP 0x1004d92e4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setMarginInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004d92fc | @16@0:8
- (id)parentView;
// IMP 0x1004d931c | @?16@0:8
- (id /* block */)willShowBlock;
// IMP 0x1004d932c | v24@0:8@?16
- (void)setWillShowBlock:(id /* block */)arg0;
// IMP 0x1004d9338 | @?16@0:8
- (id /* block */)didShowBlock;
// IMP 0x1004d9348 | v24@0:8@?16
- (void)setDidShowBlock:(id /* block */)arg0;
// IMP 0x1004d9354 | @?16@0:8
- (id /* block */)willHideBlock;
// IMP 0x1004d9364 | v24@0:8@?16
- (void)setWillHideBlock:(id /* block */)arg0;
// IMP 0x1004d9370 | @?16@0:8
- (id /* block */)didHideBlock;
// IMP 0x1004d9380 | v24@0:8@?16
- (void)setDidHideBlock:(id /* block */)arg0;
// IMP 0x1004d938c | @16@0:8
- (id)toastAnimator;
// IMP 0x1004d939c | v24@0:8@16
- (void)setToastAnimator:(id)arg0;
// IMP 0x1004d93b0 | q16@0:8
- (long long)toastPosition;
// IMP 0x1004d93c0 | v24@0:8q16
- (void)setToastPosition:(long long)arg0;
// IMP 0x1004d93d0 | B16@0:8
- (BOOL)removeFromSuperViewWhenHide;
// IMP 0x1004d93e0 | v20@0:8B16
- (void)setRemoveFromSuperViewWhenHide:(BOOL)arg0;
// IMP 0x1004d93f0 | @16@0:8
- (id)maskView;
// IMP 0x1004d9400 | @16@0:8
- (id)contentView;
// IMP 0x1004d9410 | @16@0:8
- (id)backgroundView;
// IMP 0x1004d9420 | {CGPoint=dd}16@0:8
- (struct CGPoint)offset;
// IMP 0x1004d9434 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)marginInsets;
// IMP 0x1004d944c | @16@0:8
- (id)hideDelayTimer;
// IMP 0x1004d946c | v24@0:8@16
- (void)setHideDelayTimer:(id)arg0;
// IMP 0x1004d9480 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004d9628 | B28@0:8@16B24
+ (BOOL)hideAllToastInView:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004d9748 | @24@0:8@16
+ (id)toastInView:(id)arg0;
// IMP 0x1004d97bc | @24@0:8@16
+ (id)allToastInView:(id)arg0;
// IMP 0x1004d9558 | v16@0:8
+ (void)initialize;
// IMP 0x1004d95cc | v16@0:8
+ (void)setDefaultAppearance;
@end
