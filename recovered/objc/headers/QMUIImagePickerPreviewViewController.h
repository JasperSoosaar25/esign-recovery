// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89b58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePickerPreviewViewController : QMUIImagePreviewViewController
// ivar _singleCheckMode encoding=B offset=16
// ivar _delegate encoding=@"<QMUIImagePickerPreviewViewControllerDelegate>" offset=24
// ivar _toolBarBackgroundColor encoding=@"UIColor" offset=32
// ivar _toolBarTintColor encoding=@"UIColor" offset=40
// ivar _topToolBarView encoding=@"UIView" offset=48
// ivar _backButton encoding=@"QMUINavigationButton" offset=56
// ivar _checkboxButton encoding=@"QMUIButton" offset=64
// ivar _imagesAssetArray encoding=@"NSMutableArray" offset=72
// ivar _selectedImageAssetArray encoding=@"NSMutableArray" offset=80
// ivar _downloadStatus encoding=Q offset=88
// ivar _maximumSelectImageCount encoding=Q offset=96
// ivar _minimumSelectImageCount encoding=Q offset=104
// ivar _alertTitleWhenExceedMaxSelectImageCount encoding=@"NSString" offset=112
// ivar _alertButtonTitleWhenExceedMaxSelectImageCount encoding=@"NSString" offset=120
// property delegate attributes=T@"<QMUIImagePickerPreviewViewControllerDelegate>",W,N,V_delegate
// property toolBarBackgroundColor attributes=T@"UIColor",&,N,V_toolBarBackgroundColor
// property toolBarTintColor attributes=T@"UIColor",&,N,V_toolBarTintColor
// property topToolBarView attributes=T@"UIView",R,N,V_topToolBarView
// property backButton attributes=T@"QMUINavigationButton",R,N,V_backButton
// property checkboxButton attributes=T@"QMUIButton",R,N,V_checkboxButton
// property imagesAssetArray attributes=T@"NSMutableArray",&,N,V_imagesAssetArray
// property selectedImageAssetArray attributes=T@"NSMutableArray",&,N,V_selectedImageAssetArray
// property downloadStatus attributes=TQ,N,V_downloadStatus
// property maximumSelectImageCount attributes=TQ,N,V_maximumSelectImageCount
// property minimumSelectImageCount attributes=TQ,N,V_minimumSelectImageCount
// property alertTitleWhenExceedMaxSelectImageCount attributes=T@"NSString",C,N,V_alertTitleWhenExceedMaxSelectImageCount
// property alertButtonTitleWhenExceedMaxSelectImageCount attributes=T@"NSString",C,N,V_alertButtonTitleWhenExceedMaxSelectImageCount
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100489908 | @32@0:8@16@24
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
// IMP 0x100489970 | v16@0:8
- (void)initSubviews;
// IMP 0x100489ddc | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x100489f50 | v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg0;
// IMP 0x100489ffc | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10048a538 | B16@0:8
- (BOOL)preferredNavigationBarHidden;
// IMP 0x10048a540 | B16@0:8
- (BOOL)prefersStatusBarHidden;
// IMP 0x10048a548 | v24@0:8@16
- (void)setToolBarBackgroundColor:(id)arg0;
// IMP 0x10048a5b4 | v24@0:8@16
- (void)setToolBarTintColor:(id)arg0;
// IMP 0x10048a61c | v24@0:8Q16
- (void)setDownloadStatus:(unsigned long long)arg0;
// IMP 0x10048a678 | v44@0:8@16@24q32B40
- (void)updateImagePickerPreviewViewWithImagesAssetArray:(id)arg0 selectedImageAssetArray:(id)arg1 currentImageIndex:(long long)arg2 singleCheckMode:(BOOL)arg3;
// IMP 0x10048a744 | Q24@0:8@16
- (unsigned long long)numberOfImagesInImagePreviewView:(id)arg0;
// IMP 0x10048a780 | Q32@0:8@16Q24
- (unsigned long long)imagePreviewView:(id)arg0 assetTypeAtIndex:(unsigned long long)arg1;
// IMP 0x10048a80c | v40@0:8@16@24Q32
- (void)imagePreviewView:(id)arg0 renderZoomImageView:(id)arg1 atIndex:(unsigned long long)arg2;
// IMP 0x10048a818 | v32@0:8@16Q24
- (void)imagePreviewView:(id)arg0 willScrollHalfToIndex:(unsigned long long)arg1;
// IMP 0x10048a8dc | v40@0:8@16{CGPoint=dd}24
- (void)singleTouchInZoomingImageView:(id)arg0 location:(struct CGPoint)arg1;
// IMP 0x10048a940 | v24@0:8@16
- (void)didTouchICloudRetryButtonInZoomImageView:(id)arg0;
// IMP 0x10048aa68 | v28@0:8@16B24
- (void)zoomImageView:(id)arg0 didHideVideoToolbar:(BOOL)arg1;
// IMP 0x10048aaa0 | v24@0:8@16
- (void)handleCancelPreviewImage:(id)arg0;
// IMP 0x10048ab88 | v24@0:8@16
- (void)handleCheckButtonClick:(id)arg0;
// IMP 0x10048b0e0 | v32@0:8@16q24
- (void)requestImageForZoomImageView:(id)arg0 withIndex:(long long)arg1;
// IMP 0x10048c0e0 | @16@0:8
- (id)delegate;
// IMP 0x10048c100 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10048c114 | @16@0:8
- (id)toolBarBackgroundColor;
// IMP 0x10048c124 | @16@0:8
- (id)toolBarTintColor;
// IMP 0x10048c134 | @16@0:8
- (id)topToolBarView;
// IMP 0x10048c144 | @16@0:8
- (id)backButton;
// IMP 0x10048c154 | @16@0:8
- (id)checkboxButton;
// IMP 0x10048c164 | @16@0:8
- (id)imagesAssetArray;
// IMP 0x10048c174 | v24@0:8@16
- (void)setImagesAssetArray:(id)arg0;
// IMP 0x10048c188 | @16@0:8
- (id)selectedImageAssetArray;
// IMP 0x10048c198 | v24@0:8@16
- (void)setSelectedImageAssetArray:(id)arg0;
// IMP 0x10048c1ac | Q16@0:8
- (unsigned long long)downloadStatus;
// IMP 0x10048c1bc | Q16@0:8
- (unsigned long long)maximumSelectImageCount;
// IMP 0x10048c1cc | v24@0:8Q16
- (void)setMaximumSelectImageCount:(unsigned long long)arg0;
// IMP 0x10048c1dc | Q16@0:8
- (unsigned long long)minimumSelectImageCount;
// IMP 0x10048c1ec | v24@0:8Q16
- (void)setMinimumSelectImageCount:(unsigned long long)arg0;
// IMP 0x10048c1fc | @16@0:8
- (id)alertTitleWhenExceedMaxSelectImageCount;
// IMP 0x10048c20c | v24@0:8@16
- (void)setAlertTitleWhenExceedMaxSelectImageCount:(id)arg0;
// IMP 0x10048c218 | @16@0:8
- (id)alertButtonTitleWhenExceedMaxSelectImageCount;
// IMP 0x10048c228 | v24@0:8@16
- (void)setAlertButtonTitleWhenExceedMaxSelectImageCount:(id)arg0;
// IMP 0x10048c234 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10048978c | @16@0:8
+ (id)appearance;
// IMP 0x10048979c | v16@0:8
+ (void)initialize;
// IMP 0x100489810 | v16@0:8
+ (void)initAppearance;
@end
