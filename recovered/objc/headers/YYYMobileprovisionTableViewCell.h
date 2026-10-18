// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dbd8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMobileprovisionTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _valueLabel encoding=@"UILabel" offset=16
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property valueLabel attributes=T@"UILabel",&,N,V_valueLabel
// IMP 0x1001765c8 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x100176750 | v16@0:8
- (void)prepareForReuse;
// IMP 0x10017680c | v16@0:8
- (void)loadSubviews;
// IMP 0x100176cdc | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x100178a50 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100178b84 | @16@0:8
- (id)titleLabel;
// IMP 0x100178bbc | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x100178c54 | @16@0:8
- (id)valueLabel;
// IMP 0x100178c7c | v24@0:8@16
- (void)setValueLabel:(id)arg0;
// IMP 0x100178cec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100178b64 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
