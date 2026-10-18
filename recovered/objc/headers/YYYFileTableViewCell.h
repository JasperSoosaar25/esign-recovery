// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e8d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYFileTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _subTitleLabel encoding=@"UILabel" offset=16
// ivar _iconImageView encoding=@"UIImageView" offset=24
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property subTitleLabel attributes=T@"UILabel",&,N,V_subTitleLabel
// property iconImageView attributes=T@"UIImageView",&,N,V_iconImageView
// IMP 0x1001f6670 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1001f6860 | v24@0:8@16
- (void)setupWithPath:(id)arg0;
// IMP 0x1001f768c | v16@0:8
- (void)loadSubviews;
// IMP 0x1001f7a58 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1001fa748 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1001fa8d4 | @16@0:8
- (id)titleLabel;
// IMP 0x1001fa908 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1001fa978 | @16@0:8
- (id)subTitleLabel;
// IMP 0x1001fa9a0 | v24@0:8@16
- (void)setSubTitleLabel:(id)arg0;
// IMP 0x1001faa10 | @16@0:8
- (id)iconImageView;
// IMP 0x1001faa38 | v24@0:8@16
- (void)setIconImageView:(id)arg0;
// IMP 0x1001faadc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001fa8a8 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
