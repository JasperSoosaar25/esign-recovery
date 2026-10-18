// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89bf8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePickerViewController : QMUICommonViewController
// ivar _allowsMultipleSelection encoding=B offset=16
// ivar _shouldShowDefaultLoadingView encoding=B offset=17
// ivar _isImagesAssetLoaded encoding=B offset=18
// ivar _hasScrollToInitialPosition encoding=B offset=19
// ivar _canScrollToInitialPosition encoding=B offset=20
// ivar _collectionViewLayout encoding=@"UICollectionViewFlowLayout" offset=24
// ivar _collectionView encoding=@"UICollectionView" offset=32
// ivar _operationToolBarView encoding=@"UIView" offset=40
// ivar _sendButton encoding=@"QMUIButton" offset=48
// ivar _previewButton encoding=@"QMUIButton" offset=56
// ivar _imageCountLabel encoding=@"UILabel" offset=64
// ivar _imagePickerViewControllerDelegate encoding=@"<QMUIImagePickerViewControllerDelegate>" offset=72
// ivar _minimumImageWidth encoding=d offset=80
// ivar _imagesAssetArray encoding=@"NSMutableArray" offset=88
// ivar _assetsGroup encoding=@"QMUIAssetsGroup" offset=96
// ivar _selectedImageAssetArray encoding=@"NSMutableArray" offset=104
// ivar _maximumSelectImageCount encoding=Q offset=112
// ivar _minimumSelectImageCount encoding=Q offset=120
// ivar _alertTitleWhenExceedMaxSelectImageCount encoding=@"NSString" offset=128
// ivar _alertButtonTitleWhenExceedMaxSelectImageCount encoding=@"NSString" offset=136
// ivar _imagePickerPreviewViewController encoding=@"QMUIImagePickerPreviewViewController" offset=144
// property imagePickerPreviewViewController attributes=T@"QMUIImagePickerPreviewViewController",&,N,V_imagePickerPreviewViewController
// property isImagesAssetLoaded attributes=TB,N,V_isImagesAssetLoaded
// property hasScrollToInitialPosition attributes=TB,N,V_hasScrollToInitialPosition
// property canScrollToInitialPosition attributes=TB,N,V_canScrollToInitialPosition
// property imagePickerViewControllerDelegate attributes=T@"<QMUIImagePickerViewControllerDelegate>",W,N,V_imagePickerViewControllerDelegate
// property minimumImageWidth attributes=Td,N,V_minimumImageWidth
// property collectionViewLayout attributes=T@"UICollectionViewFlowLayout",R,N,V_collectionViewLayout
// property collectionView attributes=T@"UICollectionView",R,N,V_collectionView
// property operationToolBarView attributes=T@"UIView",R,N,V_operationToolBarView
// property previewButton attributes=T@"QMUIButton",R,N,V_previewButton
// property sendButton attributes=T@"QMUIButton",R,N,V_sendButton
// property imageCountLabel attributes=T@"UILabel",R,N,V_imageCountLabel
// property imagesAssetArray attributes=T@"NSMutableArray",R,N,V_imagesAssetArray
// property assetsGroup attributes=T@"QMUIAssetsGroup",R,N,V_assetsGroup
// property selectedImageAssetArray attributes=T@"NSMutableArray",R,N,V_selectedImageAssetArray
// property allowsMultipleSelection attributes=TB,N,V_allowsMultipleSelection
// property maximumSelectImageCount attributes=TQ,N,V_maximumSelectImageCount
// property minimumSelectImageCount attributes=TQ,N,V_minimumSelectImageCount
// property alertTitleWhenExceedMaxSelectImageCount attributes=T@"NSString",C,N,V_alertTitleWhenExceedMaxSelectImageCount
// property alertButtonTitleWhenExceedMaxSelectImageCount attributes=T@"NSString",C,N,V_alertButtonTitleWhenExceedMaxSelectImageCount
// property shouldShowDefaultLoadingView attributes=TB,N,V_shouldShowDefaultLoadingView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10048c3d4 | v16@0:8
- (void)didInitialize;
// IMP 0x10048c454 | v16@0:8
- (void)dealloc;
// IMP 0x10048c4b4 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10048c60c | v16@0:8
- (void)setupNavigationItems;
// IMP 0x10048c6a4 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x10048c878 | v16@0:8
- (void)showEmptyView;
// IMP 0x10048c918 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10048d160 | v24@0:8@16
- (void)refreshWithAssetsGroup:(id)arg0;
// IMP 0x10048d638 | v16@0:8
- (void)initPreviewViewControllerIfNeeded;
// IMP 0x10048d724 | {CGSize=dd}16@0:8
- (struct CGSize)referenceImageSize;
// IMP 0x10048d8a0 | v24@0:8d16
- (void)setMinimumImageWidth:(double)arg0;
// IMP 0x10048d900 | v16@0:8
- (void)scrollToInitialPositionIfNeeded;
// IMP 0x10048d9ec | v20@0:8B16
- (void)willPopInNavigationControllerWithAnimated:(BOOL)arg0;
// IMP 0x10048d9f4 | @16@0:8
- (id)collectionViewLayout;
// IMP 0x10048da90 | @16@0:8
- (id)collectionView;
// IMP 0x10048dc74 | @16@0:8
- (id)operationToolBarView;
// IMP 0x10048ddc0 | @16@0:8
- (id)sendButton;
// IMP 0x10048df80 | @16@0:8
- (id)previewButton;
// IMP 0x10048e140 | @16@0:8
- (id)imageCountLabel;
// IMP 0x10048e2e8 | v20@0:8B16
- (void)setAllowsMultipleSelection:(BOOL)arg0;
// IMP 0x10048e384 | q24@0:8@16
- (long long)numberOfSectionsInCollectionView:(id)arg0;
// IMP 0x10048e38c | q32@0:8@16q24
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
// IMP 0x10048e3c8 | {CGSize=dd}40@0:8@16@24@32
- (struct CGSize)collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
// IMP 0x10048e3cc | @32@0:8@16@24
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
// IMP 0x10048e538 | v32@0:8@16@24
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
// IMP 0x10048e7b4 | v24@0:8@16
- (void)handleSendButtonClick:(id)arg0;
// IMP 0x10048e898 | v24@0:8@16
- (void)handlePreviewButtonClick:(id)arg0;
// IMP 0x10048e988 | v24@0:8@16
- (void)handleCancelPickerImage:(id)arg0;
// IMP 0x10048ea90 | v24@0:8@16
- (void)handleCheckBoxButtonClick:(id)arg0;
// IMP 0x10048ef30 | v16@0:8
- (void)updateImageCountAndCheckLimited;
// IMP 0x10048f110 | v24@0:8@16
- (void)requestImageWithIndexPath:(id)arg0;
// IMP 0x10048f690 | @16@0:8
- (id)imagePickerViewControllerDelegate;
// IMP 0x10048f6b0 | v24@0:8@16
- (void)setImagePickerViewControllerDelegate:(id)arg0;
// IMP 0x10048f6c4 | d16@0:8
- (double)minimumImageWidth;
// IMP 0x10048f6d4 | @16@0:8
- (id)imagesAssetArray;
// IMP 0x10048f6e4 | @16@0:8
- (id)assetsGroup;
// IMP 0x10048f6f4 | @16@0:8
- (id)selectedImageAssetArray;
// IMP 0x10048f704 | B16@0:8
- (BOOL)allowsMultipleSelection;
// IMP 0x10048f714 | Q16@0:8
- (unsigned long long)maximumSelectImageCount;
// IMP 0x10048f724 | v24@0:8Q16
- (void)setMaximumSelectImageCount:(unsigned long long)arg0;
// IMP 0x10048f734 | Q16@0:8
- (unsigned long long)minimumSelectImageCount;
// IMP 0x10048f744 | v24@0:8Q16
- (void)setMinimumSelectImageCount:(unsigned long long)arg0;
// IMP 0x10048f754 | @16@0:8
- (id)alertTitleWhenExceedMaxSelectImageCount;
// IMP 0x10048f764 | v24@0:8@16
- (void)setAlertTitleWhenExceedMaxSelectImageCount:(id)arg0;
// IMP 0x10048f770 | @16@0:8
- (id)alertButtonTitleWhenExceedMaxSelectImageCount;
// IMP 0x10048f780 | v24@0:8@16
- (void)setAlertButtonTitleWhenExceedMaxSelectImageCount:(id)arg0;
// IMP 0x10048f78c | B16@0:8
- (BOOL)shouldShowDefaultLoadingView;
// IMP 0x10048f79c | v20@0:8B16
- (void)setShouldShowDefaultLoadingView:(BOOL)arg0;
// IMP 0x10048f7ac | @16@0:8
- (id)imagePickerPreviewViewController;
// IMP 0x10048f7bc | v24@0:8@16
- (void)setImagePickerPreviewViewController:(id)arg0;
// IMP 0x10048f7d0 | B16@0:8
- (BOOL)isImagesAssetLoaded;
// IMP 0x10048f7e0 | v20@0:8B16
- (void)setIsImagesAssetLoaded:(BOOL)arg0;
// IMP 0x10048f7f0 | B16@0:8
- (BOOL)hasScrollToInitialPosition;
// IMP 0x10048f800 | v20@0:8B16
- (void)setHasScrollToInitialPosition:(BOOL)arg0;
// IMP 0x10048f810 | B16@0:8
- (BOOL)canScrollToInitialPosition;
// IMP 0x10048f820 | v20@0:8B16
- (void)setCanScrollToInitialPosition:(BOOL)arg0;
// IMP 0x10048f830 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10048c310 | @16@0:8
+ (id)appearance;
// IMP 0x10048c320 | v16@0:8
+ (void)initialize;
// IMP 0x10048c394 | v16@0:8
+ (void)initAppearance;
@end
