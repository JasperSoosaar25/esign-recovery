// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7a270
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYFontToolView : UIView
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _subButton encoding=@"UIButton" offset=16
// ivar _addButton encoding=@"UIButton" offset=24
// ivar _sizeLabel encoding=@"UILabel" offset=32
// ivar _stackView encoding=@"UIStackView" offset=40
// ivar _contentView encoding=@"UIView" offset=48
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property subButton attributes=T@"UIButton",&,N,V_subButton
// property addButton attributes=T@"UIButton",&,N,V_addButton
// property sizeLabel attributes=T@"UILabel",&,N,V_sizeLabel
// property stackView attributes=T@"UIStackView",&,N,V_stackView
// property contentView attributes=T@"UIView",&,N,V_contentView
// IMP 0x10000825c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100008424 | v16@0:8
- (void)styleChange;
// IMP 0x1000086c8 | v16@0:8
- (void)fontChange;
// IMP 0x100008ae8 | v24@0:8@16
- (void)buttonHandle:(id)arg0;
// IMP 0x100008c50 | v16@0:8
- (void)loadSubviews;
// IMP 0x100009824 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10000c544 | @16@0:8
- (id)titleLabel;
// IMP 0x10000c56c | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10000c608 | @16@0:8
- (id)subButton;
// IMP 0x10000c63c | v24@0:8@16
- (void)setSubButton:(id)arg0;
// IMP 0x10000c6b8 | @16@0:8
- (id)addButton;
// IMP 0x10000c6d4 | v24@0:8@16
- (void)setAddButton:(id)arg0;
// IMP 0x10000c778 | @16@0:8
- (id)sizeLabel;
// IMP 0x10000c7b0 | v24@0:8@16
- (void)setSizeLabel:(id)arg0;
// IMP 0x10000c820 | @16@0:8
- (id)stackView;
// IMP 0x10000c848 | v24@0:8@16
- (void)setStackView:(id)arg0;
// IMP 0x10000c868 | @16@0:8
- (id)contentView;
// IMP 0x10000c89c | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x10000c938 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10000c518 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
