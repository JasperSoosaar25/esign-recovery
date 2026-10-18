// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a3f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIKeyboardManager : NSObject
// ivar _delegateEnabled encoding=B offset=8
// ivar _ignoreApplicationState encoding=B offset=9
// ivar _debug encoding=B offset=10
// ivar _delegate encoding=@"<QMUIKeyboardManagerDelegate>" offset=16
// ivar _targetResponderValues encoding=@"NSMutableArray" offset=24
// ivar _lastUserInfo encoding=@"QMUIKeyboardUserInfo" offset=32
// ivar _currentResponder encoding=@"UIResponder" offset=40
// ivar _keyboardMoveBeginRect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=48
// property targetResponderValues attributes=T@"NSMutableArray",&,N,V_targetResponderValues
// property lastUserInfo attributes=T@"QMUIKeyboardUserInfo",&,N,V_lastUserInfo
// property keyboardMoveBeginRect attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_keyboardMoveBeginRect
// property currentResponder attributes=T@"UIResponder",W,N,V_currentResponder
// property debug attributes=TB,N,V_debug
// property delegate attributes=T@"<QMUIKeyboardManagerDelegate>",R,W,N,V_delegate
// property delegateEnabled attributes=TB,N,V_delegateEnabled
// property ignoreApplicationState attributes=TB,N,V_ignoreApplicationState
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004952a0 | @16@0:8
- (id)init;
// IMP 0x1004952a8 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004952b0 | @24@0:8@16
- (id)initWithDelegate:(id)arg0;
// IMP 0x100495354 | v16@0:8
- (void)dealloc;
// IMP 0x1004953bc | B24@0:8@16
- (BOOL)addTargetResponder:(id)arg0;
// IMP 0x100495478 | @16@0:8
- (id)allTargetResponders;
// IMP 0x1004955bc | B24@0:8@16
- (BOOL)removeTargetResponder:(id)arg0;
// IMP 0x1004956a8 | @24@0:8@16
- (id)packageTargetResponder:(id)arg0;
// IMP 0x100495718 | @24@0:8@16
- (id)unPackageTargetResponder:(id)arg0;
// IMP 0x10049578c | @16@0:8
- (id)firstResponderInWindows;
// IMP 0x100495974 | v16@0:8
- (void)addKeyboardNotification;
// IMP 0x100495b00 | B16@0:8
- (BOOL)isAppActive;
// IMP 0x100495b58 | B24@0:8@16
- (BOOL)isLocalKeyboard:(id)arg0;
// IMP 0x100495c28 | v24@0:8@16
- (void)keyboardWillShowNotification:(id)arg0;
// IMP 0x100495ea8 | v24@0:8@16
- (void)keyboardDidShowNotification:(id)arg0;
// IMP 0x100496188 | v24@0:8@16
- (void)keyboardWillHideNotification:(id)arg0;
// IMP 0x100496408 | v24@0:8@16
- (void)keyboardDidHideNotification:(id)arg0;
// IMP 0x100496748 | v24@0:8@16
- (void)keyboardWillChangeFrameNotification:(id)arg0;
// IMP 0x1004969b8 | v24@0:8@16
- (void)keyboardDidChangeFrameNotification:(id)arg0;
// IMP 0x100496c48 | @24@0:8@16
- (id)newUserInfoWithNotification:(id)arg0;
// IMP 0x100496cb0 | B16@0:8
- (BOOL)shouldReceiveShowNotification;
// IMP 0x100496e50 | B16@0:8
- (BOOL)shouldReceiveHideNotification;
// IMP 0x100496f30 | v16@0:8
- (void)addFrameObserverIfNeeded;
// IMP 0x100497000 | v24@0:8@16
- (void)keyboardDidChangedFrame:(id)arg0;
// IMP 0x100497570 | v24@0:8@16
- (void)keyboardViewFrameDidChange:(id)arg0;
// IMP 0x1004985b4 | @16@0:8
- (id)delegate;
// IMP 0x1004985cc | B16@0:8
- (BOOL)delegateEnabled;
// IMP 0x1004985d4 | v20@0:8B16
- (void)setDelegateEnabled:(BOOL)arg0;
// IMP 0x1004985dc | B16@0:8
- (BOOL)ignoreApplicationState;
// IMP 0x1004985e4 | v20@0:8B16
- (void)setIgnoreApplicationState:(BOOL)arg0;
// IMP 0x1004985ec | @16@0:8
- (id)targetResponderValues;
// IMP 0x1004985f4 | v24@0:8@16
- (void)setTargetResponderValues:(id)arg0;
// IMP 0x100498600 | @16@0:8
- (id)lastUserInfo;
// IMP 0x100498608 | v24@0:8@16
- (void)setLastUserInfo:(id)arg0;
// IMP 0x100498614 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)keyboardMoveBeginRect;
// IMP 0x100498620 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setKeyboardMoveBeginRect:(struct CGRect)arg0;
// IMP 0x10049862c | @16@0:8
- (id)currentResponder;
// IMP 0x100498644 | v24@0:8@16
- (void)setCurrentResponder:(id)arg0;
// IMP 0x100498650 | B16@0:8
- (BOOL)debug;
// IMP 0x100498658 | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x100498660 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100495290 | @16@0:8
+ (id)appearance;
// IMP 0x100497574 | v44@0:8B16@20@?28@?36
+ (void)animateWithAnimated:(BOOL)arg0 keyboardUserInfo:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
// IMP 0x1004976f4 | v40@0:8@16@?24@?32
+ (void)handleKeyboardNotificationWithUserInfo:(id)arg0 showBlock:(id /* block */)arg1 hideBlock:(id /* block */)arg2;
// IMP 0x10049779c | {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
+ (struct CGRect)convertKeyboardRect:(struct CGRect)arg0 toView:(id)arg1;
// IMP 0x100497a5c | d56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
+ (double)distanceFromMinYToBottomInView:(id)arg0 keyboardRect:(struct CGRect)arg1;
// IMP 0x100497b34 | @16@0:8
+ (id)keyboardWindow;
// IMP 0x100497de0 | @16@0:8
+ (id)keyboardView;
// IMP 0x100497f20 | @24@0:8@16
+ (id)positionedKeyboardViewInWindow:(id)arg0;
// IMP 0x1004981e4 | B16@0:8
+ (BOOL)isKeyboardVisible;
// IMP 0x100498364 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
+ (struct CGRect)currentKeyboardFrame;
// IMP 0x100498430 | d16@0:8
+ (double)visibleKeyboardHeight;
@end
