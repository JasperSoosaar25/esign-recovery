// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7bfd8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppTableViewCell : UITableViewCell
// ivar _logoImageView encoding=@"UIImageView" offset=8
// ivar _titleLabel encoding=@"UILabel" offset=16
// ivar _stateLabel encoding=@"UILabel" offset=24
// ivar _fileNameLabel encoding=@"UILabel" offset=32
// property logoImageView attributes=T@"UIImageView",&,N,V_logoImageView
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property stateLabel attributes=T@"UILabel",&,N,V_stateLabel
// property fileNameLabel attributes=T@"UILabel",&,N,V_fileNameLabel
// IMP 0x10006aa00 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x10006abb4 | v16@0:8
- (void)prepareForReuse;
// IMP 0x10006aec0 | v16@0:8
- (void)loadSubviews;
// IMP 0x10006b84c | v24@0:8@16
- (void)setupInfo:(id)arg0;
// IMP 0x10006d9d0 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x100070400 | @16@0:8
- (id)logoImageView;
// IMP 0x100070428 | v24@0:8@16
- (void)setLogoImageView:(id)arg0;
// IMP 0x1000704b4 | @16@0:8
- (id)titleLabel;
// IMP 0x1000704d0 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1000704fc | @16@0:8
- (id)stateLabel;
// IMP 0x100070524 | v24@0:8@16
- (void)setStateLabel:(id)arg0;
// IMP 0x10007058c | @16@0:8
- (id)fileNameLabel;
// IMP 0x1000705b4 | v24@0:8@16
- (void)setFileNameLabel:(id)arg0;
// IMP 0x100070624 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000703d4 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
