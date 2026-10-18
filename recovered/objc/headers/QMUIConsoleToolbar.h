// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88a68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIConsoleToolbar : UIView
// ivar _levelButton encoding=@"QMUIButton" offset=8
// ivar _nameButton encoding=@"QMUIButton" offset=16
// ivar _clearButton encoding=@"QMUIButton" offset=24
// ivar _searchTextField encoding=@"QMUITextField" offset=32
// ivar _searchResultCountLabel encoding=@"UILabel" offset=40
// ivar _searchResultPreviousButton encoding=@"QMUIButton" offset=48
// ivar _searchResultNextButton encoding=@"QMUIButton" offset=56
// ivar _searchRightView encoding=@"UIView" offset=64
// property searchRightView attributes=T@"UIView",&,N,V_searchRightView
// property levelButton attributes=T@"QMUIButton",R,N,V_levelButton
// property nameButton attributes=T@"QMUIButton",R,N,V_nameButton
// property clearButton attributes=T@"QMUIButton",R,N,V_clearButton
// property searchTextField attributes=T@"QMUITextField",R,N,V_searchTextField
// property searchResultCountLabel attributes=T@"UILabel",R,N,V_searchResultCountLabel
// property searchResultPreviousButton attributes=T@"QMUIButton",R,N,V_searchResultPreviousButton
// property searchResultNextButton attributes=T@"QMUIButton",R,N,V_searchResultNextButton
// IMP 0x10046a5bc | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10046b448 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10046b754 | v16@0:8
- (void)setNeedsLayoutSearchResultViews;
// IMP 0x10046bb5c | @16@0:8
- (id)levelButton;
// IMP 0x10046bb6c | @16@0:8
- (id)nameButton;
// IMP 0x10046bb7c | @16@0:8
- (id)clearButton;
// IMP 0x10046bb8c | @16@0:8
- (id)searchTextField;
// IMP 0x10046bb9c | @16@0:8
- (id)searchResultCountLabel;
// IMP 0x10046bbac | @16@0:8
- (id)searchResultPreviousButton;
// IMP 0x10046bbbc | @16@0:8
- (id)searchResultNextButton;
// IMP 0x10046bbcc | @16@0:8
- (id)searchRightView;
// IMP 0x10046bbdc | v24@0:8@16
- (void)setSearchRightView:(id)arg0;
// IMP 0x10046bbf0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
