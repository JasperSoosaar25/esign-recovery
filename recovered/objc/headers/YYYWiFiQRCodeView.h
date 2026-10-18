// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80230
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWiFiQRCodeView : UIView
// ivar _contentView encoding=@"UIView" offset=8
// ivar _imageView encoding=@"UIImageView" offset=16
// ivar _urlLabel encoding=@"UILabel" offset=24
// ivar _tipLabel encoding=@"UILabel" offset=32
// ivar _closeButton encoding=@"UIButton" offset=40
// property contentView attributes=T@"UIView",&,N,V_contentView
// property imageView attributes=T@"UIImageView",&,N,V_imageView
// property urlLabel attributes=T@"UILabel",&,N,V_urlLabel
// property tipLabel attributes=T@"UILabel",&,N,V_tipLabel
// property closeButton attributes=T@"UIButton",&,N,V_closeButton
// IMP 0x1002ec408 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1002ec5f8 | v24@0:8@16
- (void)showWithUrl:(id)arg0;
// IMP 0x1002ec980 | v16@0:8
- (void)dismiss;
// IMP 0x1002ecae8 | @24@0:8@16
- (id)createQRCodeImageFromString:(id)arg0;
// IMP 0x1002ecb78 | @24@0:8@16
- (id)createQRForString:(id)arg0;
// IMP 0x1002ed2e8 | @32@0:8@16d24
- (id)createNonInterpolatedUIImageFormCIImage:(id)arg0 withSize:(double)arg1;
// IMP 0x1002ed5f8 | v16@0:8
- (void)loadSubviews;
// IMP 0x1002edcfc | v16@0:8
- (void)setupFrame;
// IMP 0x1002f0c3c | @16@0:8
- (id)contentView;
// IMP 0x1002f0c58 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x1002f0cfc | @16@0:8
- (id)imageView;
// IMP 0x1002f0d30 | v24@0:8@16
- (void)setImageView:(id)arg0;
// IMP 0x1002f0d9c | @16@0:8
- (id)urlLabel;
// IMP 0x1002f0db8 | v24@0:8@16
- (void)setUrlLabel:(id)arg0;
// IMP 0x1002f0df4 | @16@0:8
- (id)tipLabel;
// IMP 0x1002f0e28 | v24@0:8@16
- (void)setTipLabel:(id)arg0;
// IMP 0x1002f0e98 | @16@0:8
- (id)closeButton;
// IMP 0x1002f0ecc | v24@0:8@16
- (void)setCloseButton:(id)arg0;
// IMP 0x1002f0f58 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1002f0c1c | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
