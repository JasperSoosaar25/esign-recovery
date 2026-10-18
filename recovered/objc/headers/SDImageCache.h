// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90258
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCache : NSObject
// ivar _config encoding=@"SDImageCacheConfig" offset=8
// ivar _memoryCache encoding=@"<SDMemoryCache>" offset=16
// ivar _diskCache encoding=@"<SDDiskCache>" offset=24
// ivar _diskCachePath encoding=@"NSString" offset=32
// ivar _additionalCachePathBlock encoding=@? offset=40
// ivar _ioQueue encoding=@"NSObject<OS_dispatch_queue>" offset=48
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property memoryCache attributes=T@"<SDMemoryCache>",&,N,V_memoryCache
// property diskCache attributes=T@"<SDDiskCache>",&,N,V_diskCache
// property config attributes=T@"SDImageCacheConfig",C,N,V_config
// property diskCachePath attributes=T@"NSString",C,N,V_diskCachePath
// property ioQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_ioQueue
// property additionalCachePathBlock attributes=T@?,C,N,V_additionalCachePathBlock
// IMP 0x10053f518 | @48@0:8@16Q24@32@?40
- (id)queryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
// IMP 0x10053f524 | @56@0:8@16Q24@32q40@?48
- (id)queryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4;
// IMP 0x10053f558 | v56@0:8@16@24@32q40@?48
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4;
// IMP 0x10053f680 | v40@0:8@16q24@?32
- (void)removeImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2;
// IMP 0x10053f750 | v40@0:8@16q24@?32
- (void)containsImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2;
// IMP 0x10053f920 | v32@0:8q16@?24
- (void)clearWithCacheType:(long long)arg0 completion:(id /* block */)arg1;
// IMP 0x10053c0e4 | @16@0:8
- (id)init;
// IMP 0x10053c0f0 | @24@0:8@16
- (id)initWithNamespace:(id)arg0;
// IMP 0x10053c0f8 | @32@0:8@16@24
- (id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1;
// IMP 0x10053c188 | @40@0:8@16@24@32
- (id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1 config:(id)arg2;
// IMP 0x10053c3a4 | v16@0:8
- (void)dealloc;
// IMP 0x10053c40c | @24@0:8@16
- (id)cachePathForKey:(id)arg0;
// IMP 0x10053c4d4 | v16@0:8
- (void)migrateDiskCacheDirectory;
// IMP 0x10053c744 | v40@0:8@16@24@?32
- (void)storeImage:(id)arg0 forKey:(id)arg1 completion:(id /* block */)arg2;
// IMP 0x10053c758 | v44@0:8@16@24B32@?36
- (void)storeImage:(id)arg0 forKey:(id)arg1 toDisk:(BOOL)arg2 completion:(id /* block */)arg3;
// IMP 0x10053c76c | v40@0:8@16@24@?32
- (void)storeImageData:(id)arg0 forKey:(id)arg1 completion:(id /* block */)arg2;
// IMP 0x10053c784 | v52@0:8@16@24@32B40@?44
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3 completion:(id /* block */)arg4;
// IMP 0x10053c794 | v56@0:8@16@24@32B40B44@?48
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toMemory:(BOOL)arg3 toDisk:(BOOL)arg4 completion:(id /* block */)arg5;
// IMP 0x10053cb0c | v32@0:8@16@24
- (void)_archivedDataWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x10053cc10 | v32@0:8@16@24
- (void)storeImageToMemory:(id)arg0 forKey:(id)arg1;
// IMP 0x10053cc9c | v32@0:8@16@24
- (void)storeImageDataToDisk:(id)arg0 forKey:(id)arg1;
// IMP 0x10053cd88 | v32@0:8@16@24
- (void)_storeImageDataToDisk:(id)arg0 forKey:(id)arg1;
// IMP 0x10053ce08 | v32@0:8@16@?24
- (void)diskImageExistsWithKey:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x10053cf9c | B24@0:8@16
- (BOOL)diskImageDataExistsWithKey:(id)arg0;
// IMP 0x10053d0dc | B24@0:8@16
- (BOOL)_diskImageDataExistsWithKey:(id)arg0;
// IMP 0x10053d14c | v32@0:8@16@?24
- (void)diskImageDataQueryForKey:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x10053d2fc | @24@0:8@16
- (id)diskImageDataForKey:(id)arg0;
// IMP 0x10053d480 | @24@0:8@16
- (id)imageFromMemoryCacheForKey:(id)arg0;
// IMP 0x10053d4ec | @24@0:8@16
- (id)imageFromDiskCacheForKey:(id)arg0;
// IMP 0x10053d4f8 | @40@0:8@16Q24@32
- (id)imageFromDiskCacheForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10053d6a0 | @24@0:8@16
- (id)imageFromCacheForKey:(id)arg0;
// IMP 0x10053d6ac | @40@0:8@16Q24@32
- (id)imageFromCacheForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10053d85c | @24@0:8@16
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg0;
// IMP 0x10053d99c | @24@0:8@16
- (id)diskImageForKey:(id)arg0;
// IMP 0x10053da14 | @32@0:8@16@24
- (id)diskImageForKey:(id)arg0 data:(id)arg1;
// IMP 0x10053da20 | @48@0:8@16@24Q32@40
- (id)diskImageForKey:(id)arg0 data:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
// IMP 0x10053dae4 | v32@0:8@16@24
- (void)_unarchiveObjectWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x10053dc30 | @32@0:8@16@?24
- (id)queryCacheOperationForKey:(id)arg0 done:(id /* block */)arg1;
// IMP 0x10053dc3c | @40@0:8@16Q24@?32
- (id)queryCacheOperationForKey:(id)arg0 options:(unsigned long long)arg1 done:(id /* block */)arg2;
// IMP 0x10053dc48 | @48@0:8@16Q24@32@?40
- (id)queryCacheOperationForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 done:(id /* block */)arg3;
// IMP 0x10053dc54 | @56@0:8@16Q24@32q40@?48
- (id)queryCacheOperationForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 cacheType:(long long)arg3 done:(id /* block */)arg4;
// IMP 0x10053e710 | v32@0:8@16@?24
- (void)removeImageForKey:(id)arg0 withCompletion:(id /* block */)arg1;
// IMP 0x10053e71c | v36@0:8@16B24@?28
- (void)removeImageForKey:(id)arg0 fromDisk:(BOOL)arg1 withCompletion:(id /* block */)arg2;
// IMP 0x10053e72c | v40@0:8@16B24B28@?32
- (void)removeImageForKey:(id)arg0 fromMemory:(BOOL)arg1 fromDisk:(BOOL)arg2 withCompletion:(id /* block */)arg3;
// IMP 0x10053e938 | v24@0:8@16
- (void)removeImageFromMemoryForKey:(id)arg0;
// IMP 0x10053e990 | v24@0:8@16
- (void)removeImageFromDiskForKey:(id)arg0;
// IMP 0x10053ea48 | v24@0:8@16
- (void)_removeImageFromDiskForKey:(id)arg0;
// IMP 0x10053eaa0 | v16@0:8
- (void)clearMemory;
// IMP 0x10053ead0 | v24@0:8@?16
- (void)clearDiskOnCompletion:(id /* block */)arg0;
// IMP 0x10053ec30 | v24@0:8@?16
- (void)deleteOldFilesWithCompletionBlock:(id /* block */)arg0;
// IMP 0x10053ed90 | v24@0:8@16
- (void)applicationWillTerminate:(id)arg0;
// IMP 0x10053ee68 | v24@0:8@16
- (void)applicationDidEnterBackground:(id)arg0;
// IMP 0x10053f074 | Q16@0:8
- (unsigned long long)totalDiskSize;
// IMP 0x10053f17c | Q16@0:8
- (unsigned long long)totalDiskCount;
// IMP 0x10053f284 | v24@0:8@?16
- (void)calculateSizeWithCompletionBlock:(id /* block */)arg0;
// IMP 0x10053f44c | @16@0:8
- (id)config;
// IMP 0x10053f454 | v24@0:8@16
- (void)setConfig:(id)arg0;
// IMP 0x10053f45c | @16@0:8
- (id)memoryCache;
// IMP 0x10053f464 | v24@0:8@16
- (void)setMemoryCache:(id)arg0;
// IMP 0x10053f470 | @16@0:8
- (id)diskCache;
// IMP 0x10053f478 | v24@0:8@16
- (void)setDiskCache:(id)arg0;
// IMP 0x10053f484 | @16@0:8
- (id)diskCachePath;
// IMP 0x10053f48c | v24@0:8@16
- (void)setDiskCachePath:(id)arg0;
// IMP 0x10053f494 | @?16@0:8
- (id /* block */)additionalCachePathBlock;
// IMP 0x10053f49c | v24@0:8@?16
- (void)setAdditionalCachePathBlock:(id /* block */)arg0;
// IMP 0x10053f4a4 | @16@0:8
- (id)ioQueue;
// IMP 0x10053f4ac | v24@0:8@16
- (void)setIoQueue:(id)arg0;
// IMP 0x10053f4b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10053bfb4 | @16@0:8
+ (id)sharedImageCache;
// IMP 0x10053c050 | @16@0:8
+ (id)defaultDiskCacheDirectory;
// IMP 0x10053c0bc | v24@0:8@16
+ (void)setDefaultDiskCacheDirectory:(id)arg0;
// IMP 0x10053c484 | @16@0:8
+ (id)userCacheDirectory;
// IMP 0x10053f420 | Q24@0:8Q16
+ (unsigned long long)imageOptionsFromCacheOptions:(unsigned long long)arg0;
@end
