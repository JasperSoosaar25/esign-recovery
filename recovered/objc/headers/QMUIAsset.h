// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87948
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAsset : NSObject
// ivar _phAsset encoding=@"PHAsset" offset=8
// ivar imageSize encoding=f offset=16
// ivar _assetType encoding=Q offset=24
// ivar _assetSubType encoding=Q offset=32
// ivar _downloadStatus encoding=Q offset=40
// ivar _downloadProgress encoding=d offset=48
// ivar _requestID encoding=q offset=56
// ivar _phAssetInfo encoding=@"NSDictionary" offset=64
// property phAssetInfo attributes=T@"NSDictionary",C,N,V_phAssetInfo
// property assetType attributes=TQ,R,N,V_assetType
// property assetSubType attributes=TQ,R,N,V_assetSubType
// property phAsset attributes=T@"PHAsset",R,N
// property downloadStatus attributes=TQ,R,N,V_downloadStatus
// property downloadProgress attributes=Td,N,V_downloadProgress
// property requestID attributes=Tq,N,V_requestID
// property identifier attributes=T@"NSString",R,C,N
// IMP 0x10044fc74 | @24@0:8@16
- (id)initWithPHAsset:(id)arg0;
// IMP 0x10044fd90 | @16@0:8
- (id)phAsset;
// IMP 0x10044fd98 | @16@0:8
- (id)originImage;
// IMP 0x10044ff48 | @32@0:8{CGSize=dd}16
- (id)thumbnailWithSize:(struct CGSize)arg0;
// IMP 0x10045011c | @16@0:8
- (id)previewImage;
// IMP 0x1004502dc | q32@0:8@?16@?24
- (long long)requestOriginImageWithCompletion:(id /* block */)arg0 withProgressHandler:(id /* block */)arg1;
// IMP 0x100450494 | q40@0:8{CGSize=dd}16@?32
- (long long)requestThumbnailImageWithSize:(struct CGSize)arg0 completion:(id /* block */)arg1;
// IMP 0x10045062c | q32@0:8@?16@?24
- (long long)requestPreviewImageWithCompletion:(id /* block */)arg0 withProgressHandler:(id /* block */)arg1;
// IMP 0x100450790 | q32@0:8@?16@?24
- (long long)requestLivePhotoWithCompletion:(id /* block */)arg0 withProgressHandler:(id /* block */)arg1;
// IMP 0x100450970 | q32@0:8@?16@?24
- (long long)requestPlayerItemWithCompletion:(id /* block */)arg0 withProgressHandler:(id /* block */)arg1;
// IMP 0x100450ae8 | v24@0:8@?16
- (void)requestImageData:(id /* block */)arg0;
// IMP 0x100450e8c | q16@0:8
- (long long)imageOrientation;
// IMP 0x100451000 | @16@0:8
- (id)identifier;
// IMP 0x100451008 | v24@0:8@?16
- (void)requestPhAssetInfo:(id /* block */)arg0;
// IMP 0x1004512bc | v28@0:8@?16B24
- (void)requestImagePhAssetInfo:(id /* block */)arg0 synchronous:(BOOL)arg1;
// IMP 0x100451534 | v24@0:8d16
- (void)setDownloadProgress:(double)arg0;
// IMP 0x100451544 | v20@0:8B16
- (void)updateDownloadStatusWithDownloadResult:(BOOL)arg0;
// IMP 0x100451558 | v24@0:8@?16
- (void)assetSize:(id /* block */)arg0;
// IMP 0x1004517c4 | d16@0:8
- (double)duration;
// IMP 0x100451800 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1004518b8 | Q16@0:8
- (unsigned long long)assetType;
// IMP 0x1004518c0 | Q16@0:8
- (unsigned long long)assetSubType;
// IMP 0x1004518c8 | Q16@0:8
- (unsigned long long)downloadStatus;
// IMP 0x1004518d0 | d16@0:8
- (double)downloadProgress;
// IMP 0x1004518d8 | q16@0:8
- (long long)requestID;
// IMP 0x1004518e0 | v24@0:8q16
- (void)setRequestID:(long long)arg0;
// IMP 0x1004518e8 | @16@0:8
- (id)phAssetInfo;
// IMP 0x1004518f0 | v24@0:8@16
- (void)setPhAssetInfo:(id)arg0;
// IMP 0x1004518f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
