// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7a400
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYProgressContentView : UIView
// ivar _hideButton encoding=@"UIButton" offset=8
// ivar _textLabel encoding=@"UILabel" offset=16
// ivar _progressView encoding=@"QMUIPieProgressView" offset=24
// property hideButton attributes=T@"UIButton",&,N,V_hideButton
// property textLabel attributes=T@"UILabel",&,N,V_textLabel
// property progressView attributes=T@"QMUIPieProgressView",&,N,V_progressView
// IMP 0x100010e38 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100010f8c | v16@0:8
- (void)loadSubviews;
// IMP 0x100011734 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x100013e04 | v16@0:8
- (void)hideHandle;
// IMP 0x100013e88 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100013f80 | @16@0:8
- (id)hideButton;
// IMP 0x100013fb8 | v24@0:8@16
- (void)setHideButton:(id)arg0;
// IMP 0x100014030 | @16@0:8
- (id)textLabel;
// IMP 0x100014064 | v24@0:8@16
- (void)setTextLabel:(id)arg0;
// IMP 0x1000140fc | @16@0:8
- (id)progressView;
// IMP 0x100014124 | v24@0:8@16
- (void)setProgressView:(id)arg0;
// IMP 0x100014188 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100013e5c | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
