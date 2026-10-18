// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8c980
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPopupContainerView : UIControl
// ivar _backgroundLayer encoding=@"CAShapeLayer" offset=8
// ivar _arrowImageView encoding=@"UIImageView" offset=16
// ivar _arrowMinX encoding=d offset=24
// ivar _arrowMinY encoding=d offset=32
// ivar _imageView encoding=@"UIImageView" offset=40
// ivar _textLabel encoding=@"UILabel" offset=48
// ivar _backgroundViewMaskLayer encoding=@"CALayer" offset=56
// ivar _copiedBackgroundLayer encoding=@"CAShapeLayer" offset=64
// ivar _copiedArrowImageLayer encoding=@"CALayer" offset=72
// ivar _debug encoding=B offset=80
// ivar _automaticallyHidesWhenUserTap encoding=B offset=81
// ivar _hidesByUserTap encoding=B offset=82
// ivar _contentView encoding=@"UIView" offset=88
// ivar _contentViewSizeThatFitsBlock encoding=@? offset=96
// ivar _arrowImage encoding=@"UIImage" offset=104
// ivar _maximumWidth encoding=d offset=112
// ivar _minimumWidth encoding=d offset=120
// ivar _maximumHeight encoding=d offset=128
// ivar _minimumHeight encoding=d offset=136
// ivar _preferLayoutDirection encoding=Q offset=144
// ivar _currentLayoutDirection encoding=Q offset=152
// ivar _distanceBetweenSource encoding=d offset=160
// ivar _backgroundView encoding=@"UIView" offset=168
// ivar _backgroundColor encoding=@"UIColor" offset=176
// ivar _highlightedBackgroundColor encoding=@"UIColor" offset=184
// ivar _maskViewBackgroundColor encoding=@"UIColor" offset=192
// ivar _shadow encoding=@"NSShadow" offset=200
// ivar _borderColor encoding=@"UIColor" offset=208
// ivar _borderWidth encoding=d offset=216
// ivar _cornerRadius encoding=d offset=224
// ivar _sourceBarItem encoding=@"UIBarItem" offset=232
// ivar _sourceView encoding=@"UIView" offset=240
// ivar _willShowBlock encoding=@? offset=248
// ivar _willHideBlock encoding=@? offset=256
// ivar _didHideBlock encoding=@? offset=264
// ivar _popupWindow encoding=@"QMUIPopupContainerViewWindow" offset=272
// ivar _previousKeyWindow encoding=@"UIWindow" offset=280
// ivar _arrowSize encoding={CGSize="width"d"height"d} offset=288
// ivar _contentEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=304
// ivar _imageEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=336
// ivar _textEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=368
// ivar _safetyMarginsOfSuperview encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=400
// ivar _sourceRect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=432
// property popupWindow attributes=T@"QMUIPopupContainerViewWindow",&,N,V_popupWindow
// property previousKeyWindow attributes=T@"UIWindow",W,N,V_previousKeyWindow
// property hidesByUserTap attributes=TB,N,V_hidesByUserTap
// property debug attributes=TB,N,V_debug
// property automaticallyHidesWhenUserTap attributes=TB,N,V_automaticallyHidesWhenUserTap
// property contentView attributes=T@"UIView",R,N,V_contentView
// property contentViewSizeThatFitsBlock attributes=T@?,C,N,V_contentViewSizeThatFitsBlock
// property imageView attributes=T@"UIImageView",R,N
// property textLabel attributes=T@"UILabel",R,N
// property contentEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_contentEdgeInsets
// property imageEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_imageEdgeInsets
// property textEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_textEdgeInsets
// property arrowSize attributes=T{CGSize=dd},N,V_arrowSize
// property arrowImage attributes=T@"UIImage",&,N,V_arrowImage
// property maximumWidth attributes=Td,N,V_maximumWidth
// property minimumWidth attributes=Td,N,V_minimumWidth
// property maximumHeight attributes=Td,N,V_maximumHeight
// property minimumHeight attributes=Td,N,V_minimumHeight
// property preferLayoutDirection attributes=TQ,N,V_preferLayoutDirection
// property currentLayoutDirection attributes=TQ,R,N,V_currentLayoutDirection
// property distanceBetweenSource attributes=Td,N,V_distanceBetweenSource
// property safetyMarginsOfSuperview attributes=T{UIEdgeInsets=dddd},N,V_safetyMarginsOfSuperview
// property backgroundView attributes=T@"UIView",&,N,V_backgroundView
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property highlightedBackgroundColor attributes=T@"UIColor",&,N,V_highlightedBackgroundColor
// property maskViewBackgroundColor attributes=T@"UIColor",&,N,V_maskViewBackgroundColor
// property shadow attributes=T@"NSShadow",&,N,V_shadow
// property borderColor attributes=T@"UIColor",&,N,V_borderColor
// property borderWidth attributes=Td,N,V_borderWidth
// property cornerRadius attributes=Td,N,V_cornerRadius
// property sourceBarItem attributes=T@"UIBarItem",W,N,V_sourceBarItem
// property sourceView attributes=T@"UIView",W,N,V_sourceView
// property sourceRect attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_sourceRect
// property willShowBlock attributes=T@?,C,N,V_willShowBlock
// property willHideBlock attributes=T@?,C,N,V_willHideBlock
// property didHideBlock attributes=T@?,C,N,V_didHideBlock
// IMP 0x1004bae10 | v16@0:8
- (void)didInitialize;
// IMP 0x1004baf04 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFitsInContentView:(struct CGSize)arg0;
// IMP 0x1004b6128 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004b6178 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004b61c8 | v16@0:8
- (void)dealloc;
// IMP 0x1004b622c | @16@0:8
- (id)imageView;
// IMP 0x1004b62b4 | @16@0:8
- (id)textLabel;
// IMP 0x1004b63d0 | @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(struct CGPoint)arg0 withEvent:(id)arg1;
// IMP 0x1004b6458 | v24@0:8@16
- (void)setBackgroundView:(id)arg0;
// IMP 0x1004b6674 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x1004b66f4 | v24@0:8@16
- (void)setMaskViewBackgroundColor:(id)arg0;
// IMP 0x1004b67b0 | v24@0:8@16
- (void)setShadow:(id)arg0;
// IMP 0x1004b6808 | v24@0:8@16
- (void)setBorderColor:(id)arg0;
// IMP 0x1004b6868 | v24@0:8d16
- (void)setBorderWidth:(double)arg0;
// IMP 0x1004b6884 | v24@0:8d16
- (void)setCornerRadius:(double)arg0;
// IMP 0x1004b6894 | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x1004b695c | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004b6a18 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004b7314 | v16@0:8
- (void)layoutDefaultSubviews;
// IMP 0x1004b7ae0 | v24@0:8@16
- (void)setSourceBarItem:(id)arg0;
// IMP 0x1004b7e3c | v24@0:8@16
- (void)setSourceView:(id)arg0;
// IMP 0x1004b8144 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setSourceRect:(struct CGRect)arg0;
// IMP 0x1004b81c4 | v16@0:8
- (void)updateLayout;
// IMP 0x1004b826c | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)layoutWithTargetRect:(struct CGRect)arg0;
// IMP 0x1004b948c | {CGPoint=dd}72@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGSize=dd}48Q64
- (struct CGPoint)tipOriginWithTargetRect:(struct CGRect)arg0 tipSize:(struct CGSize)arg1 preferLayoutDirection:(unsigned long long)arg2;
// IMP 0x1004b9550 | B72@0:8Q16{CGRect={CGPoint=dd}{CGSize=dd}}24{CGSize=dd}56
- (BOOL)canTipShowAtSpecifiedLayoutDirect:(unsigned long long)arg0 targetRect:(struct CGRect)arg1 tipSize:(struct CGSize)arg2;
// IMP 0x1004b9698 | v20@0:8B16
- (void)showWithAnimated:(BOOL)arg0;
// IMP 0x1004b96a0 | v28@0:8B16@?20
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x1004b9aec | v20@0:8B16
- (void)hideWithAnimated:(BOOL)arg0;
// IMP 0x1004b9af4 | v28@0:8B16@?20
- (void)hideWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x1004b9cc4 | v28@0:8B16@?20
- (void)hideCompletionWithWindowMode:(BOOL)arg0 completion:(id /* block */)arg1;
// IMP 0x1004b9e60 | B16@0:8
- (BOOL)isShowing;
// IMP 0x1004b9f48 | B24@0:8@16
- (BOOL)isSubviewShowing:(id)arg0;
// IMP 0x1004b9fac | v16@0:8
- (void)initPopupContainerViewWindowIfNeeded;
// IMP 0x1004ba2d8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)contentSizeInSize:(struct CGSize)arg0;
// IMP 0x1004ba35c | {CGSize=dd}48@0:8{CGSize=dd}16{CGSize=dd}32
- (struct CGSize)sizeWithContentSize:(struct CGSize)arg0 sizeThatFits:(struct CGSize)arg1;
// IMP 0x1004ba4b8 | B16@0:8
- (BOOL)isHorizontalLayoutDirection;
// IMP 0x1004ba4f8 | B16@0:8
- (BOOL)isVerticalLayoutDirection;
// IMP 0x1004ba534 | v24@0:8@16
- (void)setArrowImage:(id)arg0;
// IMP 0x1004ba678 | v32@0:8{CGSize=dd}16
- (void)setArrowSize:(struct CGSize)arg0;
// IMP 0x1004ba6cc | {CGSize=dd}16@0:8
- (struct CGSize)arrowSizeAuto;
// IMP 0x1004ba720 | d16@0:8
- (double)arrowSpacingInHorizontal;
// IMP 0x1004ba750 | d16@0:8
- (double)arrowSpacingInVertical;
// IMP 0x1004ba784 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)safetyMarginsAvoidSafeAreaInsets;
// IMP 0x1004ba860 | B16@0:8
- (BOOL)debug;
// IMP 0x1004ba870 | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x1004ba880 | B16@0:8
- (BOOL)automaticallyHidesWhenUserTap;
// IMP 0x1004ba890 | v20@0:8B16
- (void)setAutomaticallyHidesWhenUserTap:(BOOL)arg0;
// IMP 0x1004ba8a0 | @16@0:8
- (id)contentView;
// IMP 0x1004ba8b0 | @?16@0:8
- (id /* block */)contentViewSizeThatFitsBlock;
// IMP 0x1004ba8c0 | v24@0:8@?16
- (void)setContentViewSizeThatFitsBlock:(id /* block */)arg0;
// IMP 0x1004ba8cc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentEdgeInsets;
// IMP 0x1004ba8e4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004ba8fc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)imageEdgeInsets;
// IMP 0x1004ba914 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setImageEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004ba92c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textEdgeInsets;
// IMP 0x1004ba944 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004ba95c | {CGSize=dd}16@0:8
- (struct CGSize)arrowSize;
// IMP 0x1004ba970 | @16@0:8
- (id)arrowImage;
// IMP 0x1004ba980 | d16@0:8
- (double)maximumWidth;
// IMP 0x1004ba990 | v24@0:8d16
- (void)setMaximumWidth:(double)arg0;
// IMP 0x1004ba9a0 | d16@0:8
- (double)minimumWidth;
// IMP 0x1004ba9b0 | v24@0:8d16
- (void)setMinimumWidth:(double)arg0;
// IMP 0x1004ba9c0 | d16@0:8
- (double)maximumHeight;
// IMP 0x1004ba9d0 | v24@0:8d16
- (void)setMaximumHeight:(double)arg0;
// IMP 0x1004ba9e0 | d16@0:8
- (double)minimumHeight;
// IMP 0x1004ba9f0 | v24@0:8d16
- (void)setMinimumHeight:(double)arg0;
// IMP 0x1004baa00 | Q16@0:8
- (unsigned long long)preferLayoutDirection;
// IMP 0x1004baa10 | v24@0:8Q16
- (void)setPreferLayoutDirection:(unsigned long long)arg0;
// IMP 0x1004baa20 | Q16@0:8
- (unsigned long long)currentLayoutDirection;
// IMP 0x1004baa30 | d16@0:8
- (double)distanceBetweenSource;
// IMP 0x1004baa40 | v24@0:8d16
- (void)setDistanceBetweenSource:(double)arg0;
// IMP 0x1004baa50 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)safetyMarginsOfSuperview;
// IMP 0x1004baa68 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setSafetyMarginsOfSuperview:(struct UIEdgeInsets)arg0;
// IMP 0x1004baa80 | @16@0:8
- (id)backgroundView;
// IMP 0x1004baa90 | @16@0:8
- (id)backgroundColor;
// IMP 0x1004baaa0 | @16@0:8
- (id)highlightedBackgroundColor;
// IMP 0x1004baab0 | v24@0:8@16
- (void)setHighlightedBackgroundColor:(id)arg0;
// IMP 0x1004baac4 | @16@0:8
- (id)maskViewBackgroundColor;
// IMP 0x1004baad4 | @16@0:8
- (id)shadow;
// IMP 0x1004baae4 | @16@0:8
- (id)borderColor;
// IMP 0x1004baaf4 | d16@0:8
- (double)borderWidth;
// IMP 0x1004bab04 | d16@0:8
- (double)cornerRadius;
// IMP 0x1004bab14 | @16@0:8
- (id)sourceBarItem;
// IMP 0x1004bab34 | @16@0:8
- (id)sourceView;
// IMP 0x1004bab54 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)sourceRect;
// IMP 0x1004bab6c | @?16@0:8
- (id /* block */)willShowBlock;
// IMP 0x1004bab7c | v24@0:8@?16
- (void)setWillShowBlock:(id /* block */)arg0;
// IMP 0x1004bab88 | @?16@0:8
- (id /* block */)willHideBlock;
// IMP 0x1004bab98 | v24@0:8@?16
- (void)setWillHideBlock:(id /* block */)arg0;
// IMP 0x1004baba4 | @?16@0:8
- (id /* block */)didHideBlock;
// IMP 0x1004babb4 | v24@0:8@?16
- (void)setDidHideBlock:(id /* block */)arg0;
// IMP 0x1004babc0 | @16@0:8
- (id)popupWindow;
// IMP 0x1004babd0 | v24@0:8@16
- (void)setPopupWindow:(id)arg0;
// IMP 0x1004babe4 | @16@0:8
- (id)previousKeyWindow;
// IMP 0x1004bac04 | v24@0:8@16
- (void)setPreviousKeyWindow:(id)arg0;
// IMP 0x1004bac18 | B16@0:8
- (BOOL)hidesByUserTap;
// IMP 0x1004bac28 | v20@0:8B16
- (void)setHidesByUserTap:(BOOL)arg0;
// IMP 0x1004bac38 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004bb074 | v16@0:8
+ (void)initialize;
// IMP 0x1004bb0e8 | v16@0:8
+ (void)setDefaultAppearance;
@end
