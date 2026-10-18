// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81350
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCertTableViewCell : UITableViewCell
// ivar _nameLabel encoding=@"UILabel" offset=8
// ivar _expireLabel encoding=@"UILabel" offset=16
// ivar _stateLabel encoding=@"UILabel" offset=24
// property nameLabel attributes=T@"UILabel",&,N,V_nameLabel
// property expireLabel attributes=T@"UILabel",&,N,V_expireLabel
// property stateLabel attributes=T@"UILabel",&,N,V_stateLabel
// IMP 0x100366510 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x100366684 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1003668bc | v24@0:8@16
- (void)setupInfo:(id)arg0;
// IMP 0x100367aac | v16@0:8
- (void)loadSubviews;
// IMP 0x1003680e8 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10036a6bc | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10036a780 | @16@0:8
- (id)nameLabel;
// IMP 0x10036a7a8 | v24@0:8@16
- (void)setNameLabel:(id)arg0;
// IMP 0x10036a7bc | @16@0:8
- (id)expireLabel;
// IMP 0x10036a7f0 | v24@0:8@16
- (void)setExpireLabel:(id)arg0;
// IMP 0x10036a854 | @16@0:8
- (id)stateLabel;
// IMP 0x10036a870 | v24@0:8@16
- (void)setStateLabel:(id)arg0;
// IMP 0x10036a8e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10036a6a8 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
