// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c879e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAssetsManager : NSObject
// ivar _phCachingImageManager encoding=@"PHCachingImageManager" offset=8
// IMP 0x100452040 | @16@0:8
- (id)init;
// IMP 0x100452150 | v40@0:8Q16B24B28@?32
- (void)enumerateAllAlbumsWithAlbumContentType:(unsigned long long)arg0 showEmptyAlbum:(BOOL)arg1 showSmartAlbumIfSupported:(BOOL)arg2 usingBlock:(id /* block */)arg3;
// IMP 0x100452278 | v32@0:8Q16@?24
- (void)enumerateAllAlbumsWithAlbumContentType:(unsigned long long)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x100452288 | v48@0:8^{CGImage=}16@24q32@?40
- (void)saveImageWithImageRef:(struct CGImage *)arg0 albumAssetsGroup:(id)arg1 orientation:(long long)arg2 completionBlock:(id /* block */)arg3;
// IMP 0x10045255c | v40@0:8@16@24@?32
- (void)saveImageWithImagePathURL:(id)arg0 albumAssetsGroup:(id)arg1 completionBlock:(id /* block */)arg2;
// IMP 0x100452834 | v40@0:8@16@24@?32
- (void)saveVideoWithVideoPathURL:(id)arg0 albumAssetsGroup:(id)arg1 completionBlock:(id /* block */)arg2;
// IMP 0x100452b0c | @16@0:8
- (id)phCachingImageManager;
// IMP 0x100452b54 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100451f5c | @16@0:8
+ (id)sharedInstance;
// IMP 0x100452024 | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
// IMP 0x100452074 | Q16@0:8
+ (unsigned long long)authorizationStatus;
// IMP 0x1004520a4 | v24@0:8@?16
+ (void)requestAuthorization:(id /* block */)arg0;
@end
