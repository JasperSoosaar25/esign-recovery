// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d098
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppStoreFilterView : UIView
// ivar _contentView encoding=@"UIView" offset=8
// ivar _titleLabel encoding=@"UILabel" offset=16
// ivar _typeLabel encoding=@"UILabel" offset=24
// ivar _freeLabel encoding=@"UILabel" offset=32
// ivar _typeSegControl encoding=@"UISegmentedControl" offset=40
// ivar _freeSegControl encoding=@"UISegmentedControl" offset=48
// ivar _filterChangedBlock encoding=@? offset=56
// ivar _bottomConstraint encoding=@"MASConstraint" offset=64
// ivar _closeButton encoding=@"UIButton" offset=72
// property bottomConstraint attributes=T@"MASConstraint",&,N,V_bottomConstraint
// property closeButton attributes=T@"UIButton",&,N,V_closeButton
// property contentView attributes=T@"UIView",&,N,V_contentView
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property typeLabel attributes=T@"UILabel",&,N,V_typeLabel
// property freeLabel attributes=T@"UILabel",&,N,V_freeLabel
// property typeSegControl attributes=T@"UISegmentedControl",&,N,V_typeSegControl
// property freeSegControl attributes=T@"UISegmentedControl",&,N,V_freeSegControl
// property filterChangedBlock attributes=T@?,C,N,V_filterChangedBlock
// IMP 0x1000d5afc | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1000d5c90 | v16@0:8
- (void)segValueChange;
// IMP 0x1000d5dc4 | v16@0:8
- (void)show;
// IMP 0x1000d5f10 | v16@0:8
- (void)dismiss;
// IMP 0x1000d6128 | v32@0:8@16@24
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
// IMP 0x1000d62f8 | v16@0:8
- (void)loadSubviews;
// IMP 0x1000d7c08 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1000db6ec | @16@0:8
- (id)contentView;
// IMP 0x1000db720 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x1000db798 | @16@0:8
- (id)titleLabel;
// IMP 0x1000db7d0 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1000db848 | @16@0:8
- (id)typeLabel;
// IMP 0x1000db870 | v24@0:8@16
- (void)setTypeLabel:(id)arg0;
// IMP 0x1000db8dc | @16@0:8
- (id)freeLabel;
// IMP 0x1000db910 | v24@0:8@16
- (void)setFreeLabel:(id)arg0;
// IMP 0x1000db974 | @16@0:8
- (id)typeSegControl;
// IMP 0x1000db9a8 | v24@0:8@16
- (void)setTypeSegControl:(id)arg0;
// IMP 0x1000dba44 | @16@0:8
- (id)freeSegControl;
// IMP 0x1000dba6c | v24@0:8@16
- (void)setFreeSegControl:(id)arg0;
// IMP 0x1000dbaf8 | @?16@0:8
- (id /* block */)filterChangedBlock;
// IMP 0x1000dbb20 | v24@0:8@?16
- (void)setFilterChangedBlock:(id /* block */)arg0;
// IMP 0x1000dbba0 | @16@0:8
- (id)bottomConstraint;
// IMP 0x1000dbbbc | v24@0:8@16
- (void)setBottomConstraint:(id)arg0;
// IMP 0x1000dbc20 | @16@0:8
- (id)closeButton;
// IMP 0x1000dbc48 | v24@0:8@16
- (void)setCloseButton:(id)arg0;
// IMP 0x1000dbce0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000db6c0 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
