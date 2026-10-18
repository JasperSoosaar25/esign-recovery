// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89a18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIHelper : NSObject
// ivar _shouldPreventAppearanceUpdating encoding=B offset=8
// property lastOrientationChangedByHelper attributes=Tq,N
// property shouldPreventAppearanceUpdating attributes=TB,N,V_shouldPreventAppearanceUpdating
// IMP 0x1004f5ab8 | v24@0:8q16
- (void)setLastOrientationChangedByHelper:(long long)arg0;
// IMP 0x1004f5b08 | q16@0:8
- (long long)lastOrientationChangedByHelper;
// IMP 0x1004f5b4c | v24@0:8@16
- (void)handleDeviceOrientationNotification:(id)arg0;
// IMP 0x100486734 | v24@0:8@16
- (void)handleAppWillEnterForeground:(id)arg0;
// IMP 0x100486770 | v24@0:8@16
- (void)handleAppEnterBackground:(id)arg0;
// IMP 0x100486310 | v24@0:8@16
- (void)handleAppSizeWillChange:(id)arg0;
// IMP 0x1004815f4 | v20@0:8B16
- (void)setKeyboardVisible:(BOOL)arg0;
// IMP 0x100481644 | B16@0:8
- (BOOL)keyboardVisible;
// IMP 0x100481688 | v24@0:8d16
- (void)setLastKeyboardHeight:(double)arg0;
// IMP 0x1004816d8 | d16@0:8
- (double)lastKeyboardHeight;
// IMP 0x100481724 | v24@0:8@16
- (void)handleKeyboardWillShow:(id)arg0;
// IMP 0x100481784 | v24@0:8@16
- (void)handleKeyboardWillHide:(id)arg0;
// IMP 0x100486de0 | v16@0:8
- (void)dealloc;
// IMP 0x1004872b4 | B16@0:8
- (BOOL)shouldPreventAppearanceUpdating;
// IMP 0x1004872bc | v20@0:8B16
- (void)setShouldPreventAppearanceUpdating:(BOOL)arg0;
// IMP 0x1005315bc | @16@0:8
+ (id)visibleViewController;
// IMP 0x1004f5b88 | q24@0:8Q16
+ (long long)deviceOrientationWithInterfaceOrientationMask:(unsigned long long)arg0;
// IMP 0x1004f5ca0 | B32@0:8Q16q24
+ (BOOL)interfaceOrientationMask:(unsigned long long)arg0 containsDeviceOrientation:(long long)arg1;
// IMP 0x1004f5d2c | B32@0:8Q16q24
+ (BOOL)interfaceOrientationMask:(unsigned long long)arg0 containsInterfaceOrientation:(long long)arg1;
// IMP 0x1004f5d30 | d24@0:8q16
+ (double)angleForTransformWithInterfaceOrientation:(long long)arg0;
// IMP 0x1004f5d50 | {CGAffineTransform=dddddd}16@0:8
+ (struct CGAffineTransform)transformForCurrentInterfaceOrientation;
// IMP 0x1004f5dac | {CGAffineTransform=dddddd}24@0:8q16
+ (struct CGAffineTransform)transformWithInterfaceOrientation:(long long)arg0;
// IMP 0x100486870 | q16@0:8
+ (long long)numbericOSVersion;
// IMP 0x10048697c | q32@0:8@16@24
+ (long long)compareSystemVersion:(id)arg0 toVersion:(id)arg1;
// IMP 0x10048698c | B24@0:8@16
+ (BOOL)isCurrentSystemAtLeastVersion:(id)arg0;
// IMP 0x100486a78 | B24@0:8@16
+ (BOOL)isCurrentSystemLowerThanVersion:(id)arg0;
// IMP 0x1004867f0 | v32@0:8@?16@?24
+ (void)executeAnimationBlock:(id /* block */)arg0 completionBlock:(id /* block */)arg1;
// IMP 0x100486604 | v16@0:8
+ (void)dimmedApplicationWindow;
// IMP 0x100486684 | v16@0:8
+ (void)resetDimmedApplicationWindow;
// IMP 0x100486704 | q16@0:8
+ (long long)statusBarStyleDarkContent;
// IMP 0x1004867ac | B16@0:8
+ (BOOL)canUpdateAppearance;
// IMP 0x1004821e4 | @16@0:8
+ (id)deviceModel;
// IMP 0x10048229c | @16@0:8
+ (id)deviceName;
// IMP 0x1004831e4 | B16@0:8
+ (BOOL)isIPad;
// IMP 0x100483280 | B16@0:8
+ (BOOL)isIPod;
// IMP 0x100483310 | B16@0:8
+ (BOOL)isIPhone;
// IMP 0x1004833a0 | B16@0:8
+ (BOOL)isSimulator;
// IMP 0x1004833bc | B16@0:8
+ (BOOL)isMac;
// IMP 0x100483490 | B16@0:8
+ (BOOL)isNotchedScreen;
// IMP 0x100483658 | B16@0:8
+ (BOOL)isRegularScreen;
// IMP 0x1004836d8 | B16@0:8
+ (BOOL)is67InchScreenAndiPhone14Later;
// IMP 0x1004837e4 | B16@0:8
+ (BOOL)is67InchScreen;
// IMP 0x1004838f0 | B16@0:8
+ (BOOL)is65InchScreen;
// IMP 0x100483a10 | B16@0:8
+ (BOOL)is61InchScreenAndiPhone12Later;
// IMP 0x100483b20 | B16@0:8
+ (BOOL)is61InchScreen;
// IMP 0x100483ca0 | B16@0:8
+ (BOOL)is58InchScreen;
// IMP 0x100483db0 | B16@0:8
+ (BOOL)is55InchScreen;
// IMP 0x100483ec0 | B16@0:8
+ (BOOL)is54InchScreen;
// IMP 0x100483fd0 | B16@0:8
+ (BOOL)is47InchScreen;
// IMP 0x1004840e0 | B16@0:8
+ (BOOL)is40InchScreen;
// IMP 0x1004841f0 | B16@0:8
+ (BOOL)is35InchScreen;
// IMP 0x100484300 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor67InchAndiPhone14Later;
// IMP 0x100484314 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor67Inch;
// IMP 0x100484328 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor65Inch;
// IMP 0x10048433c | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor61InchAndiPhone12Later;
// IMP 0x100484350 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor61Inch;
// IMP 0x100484364 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor58Inch;
// IMP 0x100484378 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor55Inch;
// IMP 0x10048438c | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor54Inch;
// IMP 0x1004843a0 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor47Inch;
// IMP 0x1004843b4 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor40Inch;
// IMP 0x1004843c8 | {CGSize=dd}16@0:8
+ (struct CGSize)screenSizeFor35Inch;
// IMP 0x1004843dc | d16@0:8
+ (double)preferredLayoutAsSimilarScreenWidthForIPad;
// IMP 0x10048461c | {UIEdgeInsets=dddd}16@0:8
+ (struct UIEdgeInsets)safeAreaInsetsForDeviceWithNotch;
// IMP 0x100486188 | B16@0:8
+ (BOOL)isHighPerformanceDevice;
// IMP 0x100486234 | B16@0:8
+ (BOOL)isZoomedMode;
// IMP 0x100486320 | {CGSize=dd}16@0:8
+ (struct CGSize)applicationSize;
// IMP 0x100486424 | d16@0:8
+ (double)statusBarHeightConstant;
// IMP 0x100481d9c | d16@0:8
+ (double)pixelOne;
// IMP 0x100481df8 | v32@0:8{CGSize=dd}16
+ (void)inspectContextSize:(struct CGSize)arg0;
// IMP 0x100482028 | B24@0:8^{CGContext=}16
+ (BOOL)inspectContextIfInvalidated:(struct CGContext *)arg0;
// IMP 0x100481bc4 | v24@0:8B16B20
+ (void)redirectAudioRouteWithSpeaker:(BOOL)arg0 temporary:(BOOL)arg1;
// IMP 0x100481ce4 | v24@0:8@16
+ (void)setAudioSessionCategory:(id)arg0;
// IMP 0x10048178c | B16@0:8
+ (BOOL)isKeyboardVisible;
// IMP 0x1004817d0 | d16@0:8
+ (double)lastKeyboardHeightInApplicationWindowWhenVisible;
// IMP 0x10048181c | {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
+ (struct CGRect)keyboardRectWithNotification:(id)arg0;
// IMP 0x1004818a8 | d24@0:8@16
+ (double)keyboardHeightWithNotification:(id)arg0;
// IMP 0x1004818b8 | d32@0:8@16@24
+ (double)keyboardHeightWithNotification:(id)arg0 inView:(id)arg1;
// IMP 0x100481acc | d24@0:8@16
+ (double)keyboardAnimationDurationWithNotification:(id)arg0;
// IMP 0x100481b38 | q24@0:8@16
+ (long long)keyboardAnimationCurveWithNotification:(id)arg0;
// IMP 0x100481ba4 | Q24@0:8@16
+ (unsigned long long)keyboardAnimationOptionsWithNotification:(id)arg0;
// IMP 0x100481370 | @16@0:8
+ (id)preferredContentSizeLevel;
// IMP 0x100481560 | d24@0:8@16
+ (double)heightForDynamicTypeCell:(id)arg0;
// IMP 0x100481278 | @24@0:8@16
+ (id)imageWithName:(id)arg0;
// IMP 0x10043d774 | d32@0:8@16@24
+ (double)topMarginForAttributedImage:(id)arg0 attributes:(id)arg1;
// IMP 0x100486b10 | v16@0:8
+ (void)load;
// IMP 0x100486b5c | @16@0:8
+ (id)sharedInstance;
// IMP 0x100486dc4 | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
// IMP 0x100486e48 | B32@0:8@?16@24
+ (BOOL)executeBlock:(id /* block */)arg0 oncePerIdentifier:(id)arg1;
// IMP 0x100486f48 | @24@0:8q16
+ (id)layerContentsGravityWithContentMode:(long long)arg0;
@end
