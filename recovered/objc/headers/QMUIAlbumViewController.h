// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c86678
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAlbumViewController : QMUICommonTableViewController
// ivar _shouldShowDefaultLoadingView encoding=B offset=16
// ivar _albumViewControllerDelegate encoding=@"<QMUIAlbumViewControllerDelegate>" offset=24
// ivar _albumTableViewCellHeight encoding=d offset=32
// ivar _contentType encoding=Q offset=40
// ivar _tipTextWhenNoPhotosAuthorization encoding=@"NSString" offset=48
// ivar _tipTextWhenPhotosEmpty encoding=@"NSString" offset=56
// ivar _albumsArray encoding=@"NSMutableArray" offset=64
// ivar _imagePickerViewController encoding=@"QMUIImagePickerViewController" offset=72
// property albumsArray attributes=T@"NSMutableArray",&,N,V_albumsArray
// property imagePickerViewController attributes=T@"QMUIImagePickerViewController",&,N,V_imagePickerViewController
// property albumViewControllerDelegate attributes=T@"<QMUIAlbumViewControllerDelegate>",W,N,V_albumViewControllerDelegate
// property albumTableViewCellHeight attributes=Td,N,V_albumTableViewCellHeight
// property contentType attributes=TQ,N,V_contentType
// property tipTextWhenNoPhotosAuthorization attributes=T@"NSString",C,N,V_tipTextWhenNoPhotosAuthorization
// property tipTextWhenPhotosEmpty attributes=T@"NSString",C,N,V_tipTextWhenPhotosEmpty
// property shouldShowDefaultLoadingView attributes=TB,N,V_shouldShowDefaultLoadingView
// IMP 0x1004435b8 | v16@0:8
- (void)didInitialize;
// IMP 0x100443610 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x1004436d4 | v16@0:8
- (void)initTableView;
// IMP 0x100443738 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100443ab4 | v16@0:8
- (void)sortAlbumArray;
// IMP 0x100443c84 | v16@0:8
- (void)refreshAlbumAndShowEmptyTipIfNeed;
// IMP 0x100443d9c | v28@0:8@16B24
- (void)pickAlbumsGroup:(id)arg0 animated:(BOOL)arg1;
// IMP 0x1004440d0 | v16@0:8
- (void)pickLastAlbumGroupDirectlyIfCan;
// IMP 0x10044411c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100444158 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10044415c | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100444394 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x100444420 | v24@0:8@16
- (void)handleCancelSelectAlbum:(id)arg0;
// IMP 0x100444540 | @16@0:8
- (id)albumViewControllerDelegate;
// IMP 0x100444560 | v24@0:8@16
- (void)setAlbumViewControllerDelegate:(id)arg0;
// IMP 0x100444574 | d16@0:8
- (double)albumTableViewCellHeight;
// IMP 0x100444584 | v24@0:8d16
- (void)setAlbumTableViewCellHeight:(double)arg0;
// IMP 0x100444594 | Q16@0:8
- (unsigned long long)contentType;
// IMP 0x1004445a4 | v24@0:8Q16
- (void)setContentType:(unsigned long long)arg0;
// IMP 0x1004445b4 | @16@0:8
- (id)tipTextWhenNoPhotosAuthorization;
// IMP 0x1004445c4 | v24@0:8@16
- (void)setTipTextWhenNoPhotosAuthorization:(id)arg0;
// IMP 0x1004445d0 | @16@0:8
- (id)tipTextWhenPhotosEmpty;
// IMP 0x1004445e0 | v24@0:8@16
- (void)setTipTextWhenPhotosEmpty:(id)arg0;
// IMP 0x1004445ec | B16@0:8
- (BOOL)shouldShowDefaultLoadingView;
// IMP 0x1004445fc | v20@0:8B16
- (void)setShouldShowDefaultLoadingView:(BOOL)arg0;
// IMP 0x10044460c | @16@0:8
- (id)albumsArray;
// IMP 0x10044461c | v24@0:8@16
- (void)setAlbumsArray:(id)arg0;
// IMP 0x100444630 | @16@0:8
- (id)imagePickerViewController;
// IMP 0x100444640 | v24@0:8@16
- (void)setImagePickerViewController:(id)arg0;
// IMP 0x100444654 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004434f4 | @16@0:8
+ (id)appearance;
// IMP 0x100443504 | v16@0:8
+ (void)initialize;
// IMP 0x100443578 | v16@0:8
+ (void)initAppearance;
@end
