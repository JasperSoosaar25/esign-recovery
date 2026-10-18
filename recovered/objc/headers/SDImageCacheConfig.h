// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c902a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCacheConfig : NSObject
// ivar _shouldDisableiCloud encoding=B offset=8
// ivar _shouldCacheImagesInMemory encoding=B offset=9
// ivar _shouldUseWeakMemoryCache encoding=B offset=10
// ivar _shouldRemoveExpiredDataWhenEnterBackground encoding=B offset=11
// ivar _shouldRemoveExpiredDataWhenTerminate encoding=B offset=12
// ivar _diskCacheReadingOptions encoding=Q offset=16
// ivar _diskCacheWritingOptions encoding=Q offset=24
// ivar _maxDiskAge encoding=d offset=32
// ivar _maxDiskSize encoding=Q offset=40
// ivar _maxMemoryCost encoding=Q offset=48
// ivar _maxMemoryCount encoding=Q offset=56
// ivar _diskCacheExpireType encoding=Q offset=64
// ivar _fileManager encoding=@"NSFileManager" offset=72
// ivar _memoryCacheClass encoding=# offset=80
// ivar _diskCacheClass encoding=# offset=88
// property shouldDisableiCloud attributes=TB,N,V_shouldDisableiCloud
// property shouldCacheImagesInMemory attributes=TB,N,V_shouldCacheImagesInMemory
// property shouldUseWeakMemoryCache attributes=TB,N,V_shouldUseWeakMemoryCache
// property shouldRemoveExpiredDataWhenEnterBackground attributes=TB,N,V_shouldRemoveExpiredDataWhenEnterBackground
// property shouldRemoveExpiredDataWhenTerminate attributes=TB,N,V_shouldRemoveExpiredDataWhenTerminate
// property diskCacheReadingOptions attributes=TQ,N,V_diskCacheReadingOptions
// property diskCacheWritingOptions attributes=TQ,N,V_diskCacheWritingOptions
// property maxDiskAge attributes=Td,N,V_maxDiskAge
// property maxDiskSize attributes=TQ,N,V_maxDiskSize
// property maxMemoryCost attributes=TQ,N,V_maxMemoryCost
// property maxMemoryCount attributes=TQ,N,V_maxMemoryCount
// property diskCacheExpireType attributes=TQ,N,V_diskCacheExpireType
// property fileManager attributes=T@"NSFileManager",&,N,V_fileManager
// property memoryCacheClass attributes=T#,N,V_memoryCacheClass
// property diskCacheClass attributes=T#,N,V_diskCacheClass
// IMP 0x10053fa14 | @16@0:8
- (id)init;
// IMP 0x10053faac | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x10053fc28 | B16@0:8
- (BOOL)shouldDisableiCloud;
// IMP 0x10053fc30 | v20@0:8B16
- (void)setShouldDisableiCloud:(BOOL)arg0;
// IMP 0x10053fc38 | B16@0:8
- (BOOL)shouldCacheImagesInMemory;
// IMP 0x10053fc40 | v20@0:8B16
- (void)setShouldCacheImagesInMemory:(BOOL)arg0;
// IMP 0x10053fc48 | B16@0:8
- (BOOL)shouldUseWeakMemoryCache;
// IMP 0x10053fc50 | v20@0:8B16
- (void)setShouldUseWeakMemoryCache:(BOOL)arg0;
// IMP 0x10053fc58 | B16@0:8
- (BOOL)shouldRemoveExpiredDataWhenEnterBackground;
// IMP 0x10053fc60 | v20@0:8B16
- (void)setShouldRemoveExpiredDataWhenEnterBackground:(BOOL)arg0;
// IMP 0x10053fc68 | B16@0:8
- (BOOL)shouldRemoveExpiredDataWhenTerminate;
// IMP 0x10053fc70 | v20@0:8B16
- (void)setShouldRemoveExpiredDataWhenTerminate:(BOOL)arg0;
// IMP 0x10053fc78 | Q16@0:8
- (unsigned long long)diskCacheReadingOptions;
// IMP 0x10053fc80 | v24@0:8Q16
- (void)setDiskCacheReadingOptions:(unsigned long long)arg0;
// IMP 0x10053fc88 | Q16@0:8
- (unsigned long long)diskCacheWritingOptions;
// IMP 0x10053fc90 | v24@0:8Q16
- (void)setDiskCacheWritingOptions:(unsigned long long)arg0;
// IMP 0x10053fc98 | d16@0:8
- (double)maxDiskAge;
// IMP 0x10053fca0 | v24@0:8d16
- (void)setMaxDiskAge:(double)arg0;
// IMP 0x10053fca8 | Q16@0:8
- (unsigned long long)maxDiskSize;
// IMP 0x10053fcb0 | v24@0:8Q16
- (void)setMaxDiskSize:(unsigned long long)arg0;
// IMP 0x10053fcb8 | Q16@0:8
- (unsigned long long)maxMemoryCost;
// IMP 0x10053fcc0 | v24@0:8Q16
- (void)setMaxMemoryCost:(unsigned long long)arg0;
// IMP 0x10053fcc8 | Q16@0:8
- (unsigned long long)maxMemoryCount;
// IMP 0x10053fcd0 | v24@0:8Q16
- (void)setMaxMemoryCount:(unsigned long long)arg0;
// IMP 0x10053fcd8 | Q16@0:8
- (unsigned long long)diskCacheExpireType;
// IMP 0x10053fce0 | v24@0:8Q16
- (void)setDiskCacheExpireType:(unsigned long long)arg0;
// IMP 0x10053fce8 | @16@0:8
- (id)fileManager;
// IMP 0x10053fcf0 | v24@0:8@16
- (void)setFileManager:(id)arg0;
// IMP 0x10053fcfc | #16@0:8
- (Class)memoryCacheClass;
// IMP 0x10053fd04 | v24@0:8#16
- (void)setMemoryCacheClass:(Class)arg0;
// IMP 0x10053fd0c | #16@0:8
- (Class)diskCacheClass;
// IMP 0x10053fd14 | v24@0:8#16
- (void)setDiskCacheClass:(Class)arg0;
// IMP 0x10053fd1c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10053f9a8 | @16@0:8
+ (id)defaultCacheConfig;
@end
