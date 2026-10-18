// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b448
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppSourceInfoTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _urlLabel encoding=@"UILabel" offset=16
// ivar _tagLabel encoding=@"UILabel" offset=24
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property urlLabel attributes=T@"UILabel",&,N,V_urlLabel
// property tagLabel attributes=T@"UILabel",&,N,V_tagLabel
// IMP 0x100028b08 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x100028c88 | v16@0:8
- (void)prepareForReuse;
// IMP 0x100028d1c | v16@0:8
- (void)loadSubviews;
// IMP 0x1000292b8 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10002bbc8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10002bbf4 | @16@0:8
- (id)titleLabel;
// IMP 0x10002bc1c | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10002bc60 | @16@0:8
- (id)urlLabel;
// IMP 0x10002bc88 | v24@0:8@16
- (void)setUrlLabel:(id)arg0;
// IMP 0x10002bd00 | @16@0:8
- (id)tagLabel;
// IMP 0x10002bd1c | v24@0:8@16
- (void)setTagLabel:(id)arg0;
// IMP 0x10002bdc0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10002bba8 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
