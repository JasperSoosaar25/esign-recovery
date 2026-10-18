// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81f50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYImageTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _iconImageView encoding=@"UIImageView" offset=16
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property iconImageView attributes=T@"UIImageView",&,N,V_iconImageView
// IMP 0x1003f51c8 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1003f53a8 | v16@0:8
- (void)loadSubviews;
// IMP 0x1003f56c0 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1003f7900 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1003f79a8 | @16@0:8
- (id)titleLabel;
// IMP 0x1003f79c4 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1003f79fc | @16@0:8
- (id)iconImageView;
// IMP 0x1003f7a18 | v24@0:8@16
- (void)setIconImageView:(id)arg0;
// IMP 0x1003f7abc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003f7988 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
