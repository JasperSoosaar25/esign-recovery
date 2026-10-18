// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b638
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIMoreOperationController : UIViewController
// ivar _automaticallyAdjustItemMargins encoding=B offset=8
// ivar _isExtendBottomLayout encoding=B offset=9
// ivar _showing encoding=B offset=10
// ivar _animating encoding=B offset=11
// ivar _hideByCancel encoding=B offset=12
// ivar _contentView encoding=@"UIView" offset=16
// ivar _cancelButton encoding=@"QMUIButton" offset=24
// ivar _contentBackgroundColor encoding=@"UIColor" offset=32
// ivar _contentMaximumWidth encoding=d offset=40
// ivar _contentCornerRadius encoding=d offset=48
// ivar _scrollViewSeparatorColor encoding=@"UIColor" offset=56
// ivar _itemBackgroundColor encoding=@"UIColor" offset=64
// ivar _itemTitleColor encoding=@"UIColor" offset=72
// ivar _itemTitleFont encoding=@"UIFont" offset=80
// ivar _itemPaddingHorizontal encoding=d offset=88
// ivar _itemTitleMarginTop encoding=d offset=96
// ivar _itemMinimumMarginHorizontal encoding=d offset=104
// ivar _cancelButtonBackgroundColor encoding=@"UIColor" offset=112
// ivar _cancelButtonTitleColor encoding=@"UIColor" offset=120
// ivar _cancelButtonSeparatorColor encoding=@"UIColor" offset=128
// ivar _cancelButtonFont encoding=@"UIFont" offset=136
// ivar _cancelButtonHeight encoding=d offset=144
// ivar _cancelButtonMarginTop encoding=d offset=152
// ivar _delegate encoding=@"<QMUIMoreOperationControllerDelegate>" offset=160
// ivar _mutableScrollViews encoding=@"NSMutableArray" offset=168
// ivar _mutableItems encoding=@"NSMutableArray" offset=176
// ivar _extendLayer encoding=@"CALayer" offset=184
// ivar _contentEdgeMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=192
// ivar _contentPaddings encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=224
// ivar _scrollViewContentInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=256
// property mutableScrollViews attributes=T@"NSMutableArray",&,N,V_mutableScrollViews
// property mutableItems attributes=T@"NSMutableArray",&,N,V_mutableItems
// property extendLayer attributes=T@"CALayer",&,N,V_extendLayer
// property showing attributes=TB,N,GisShowing,V_showing
// property animating attributes=TB,N,GisAnimating,V_animating
// property hideByCancel attributes=TB,N,V_hideByCancel
// property contentBackgroundColor attributes=T@"UIColor",&,N,V_contentBackgroundColor
// property contentEdgeMargins attributes=T{UIEdgeInsets=dddd},N,V_contentEdgeMargins
// property contentMaximumWidth attributes=Td,N,V_contentMaximumWidth
// property contentCornerRadius attributes=Td,N,V_contentCornerRadius
// property contentPaddings attributes=T{UIEdgeInsets=dddd},N,V_contentPaddings
// property scrollViewSeparatorColor attributes=T@"UIColor",&,N,V_scrollViewSeparatorColor
// property scrollViewContentInsets attributes=T{UIEdgeInsets=dddd},N,V_scrollViewContentInsets
// property itemBackgroundColor attributes=T@"UIColor",&,N,V_itemBackgroundColor
// property itemTitleColor attributes=T@"UIColor",&,N,V_itemTitleColor
// property itemTitleFont attributes=T@"UIFont",&,N,V_itemTitleFont
// property itemPaddingHorizontal attributes=Td,N,V_itemPaddingHorizontal
// property itemTitleMarginTop attributes=Td,N,V_itemTitleMarginTop
// property itemMinimumMarginHorizontal attributes=Td,N,V_itemMinimumMarginHorizontal
// property automaticallyAdjustItemMargins attributes=TB,N,V_automaticallyAdjustItemMargins
// property cancelButtonBackgroundColor attributes=T@"UIColor",&,N,V_cancelButtonBackgroundColor
// property cancelButtonTitleColor attributes=T@"UIColor",&,N,V_cancelButtonTitleColor
// property cancelButtonSeparatorColor attributes=T@"UIColor",&,N,V_cancelButtonSeparatorColor
// property cancelButtonFont attributes=T@"UIFont",&,N,V_cancelButtonFont
// property cancelButtonHeight attributes=Td,N,V_cancelButtonHeight
// property cancelButtonMarginTop attributes=Td,N,V_cancelButtonMarginTop
// property delegate attributes=T@"<QMUIMoreOperationControllerDelegate>",W,N,V_delegate
// property contentView attributes=T@"UIView",R,N,V_contentView
// property scrollViews attributes=T@"NSArray",R,C,N
// property cancelButton attributes=T@"QMUIButton",R,N,V_cancelButton
// property isExtendBottomLayout attributes=TB,N,V_isExtendBottomLayout
// property items attributes=T@"NSArray",C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004a3bd8 | @32@0:8@16@24
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
// IMP 0x1004a3c28 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004a3c78 | v16@0:8
- (void)didInitialize;
// IMP 0x1004a3ce8 | @16@0:8
- (id)contentView;
// IMP 0x1004a3d68 | @16@0:8
- (id)cancelButton;
// IMP 0x1004a3f74 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1004a412c | @16@0:8
- (id)scrollViews;
// IMP 0x1004a4168 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1004a4b50 | d24@0:8d16
- (double)suitableColumnCountWithCount:(double)arg0;
// IMP 0x1004a4b60 | v16@0:8
- (void)showFromBottom;
// IMP 0x1004a55e0 | v16@0:8
- (void)hideToBottom;
// IMP 0x1004a564c | v24@0:8@16
- (void)setItems:(id)arg0;
// IMP 0x1004a5870 | @16@0:8
- (id)items;
// IMP 0x1004a58ac | v32@0:8@16q24
- (void)addItemView:(id)arg0 inSection:(long long)arg1;
// IMP 0x1004a5aa0 | v32@0:8@16@24
- (void)insertItemView:(id)arg0 atIndexPath:(id)arg1;
// IMP 0x1004a5d08 | v24@0:8@16
- (void)removeItemViewAtIndexPath:(id)arg0;
// IMP 0x1004a5ee4 | @24@0:8q16
- (id)itemViewWithTag:(long long)arg0;
// IMP 0x1004a604c | @24@0:8@16
- (id)indexPathWithItemView:(id)arg0;
// IMP 0x1004a616c | @24@0:8q16
- (id)addScrollViewAtIndex:(long long)arg0;
// IMP 0x1004a61f4 | v32@0:8@16@24
- (void)addItemView:(id)arg0 toScrollView:(id)arg1;
// IMP 0x1004a6254 | @24@0:8q16
- (id)generateScrollViewWithIndex:(long long)arg0;
// IMP 0x1004a634c | v16@0:8
- (void)updateScrollViewsBorderStyle;
// IMP 0x1004a6430 | v24@0:8@16
- (void)handleCancelButtonEvent:(id)arg0;
// IMP 0x1004a6490 | v24@0:8@16
- (void)handleItemViewEvent:(id)arg0;
// IMP 0x1004a6564 | v24@0:8@16
- (void)setContentBackgroundColor:(id)arg0;
// IMP 0x1004a65bc | v24@0:8@16
- (void)setScrollViewSeparatorColor:(id)arg0;
// IMP 0x1004a65f0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setScrollViewContentInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004a674c | v24@0:8@16
- (void)setCancelButtonBackgroundColor:(id)arg0;
// IMP 0x1004a67ac | v24@0:8@16
- (void)setCancelButtonTitleColor:(id)arg0;
// IMP 0x1004a6888 | v24@0:8@16
- (void)setCancelButtonSeparatorColor:(id)arg0;
// IMP 0x1004a68e0 | v24@0:8@16
- (void)setItemBackgroundColor:(id)arg0;
// IMP 0x1004a69dc | v24@0:8@16
- (void)setItemTitleColor:(id)arg0;
// IMP 0x1004a6aac | v24@0:8@16
- (void)setItemTitleFont:(id)arg0;
// IMP 0x1004a6bc8 | v24@0:8d16
- (void)setItemPaddingHorizontal:(double)arg0;
// IMP 0x1004a6bd8 | v24@0:8d16
- (void)setItemTitleMarginTop:(double)arg0;
// IMP 0x1004a6cac | v24@0:8d16
- (void)setItemMinimumMarginHorizontal:(double)arg0;
// IMP 0x1004a6cbc | v20@0:8B16
- (void)setAutomaticallyAdjustItemMargins:(BOOL)arg0;
// IMP 0x1004a6ccc | v24@0:8@16
- (void)setCancelButtonFont:(id)arg0;
// IMP 0x1004a6d4c | v24@0:8d16
- (void)setContentCornerRadius:(double)arg0;
// IMP 0x1004a6d5c | v24@0:8d16
- (void)setCancelButtonMarginTop:(double)arg0;
// IMP 0x1004a6da8 | v20@0:8B16
- (void)setIsExtendBottomLayout:(BOOL)arg0;
// IMP 0x1004a6e20 | v16@0:8
- (void)setViewNeedsLayoutIfLoaded;
// IMP 0x1004a6e9c | v16@0:8
- (void)updateExtendLayerAppearance;
// IMP 0x1004a6f04 | v16@0:8
- (void)updateCornerRadius;
// IMP 0x1004a7120 | {CGSize=dd}48@0:8@16d24{CGSize=dd}32
- (struct CGSize)preferredContentSizeInModalPresentationViewController:(id)arg0 keyboardHeight:(double)arg1 limitSize:(struct CGSize)arg2;
// IMP 0x1004a74f0 | v24@0:8@16
- (void)willHideModalPresentationViewController:(id)arg0;
// IMP 0x1004a758c | v24@0:8@16
- (void)didHideModalPresentationViewController:(id)arg0;
// IMP 0x1004a7634 | v16@0:8
- (void)hideModalPresentationComponent;
// IMP 0x1004a7638 | @16@0:8
- (id)contentBackgroundColor;
// IMP 0x1004a7648 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentEdgeMargins;
// IMP 0x1004a7660 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentEdgeMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004a7678 | d16@0:8
- (double)contentMaximumWidth;
// IMP 0x1004a7688 | v24@0:8d16
- (void)setContentMaximumWidth:(double)arg0;
// IMP 0x1004a7698 | d16@0:8
- (double)contentCornerRadius;
// IMP 0x1004a76a8 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentPaddings;
// IMP 0x1004a76c0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentPaddings:(struct UIEdgeInsets)arg0;
// IMP 0x1004a76d8 | @16@0:8
- (id)scrollViewSeparatorColor;
// IMP 0x1004a76e8 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)scrollViewContentInsets;
// IMP 0x1004a7700 | @16@0:8
- (id)itemBackgroundColor;
// IMP 0x1004a7710 | @16@0:8
- (id)itemTitleColor;
// IMP 0x1004a7720 | @16@0:8
- (id)itemTitleFont;
// IMP 0x1004a7730 | d16@0:8
- (double)itemPaddingHorizontal;
// IMP 0x1004a7740 | d16@0:8
- (double)itemTitleMarginTop;
// IMP 0x1004a7750 | d16@0:8
- (double)itemMinimumMarginHorizontal;
// IMP 0x1004a7760 | B16@0:8
- (BOOL)automaticallyAdjustItemMargins;
// IMP 0x1004a7770 | @16@0:8
- (id)cancelButtonBackgroundColor;
// IMP 0x1004a7780 | @16@0:8
- (id)cancelButtonTitleColor;
// IMP 0x1004a7790 | @16@0:8
- (id)cancelButtonSeparatorColor;
// IMP 0x1004a77a0 | @16@0:8
- (id)cancelButtonFont;
// IMP 0x1004a77b0 | d16@0:8
- (double)cancelButtonHeight;
// IMP 0x1004a77c0 | v24@0:8d16
- (void)setCancelButtonHeight:(double)arg0;
// IMP 0x1004a77d0 | d16@0:8
- (double)cancelButtonMarginTop;
// IMP 0x1004a77e0 | @16@0:8
- (id)delegate;
// IMP 0x1004a7800 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1004a7814 | B16@0:8
- (BOOL)isExtendBottomLayout;
// IMP 0x1004a7824 | B16@0:8
- (BOOL)isShowing;
// IMP 0x1004a7834 | v20@0:8B16
- (void)setShowing:(BOOL)arg0;
// IMP 0x1004a7844 | B16@0:8
- (BOOL)isAnimating;
// IMP 0x1004a7854 | v20@0:8B16
- (void)setAnimating:(BOOL)arg0;
// IMP 0x1004a7864 | @16@0:8
- (id)mutableScrollViews;
// IMP 0x1004a7874 | v24@0:8@16
- (void)setMutableScrollViews:(id)arg0;
// IMP 0x1004a7888 | @16@0:8
- (id)mutableItems;
// IMP 0x1004a7898 | v24@0:8@16
- (void)setMutableItems:(id)arg0;
// IMP 0x1004a78ac | @16@0:8
- (id)extendLayer;
// IMP 0x1004a78bc | v24@0:8@16
- (void)setExtendLayer:(id)arg0;
// IMP 0x1004a78d0 | B16@0:8
- (BOOL)hideByCancel;
// IMP 0x1004a78e0 | v20@0:8B16
- (void)setHideByCancel:(BOOL)arg0;
// IMP 0x1004a78f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004a3778 | @16@0:8
+ (id)appearance;
// IMP 0x1004a3788 | v16@0:8
+ (void)initialize;
// IMP 0x1004a37fc | v16@0:8
+ (void)initAppearance;
@end
