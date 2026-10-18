// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d958
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QDThemeViewController : QMUICommonViewController
// ivar _classes encoding=@"NSArray" offset=16
// ivar _scrollView encoding=@"UIScrollView" offset=24
// ivar _buttonContainers encoding=@"QMUIFloatLayoutView" offset=32
// ivar _themeButtons encoding=@"NSMutableArray" offset=40
// ivar _respondsSystemStyleSwitch encoding=@"UISwitch" offset=48
// ivar _respondsSystemStyleLabel encoding=@"UILabel" offset=56
// ivar _separatorLayer encoding=@"CALayer" offset=64
// ivar _logoContainers encoding=@"QMUIFloatLayoutView" offset=72
// ivar _logos encoding=@"NSArray" offset=80
// property classes attributes=T@"NSArray",&,N,V_classes
// property scrollView attributes=T@"UIScrollView",&,N,V_scrollView
// property buttonContainers attributes=T@"QMUIFloatLayoutView",&,N,V_buttonContainers
// property themeButtons attributes=T@"NSMutableArray",&,N,V_themeButtons
// property respondsSystemStyleSwitch attributes=T@"UISwitch",&,N,V_respondsSystemStyleSwitch
// property respondsSystemStyleLabel attributes=T@"UILabel",&,N,V_respondsSystemStyleLabel
// property separatorLayer attributes=T@"CALayer",&,N,V_separatorLayer
// property logoContainers attributes=T@"QMUIFloatLayoutView",&,N,V_logoContainers
// property logos attributes=T@"NSArray",&,N,V_logos
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100169b24 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100169cf4 | v16@0:8
- (void)didInitialize;
// IMP 0x10016a700 | v16@0:8
- (void)initSubviews;
// IMP 0x10016c1fc | v24@0:8@16
- (void)changeLogoHandle:(id)arg0;
// IMP 0x10016c3cc | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10016d37c | v24@0:8@16
- (void)handleSwitchEvent:(id)arg0;
// IMP 0x10016d7ac | v24@0:8@16
- (void)handleThemeButtonEvent:(id)arg0;
// IMP 0x10016d86c | v40@0:8@16@24@32
- (void)qmui_themeDidChangeByManager:(id)arg0 identifier:(id)arg1 theme:(id)arg2;
// IMP 0x10016da90 | B24@0:8@16
- (BOOL)shouldHideKeyboardWhenTouchInView:(id)arg0;
// IMP 0x10016dab0 | @16@0:8
- (id)classes;
// IMP 0x10016dae4 | v24@0:8@16
- (void)setClasses:(id)arg0;
// IMP 0x10016db54 | @16@0:8
- (id)scrollView;
// IMP 0x10016db88 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x10016dc04 | @16@0:8
- (id)buttonContainers;
// IMP 0x10016dc38 | v24@0:8@16
- (void)setButtonContainers:(id)arg0;
// IMP 0x10016dc9c | @16@0:8
- (id)themeButtons;
// IMP 0x10016dcc4 | v24@0:8@16
- (void)setThemeButtons:(id)arg0;
// IMP 0x10016dd28 | @16@0:8
- (id)respondsSystemStyleSwitch;
// IMP 0x10016dd60 | v24@0:8@16
- (void)setRespondsSystemStyleSwitch:(id)arg0;
// IMP 0x10016ddd4 | @16@0:8
- (id)respondsSystemStyleLabel;
// IMP 0x10016ddf0 | v24@0:8@16
- (void)setRespondsSystemStyleLabel:(id)arg0;
// IMP 0x10016de54 | @16@0:8
- (id)separatorLayer;
// IMP 0x10016de7c | v24@0:8@16
- (void)setSeparatorLayer:(id)arg0;
// IMP 0x10016def4 | @16@0:8
- (id)logoContainers;
// IMP 0x10016df28 | v24@0:8@16
- (void)setLogoContainers:(id)arg0;
// IMP 0x10016df6c | @16@0:8
- (id)logos;
// IMP 0x10016df94 | v24@0:8@16
- (void)setLogos:(id)arg0;
// IMP 0x10016e020 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
