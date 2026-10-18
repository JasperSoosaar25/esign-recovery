// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88c50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIDialogViewController : QMUICommonViewController
// ivar _hasCustomContentView encoding=B offset=16
// ivar _cornerRadius encoding=d offset=24
// ivar _maximumContentViewWidth encoding=d offset=32
// ivar _backgroundColor encoding=@"UIColor" offset=40
// ivar _titleTintColor encoding=@"UIColor" offset=48
// ivar _titleLabelFont encoding=@"UIFont" offset=56
// ivar _titleLabelTextColor encoding=@"UIColor" offset=64
// ivar _subTitleLabelFont encoding=@"UIFont" offset=72
// ivar _subTitleLabelTextColor encoding=@"UIColor" offset=80
// ivar _headerSeparatorColor encoding=@"UIColor" offset=88
// ivar _headerViewHeight encoding=d offset=96
// ivar _headerViewBackgroundColor encoding=@"UIColor" offset=104
// ivar _contentViewBackgroundColor encoding=@"UIColor" offset=112
// ivar _footerSeparatorColor encoding=@"UIColor" offset=120
// ivar _footerViewHeight encoding=d offset=128
// ivar _footerViewBackgroundColor encoding=@"UIColor" offset=136
// ivar _buttonBackgroundColor encoding=@"UIColor" offset=144
// ivar _buttonHighlightedBackgroundColor encoding=@"UIColor" offset=152
// ivar _buttonTitleAttributes encoding=@"NSDictionary" offset=160
// ivar _headerView encoding=@"UIView" offset=168
// ivar _headerViewSeparatorLayer encoding=@"CALayer" offset=176
// ivar _contentView encoding=@"UIView" offset=184
// ivar _footerView encoding=@"UIView" offset=192
// ivar _footerViewSeparatorLayer encoding=@"CALayer" offset=200
// ivar _cancelButton encoding=@"QMUIButton" offset=208
// ivar _submitButton encoding=@"QMUIButton" offset=216
// ivar _buttonSeparatorLayer encoding=@"CALayer" offset=224
// ivar _modalPresentationViewController encoding=@"QMUIModalPresentationViewController" offset=232
// ivar _cancelButtonBlock encoding=@? offset=240
// ivar _submitButtonBlock encoding=@? offset=248
// ivar _dialogViewMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=256
// ivar _contentViewMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=288
// property hasCustomContentView attributes=TB,N,V_hasCustomContentView
// property cancelButtonBlock attributes=T@?,C,N,V_cancelButtonBlock
// property submitButtonBlock attributes=T@?,C,N,V_submitButtonBlock
// property cornerRadius attributes=Td,N,V_cornerRadius
// property dialogViewMargins attributes=T{UIEdgeInsets=dddd},N,V_dialogViewMargins
// property maximumContentViewWidth attributes=Td,N,V_maximumContentViewWidth
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property titleTintColor attributes=T@"UIColor",&,N,V_titleTintColor
// property titleLabelFont attributes=T@"UIFont",&,N,V_titleLabelFont
// property titleLabelTextColor attributes=T@"UIColor",&,N,V_titleLabelTextColor
// property subTitleLabelFont attributes=T@"UIFont",&,N,V_subTitleLabelFont
// property subTitleLabelTextColor attributes=T@"UIColor",&,N,V_subTitleLabelTextColor
// property headerSeparatorColor attributes=T@"UIColor",&,N,V_headerSeparatorColor
// property headerViewHeight attributes=Td,N,V_headerViewHeight
// property headerViewBackgroundColor attributes=T@"UIColor",&,N,V_headerViewBackgroundColor
// property contentViewMargins attributes=T{UIEdgeInsets=dddd},N,V_contentViewMargins
// property contentViewBackgroundColor attributes=T@"UIColor",&,N,V_contentViewBackgroundColor
// property footerSeparatorColor attributes=T@"UIColor",&,N,V_footerSeparatorColor
// property footerViewHeight attributes=Td,N,V_footerViewHeight
// property footerViewBackgroundColor attributes=T@"UIColor",&,N,V_footerViewBackgroundColor
// property buttonBackgroundColor attributes=T@"UIColor",&,N,V_buttonBackgroundColor
// property buttonHighlightedBackgroundColor attributes=T@"UIColor",&,N,V_buttonHighlightedBackgroundColor
// property buttonTitleAttributes attributes=T@"NSDictionary",C,N,V_buttonTitleAttributes
// property headerView attributes=T@"UIView",R,N,V_headerView
// property headerViewSeparatorLayer attributes=T@"CALayer",R,N,V_headerViewSeparatorLayer
// property contentView attributes=T@"UIView",&,N,V_contentView
// property footerView attributes=T@"UIView",R,N,V_footerView
// property footerViewSeparatorLayer attributes=T@"CALayer",R,N,V_footerViewSeparatorLayer
// property cancelButton attributes=T@"QMUIButton",R,N,V_cancelButton
// property submitButton attributes=T@"QMUIButton",R,N,V_submitButton
// property buttonSeparatorLayer attributes=T@"CALayer",R,N,V_buttonSeparatorLayer
// property modalPresentationViewController attributes=T@"QMUIModalPresentationViewController",&,N,V_modalPresentationViewController
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100471d6c | v16@0:8
- (void)didInitialize;
// IMP 0x1004722dc | v24@0:8d16
- (void)setCornerRadius:(double)arg0;
// IMP 0x100472360 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x1004723dc | v24@0:8@16
- (void)setTitleTintColor:(id)arg0;
// IMP 0x100472410 | v24@0:8@16
- (void)setTitleLabelFont:(id)arg0;
// IMP 0x1004724bc | v24@0:8@16
- (void)setTitleLabelTextColor:(id)arg0;
// IMP 0x1004724f0 | v24@0:8@16
- (void)setSubTitleLabelFont:(id)arg0;
// IMP 0x10047259c | v24@0:8@16
- (void)setSubTitleLabelTextColor:(id)arg0;
// IMP 0x1004725d0 | v16@0:8
- (void)updateTitleViewColor;
// IMP 0x100472890 | v24@0:8@16
- (void)setHeaderSeparatorColor:(id)arg0;
// IMP 0x10047290c | v24@0:8@16
- (void)setFooterSeparatorColor:(id)arg0;
// IMP 0x1004729c0 | v24@0:8d16
- (void)setHeaderViewHeight:(double)arg0;
// IMP 0x1004729fc | v24@0:8@16
- (void)setHeaderViewBackgroundColor:(id)arg0;
// IMP 0x100472a64 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentViewMargins:(struct UIEdgeInsets)arg0;
// IMP 0x100472aa8 | v24@0:8@16
- (void)setContentViewBackgroundColor:(id)arg0;
// IMP 0x100472b24 | v24@0:8d16
- (void)setFooterViewHeight:(double)arg0;
// IMP 0x100472b34 | v24@0:8@16
- (void)setFooterViewBackgroundColor:(id)arg0;
// IMP 0x100472b9c | v24@0:8@16
- (void)setButtonTitleAttributes:(id)arg0;
// IMP 0x100472d7c | v24@0:8@16
- (void)setButtonBackgroundColor:(id)arg0;
// IMP 0x100472e48 | v24@0:8@16
- (void)setButtonHighlightedBackgroundColor:(id)arg0;
// IMP 0x100472f14 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x100472f18 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1004730e0 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x100473188 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x100473a80 | v32@0:8@16@?24
- (void)addCancelButtonWithText:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100473ba4 | v16@0:8
- (void)removeCancelButton;
// IMP 0x100473c4c | v32@0:8@16@?24
- (void)addSubmitButtonWithText:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100473d70 | v16@0:8
- (void)removeSubmitButton;
// IMP 0x100473e18 | @24@0:8@16
- (id)generateButtonWithText:(id)arg0;
// IMP 0x100473f90 | v24@0:8@16
- (void)handleCancelButtonEvent:(id)arg0;
// IMP 0x100474004 | v24@0:8@16
- (void)handleSubmitButtonEvent:(id)arg0;
// IMP 0x100474068 | v16@0:8
- (void)show;
// IMP 0x100474074 | v28@0:8B16@?20
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x10047417c | v16@0:8
- (void)hide;
// IMP 0x100474188 | v28@0:8B16@?20
- (void)hideWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x100474288 | {CGSize=dd}48@0:8@16d24{CGSize=dd}32
- (struct CGSize)preferredContentSizeInModalPresentationViewController:(id)arg0 keyboardHeight:(double)arg1 limitSize:(struct CGSize)arg2;
// IMP 0x1004743a8 | v16@0:8
- (void)hideModalPresentationComponent;
// IMP 0x1004743b4 | d16@0:8
- (double)cornerRadius;
// IMP 0x1004743c4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)dialogViewMargins;
// IMP 0x1004743dc | v48@0:8{UIEdgeInsets=dddd}16
- (void)setDialogViewMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004743f4 | d16@0:8
- (double)maximumContentViewWidth;
// IMP 0x100474404 | v24@0:8d16
- (void)setMaximumContentViewWidth:(double)arg0;
// IMP 0x100474414 | @16@0:8
- (id)backgroundColor;
// IMP 0x100474424 | @16@0:8
- (id)titleTintColor;
// IMP 0x100474434 | @16@0:8
- (id)titleLabelFont;
// IMP 0x100474444 | @16@0:8
- (id)titleLabelTextColor;
// IMP 0x100474454 | @16@0:8
- (id)subTitleLabelFont;
// IMP 0x100474464 | @16@0:8
- (id)subTitleLabelTextColor;
// IMP 0x100474474 | @16@0:8
- (id)headerSeparatorColor;
// IMP 0x100474484 | d16@0:8
- (double)headerViewHeight;
// IMP 0x100474494 | @16@0:8
- (id)headerViewBackgroundColor;
// IMP 0x1004744a4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentViewMargins;
// IMP 0x1004744bc | @16@0:8
- (id)contentViewBackgroundColor;
// IMP 0x1004744cc | @16@0:8
- (id)footerSeparatorColor;
// IMP 0x1004744dc | d16@0:8
- (double)footerViewHeight;
// IMP 0x1004744ec | @16@0:8
- (id)footerViewBackgroundColor;
// IMP 0x1004744fc | @16@0:8
- (id)buttonBackgroundColor;
// IMP 0x10047450c | @16@0:8
- (id)buttonHighlightedBackgroundColor;
// IMP 0x10047451c | @16@0:8
- (id)buttonTitleAttributes;
// IMP 0x10047452c | @16@0:8
- (id)headerView;
// IMP 0x10047453c | @16@0:8
- (id)headerViewSeparatorLayer;
// IMP 0x10047454c | @16@0:8
- (id)contentView;
// IMP 0x10047455c | @16@0:8
- (id)footerView;
// IMP 0x10047456c | @16@0:8
- (id)footerViewSeparatorLayer;
// IMP 0x10047457c | @16@0:8
- (id)cancelButton;
// IMP 0x10047458c | @16@0:8
- (id)submitButton;
// IMP 0x10047459c | @16@0:8
- (id)buttonSeparatorLayer;
// IMP 0x1004745ac | @16@0:8
- (id)modalPresentationViewController;
// IMP 0x1004745bc | v24@0:8@16
- (void)setModalPresentationViewController:(id)arg0;
// IMP 0x1004745d0 | B16@0:8
- (BOOL)hasCustomContentView;
// IMP 0x1004745e0 | v20@0:8B16
- (void)setHasCustomContentView:(BOOL)arg0;
// IMP 0x1004745f0 | @?16@0:8
- (id /* block */)cancelButtonBlock;
// IMP 0x100474600 | v24@0:8@?16
- (void)setCancelButtonBlock:(id /* block */)arg0;
// IMP 0x10047460c | @?16@0:8
- (id /* block */)submitButtonBlock;
// IMP 0x10047461c | v24@0:8@?16
- (void)setSubmitButtonBlock:(id /* block */)arg0;
// IMP 0x100474628 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004718c4 | @16@0:8
+ (id)appearance;
// IMP 0x1004718d4 | v16@0:8
+ (void)initialize;
@end
