// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7ffb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignLogTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// IMP 0x10028a1dc | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x10028a3b0 | v16@0:8
- (void)initViews;
// IMP 0x10028a58c | v16@0:8
- (void)layoutSubviews;
// IMP 0x10028a710 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10028bdd8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10028bedc | @16@0:8
- (id)titleLabel;
// IMP 0x10028bef8 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10028bf68 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10028beb0 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
