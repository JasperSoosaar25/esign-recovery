// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7a428
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYProgress : NSObject
// ivar _tips encoding=@"QMUITips" offset=8
// ivar _progressView encoding=@"QMUIPieProgressView" offset=16
// property tips attributes=T@"QMUITips",&,N,V_tips
// property progressView attributes=T@"QMUIPieProgressView",&,N,V_progressView
// IMP 0x100015394 | v24@0:8f16B20
- (void)setProgress:(float)arg0 animated:(BOOL)arg1;
// IMP 0x10001543c | v20@0:8B16
- (void)hideAnimated:(BOOL)arg0;
// IMP 0x10001550c | @16@0:8
- (id)tips;
// IMP 0x10001552c | v24@0:8@16
- (void)setTips:(id)arg0;
// IMP 0x100015594 | @16@0:8
- (id)progressView;
// IMP 0x1000155b4 | v24@0:8@16
- (void)setProgressView:(id)arg0;
// IMP 0x100015608 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100014210 | @24@0:8@16
+ (id)showProgressViewToView:(id)arg0;
// IMP 0x10001451c | @32@0:8@16@24
+ (id)showProgressViewWithText:(id)arg0 toView:(id)arg1;
// IMP 0x1000149cc | @16@0:8
+ (id)show;
// IMP 0x100014f28 | v24@0:8f16B20
+ (void)setProgress:(float)arg0 animated:(BOOL)arg1;
// IMP 0x1000150c8 | v20@0:8B16
+ (void)hideAnimated:(BOOL)arg0;
@end
