// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89058
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmptyView : UIView
// ivar _loadingView encoding=@"UIView<QMUIEmptyViewLoadingViewProtocol>" offset=8
// ivar _imageView encoding=@"UIImageView" offset=16
// ivar _textLabel encoding=@"UILabel" offset=24
// ivar _detailTextLabel encoding=@"UILabel" offset=32
// ivar _actionButton encoding=@"QMUIButton" offset=40
// ivar _verticalOffset encoding=d offset=48
// ivar _textLabelFont encoding=@"UIFont" offset=56
// ivar _detailTextLabelFont encoding=@"UIFont" offset=64
// ivar _actionButtonFont encoding=@"UIFont" offset=72
// ivar _textLabelTextColor encoding=@"UIColor" offset=80
// ivar _detailTextLabelTextColor encoding=@"UIColor" offset=88
// ivar _actionButtonTitleColor encoding=@"UIColor" offset=96
// ivar _contentView encoding=@"UIView" offset=104
// ivar _scrollView encoding=@"UIScrollView" offset=112
// ivar _imageViewInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=120
// ivar _loadingViewInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=152
// ivar _textLabelInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=184
// ivar _detailTextLabelInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=216
// ivar _actionButtonInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=248
// property scrollView attributes=T@"UIScrollView",&,N,V_scrollView
// property loadingView attributes=T@"UIView<QMUIEmptyViewLoadingViewProtocol>",&,N,V_loadingView
// property imageView attributes=T@"UIImageView",R,N,V_imageView
// property textLabel attributes=T@"UILabel",R,N,V_textLabel
// property detailTextLabel attributes=T@"UILabel",R,N,V_detailTextLabel
// property actionButton attributes=T@"QMUIButton",R,N,V_actionButton
// property imageViewInsets attributes=T{UIEdgeInsets=dddd},N,V_imageViewInsets
// property loadingViewInsets attributes=T{UIEdgeInsets=dddd},N,V_loadingViewInsets
// property textLabelInsets attributes=T{UIEdgeInsets=dddd},N,V_textLabelInsets
// property detailTextLabelInsets attributes=T{UIEdgeInsets=dddd},N,V_detailTextLabelInsets
// property actionButtonInsets attributes=T{UIEdgeInsets=dddd},N,V_actionButtonInsets
// property verticalOffset attributes=Td,N,V_verticalOffset
// property textLabelFont attributes=T@"UIFont",&,N,V_textLabelFont
// property detailTextLabelFont attributes=T@"UIFont",&,N,V_detailTextLabelFont
// property actionButtonFont attributes=T@"UIFont",&,N,V_actionButtonFont
// property textLabelTextColor attributes=T@"UIColor",&,N,V_textLabelTextColor
// property detailTextLabelTextColor attributes=T@"UIColor",&,N,V_detailTextLabelTextColor
// property actionButtonTitleColor attributes=T@"UIColor",&,N,V_actionButtonTitleColor
// property contentView attributes=T@"UIView",R,N,V_contentView
// IMP 0x10047dc5c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10047dcac | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10047dcfc | v16@0:8
- (void)didInitialize;
// IMP 0x10047e1e4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10047f090 | {CGSize=dd}16@0:8
- (struct CGSize)sizeThatContentViewFits;
// IMP 0x10047f374 | v24@0:8@16
- (void)updateDetailTextLabelWithText:(id)arg0;
// IMP 0x10047f5ac | v24@0:8@16
- (void)setLoadingView:(id)arg0;
// IMP 0x10047f664 | v20@0:8B16
- (void)setLoadingViewHidden:(BOOL)arg0;
// IMP 0x10047f704 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x10047f790 | v24@0:8@16
- (void)setTextLabelText:(id)arg0;
// IMP 0x10047f81c | v24@0:8@16
- (void)setDetailTextLabelText:(id)arg0;
// IMP 0x10047f820 | v24@0:8@16
- (void)setActionButtonTitle:(id)arg0;
// IMP 0x10047f8b0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setImageViewInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10047f8c8 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextLabelInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10047f8e0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setDetailTextLabelInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10047f8f8 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setActionButtonInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10047f910 | v24@0:8d16
- (void)setVerticalOffset:(double)arg0;
// IMP 0x10047f920 | v24@0:8@16
- (void)setTextLabelFont:(id)arg0;
// IMP 0x10047f998 | v24@0:8@16
- (void)setDetailTextLabelFont:(id)arg0;
// IMP 0x10047fa0c | v24@0:8@16
- (void)setActionButtonFont:(id)arg0;
// IMP 0x10047fa9c | v24@0:8@16
- (void)setTextLabelTextColor:(id)arg0;
// IMP 0x10047fb04 | v24@0:8@16
- (void)setDetailTextLabelTextColor:(id)arg0;
// IMP 0x10047fb78 | v24@0:8@16
- (void)setActionButtonTitleColor:(id)arg0;
// IMP 0x10047fd08 | @16@0:8
- (id)loadingView;
// IMP 0x10047fd18 | @16@0:8
- (id)imageView;
// IMP 0x10047fd28 | @16@0:8
- (id)textLabel;
// IMP 0x10047fd38 | @16@0:8
- (id)detailTextLabel;
// IMP 0x10047fd48 | @16@0:8
- (id)actionButton;
// IMP 0x10047fd58 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)imageViewInsets;
// IMP 0x10047fd70 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)loadingViewInsets;
// IMP 0x10047fd88 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setLoadingViewInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10047fda0 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textLabelInsets;
// IMP 0x10047fdb8 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)detailTextLabelInsets;
// IMP 0x10047fdd0 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)actionButtonInsets;
// IMP 0x10047fde8 | d16@0:8
- (double)verticalOffset;
// IMP 0x10047fdf8 | @16@0:8
- (id)textLabelFont;
// IMP 0x10047fe08 | @16@0:8
- (id)detailTextLabelFont;
// IMP 0x10047fe18 | @16@0:8
- (id)actionButtonFont;
// IMP 0x10047fe28 | @16@0:8
- (id)textLabelTextColor;
// IMP 0x10047fe38 | @16@0:8
- (id)detailTextLabelTextColor;
// IMP 0x10047fe48 | @16@0:8
- (id)actionButtonTitleColor;
// IMP 0x10047fe58 | @16@0:8
- (id)contentView;
// IMP 0x10047fe68 | @16@0:8
- (id)scrollView;
// IMP 0x10047fe78 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x10047fe8c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10047ffa8 | v16@0:8
+ (void)initialize;
// IMP 0x10048001c | v16@0:8
+ (void)setDefaultAppearance;
@end
