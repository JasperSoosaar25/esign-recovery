// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c818f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDAVInputTableViewCell : UITableViewCell
// ivar _titleLabel encoding=@"UILabel" offset=8
// ivar _textField encoding=@"UITextField" offset=16
// ivar _textDidChangeBlock encoding=@? offset=24
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property textField attributes=T@"UITextField",&,N,V_textField
// property textDidChangeBlock attributes=T@?,C,N,V_textDidChangeBlock
// IMP 0x1003d3658 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1003d37b4 | v16@0:8
- (void)loadSubviews;
// IMP 0x1003d3d18 | v16@0:8
- (void)textDidChangeHandle;
// IMP 0x1003d3eac | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1003d5e98 | @16@0:8
- (id)titleLabel;
// IMP 0x1003d5ec0 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1003d5f58 | @16@0:8
- (id)textField;
// IMP 0x1003d5f8c | v24@0:8@16
- (void)setTextField:(id)arg0;
// IMP 0x1003d601c | @?16@0:8
- (id /* block */)textDidChangeBlock;
// IMP 0x1003d6050 | v24@0:8@?16
- (void)setTextDidChangeBlock:(id /* block */)arg0;
// IMP 0x1003d60dc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003d5e78 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
