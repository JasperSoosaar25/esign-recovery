// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88860
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICommonViewController : UIViewController
// ivar _emptyView encoding=@"QMUIEmptyView" offset=8
// ivar _hideKeyboardTapGestureRecognizer encoding=@"UITapGestureRecognizer" offset=16
// ivar _hideKeyboardManager encoding=@"QMUIKeyboardManager" offset=24
// ivar _hideKeyboadDelegateObject encoding=@"QMUIViewControllerHideKeyboardDelegateObject" offset=32
// ivar _titleView encoding=@"QMUINavigationTitleView" offset=40
// ivar _supportedOrientationMask encoding=Q offset=48
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property hideKeyboardTapGestureRecognizer attributes=T@"UITapGestureRecognizer",R,N
// property hideKeyboardManager attributes=T@"QMUIKeyboardManager",R,N
// property titleView attributes=T@"QMUINavigationTitleView",&,N,V_titleView
// property supportedOrientationMask attributes=TQ,N,V_supportedOrientationMask
// property emptyView attributes=T@"QMUIEmptyView",&,N,V_emptyView
// property emptyViewShowing attributes=TB,R,N,GisEmptyViewShowing
// IMP 0x100460dc0 | @16@0:8
- (id)hideKeyboardTapGestureRecognizer;
// IMP 0x100460dd0 | @16@0:8
- (id)hideKeyboardManager;
// IMP 0x100460de0 | B24@0:8@16
- (BOOL)shouldHideKeyboardWhenTouchInView:(id)arg0;
// IMP 0x100460b74 | v16@0:8
- (void)updateNavigationBarAppearance;
// IMP 0x100460d38 | B16@0:8
- (BOOL)preferredNavigationBarHidden;
// IMP 0x100460d9c | v20@0:8B16
- (void)viewControllerKeepingAppearWhenSetViewControllersWithAnimated:(BOOL)arg0;
// IMP 0x100460b64 | v16@0:8
- (void)initSubviews;
// IMP 0x100460b68 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x100460b6c | v16@0:8
- (void)setupToolbarItems;
// IMP 0x100460b70 | v24@0:8@16
- (void)contentSizeCategoryDidChanged:(id)arg0;
// IMP 0x10045fcd4 | @32@0:8@16@24
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
// IMP 0x10045fd24 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10045fd74 | v16@0:8
- (void)didInitialize;
// IMP 0x10045fff8 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100460288 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100460328 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x100460370 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1004603c0 | @16@0:8
- (id)emptyView;
// IMP 0x10046044c | v16@0:8
- (void)showEmptyView;
// IMP 0x1004604a4 | v16@0:8
- (void)hideEmptyView;
// IMP 0x1004604b4 | B16@0:8
- (BOOL)isEmptyViewShowing;
// IMP 0x100460500 | v16@0:8
- (void)showEmptyViewWithLoading;
// IMP 0x1004605d0 | v48@0:8@16@24@32:40
- (void)showEmptyViewWithText:(id)arg0 detailText:(id)arg1 buttonTitle:(id)arg2 buttonAction:(SEL)arg3;
// IMP 0x1004605ec | v56@0:8@16@24@32@40:48
- (void)showEmptyViewWithImage:(id)arg0 text:(id)arg1 detailText:(id)arg2 buttonTitle:(id)arg3 buttonAction:(SEL)arg4;
// IMP 0x100460608 | v60@0:8B16@20@28@36@44:52
- (void)showEmptyViewWithLoading:(BOOL)arg0 image:(id)arg1 text:(id)arg2 detailText:(id)arg3 buttonTitle:(id)arg4 buttonAction:(SEL)arg5;
// IMP 0x1004607e0 | B16@0:8
- (BOOL)layoutEmptyView;
// IMP 0x100460a84 | B16@0:8
- (BOOL)shouldAutorotate;
// IMP 0x100460a8c | Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// IMP 0x100460a90 | v24@0:8@16
- (void)setEmptyView:(id)arg0;
// IMP 0x100460aa4 | @16@0:8
- (id)titleView;
// IMP 0x100460ab4 | v24@0:8@16
- (void)setTitleView:(id)arg0;
// IMP 0x100460ac8 | Q16@0:8
- (unsigned long long)supportedOrientationMask;
// IMP 0x100460ad8 | v24@0:8Q16
- (void)setSupportedOrientationMask:(unsigned long long)arg0;
// IMP 0x100460ae8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
