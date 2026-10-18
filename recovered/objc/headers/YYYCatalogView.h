// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7eb50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCatalogView : UIView
// ivar _contentView encoding=@"UIView" offset=8
// ivar _tableView encoding=@"UITableView" offset=16
// ivar _titleLabel encoding=@"UILabel" offset=24
// ivar _button encoding=@"UIButton" offset=32
// ivar _dataSource encoding=@"NSArray" offset=40
// ivar _chapter encoding=@"YYYChapterModel" offset=48
// ivar _didDismiss encoding=@? offset=56
// ivar _selectChapter encoding=@? offset=64
// ivar _index encoding=q offset=72
// ivar _offset encoding=d offset=80
// ivar _style encoding=Q offset=88
// property index attributes=Tq,N,V_index
// property offset attributes=Td,N,V_offset
// property style attributes=TQ,N,V_style
// property contentView attributes=T@"UIView",&,N,V_contentView
// property tableView attributes=T@"UITableView",&,N,V_tableView
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property button attributes=T@"UIButton",&,N,V_button
// property dataSource attributes=T@"NSArray",&,N,V_dataSource
// property chapter attributes=T@"YYYChapterModel",&,N,V_chapter
// property didDismiss attributes=T@?,C,N,V_didDismiss
// property selectChapter attributes=T@?,C,N,V_selectChapter
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1002264e0 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1002266f4 | v32@0:8@16@24
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
// IMP 0x100226910 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100226b1c | v24@0:8@16
- (void)setChapter:(id)arg0;
// IMP 0x100226d50 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100226d64 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100226da0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100227138 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x1002274e4 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10022774c | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x100227948 | v16@0:8
- (void)show;
// IMP 0x100227b6c | v16@0:8
- (void)dismiss;
// IMP 0x100227f1c | v16@0:8
- (void)buttonHandle;
// IMP 0x1002284fc | v24@0:8Q16
- (void)setStyle:(unsigned long long)arg0;
// IMP 0x1002289b4 | v16@0:8
- (void)styleChange;
// IMP 0x100228d78 | v16@0:8
- (void)loadSubviews;
// IMP 0x100229560 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x10022bc44 | @16@0:8
- (id)contentView;
// IMP 0x10022bc54 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x10022bcec | @16@0:8
- (id)tableView;
// IMP 0x10022bd20 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x10022bdb8 | @16@0:8
- (id)titleLabel;
// IMP 0x10022bde0 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x10022be5c | @16@0:8
- (id)button;
// IMP 0x10022be84 | v24@0:8@16
- (void)setButton:(id)arg0;
// IMP 0x10022beb0 | @16@0:8
- (id)dataSource;
// IMP 0x10022bed8 | @16@0:8
- (id)chapter;
// IMP 0x10022bef4 | @?16@0:8
- (id /* block */)didDismiss;
// IMP 0x10022bf1c | v24@0:8@?16
- (void)setDidDismiss:(id /* block */)arg0;
// IMP 0x10022bf9c | @?16@0:8
- (id /* block */)selectChapter;
// IMP 0x10022bfb8 | v24@0:8@?16
- (void)setSelectChapter:(id /* block */)arg0;
// IMP 0x10022bfdc | q16@0:8
- (long long)index;
// IMP 0x10022bff8 | v24@0:8q16
- (void)setIndex:(long long)arg0;
// IMP 0x10022c028 | d16@0:8
- (double)offset;
// IMP 0x10022c050 | v24@0:8d16
- (void)setOffset:(double)arg0;
// IMP 0x10022c088 | Q16@0:8
- (unsigned long long)style;
// IMP 0x10022c098 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10022bc30 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
