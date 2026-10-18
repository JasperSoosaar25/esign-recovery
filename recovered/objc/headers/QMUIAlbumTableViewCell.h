// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c86628
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAlbumTableViewCell : QMUITableViewCell
// ivar _albumImageSize encoding=d offset=8
// ivar _albumImageMarginLeft encoding=d offset=16
// ivar _albumNameFont encoding=@"UIFont" offset=24
// ivar _albumNameColor encoding=@"UIColor" offset=32
// ivar _albumAssetsNumberFont encoding=@"UIFont" offset=40
// ivar _albumAssetsNumberColor encoding=@"UIColor" offset=48
// ivar _albumNameInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=56
// property albumImageSize attributes=Td,N,V_albumImageSize
// property albumImageMarginLeft attributes=Td,N,V_albumImageMarginLeft
// property albumNameInsets attributes=T{UIEdgeInsets=dddd},N,V_albumNameInsets
// property albumNameFont attributes=T@"UIFont",&,N,V_albumNameFont
// property albumNameColor attributes=T@"UIColor",&,N,V_albumNameColor
// property albumAssetsNumberFont attributes=T@"UIFont",&,N,V_albumAssetsNumberFont
// property albumAssetsNumberColor attributes=T@"UIColor",&,N,V_albumAssetsNumberColor
// IMP 0x100442af4 | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x100442c5c | v24@0:8@16
- (void)updateCellAppearanceWithIndexPath:(id)arg0;
// IMP 0x100442d24 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10044323c | v24@0:8@16
- (void)setAlbumNameFont:(id)arg0;
// IMP 0x1004432a4 | v24@0:8@16
- (void)setAlbumNameColor:(id)arg0;
// IMP 0x10044330c | v24@0:8@16
- (void)setAlbumAssetsNumberFont:(id)arg0;
// IMP 0x100443374 | v24@0:8@16
- (void)setAlbumAssetsNumberColor:(id)arg0;
// IMP 0x1004433dc | d16@0:8
- (double)albumImageSize;
// IMP 0x1004433ec | v24@0:8d16
- (void)setAlbumImageSize:(double)arg0;
// IMP 0x1004433fc | d16@0:8
- (double)albumImageMarginLeft;
// IMP 0x10044340c | v24@0:8d16
- (void)setAlbumImageMarginLeft:(double)arg0;
// IMP 0x10044341c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)albumNameInsets;
// IMP 0x100443434 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setAlbumNameInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10044344c | @16@0:8
- (id)albumNameFont;
// IMP 0x10044345c | @16@0:8
- (id)albumNameColor;
// IMP 0x10044346c | @16@0:8
- (id)albumAssetsNumberFont;
// IMP 0x10044347c | @16@0:8
- (id)albumAssetsNumberColor;
// IMP 0x10044348c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004428a8 | v16@0:8
+ (void)initialize;
@end
