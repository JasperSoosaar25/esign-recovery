// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c821d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppLogoTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _logoImageView encoding=@"UIImageView" offset=16
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property logoImageView attributes=T@"UIImageView",&,N,V_logoImageView
// IMP 0x100402f4c | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1004030f0 | v16@0:8
- (void)initSubViews;
// IMP 0x10040366c | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1004055e8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100405698 | @16@0:8
- (id)titleLabel;
// IMP 0x1004056cc | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10040573c | @16@0:8
- (id)logoImageView;
// IMP 0x100405764 | v24@0:8@16
- (void)setLogoImageView:(id)arg0;
// IMP 0x1004057e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100405678 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
