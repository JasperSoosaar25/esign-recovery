// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a440
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIKeyboardUserInfo : NSObject
// ivar _isFloatingKeyboard encoding=B offset=8
// ivar _isTargetResponderFocused encoding=B offset=9
// ivar _keyboardManager encoding=@"QMUIKeyboardManager" offset=16
// ivar _notification encoding=@"NSNotification" offset=24
// ivar _targetResponder encoding=@"UIResponder" offset=32
// ivar _width encoding=d offset=40
// ivar _height encoding=d offset=48
// ivar _animationDuration encoding=d offset=56
// ivar _animationCurve encoding=q offset=64
// ivar _animationOptions encoding=Q offset=72
// ivar _beginFrame encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=80
// ivar _endFrame encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=112
// property keyboardManager attributes=T@"QMUIKeyboardManager",W,N,V_keyboardManager
// property notification attributes=T@"NSNotification",&,N,V_notification
// property targetResponder attributes=T@"UIResponder",W,N,V_targetResponder
// property isTargetResponderFocused attributes=TB,N,V_isTargetResponderFocused
// property width attributes=Td,N,V_width
// property height attributes=Td,N,V_height
// property beginFrame attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_beginFrame
// property endFrame attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_endFrame
// property animationDuration attributes=Td,N,V_animationDuration
// property animationCurve attributes=Tq,N,V_animationCurve
// property animationOptions attributes=TQ,N,V_animationOptions
// property isFloatingKeyboard attributes=TB,N,V_isFloatingKeyboard
// property originUserInfo attributes=T@"NSDictionary",R,N
// IMP 0x100494ac0 | v24@0:8@16
- (void)setNotification:(id)arg0;
// IMP 0x100494db0 | v24@0:8@16
- (void)setTargetResponder:(id)arg0;
// IMP 0x100494e08 | @16@0:8
- (id)originUserInfo;
// IMP 0x100494e8c | d16@0:8
- (double)width;
// IMP 0x100494ebc | d16@0:8
- (double)height;
// IMP 0x100494eec | d24@0:8@16
- (double)heightInView:(id)arg0;
// IMP 0x100495188 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)beginFrame;
// IMP 0x100495194 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)endFrame;
// IMP 0x1004951a0 | d16@0:8
- (double)animationDuration;
// IMP 0x1004951a8 | q16@0:8
- (long long)animationCurve;
// IMP 0x1004951b0 | Q16@0:8
- (unsigned long long)animationOptions;
// IMP 0x1004951b8 | @16@0:8
- (id)keyboardManager;
// IMP 0x1004951d0 | v24@0:8@16
- (void)setKeyboardManager:(id)arg0;
// IMP 0x1004951dc | @16@0:8
- (id)notification;
// IMP 0x1004951e4 | @16@0:8
- (id)targetResponder;
// IMP 0x1004951fc | B16@0:8
- (BOOL)isFloatingKeyboard;
// IMP 0x100495204 | v20@0:8B16
- (void)setIsFloatingKeyboard:(BOOL)arg0;
// IMP 0x10049520c | B16@0:8
- (BOOL)isTargetResponderFocused;
// IMP 0x100495214 | v20@0:8B16
- (void)setIsTargetResponderFocused:(BOOL)arg0;
// IMP 0x10049521c | v24@0:8d16
- (void)setWidth:(double)arg0;
// IMP 0x100495224 | v24@0:8d16
- (void)setHeight:(double)arg0;
// IMP 0x10049522c | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setBeginFrame:(struct CGRect)arg0;
// IMP 0x100495238 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setEndFrame:(struct CGRect)arg0;
// IMP 0x100495244 | v24@0:8d16
- (void)setAnimationDuration:(double)arg0;
// IMP 0x10049524c | v24@0:8q16
- (void)setAnimationCurve:(long long)arg0;
// IMP 0x100495254 | v24@0:8Q16
- (void)setAnimationOptions:(unsigned long long)arg0;
// IMP 0x10049525c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
