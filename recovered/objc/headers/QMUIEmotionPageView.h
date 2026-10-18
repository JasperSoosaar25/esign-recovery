// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88f30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmotionPageView : UICollectionViewCell
// ivar _debug encoding=B offset=8
// ivar _needsLayoutEmotions encoding=B offset=9
// ivar _delegate encoding=@"QMUIEmotionView<QMUIEmotionPageViewDelegate>" offset=16
// ivar _emotionSelectedBackgroundView encoding=@"UIView" offset=24
// ivar _deleteButton encoding=@"QMUIButton" offset=32
// ivar _deleteButtonSnapView encoding=@"UIView" offset=40
// ivar _emotionLayers encoding=@"NSMutableArray" offset=48
// ivar _emotions encoding=@"NSArray" offset=56
// ivar _emotionHittingRects encoding=@"NSMutableArray" offset=64
// ivar _tapGestureRecognizer encoding=@"UITapGestureRecognizer" offset=72
// ivar _numberOfRows encoding=q offset=80
// ivar _minimumEmotionHorizontalSpacing encoding=d offset=88
// ivar _deleteButtonOffset encoding={CGPoint="x"d"y"d} offset=96
// ivar _emotionSize encoding={CGSize="width"d"height"d} offset=112
// ivar _padding encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=128
// ivar _emotionSelectedBackgroundExtension encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=160
// ivar _previousLayoutFrame encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=192
// property delegate attributes=T@"QMUIEmotionView<QMUIEmotionPageViewDelegate>",W,N,V_delegate
// property emotionSelectedBackgroundView attributes=T@"UIView",&,N,V_emotionSelectedBackgroundView
// property deleteButton attributes=T@"QMUIButton",W,N,V_deleteButton
// property deleteButtonSnapView attributes=T@"UIView",&,N,V_deleteButtonSnapView
// property deleteButtonOffset attributes=T{CGPoint=dd},N,V_deleteButtonOffset
// property emotionLayers attributes=T@"NSMutableArray",&,N,V_emotionLayers
// property emotions attributes=T@"NSArray",C,N,V_emotions
// property emotionHittingRects attributes=T@"NSMutableArray",&,N,V_emotionHittingRects
// property tapGestureRecognizer attributes=T@"UITapGestureRecognizer",&,N,V_tapGestureRecognizer
// property padding attributes=T{UIEdgeInsets=dddd},N,V_padding
// property numberOfRows attributes=Tq,N,V_numberOfRows
// property emotionSize attributes=T{CGSize=dd},N,V_emotionSize
// property emotionSelectedBackgroundExtension attributes=T{UIEdgeInsets=dddd},N,V_emotionSelectedBackgroundExtension
// property minimumEmotionHorizontalSpacing attributes=Td,N,V_minimumEmotionHorizontalSpacing
// property debug attributes=TB,N,V_debug
// property needsLayoutEmotions attributes=TB,R,N,V_needsLayoutEmotions
// property previousLayoutFrame attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_previousLayoutFrame
// IMP 0x10047977c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004799e0 | {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
- (struct CGRect)frameForDeleteButton:(id)arg0;
// IMP 0x100479ba4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x100479d90 | v24@0:8@16
- (void)willRemoveSubview:(id)arg0;
// IMP 0x100479e64 | v16@0:8
- (void)setNeedsLayoutEmotions;
// IMP 0x100479e78 | v24@0:8@16
- (void)setEmotions:(id)arg0;
// IMP 0x100479ee8 | v16@0:8
- (void)layoutEmotionsIfNeeded;
// IMP 0x10047a4d8 | v24@0:8@16
- (void)handleTapGestureRecognizer:(id)arg0;
// IMP 0x10047a928 | {CGSize=dd}40@0:8{CGSize=dd}16d32
- (struct CGSize)verticalSizeThatFits:(struct CGSize)arg0 emotionVerticalSpacing:(double)arg1;
// IMP 0x10047a9f4 | v24@0:8@16
- (void)updateDeleteButton:(id)arg0;
// IMP 0x10047aa90 | v32@0:8{CGPoint=dd}16
- (void)setDeleteButtonOffset:(struct CGPoint)arg0;
// IMP 0x10047aaa4 | @16@0:8
- (id)delegate;
// IMP 0x10047aac4 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10047aad8 | @16@0:8
- (id)emotionSelectedBackgroundView;
// IMP 0x10047aae8 | v24@0:8@16
- (void)setEmotionSelectedBackgroundView:(id)arg0;
// IMP 0x10047aafc | @16@0:8
- (id)deleteButton;
// IMP 0x10047ab1c | v24@0:8@16
- (void)setDeleteButton:(id)arg0;
// IMP 0x10047ab30 | @16@0:8
- (id)deleteButtonSnapView;
// IMP 0x10047ab40 | v24@0:8@16
- (void)setDeleteButtonSnapView:(id)arg0;
// IMP 0x10047ab54 | {CGPoint=dd}16@0:8
- (struct CGPoint)deleteButtonOffset;
// IMP 0x10047ab68 | @16@0:8
- (id)emotionLayers;
// IMP 0x10047ab78 | v24@0:8@16
- (void)setEmotionLayers:(id)arg0;
// IMP 0x10047ab8c | @16@0:8
- (id)emotions;
// IMP 0x10047ab9c | @16@0:8
- (id)emotionHittingRects;
// IMP 0x10047abac | v24@0:8@16
- (void)setEmotionHittingRects:(id)arg0;
// IMP 0x10047abc0 | @16@0:8
- (id)tapGestureRecognizer;
// IMP 0x10047abd0 | v24@0:8@16
- (void)setTapGestureRecognizer:(id)arg0;
// IMP 0x10047abe4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)padding;
// IMP 0x10047abfc | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPadding:(struct UIEdgeInsets)arg0;
// IMP 0x10047ac14 | q16@0:8
- (long long)numberOfRows;
// IMP 0x10047ac24 | v24@0:8q16
- (void)setNumberOfRows:(long long)arg0;
// IMP 0x10047ac34 | {CGSize=dd}16@0:8
- (struct CGSize)emotionSize;
// IMP 0x10047ac48 | v32@0:8{CGSize=dd}16
- (void)setEmotionSize:(struct CGSize)arg0;
// IMP 0x10047ac5c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)emotionSelectedBackgroundExtension;
// IMP 0x10047ac74 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setEmotionSelectedBackgroundExtension:(struct UIEdgeInsets)arg0;
// IMP 0x10047ac8c | d16@0:8
- (double)minimumEmotionHorizontalSpacing;
// IMP 0x10047ac9c | v24@0:8d16
- (void)setMinimumEmotionHorizontalSpacing:(double)arg0;
// IMP 0x10047acac | B16@0:8
- (BOOL)debug;
// IMP 0x10047acbc | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x10047accc | B16@0:8
- (BOOL)needsLayoutEmotions;
// IMP 0x10047acdc | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)previousLayoutFrame;
// IMP 0x10047acf4 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setPreviousLayoutFrame:(struct CGRect)arg0;
// IMP 0x10047ad0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
