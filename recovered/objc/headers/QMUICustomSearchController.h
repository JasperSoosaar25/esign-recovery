// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d358
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICustomSearchController : UISearchController
// ivar _customDimmingView encoding=@"UIView" offset=8
// ivar _dimmingColor encoding=@"UIColor" offset=16
// property customDimmingView attributes=T@"UIView",&,N,V_customDimmingView
// property dimmingColor attributes=T@"UIColor",&,N,V_dimmingColor
// IMP 0x1004bf000 | @24@0:8@16
- (id)initWithSearchResultsController:(id)arg0;
// IMP 0x1004bf06c | v24@0:8@16
- (void)setCustomDimmingView:(id)arg0;
// IMP 0x1004bf0f4 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1004bf13c | v16@0:8
- (void)addCustomDimmingView;
// IMP 0x1004bf238 | v16@0:8
- (void)layoutCustomDimmingView;
// IMP 0x1004bf460 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1004bf514 | @16@0:8
- (id)customDimmingView;
// IMP 0x1004bf524 | @16@0:8
- (id)dimmingColor;
// IMP 0x1004bf534 | v24@0:8@16
- (void)setDimmingColor:(id)arg0;
// IMP 0x1004bf548 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
