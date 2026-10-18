// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7fc90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYFolderTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _iconImageView encoding=@"UIImageView" offset=16
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property iconImageView attributes=T@"UIImageView",&,N,V_iconImageView
// IMP 0x10027ad90 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x10027af7c | v16@0:8
- (void)loadSubviews;
// IMP 0x10027b454 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10027dbe0 | @16@0:8
- (id)titleLabel;
// IMP 0x10027dc08 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10027dc78 | @16@0:8
- (id)iconImageView;
// IMP 0x10027dc88 | v24@0:8@16
- (void)setIconImageView:(id)arg0;
// IMP 0x10027dcec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10027da24 | d24@0:8@16
+ (double)heightWithTilte:(id)arg0;
// IMP 0x10027dbc0 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
