// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c914a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageManager : NSObject
// ivar _failedURLsLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _runningOperationsLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=12
// ivar _delegate encoding=@"<SDWebImageManagerDelegate>" offset=16
// ivar _imageCache encoding=@"SDImageCache" offset=24
// ivar _imageLoader encoding=@"<SDImageLoader>" offset=32
// ivar _transformer encoding=@"<SDImageTransformer>" offset=40
// ivar _cacheKeyFilter encoding=@"<SDWebImageCacheKeyFilter>" offset=48
// ivar _cacheSerializer encoding=@"<SDWebImageCacheSerializer>" offset=56
// ivar _optionsProcessor encoding=@"<SDWebImageOptionsProcessor>" offset=64
// ivar _failedURLs encoding=@"NSMutableSet" offset=72
// ivar _runningOperations encoding=@"NSMutableSet" offset=80
// property imageCache attributes=T@"SDImageCache",&,N,V_imageCache
// property imageLoader attributes=T@"<SDImageLoader>",&,N,V_imageLoader
// property failedURLs attributes=T@"NSMutableSet",&,N,V_failedURLs
// property runningOperations attributes=T@"NSMutableSet",&,N,V_runningOperations
// property delegate attributes=T@"<SDWebImageManagerDelegate>",W,N,V_delegate
// property transformer attributes=T@"<SDImageTransformer>",&,N,V_transformer
// property cacheKeyFilter attributes=T@"<SDWebImageCacheKeyFilter>",&,N,V_cacheKeyFilter
// property cacheSerializer attributes=T@"<SDWebImageCacheSerializer>",&,N,V_cacheSerializer
// property optionsProcessor attributes=T@"<SDWebImageOptionsProcessor>",&,N,V_optionsProcessor
// property running attributes=TB,R,N,GisRunning
// IMP 0x100552664 | @16@0:8
- (id)init;
// IMP 0x100552714 | @32@0:8@16@24
- (id)initWithCache:(id)arg0 loader:(id)arg1;
// IMP 0x1005527f4 | @24@0:8@16
- (id)cacheKeyForURL:(id)arg0;
// IMP 0x10055288c | @32@0:8@16@24
- (id)originalCacheKeyForURL:(id)arg0 context:(id)arg1;
// IMP 0x100552994 | @32@0:8@16@24
- (id)cacheKeyForURL:(id)arg0 context:(id)arg1;
// IMP 0x100552c1c | @48@0:8@16Q24@?32@?40
- (id)loadImageWithURL:(id)arg0 options:(unsigned long long)arg1 progress:(id /* block */)arg2 completed:(id /* block */)arg3;
// IMP 0x100552c2c | @56@0:8@16Q24@32@?40@?48
- (id)loadImageWithURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 progress:(id /* block */)arg3 completed:(id /* block */)arg4;
// IMP 0x100552f8c | v16@0:8
- (void)cancelAll;
// IMP 0x100552ffc | B16@0:8
- (BOOL)isRunning;
// IMP 0x100553060 | v24@0:8@16
- (void)removeFailedURL:(id)arg0;
// IMP 0x1005530d4 | v16@0:8
- (void)removeAllFailedURLs;
// IMP 0x100553120 | v64@0:8@16@24Q32@40@?48@?56
- (void)callCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 progress:(id /* block */)arg4 completed:(id /* block */)arg5;
// IMP 0x1005536e8 | v64@0:8@16@24Q32@40@?48@?56
- (void)callOriginalCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 progress:(id /* block */)arg4 completed:(id /* block */)arg5;
// IMP 0x100553bdc | v88@0:8@16@24Q32@40@48@56q64@?72@?80
- (void)callDownloadProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 cachedImage:(id)arg4 cachedData:(id)arg5 cacheType:(long long)arg6 progress:(id /* block */)arg7 completed:(id /* block */)arg8;
// IMP 0x100554414 | v84@0:8@16@24Q32@40@48@56q64B72@?76
- (void)callStoreCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 downloadedImage:(id)arg4 downloadedData:(id)arg5 cacheType:(long long)arg6 finished:(BOOL)arg7 completed:(id /* block */)arg8;
// IMP 0x100554e58 | v84@0:8@16@24Q32@40@48@56q64B72@?76
- (void)callTransformProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 originalImage:(id)arg4 originalData:(id)arg5 cacheType:(long long)arg6 finished:(BOOL)arg7 completed:(id /* block */)arg8;
// IMP 0x1005555a4 | v88@0:8@16@24Q32@40@48@56q64B72B76@?80
- (void)callStoreTransformCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 image:(id)arg4 data:(id)arg5 cacheType:(long long)arg6 finished:(BOOL)arg7 transformed:(BOOL)arg8 completed:(id /* block */)arg9;
// IMP 0x1005559c4 | v24@0:8@16
- (void)safelyRemoveOperationFromRunning:(id)arg0;
// IMP 0x100555a38 | v68@0:8@16@24@32@40q48B56@?60
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 imageCache:(id)arg3 cacheType:(long long)arg4 waitStoreCache:(BOOL)arg5 completion:(id /* block */)arg6;
// IMP 0x100555b28 | v48@0:8@16@?24@32@40
- (void)callCompletionBlockForOperation:(id)arg0 completion:(id /* block */)arg1 error:(id)arg2 url:(id)arg3;
// IMP 0x100555b60 | v76@0:8@16@?24@32@40@48q56B64@68
- (void)callCompletionBlockForOperation:(id)arg0 completion:(id /* block */)arg1 image:(id)arg2 data:(id)arg3 error:(id)arg4 cacheType:(long long)arg5 finished:(BOOL)arg6 url:(id)arg7;
// IMP 0x100555db8 | B48@0:8@16@24Q32@40
- (BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
// IMP 0x100555f50 | @40@0:8@16Q24@32
- (id)processedResultForURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10055618c | @16@0:8
- (id)delegate;
// IMP 0x1005561a4 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1005561b0 | @16@0:8
- (id)imageCache;
// IMP 0x1005561b8 | v24@0:8@16
- (void)setImageCache:(id)arg0;
// IMP 0x1005561c4 | @16@0:8
- (id)imageLoader;
// IMP 0x1005561cc | v24@0:8@16
- (void)setImageLoader:(id)arg0;
// IMP 0x1005561d8 | @16@0:8
- (id)transformer;
// IMP 0x1005561e0 | v24@0:8@16
- (void)setTransformer:(id)arg0;
// IMP 0x1005561ec | @16@0:8
- (id)cacheKeyFilter;
// IMP 0x1005561f4 | v24@0:8@16
- (void)setCacheKeyFilter:(id)arg0;
// IMP 0x100556200 | @16@0:8
- (id)cacheSerializer;
// IMP 0x100556208 | v24@0:8@16
- (void)setCacheSerializer:(id)arg0;
// IMP 0x100556214 | @16@0:8
- (id)optionsProcessor;
// IMP 0x10055621c | v24@0:8@16
- (void)setOptionsProcessor:(id)arg0;
// IMP 0x100556228 | @16@0:8
- (id)failedURLs;
// IMP 0x100556230 | v24@0:8@16
- (void)setFailedURLs:(id)arg0;
// IMP 0x10055623c | @16@0:8
- (id)runningOperations;
// IMP 0x100556244 | v24@0:8@16
- (void)setRunningOperations:(id)arg0;
// IMP 0x100556250 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100552508 | @16@0:8
+ (id)defaultImageCache;
// IMP 0x100552514 | v24@0:8@16
+ (void)setDefaultImageCache:(id)arg0;
// IMP 0x100552568 | @16@0:8
+ (id)defaultImageLoader;
// IMP 0x100552574 | v24@0:8@16
+ (void)setDefaultImageLoader:(id)arg0;
// IMP 0x1005525c8 | @16@0:8
+ (id)sharedManager;
@end
