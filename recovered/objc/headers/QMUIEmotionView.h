// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88fd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmotionView : UIView
// ivar _verticalAlignment encoding=B offset=8
// ivar _debug encoding=B offset=9
// ivar _emotions encoding=@"NSArray" offset=16
// ivar _didSelectEmotionBlock encoding=@? offset=24
// ivar _didSelectDeleteButtonBlock encoding=@? offset=32
// ivar _collectionView encoding=@"UICollectionView" offset=40
// ivar _emotionVerticalSpacing encoding=d offset=48
// ivar _collectionViewLayout encoding=@"UICollectionViewFlowLayout" offset=56
// ivar _pageControl encoding=@"UIPageControl" offset=64
// ivar _sendButton encoding=@"QMUIButton" offset=72
// ivar _deleteButton encoding=@"QMUIButton" offset=80
// ivar _numberOfRowsPerPage encoding=q offset=88
// ivar _minimumEmotionHorizontalSpacing encoding=d offset=96
// ivar _deleteButtonImage encoding=@"UIImage" offset=104
// ivar _deleteButtonBackgroundColor encoding=@"UIColor" offset=112
// ivar _deleteButtonCornerRadius encoding=d offset=120
// ivar _sendButtonTitleAttributes encoding=@"NSDictionary" offset=128
// ivar _sendButtonBackgroundColor encoding=@"UIColor" offset=136
// ivar _sendButtonCornerRadius encoding=d offset=144
// ivar _pageControlMarginBottom encoding=d offset=152
// ivar _verticalScrollView encoding=@"QMUIEmotionVerticalScrollView" offset=160
// ivar _pagedEmotions encoding=@"NSMutableArray" offset=168
// ivar _emotionSize encoding={CGSize="width"d"height"d} offset=176
// ivar _deleteButtonOffset encoding={CGPoint="x"d"y"d} offset=192
// ivar _paddingInPage encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=208
// ivar _emotionSelectedBackgroundExtension encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=240
// ivar _sendButtonMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=272
// property verticalScrollView attributes=T@"QMUIEmotionVerticalScrollView",R,N,V_verticalScrollView
// property pagedEmotions attributes=T@"NSMutableArray",&,N,V_pagedEmotions
// property debug attributes=TB,N,V_debug
// property emotions attributes=T@"NSArray",C,N,V_emotions
// property didSelectEmotionBlock attributes=T@?,C,N,V_didSelectEmotionBlock
// property didSelectDeleteButtonBlock attributes=T@?,C,N,V_didSelectDeleteButtonBlock
// property collectionView attributes=T@"UICollectionView",R,N,V_collectionView
// property scrollView attributes=T@"UIScrollView",R,N
// property verticalAlignment attributes=TB,N,V_verticalAlignment
// property emotionVerticalSpacing attributes=Td,N,V_emotionVerticalSpacing
// property collectionViewLayout attributes=T@"UICollectionViewFlowLayout",R,N,V_collectionViewLayout
// property pageControl attributes=T@"UIPageControl",R,N,V_pageControl
// property sendButton attributes=T@"QMUIButton",R,N,V_sendButton
// property deleteButton attributes=T@"QMUIButton",R,N,V_deleteButton
// property paddingInPage attributes=T{UIEdgeInsets=dddd},N,V_paddingInPage
// property numberOfRowsPerPage attributes=Tq,N,V_numberOfRowsPerPage
// property emotionSize attributes=T{CGSize=dd},N,V_emotionSize
// property emotionSelectedBackgroundExtension attributes=T{UIEdgeInsets=dddd},N,V_emotionSelectedBackgroundExtension
// property minimumEmotionHorizontalSpacing attributes=Td,N,V_minimumEmotionHorizontalSpacing
// property deleteButtonImage attributes=T@"UIImage",&,N,V_deleteButtonImage
// property deleteButtonBackgroundColor attributes=T@"UIColor",&,N,V_deleteButtonBackgroundColor
// property deleteButtonOffset attributes=T{CGPoint=dd},N,V_deleteButtonOffset
// property deleteButtonCornerRadius attributes=Td,N,V_deleteButtonCornerRadius
// property sendButtonTitleAttributes attributes=T@"NSDictionary",&,N,V_sendButtonTitleAttributes
// property sendButtonBackgroundColor attributes=T@"UIColor",&,N,V_sendButtonBackgroundColor
// property sendButtonCornerRadius attributes=Td,N,V_sendButtonCornerRadius
// property sendButtonMargins attributes=T{UIEdgeInsets=dddd},N,V_sendButtonMargins
// property pageControlMarginBottom attributes=Td,N,V_pageControlMarginBottom
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10047b634 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10047b6b4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10047b714 | v20@0:8B16
- (void)setVerticalAlignment:(BOOL)arg0;
// IMP 0x10047b810 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)didInitializedWithFrame:(struct CGRect)arg0;
// IMP 0x10047bef0 | v24@0:8@16
- (void)setEmotions:(id)arg0;
// IMP 0x10047bf40 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10047c6c4 | v16@0:8
- (void)pageEmotions;
// IMP 0x10047c9dc | v24@0:8@16
- (void)handlePageControlEvent:(id)arg0;
// IMP 0x10047ca78 | v16@0:8
- (void)adjustEmotionsAlpha;
// IMP 0x10047ccc4 | v24@0:8@16
- (void)setSendButtonTitleAttributes:(id)arg0;
// IMP 0x10047cda8 | v24@0:8@16
- (void)setSendButtonBackgroundColor:(id)arg0;
// IMP 0x10047ce20 | v24@0:8d16
- (void)setSendButtonCornerRadius:(double)arg0;
// IMP 0x10047ce84 | v24@0:8@16
- (void)setDeleteButtonBackgroundColor:(id)arg0;
// IMP 0x10047ceec | v24@0:8@16
- (void)setDeleteButtonImage:(id)arg0;
// IMP 0x10047cf60 | v24@0:8d16
- (void)setDeleteButtonCornerRadius:(double)arg0;
// IMP 0x10047cfc4 | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x10047d108 | q32@0:8@16q24
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
// IMP 0x10047d144 | @32@0:8@16@24
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
// IMP 0x10047d2b0 | v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg0;
// IMP 0x10047d350 | v40@0:8@16@24q32
- (void)emotionPageView:(id)arg0 didSelectEmotion:(id)arg1 atIndex:(long long)arg2;
// IMP 0x10047d3f4 | v24@0:8@16
- (void)emotionPageViewDidLayoutEmotions:(id)arg0;
// IMP 0x10047d428 | @16@0:8
- (id)scrollView;
// IMP 0x10047d42c | @16@0:8
- (id)emotions;
// IMP 0x10047d43c | @?16@0:8
- (id /* block */)didSelectEmotionBlock;
// IMP 0x10047d44c | v24@0:8@?16
- (void)setDidSelectEmotionBlock:(id /* block */)arg0;
// IMP 0x10047d458 | @?16@0:8
- (id /* block */)didSelectDeleteButtonBlock;
// IMP 0x10047d468 | v24@0:8@?16
- (void)setDidSelectDeleteButtonBlock:(id /* block */)arg0;
// IMP 0x10047d474 | @16@0:8
- (id)collectionView;
// IMP 0x10047d484 | B16@0:8
- (BOOL)verticalAlignment;
// IMP 0x10047d494 | d16@0:8
- (double)emotionVerticalSpacing;
// IMP 0x10047d4a4 | v24@0:8d16
- (void)setEmotionVerticalSpacing:(double)arg0;
// IMP 0x10047d4b4 | @16@0:8
- (id)collectionViewLayout;
// IMP 0x10047d4c4 | @16@0:8
- (id)pageControl;
// IMP 0x10047d4d4 | @16@0:8
- (id)sendButton;
// IMP 0x10047d4e4 | @16@0:8
- (id)deleteButton;
// IMP 0x10047d4f4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)paddingInPage;
// IMP 0x10047d50c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPaddingInPage:(struct UIEdgeInsets)arg0;
// IMP 0x10047d524 | q16@0:8
- (long long)numberOfRowsPerPage;
// IMP 0x10047d534 | v24@0:8q16
- (void)setNumberOfRowsPerPage:(long long)arg0;
// IMP 0x10047d544 | {CGSize=dd}16@0:8
- (struct CGSize)emotionSize;
// IMP 0x10047d558 | v32@0:8{CGSize=dd}16
- (void)setEmotionSize:(struct CGSize)arg0;
// IMP 0x10047d56c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)emotionSelectedBackgroundExtension;
// IMP 0x10047d584 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setEmotionSelectedBackgroundExtension:(struct UIEdgeInsets)arg0;
// IMP 0x10047d59c | d16@0:8
- (double)minimumEmotionHorizontalSpacing;
// IMP 0x10047d5ac | v24@0:8d16
- (void)setMinimumEmotionHorizontalSpacing:(double)arg0;
// IMP 0x10047d5bc | @16@0:8
- (id)deleteButtonImage;
// IMP 0x10047d5cc | @16@0:8
- (id)deleteButtonBackgroundColor;
// IMP 0x10047d5dc | {CGPoint=dd}16@0:8
- (struct CGPoint)deleteButtonOffset;
// IMP 0x10047d5f0 | v32@0:8{CGPoint=dd}16
- (void)setDeleteButtonOffset:(struct CGPoint)arg0;
// IMP 0x10047d604 | d16@0:8
- (double)deleteButtonCornerRadius;
// IMP 0x10047d614 | @16@0:8
- (id)sendButtonTitleAttributes;
// IMP 0x10047d624 | @16@0:8
- (id)sendButtonBackgroundColor;
// IMP 0x10047d634 | d16@0:8
- (double)sendButtonCornerRadius;
// IMP 0x10047d644 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)sendButtonMargins;
// IMP 0x10047d65c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setSendButtonMargins:(struct UIEdgeInsets)arg0;
// IMP 0x10047d674 | d16@0:8
- (double)pageControlMarginBottom;
// IMP 0x10047d684 | v24@0:8d16
- (void)setPageControlMarginBottom:(double)arg0;
// IMP 0x10047d694 | @16@0:8
- (id)verticalScrollView;
// IMP 0x10047d6a4 | @16@0:8
- (id)pagedEmotions;
// IMP 0x10047d6b4 | v24@0:8@16
- (void)setPagedEmotions:(id)arg0;
// IMP 0x10047d6c8 | B16@0:8
- (BOOL)debug;
// IMP 0x10047d6d8 | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x10047d6e8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10047d818 | v16@0:8
+ (void)initialize;
// IMP 0x10047d88c | v16@0:8
+ (void)setDefaultAppearance;
@end
