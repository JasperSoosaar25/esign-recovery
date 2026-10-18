// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c805a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYListToolView : UIView
// ivar _showMore encoding=B offset=8
// ivar _contentView encoding=@"UIView" offset=16
// ivar _editButton encoding=@"UIButton" offset=24
// ivar _signButton encoding=@"UIButton" offset=32
// ivar _deleteButton encoding=@"UIButton" offset=40
// ivar _selectAllButton encoding=@"UIButton" offset=48
// property contentView attributes=T@"UIView",&,N,V_contentView
// property editButton attributes=T@"UIButton",&,N,V_editButton
// property signButton attributes=T@"UIButton",&,N,V_signButton
// property deleteButton attributes=T@"UIButton",&,N,V_deleteButton
// property selectAllButton attributes=T@"UIButton",&,N,V_selectAllButton
// property showMore attributes=TB,N,V_showMore
// IMP 0x100325494 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10032564c | v16@0:8
- (void)loadSubviews;
// IMP 0x100326554 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100326814 | v16@0:8
- (void)layoutSubviews;
// IMP 0x100327368 | v20@0:8B16
- (void)setShowMore:(BOOL)arg0;
// IMP 0x10032761c | B40@0:8{CGPoint=dd}16@32
- (BOOL)pointInside:(struct CGPoint)arg0 withEvent:(id)arg1;
// IMP 0x10032777c | @16@0:8
- (id)contentView;
// IMP 0x1003277a4 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x100327814 | @16@0:8
- (id)editButton;
// IMP 0x10032783c | v24@0:8@16
- (void)setEditButton:(id)arg0;
// IMP 0x1003278bc | @16@0:8
- (id)signButton;
// IMP 0x1003278f0 | v24@0:8@16
- (void)setSignButton:(id)arg0;
// IMP 0x100327910 | @16@0:8
- (id)deleteButton;
// IMP 0x100327938 | v24@0:8@16
- (void)setDeleteButton:(id)arg0;
// IMP 0x1003279ac | @16@0:8
- (id)selectAllButton;
// IMP 0x1003279d4 | v24@0:8@16
- (void)setSelectAllButton:(id)arg0;
// IMP 0x100327a70 | B16@0:8
- (BOOL)showMore;
// IMP 0x100327aac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
