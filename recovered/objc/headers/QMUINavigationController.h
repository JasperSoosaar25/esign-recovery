// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8bc38
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUINavigationController : UINavigationController
// ivar _isViewControllerTransiting encoding=B offset=8
// ivar _delegator encoding=@"_QMUINavigationControllerDelegator" offset=16
// ivar _viewControllerPopping encoding=@"UIViewController" offset=24
// property delegator attributes=T@"_QMUINavigationControllerDelegator",&,N,V_delegator
// property isViewControllerTransiting attributes=TB,N,V_isViewControllerTransiting
// property viewControllerPopping attributes=T@"UIViewController",W,N,V_viewControllerPopping
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004aee4c | v28@0:8@16B24
- (void)willShowViewController:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004aee50 | v28@0:8@16B24
- (void)didShowViewController:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004ad134 | v16@0:8
- (void)qmui_didInitialize;
// IMP 0x1004ad1fc | v16@0:8
- (void)didInitialize;
// IMP 0x1004ad200 | v16@0:8
- (void)dealloc;
// IMP 0x1004ad248 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1004ad2b4 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1004ad32c | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x1004ad3a4 | @20@0:8B16
- (id)popViewControllerAnimated:(BOOL)arg0;
// IMP 0x1004ad4f8 | @28@0:8@16B24
- (id)popToViewController:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004ad78c | @20@0:8B16
- (id)popToRootViewControllerAnimated:(BOOL)arg0;
// IMP 0x1004ad9d4 | v28@0:8@16B24
- (void)setViewControllers:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004add18 | v28@0:8@16B24
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004adff4 | v32@0:8@16@24
- (void)updateBackItemTitleWithCurrentViewController:(id)arg0 nextViewController:(id)arg1;
// IMP 0x1004ae210 | B16@0:8
- (BOOL)isViewControllerTransiting;
// IMP 0x1004ae29c | v24@0:8@16
- (void)handleInteractivePopGestureRecognizer:(id)arg0;
// IMP 0x1004ae6ac | v24@0:8@16
- (void)qmui_viewControllerDidInvokeViewWillAppear:(id)arg0;
// IMP 0x1004ae73c | @32@0:8@16@?24
- (id)childViewControllerIfSearching:(id)arg0 customBlock:(id /* block */)arg1;
// IMP 0x1004ae86c | @24@0:8@?16
- (id)childViewControllerForStatusBarWithCustomBlock:(id /* block */)arg0;
// IMP 0x1004aea24 | @16@0:8
- (id)childViewControllerForStatusBarHidden;
// IMP 0x1004aeaa0 | @16@0:8
- (id)childViewControllerForStatusBarStyle;
// IMP 0x1004aeb1c | q16@0:8
- (long long)preferredStatusBarStyle;
// IMP 0x1004aec30 | B16@0:8
- (BOOL)shouldAutorotate;
// IMP 0x1004aecac | Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// IMP 0x1004aeda4 | @16@0:8
- (id)childViewControllerForHomeIndicatorAutoHidden;
// IMP 0x1004aeda8 | @16@0:8
- (id)delegator;
// IMP 0x1004aedb8 | v24@0:8@16
- (void)setDelegator:(id)arg0;
// IMP 0x1004aedcc | v20@0:8B16
- (void)setIsViewControllerTransiting:(BOOL)arg0;
// IMP 0x1004aeddc | @16@0:8
- (id)viewControllerPopping;
// IMP 0x1004aedfc | v24@0:8@16
- (void)setViewControllerPopping:(id)arg0;
// IMP 0x1004aee10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
