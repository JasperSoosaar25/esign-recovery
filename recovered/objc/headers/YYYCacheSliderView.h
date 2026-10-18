// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80460
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCacheSliderView : UISlider
// ivar _videoProgressView encoding=@"UIProgressView" offset=8
// property videoProgressView attributes=T@"UIProgressView",&,N,V_videoProgressView
// property finishValue attributes=Tf,N
// IMP 0x10030db64 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10030dcc0 | v16@0:8
- (void)loadSubviews;
// IMP 0x10030e0fc | v16@0:8
- (void)layoutSubviews;
// IMP 0x10030e204 | f16@0:8
- (float)finishValue;
// IMP 0x10030e2a8 | v20@0:8f16
- (void)setFinishValue:(float)arg0;
// IMP 0x10030e360 | @16@0:8
- (id)videoProgressView;
// IMP 0x10030e394 | v24@0:8@16
- (void)setVideoProgressView:(id)arg0;
// IMP 0x10030e3f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
