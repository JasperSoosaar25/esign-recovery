// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c89a68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIImagePickerCollectionViewCell : UICollectionViewCell
// ivar _selectable encoding=B offset=8
// ivar _checked encoding=B offset=9
// ivar _videoDurationLabel encoding=@"UILabel" offset=16
// ivar _favoriteImage encoding=@"UIImage" offset=24
// ivar _checkboxImage encoding=@"UIImage" offset=32
// ivar _checkboxCheckedImage encoding=@"UIImage" offset=40
// ivar _videoDurationLabelFont encoding=@"UIFont" offset=48
// ivar _videoDurationLabelTextColor encoding=@"UIColor" offset=56
// ivar _contentImageView encoding=@"UIImageView" offset=64
// ivar _favoriteImageView encoding=@"UIImageView" offset=72
// ivar _checkboxButton encoding=@"QMUIButton" offset=80
// ivar _bottomShadowLayer encoding=@"CAGradientLayer" offset=88
// ivar _downloadStatus encoding=Q offset=96
// ivar _assetIdentifier encoding=@"NSString" offset=104
// ivar _favoriteImageMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=112
// ivar _checkboxButtonMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=144
// ivar _videoDurationLabelMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=176
// property favoriteImageView attributes=T@"UIImageView",&,N,V_favoriteImageView
// property checkboxButton attributes=T@"QMUIButton",&,N,V_checkboxButton
// property bottomShadowLayer attributes=T@"CAGradientLayer",&,N,V_bottomShadowLayer
// property favoriteImage attributes=T@"UIImage",&,N,V_favoriteImage
// property favoriteImageMargins attributes=T{UIEdgeInsets=dddd},N,V_favoriteImageMargins
// property checkboxImage attributes=T@"UIImage",&,N,V_checkboxImage
// property checkboxCheckedImage attributes=T@"UIImage",&,N,V_checkboxCheckedImage
// property checkboxButtonMargins attributes=T{UIEdgeInsets=dddd},N,V_checkboxButtonMargins
// property videoDurationLabelFont attributes=T@"UIFont",&,N,V_videoDurationLabelFont
// property videoDurationLabelTextColor attributes=T@"UIColor",&,N,V_videoDurationLabelTextColor
// property videoDurationLabelMargins attributes=T{UIEdgeInsets=dddd},N,V_videoDurationLabelMargins
// property contentImageView attributes=T@"UIImageView",R,N,V_contentImageView
// property videoDurationLabel attributes=T@"UILabel",R,N,V_videoDurationLabel
// property selectable attributes=TB,N,GisSelectable,V_selectable
// property checked attributes=TB,N,GisChecked,V_checked
// property downloadStatus attributes=TQ,N,V_downloadStatus
// property assetIdentifier attributes=T@"NSString",C,N,V_assetIdentifier
// IMP 0x10048753c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100487594 | v16@0:8
- (void)initImagePickerCollectionViewCellUI;
// IMP 0x1004879b0 | v40@0:8@16{CGSize=dd}24
- (void)renderWithAsset:(id)arg0 referenceSize:(struct CGSize)arg1;
// IMP 0x100487ce8 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10048838c | v24@0:8@16
- (void)setFavoriteImage:(id)arg0;
// IMP 0x100488444 | v24@0:8@16
- (void)setCheckboxImage:(id)arg0;
// IMP 0x100488500 | v24@0:8@16
- (void)setCheckboxCheckedImage:(id)arg0;
// IMP 0x1004885e4 | v24@0:8@16
- (void)setVideoDurationLabelFont:(id)arg0;
// IMP 0x100488674 | v24@0:8@16
- (void)setVideoDurationLabelTextColor:(id)arg0;
// IMP 0x1004886f4 | v20@0:8B16
- (void)setChecked:(BOOL)arg0;
// IMP 0x1004887d0 | v20@0:8B16
- (void)setSelectable:(BOOL)arg0;
// IMP 0x100488838 | v24@0:8Q16
- (void)setDownloadStatus:(unsigned long long)arg0;
// IMP 0x100488894 | v16@0:8
- (void)initVideoDurationLabelIfNeeded;
// IMP 0x100488994 | @16@0:8
- (id)videoDurationLabel;
// IMP 0x1004889a4 | @16@0:8
- (id)favoriteImage;
// IMP 0x1004889b4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)favoriteImageMargins;
// IMP 0x1004889cc | v48@0:8{UIEdgeInsets=dddd}16
- (void)setFavoriteImageMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004889e4 | @16@0:8
- (id)checkboxImage;
// IMP 0x1004889f4 | @16@0:8
- (id)checkboxCheckedImage;
// IMP 0x100488a04 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)checkboxButtonMargins;
// IMP 0x100488a1c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setCheckboxButtonMargins:(struct UIEdgeInsets)arg0;
// IMP 0x100488a34 | @16@0:8
- (id)videoDurationLabelFont;
// IMP 0x100488a44 | @16@0:8
- (id)videoDurationLabelTextColor;
// IMP 0x100488a54 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)videoDurationLabelMargins;
// IMP 0x100488a6c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setVideoDurationLabelMargins:(struct UIEdgeInsets)arg0;
// IMP 0x100488a84 | @16@0:8
- (id)contentImageView;
// IMP 0x100488a94 | @16@0:8
- (id)favoriteImageView;
// IMP 0x100488aa4 | v24@0:8@16
- (void)setFavoriteImageView:(id)arg0;
// IMP 0x100488ab8 | @16@0:8
- (id)checkboxButton;
// IMP 0x100488ac8 | v24@0:8@16
- (void)setCheckboxButton:(id)arg0;
// IMP 0x100488adc | @16@0:8
- (id)bottomShadowLayer;
// IMP 0x100488aec | v24@0:8@16
- (void)setBottomShadowLayer:(id)arg0;
// IMP 0x100488b00 | B16@0:8
- (BOOL)isSelectable;
// IMP 0x100488b10 | B16@0:8
- (BOOL)isChecked;
// IMP 0x100488b20 | Q16@0:8
- (unsigned long long)downloadStatus;
// IMP 0x100488b30 | @16@0:8
- (id)assetIdentifier;
// IMP 0x100488b40 | v24@0:8@16
- (void)setAssetIdentifier:(id)arg0;
// IMP 0x100488b4c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004872c4 | v16@0:8
+ (void)initialize;
@end
