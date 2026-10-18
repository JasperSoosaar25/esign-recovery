// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c852b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshNormalHeader : MJRefreshStateHeader
// ivar _arrowView encoding=@"UIImageView" offset=48
// ivar _activityIndicatorViewStyle encoding=q offset=56
// ivar _loadingView encoding=@"UIActivityIndicatorView" offset=64
// property loadingView attributes=T@"UIActivityIndicatorView",W,N,V_loadingView
// property arrowView attributes=T@"UIImageView",R,W,N
// property activityIndicatorViewStyle attributes=Tq,N,V_activityIndicatorViewStyle
// IMP 0x10042c880 | @16@0:8
- (id)arrowView;
// IMP 0x10042c910 | @16@0:8
- (id)loadingView;
// IMP 0x10042c9a4 | v24@0:8q16
- (void)setActivityIndicatorViewStyle:(long long)arg0;
// IMP 0x10042c9f8 | v16@0:8
- (void)prepare;
// IMP 0x10042ca68 | v16@0:8
- (void)placeSubviews;
// IMP 0x10042cd28 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042d170 | q16@0:8
- (long long)activityIndicatorViewStyle;
// IMP 0x10042d180 | v24@0:8@16
- (void)setLoadingView:(id)arg0;
// IMP 0x10042d194 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
