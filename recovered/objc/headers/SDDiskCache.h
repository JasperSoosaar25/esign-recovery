// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f920
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDDiskCache : NSObject
// ivar _config encoding=@"SDImageCacheConfig" offset=8
// ivar _diskCachePath encoding=@"NSString" offset=16
// ivar _fileManager encoding=@"NSFileManager" offset=24
// property diskCachePath attributes=T@"NSString",C,N,V_diskCachePath
// property fileManager attributes=T@"NSFileManager",&,N,V_fileManager
// property config attributes=T@"SDImageCacheConfig",R,N,V_config
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100538420 | @16@0:8
- (id)init;
// IMP 0x100538438 | @32@0:8@16@24
- (id)initWithCachePath:(id)arg0 config:(id)arg1;
// IMP 0x1005384e4 | v16@0:8
- (void)commonInit;
// IMP 0x100538594 | B24@0:8@16
- (BOOL)containsDataForKey:(id)arg0;
// IMP 0x100538650 | @24@0:8@16
- (id)dataForKey:(id)arg0;
// IMP 0x100538744 | v32@0:8@16@24
- (void)setData:(id)arg0 forKey:(id)arg1;
// IMP 0x100538918 | @24@0:8@16
- (id)extendedDataForKey:(id)arg0;
// IMP 0x100538978 | v32@0:8@16@24
- (void)setExtendedData:(id)arg0 forKey:(id)arg1;
// IMP 0x100538a10 | v24@0:8@16
- (void)removeDataForKey:(id)arg0;
// IMP 0x100538a68 | v16@0:8
- (void)removeAllData;
// IMP 0x100538b1c | v16@0:8
- (void)removeExpiredData;
// IMP 0x100539270 | @24@0:8@16
- (id)cachePathForKey:(id)arg0;
// IMP 0x1005392e4 | Q16@0:8
- (unsigned long long)totalSize;
// IMP 0x1005394c4 | Q16@0:8
- (unsigned long long)totalCount;
// IMP 0x100539564 | @32@0:8@16@24
- (id)cachePathForKey:(id)arg0 inPath:(id)arg1;
// IMP 0x10053980c | v32@0:8@16@24
- (void)moveCacheDirectoryFromPath:(id)arg0 toPath:(id)arg1;
// IMP 0x100539ac8 | @16@0:8
- (id)config;
// IMP 0x100539ad0 | @16@0:8
- (id)diskCachePath;
// IMP 0x100539ad8 | v24@0:8@16
- (void)setDiskCachePath:(id)arg0;
// IMP 0x100539ae0 | @16@0:8
- (id)fileManager;
// IMP 0x100539ae8 | v24@0:8@16
- (void)setFileManager:(id)arg0;
// IMP 0x100539af4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
