// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8beb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUINavigationTitleView : UIControl
// ivar _active encoding=B offset=8
// ivar _adjustsSubviewsTintColorAutomatically encoding=B offset=9
// ivar _needsLoadingView encoding=B offset=10
// ivar _loadingViewHidden encoding=B offset=11
// ivar _needsLoadingPlaceholderSpace encoding=B offset=12
// ivar _needsAccessoryPlaceholderSpace encoding=B offset=13
// ivar _needsSubAccessoryPlaceholderSpace encoding=B offset=14
// ivar _delegate encoding=@"<QMUINavigationTitleViewDelegate>" offset=16
// ivar _style encoding=q offset=24
// ivar _maximumWidth encoding=d offset=32
// ivar _titleLabel encoding=@"UILabel" offset=40
// ivar _title encoding=@"NSString" offset=48
// ivar _subtitleLabel encoding=@"UILabel" offset=56
// ivar _subtitle encoding=@"NSString" offset=64
// ivar _horizontalTitleFont encoding=@"UIFont" offset=72
// ivar _horizontalSubtitleFont encoding=@"UIFont" offset=80
// ivar _verticalTitleFont encoding=@"UIFont" offset=88
// ivar _verticalSubtitleFont encoding=@"UIFont" offset=96
// ivar _loadingView encoding=@"UIActivityIndicatorView" offset=104
// ivar _loadingViewMarginRight encoding=d offset=112
// ivar _accessoryView encoding=@"UIView" offset=120
// ivar _accessoryType encoding=q offset=128
// ivar _subAccessoryView encoding=@"UIView" offset=136
// ivar _contentView encoding=@"UIView" offset=144
// ivar _accessoryTypeView encoding=@"UIImageView" offset=152
// ivar _loadingViewSize encoding={CGSize="width"d"height"d} offset=160
// ivar _accessoryViewOffset encoding={CGPoint="x"d"y"d} offset=176
// ivar _subAccessoryViewOffset encoding={CGPoint="x"d"y"d} offset=192
// ivar _titleLabelSize encoding={CGSize="width"d"height"d} offset=208
// ivar _subtitleLabelSize encoding={CGSize="width"d"height"d} offset=224
// ivar _titleEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=240
// ivar _subtitleEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=272
// property contentView attributes=T@"UIView",R,N,V_contentView
// property titleLabelSize attributes=T{CGSize=dd},N,V_titleLabelSize
// property subtitleLabelSize attributes=T{CGSize=dd},N,V_subtitleLabelSize
// property accessoryTypeView attributes=T@"UIImageView",&,N,V_accessoryTypeView
// property delegate attributes=T@"<QMUINavigationTitleViewDelegate>",W,N,V_delegate
// property style attributes=Tq,N,V_style
// property active attributes=TB,N,GisActive,V_active
// property maximumWidth attributes=Td,N,V_maximumWidth
// property titleLabel attributes=T@"UILabel",R,N,V_titleLabel
// property title attributes=T@"NSString",C,N,V_title
// property subtitleLabel attributes=T@"UILabel",R,N,V_subtitleLabel
// property subtitle attributes=T@"NSString",C,N,V_subtitle
// property adjustsSubviewsTintColorAutomatically attributes=TB,N,V_adjustsSubviewsTintColorAutomatically
// property horizontalTitleFont attributes=T@"UIFont",&,N,V_horizontalTitleFont
// property horizontalSubtitleFont attributes=T@"UIFont",&,N,V_horizontalSubtitleFont
// property verticalTitleFont attributes=T@"UIFont",&,N,V_verticalTitleFont
// property verticalSubtitleFont attributes=T@"UIFont",&,N,V_verticalSubtitleFont
// property titleEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_titleEdgeInsets
// property subtitleEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_subtitleEdgeInsets
// property loadingView attributes=T@"UIActivityIndicatorView",R,N,V_loadingView
// property needsLoadingView attributes=TB,N,V_needsLoadingView
// property loadingViewHidden attributes=TB,N,V_loadingViewHidden
// property needsLoadingPlaceholderSpace attributes=TB,N,V_needsLoadingPlaceholderSpace
// property loadingViewSize attributes=T{CGSize=dd},N,V_loadingViewSize
// property loadingViewMarginRight attributes=Td,N,V_loadingViewMarginRight
// property accessoryView attributes=T@"UIView",&,N,V_accessoryView
// property accessoryType attributes=Tq,N,V_accessoryType
// property accessoryViewOffset attributes=T{CGPoint=dd},N,V_accessoryViewOffset
// property needsAccessoryPlaceholderSpace attributes=TB,N,V_needsAccessoryPlaceholderSpace
// property subAccessoryView attributes=T@"UIView",&,N,V_subAccessoryView
// property subAccessoryViewOffset attributes=T{CGPoint=dd},N,V_subAccessoryViewOffset
// property needsSubAccessoryPlaceholderSpace attributes=TB,N,V_needsSubAccessoryPlaceholderSpace
// IMP 0x1004afa28 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004afa30 | @24@0:8q16
- (id)initWithStyle:(long long)arg0;
// IMP 0x1004afa44 | @56@0:8q16{CGRect={CGPoint=dd}{CGSize=dd}}24
- (id)initWithStyle:(long long)arg0 frame:(struct CGRect)arg1;
// IMP 0x1004aff9c | @16@0:8
- (id)description;
// IMP 0x1004b0060 | v16@0:8
- (void)refreshLayout;
// IMP 0x1004b00a8 | v16@0:8
- (void)setNeedsLayout;
// IMP 0x1004b00fc | @24@0:8@16
- (id)navigationBarSuperviewForSubview:(id)arg0;
// IMP 0x1004b01c4 | v16@0:8
- (void)updateTitleLabelSize;
// IMP 0x1004b027c | v16@0:8
- (void)updateSubtitleLabelSize;
// IMP 0x1004b0334 | {CGSize=dd}16@0:8
- (struct CGSize)loadingViewSpacingSize;
// IMP 0x1004b03ac | {CGSize=dd}16@0:8
- (struct CGSize)loadingViewSpacingSizeIfNeedsPlaceholder;
// IMP 0x1004b0400 | {CGSize=dd}16@0:8
- (struct CGSize)accessorySpacingSize;
// IMP 0x1004b04c8 | {CGSize=dd}16@0:8
- (struct CGSize)subAccessorySpacingSize;
// IMP 0x1004b0560 | {CGSize=dd}16@0:8
- (struct CGSize)accessorySpacingSizeIfNeedesPlaceholder;
// IMP 0x1004b05b4 | {CGSize=dd}16@0:8
- (struct CGSize)subAccessorySpacingSizeIfNeedesPlaceholder;
// IMP 0x1004b0608 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)titleEdgeInsetsIfShowingTitleLabel;
// IMP 0x1004b0654 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)subtitleEdgeInsetsIfShowingSubtitleLabel;
// IMP 0x1004b06a0 | d16@0:8
- (double)firstLineWidthInVerticalStyle;
// IMP 0x1004b06f4 | d16@0:8
- (double)secondLineWidthInVerticalStyle;
// IMP 0x1004b07a0 | {CGSize=dd}16@0:8
- (struct CGSize)contentSize;
// IMP 0x1004b0970 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004b09b4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004b1f18 | v24@0:8d16
- (void)setMaximumWidth:(double)arg0;
// IMP 0x1004b1f28 | v24@0:8q16
- (void)setContentHorizontalAlignment:(long long)arg0;
// IMP 0x1004b1f70 | v20@0:8B16
- (void)setNeedsLoadingPlaceholderSpace:(BOOL)arg0;
// IMP 0x1004b1f80 | v20@0:8B16
- (void)setNeedsAccessoryPlaceholderSpace:(BOOL)arg0;
// IMP 0x1004b1f90 | v32@0:8{CGPoint=dd}16
- (void)setAccessoryViewOffset:(struct CGPoint)arg0;
// IMP 0x1004b1fa4 | v20@0:8B16
- (void)setNeedsSubAccessoryPlaceholderSpace:(BOOL)arg0;
// IMP 0x1004b1fb4 | v32@0:8{CGPoint=dd}16
- (void)setSubAccessoryViewOffset:(struct CGPoint)arg0;
// IMP 0x1004b1fc8 | v24@0:8d16
- (void)setLoadingViewMarginRight:(double)arg0;
// IMP 0x1004b1fd8 | v24@0:8@16
- (void)setHorizontalTitleFont:(id)arg0;
// IMP 0x1004b205c | v24@0:8@16
- (void)setHorizontalSubtitleFont:(id)arg0;
// IMP 0x1004b20e0 | v24@0:8@16
- (void)setVerticalTitleFont:(id)arg0;
// IMP 0x1004b2168 | v24@0:8@16
- (void)setVerticalSubtitleFont:(id)arg0;
// IMP 0x1004b21f0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTitleEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004b2208 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setSubtitleEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004b2220 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x1004b2298 | v24@0:8@16
- (void)setSubtitle:(id)arg0;
// IMP 0x1004b2310 | v24@0:8q16
- (void)setAccessoryType:(long long)arg0;
// IMP 0x1004b2540 | v24@0:8@16
- (void)setAccessoryView:(id)arg0;
// IMP 0x1004b2628 | v24@0:8@16
- (void)setSubAccessoryView:(id)arg0;
// IMP 0x1004b2704 | v16@0:8
- (void)updateSubAccessoryViewHidden;
// IMP 0x1004b27f0 | v20@0:8B16
- (void)setNeedsLoadingView:(BOOL)arg0;
// IMP 0x1004b29c8 | v20@0:8B16
- (void)setLoadingViewHidden:(BOOL)arg0;
// IMP 0x1004b2a34 | v32@0:8{CGSize=dd}16
- (void)setLoadingViewSize:(struct CGSize)arg0;
// IMP 0x1004b2ac4 | v20@0:8B16
- (void)setActive:(BOOL)arg0;
// IMP 0x1004b2cb0 | v24@0:8q16
- (void)setStyle:(long long)arg0;
// IMP 0x1004b2db8 | v16@0:8
- (void)tintColorDidChange;
// IMP 0x1004b2e94 | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x1004b2f40 | v16@0:8
- (void)handleTouchTitleViewEvent;
// IMP 0x1004b3670 | @16@0:8
- (id)delegate;
// IMP 0x1004b3690 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1004b36a4 | q16@0:8
- (long long)style;
// IMP 0x1004b36b4 | B16@0:8
- (BOOL)isActive;
// IMP 0x1004b36c4 | d16@0:8
- (double)maximumWidth;
// IMP 0x1004b36d4 | @16@0:8
- (id)titleLabel;
// IMP 0x1004b36e4 | @16@0:8
- (id)title;
// IMP 0x1004b36f4 | @16@0:8
- (id)subtitleLabel;
// IMP 0x1004b3704 | @16@0:8
- (id)subtitle;
// IMP 0x1004b3714 | B16@0:8
- (BOOL)adjustsSubviewsTintColorAutomatically;
// IMP 0x1004b3724 | v20@0:8B16
- (void)setAdjustsSubviewsTintColorAutomatically:(BOOL)arg0;
// IMP 0x1004b3734 | @16@0:8
- (id)horizontalTitleFont;
// IMP 0x1004b3744 | @16@0:8
- (id)horizontalSubtitleFont;
// IMP 0x1004b3754 | @16@0:8
- (id)verticalTitleFont;
// IMP 0x1004b3764 | @16@0:8
- (id)verticalSubtitleFont;
// IMP 0x1004b3774 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)titleEdgeInsets;
// IMP 0x1004b378c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)subtitleEdgeInsets;
// IMP 0x1004b37a4 | @16@0:8
- (id)loadingView;
// IMP 0x1004b37b4 | B16@0:8
- (BOOL)needsLoadingView;
// IMP 0x1004b37c4 | B16@0:8
- (BOOL)loadingViewHidden;
// IMP 0x1004b37d4 | B16@0:8
- (BOOL)needsLoadingPlaceholderSpace;
// IMP 0x1004b37e4 | {CGSize=dd}16@0:8
- (struct CGSize)loadingViewSize;
// IMP 0x1004b37f8 | d16@0:8
- (double)loadingViewMarginRight;
// IMP 0x1004b3808 | @16@0:8
- (id)accessoryView;
// IMP 0x1004b3818 | q16@0:8
- (long long)accessoryType;
// IMP 0x1004b3828 | {CGPoint=dd}16@0:8
- (struct CGPoint)accessoryViewOffset;
// IMP 0x1004b383c | B16@0:8
- (BOOL)needsAccessoryPlaceholderSpace;
// IMP 0x1004b384c | @16@0:8
- (id)subAccessoryView;
// IMP 0x1004b385c | {CGPoint=dd}16@0:8
- (struct CGPoint)subAccessoryViewOffset;
// IMP 0x1004b3870 | B16@0:8
- (BOOL)needsSubAccessoryPlaceholderSpace;
// IMP 0x1004b3880 | @16@0:8
- (id)contentView;
// IMP 0x1004b3890 | {CGSize=dd}16@0:8
- (struct CGSize)titleLabelSize;
// IMP 0x1004b38a4 | v32@0:8{CGSize=dd}16
- (void)setTitleLabelSize:(struct CGSize)arg0;
// IMP 0x1004b38b8 | {CGSize=dd}16@0:8
- (struct CGSize)subtitleLabelSize;
// IMP 0x1004b38cc | v32@0:8{CGSize=dd}16
- (void)setSubtitleLabelSize:(struct CGSize)arg0;
// IMP 0x1004b38e0 | @16@0:8
- (id)accessoryTypeView;
// IMP 0x1004b38f0 | v24@0:8@16
- (void)setAccessoryTypeView:(id)arg0;
// IMP 0x1004b3904 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004b2fd4 | v16@0:8
+ (void)load;
@end
