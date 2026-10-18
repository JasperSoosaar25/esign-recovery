// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89fd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePreviewView : UIView
// ivar _isChangingCollectionViewBounds encoding=B offset=8
// ivar _currentImageIndex encoding=Q offset=16
// ivar _delegate encoding=@"<QMUIImagePreviewViewDelegate>" offset=24
// ivar _collectionView encoding=@"UICollectionView" offset=32
// ivar _collectionViewLayout encoding=@"QMUICollectionViewPagingLayout" offset=40
// ivar _loadingColor encoding=@"UIColor" offset=48
// ivar _previousIndexWhenScrolling encoding=d offset=56
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property isChangingCollectionViewBounds attributes=TB,N,V_isChangingCollectionViewBounds
// property previousIndexWhenScrolling attributes=Td,N,V_previousIndexWhenScrolling
// property delegate attributes=T@"<QMUIImagePreviewViewDelegate>",W,N,V_delegate
// property collectionView attributes=T@"UICollectionView",R,N,V_collectionView
// property collectionViewLayout attributes=T@"QMUICollectionViewPagingLayout",R,N,V_collectionViewLayout
// property currentImageIndex attributes=TQ,N,V_currentImageIndex
// property loadingColor attributes=T@"UIColor",&,N,V_loadingColor
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100490d50 | q24@0:8@16
- (long long)indexForZoomImageView:(id)arg0;
// IMP 0x100490f74 | @24@0:8Q16
- (id)zoomImageViewAtIndex:(unsigned long long)arg0;
// IMP 0x100491010 | v16@0:8
- (void)checkIfDelegateMissing;
// IMP 0x100491014 | v40@0:8@16{CGPoint=dd}24
- (void)singleTouchInZoomingImageView:(id)arg0 location:(struct CGPoint)arg1;
// IMP 0x1004910bc | v40@0:8@16{CGPoint=dd}24
- (void)doubleTouchInZoomingImageView:(id)arg0 location:(struct CGPoint)arg1;
// IMP 0x100491164 | v24@0:8@16
- (void)longPressInZoomingImageView:(id)arg0;
// IMP 0x1004911f4 | v24@0:8@16
- (void)didTouchICloudRetryButtonInZoomImageView:(id)arg0;
// IMP 0x100491284 | v28@0:8@16B24
- (void)zoomImageView:(id)arg0 didHideVideoToolbar:(BOOL)arg1;
// IMP 0x100491324 | B24@0:8@16
- (BOOL)enabledZoomViewInZoomImageView:(id)arg0;
// IMP 0x10048fb50 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10048fbd0 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10048fc28 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)didInitializedWithFrame:(struct CGRect)arg0;
// IMP 0x10048ffec | v16@0:8
- (void)layoutSubviews;
// IMP 0x10049016c | v24@0:8Q16
- (void)setCurrentImageIndex:(unsigned long long)arg0;
// IMP 0x100490174 | v28@0:8Q16B24
- (void)setCurrentImageIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
// IMP 0x1004903fc | v24@0:8@16
- (void)setLoadingColor:(id)arg0;
// IMP 0x1004904dc | q32@0:8@16q24
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
// IMP 0x100490560 | @32@0:8@16@24
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
// IMP 0x1004907f8 | v40@0:8@16@24@32
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
// IMP 0x10049082c | v40@0:8@16@24@32
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
// IMP 0x100490860 | {CGSize=dd}40@0:8@16@24@32
- (struct CGSize)collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
// IMP 0x100490880 | v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg0;
// IMP 0x10049094c | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x100490c38 | Q16@0:8
- (unsigned long long)currentImageIndex;
// IMP 0x100490c48 | @16@0:8
- (id)delegate;
// IMP 0x100490c68 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100490c7c | @16@0:8
- (id)collectionView;
// IMP 0x100490c8c | @16@0:8
- (id)collectionViewLayout;
// IMP 0x100490c9c | @16@0:8
- (id)loadingColor;
// IMP 0x100490cac | B16@0:8
- (BOOL)isChangingCollectionViewBounds;
// IMP 0x100490cbc | v20@0:8B16
- (void)setIsChangingCollectionViewBounds:(BOOL)arg0;
// IMP 0x100490ccc | d16@0:8
- (double)previousIndexWhenScrolling;
// IMP 0x100490cdc | v24@0:8d16
- (void)setPreviousIndexWhenScrolling:(double)arg0;
// IMP 0x100490cec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
