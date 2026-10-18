// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8df80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITips : QMUIToastView
// ivar _contentCustomView encoding=@"UIView" offset=8
// property contentCustomView attributes=T@"UIView",&,N,V_contentCustomView
// IMP 0x1004d3cbc | v16@0:8
- (void)showLoading;
// IMP 0x1004d3cc8 | v24@0:8d16
- (void)showLoadingHideAfterDelay:(double)arg0;
// IMP 0x1004d3cd0 | v24@0:8@16
- (void)showLoading:(id)arg0;
// IMP 0x1004d3cd8 | v32@0:8@16d24
- (void)showLoading:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d3ce0 | v32@0:8@16@24
- (void)showLoading:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d3ce8 | v40@0:8@16@24d32
- (void)showLoading:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d3d88 | v24@0:8@16
- (void)showWithText:(id)arg0;
// IMP 0x1004d3d94 | v32@0:8@16d24
- (void)showWithText:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d3d9c | v32@0:8@16@24
- (void)showWithText:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d3da4 | v40@0:8@16@24d32
- (void)showWithText:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d3e1c | v24@0:8@16
- (void)showSucceed:(id)arg0;
// IMP 0x1004d3e28 | v32@0:8@16d24
- (void)showSucceed:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d3e30 | v32@0:8@16@24
- (void)showSucceed:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d3e38 | v40@0:8@16@24d32
- (void)showSucceed:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d3f28 | v24@0:8@16
- (void)showError:(id)arg0;
// IMP 0x1004d3f34 | v32@0:8@16d24
- (void)showError:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d3f3c | v32@0:8@16@24
- (void)showError:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d3f44 | v40@0:8@16@24d32
- (void)showError:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4034 | v24@0:8@16
- (void)showInfo:(id)arg0;
// IMP 0x1004d4040 | v32@0:8@16d24
- (void)showInfo:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d4048 | v32@0:8@16@24
- (void)showInfo:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4050 | v40@0:8@16@24d32
- (void)showInfo:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4140 | v40@0:8@16@24d32
- (void)showTipWithText:(id)arg0 detailText:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4264 | v32@0:8@16@24
- (void)postAccessibilityAnnouncement:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4e3c | @16@0:8
- (id)contentCustomView;
// IMP 0x1004d4e4c | v24@0:8@16
- (void)setContentCustomView:(id)arg0;
// IMP 0x1004d4e60 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004d43b0 | d24@0:8@16
+ (double)smartDelaySecondsForTipsText:(id)arg0;
// IMP 0x1004d43f0 | @24@0:8@16
+ (id)showLoadingInView:(id)arg0;
// IMP 0x1004d4404 | @32@0:8@16@24
+ (id)showLoading:(id)arg0 inView:(id)arg1;
// IMP 0x1004d4414 | @32@0:8@16d24
+ (id)showLoadingInView:(id)arg0 hideAfterDelay:(double)arg1;
// IMP 0x1004d4424 | @40@0:8@16@24d32
+ (id)showLoading:(id)arg0 inView:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4430 | @40@0:8@16@24@32
+ (id)showLoading:(id)arg0 detailText:(id)arg1 inView:(id)arg2;
// IMP 0x1004d4438 | @48@0:8@16@24@32d40
+ (id)showLoading:(id)arg0 detailText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
// IMP 0x1004d44c4 | @24@0:8@16
+ (id)showWithText:(id)arg0;
// IMP 0x1004d4580 | @32@0:8@16@24
+ (id)showWithText:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4654 | @32@0:8@16@24
+ (id)showWithText:(id)arg0 inView:(id)arg1;
// IMP 0x1004d4664 | @40@0:8@16@24d32
+ (id)showWithText:(id)arg0 inView:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4670 | @40@0:8@16@24@32
+ (id)showWithText:(id)arg0 detailText:(id)arg1 inView:(id)arg2;
// IMP 0x1004d4678 | @48@0:8@16@24@32d40
+ (id)showWithText:(id)arg0 detailText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
// IMP 0x1004d4704 | @24@0:8@16
+ (id)showSucceed:(id)arg0;
// IMP 0x1004d47c0 | @32@0:8@16@24
+ (id)showSucceed:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4894 | @32@0:8@16@24
+ (id)showSucceed:(id)arg0 inView:(id)arg1;
// IMP 0x1004d48a4 | @40@0:8@16@24d32
+ (id)showSucceed:(id)arg0 inView:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d48b0 | @40@0:8@16@24@32
+ (id)showSucceed:(id)arg0 detailText:(id)arg1 inView:(id)arg2;
// IMP 0x1004d48b8 | @48@0:8@16@24@32d40
+ (id)showSucceed:(id)arg0 detailText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
// IMP 0x1004d4944 | @24@0:8@16
+ (id)showError:(id)arg0;
// IMP 0x1004d4a00 | @32@0:8@16@24
+ (id)showError:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4ad4 | @32@0:8@16@24
+ (id)showError:(id)arg0 inView:(id)arg1;
// IMP 0x1004d4ae4 | @40@0:8@16@24d32
+ (id)showError:(id)arg0 inView:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4af0 | @40@0:8@16@24@32
+ (id)showError:(id)arg0 detailText:(id)arg1 inView:(id)arg2;
// IMP 0x1004d4af8 | @48@0:8@16@24@32d40
+ (id)showError:(id)arg0 detailText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
// IMP 0x1004d4b84 | @24@0:8@16
+ (id)showInfo:(id)arg0;
// IMP 0x1004d4c40 | @32@0:8@16@24
+ (id)showInfo:(id)arg0 detailText:(id)arg1;
// IMP 0x1004d4d14 | @32@0:8@16@24
+ (id)showInfo:(id)arg0 inView:(id)arg1;
// IMP 0x1004d4d24 | @40@0:8@16@24d32
+ (id)showInfo:(id)arg0 inView:(id)arg1 hideAfterDelay:(double)arg2;
// IMP 0x1004d4d30 | @40@0:8@16@24@32
+ (id)showInfo:(id)arg0 detailText:(id)arg1 inView:(id)arg2;
// IMP 0x1004d4d38 | @48@0:8@16@24@32d40
+ (id)showInfo:(id)arg0 detailText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
// IMP 0x1004d4dc4 | @24@0:8@16
+ (id)createTipsToView:(id)arg0;
// IMP 0x1004d4e28 | v24@0:8@16
+ (void)hideAllTipsInView:(id)arg0;
// IMP 0x1004d4e30 | v16@0:8
+ (void)hideAllTips;
@end
