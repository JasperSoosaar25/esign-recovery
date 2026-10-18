// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c940b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYDiskCache : NSObject
// ivar _kv encoding=@"YYKVStorage" offset=8
// ivar _lock encoding=@"NSObject<OS_dispatch_semaphore>" offset=16
// ivar _queue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// ivar _name encoding=@"NSString" offset=32
// ivar _path encoding=@"NSString" offset=40
// ivar _inlineThreshold encoding=Q offset=48
// ivar _customArchiveBlock encoding=@? offset=56
// ivar _customUnarchiveBlock encoding=@? offset=64
// ivar _customFileNameBlock encoding=@? offset=72
// ivar _countLimit encoding=Q offset=80
// ivar _costLimit encoding=Q offset=88
// ivar _ageLimit encoding=d offset=96
// ivar _freeDiskSpaceLimit encoding=Q offset=104
// ivar _autoTrimInterval encoding=d offset=112
// property name attributes=T@"NSString",C,V_name
// property path attributes=T@"NSString",R,V_path
// property inlineThreshold attributes=TQ,R,V_inlineThreshold
// property customArchiveBlock attributes=T@?,C,V_customArchiveBlock
// property customUnarchiveBlock attributes=T@?,C,V_customUnarchiveBlock
// property customFileNameBlock attributes=T@?,C,V_customFileNameBlock
// property countLimit attributes=TQ,V_countLimit
// property costLimit attributes=TQ,V_costLimit
// property ageLimit attributes=Td,V_ageLimit
// property freeDiskSpaceLimit attributes=TQ,V_freeDiskSpaceLimit
// property autoTrimInterval attributes=Td,V_autoTrimInterval
// property errorLogsEnabled attributes=TB
// IMP 0x10058b6c4 | v16@0:8
- (void)_trimRecursively;
// IMP 0x10058b7d8 | v16@0:8
- (void)_trimInBackground;
// IMP 0x10058b8f4 | v24@0:8Q16
- (void)_trimToCost:(unsigned long long)arg0;
// IMP 0x10058b90c | v24@0:8Q16
- (void)_trimToCount:(unsigned long long)arg0;
// IMP 0x10058b924 | v24@0:8d16
- (void)_trimToAge:(double)arg0;
// IMP 0x10058b9a0 | v24@0:8Q16
- (void)_trimToFreeDiskSpace:(unsigned long long)arg0;
// IMP 0x10058bac0 | @24@0:8@16
- (id)_filenameForKey:(id)arg0;
// IMP 0x10058bc24 | v16@0:8
- (void)_appWillBeTerminated;
// IMP 0x10058bc5c | v16@0:8
- (void)dealloc;
// IMP 0x10058bcd4 | @16@0:8
- (id)init;
// IMP 0x10058bd0c | @24@0:8@16
- (id)initWithPath:(id)arg0;
// IMP 0x10058bd14 | @32@0:8@16Q24
- (id)initWithPath:(id)arg0 inlineThreshold:(unsigned long long)arg1;
// IMP 0x10058bfe0 | B24@0:8@16
- (BOOL)containsObjectForKey:(id)arg0;
// IMP 0x10058c050 | v32@0:8@16@?24
- (void)containsObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058c184 | @24@0:8@16
- (id)objectForKey:(id)arg0;
// IMP 0x10058c308 | v32@0:8@16@?24
- (void)objectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058c458 | v32@0:8@16@24
- (void)setObject:(id)arg0 forKey:(id)arg1;
// IMP 0x10058c5c0 | v40@0:8@16@24@?32
- (void)setObject:(id)arg0 forKey:(id)arg1 withBlock:(id /* block */)arg2;
// IMP 0x10058c72c | v24@0:8@16
- (void)removeObjectForKey:(id)arg0;
// IMP 0x10058c78c | v32@0:8@16@?24
- (void)removeObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058c8c4 | v16@0:8
- (void)removeAllObjects;
// IMP 0x10058c8f8 | v24@0:8@?16
- (void)removeAllObjectsWithBlock:(id /* block */)arg0;
// IMP 0x10058c9fc | v32@0:8@?16@?24
- (void)removeAllObjectsWithProgressBlock:(id /* block */)arg0 endBlock:(id /* block */)arg1;
// IMP 0x10058cbb4 | q16@0:8
- (long long)totalCount;
// IMP 0x10058cbf4 | v24@0:8@?16
- (void)totalCountWithBlock:(id /* block */)arg0;
// IMP 0x10058ccf8 | q16@0:8
- (long long)totalCost;
// IMP 0x10058cd38 | v24@0:8@?16
- (void)totalCostWithBlock:(id /* block */)arg0;
// IMP 0x10058ce3c | v24@0:8Q16
- (void)trimToCount:(unsigned long long)arg0;
// IMP 0x10058ce78 | v32@0:8Q16@?24
- (void)trimToCount:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058cf88 | v24@0:8Q16
- (void)trimToCost:(unsigned long long)arg0;
// IMP 0x10058cfc4 | v32@0:8Q16@?24
- (void)trimToCost:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058d0d4 | v24@0:8d16
- (void)trimToAge:(double)arg0;
// IMP 0x10058d118 | v32@0:8d16@?24
- (void)trimToAge:(double)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058d280 | @16@0:8
- (id)description;
// IMP 0x10058d2fc | B16@0:8
- (BOOL)errorLogsEnabled;
// IMP 0x10058d33c | v20@0:8B16
- (void)setErrorLogsEnabled:(BOOL)arg0;
// IMP 0x10058d378 | @16@0:8
- (id)name;
// IMP 0x10058d384 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10058d38c | @16@0:8
- (id)path;
// IMP 0x10058d398 | Q16@0:8
- (unsigned long long)inlineThreshold;
// IMP 0x10058d3a0 | @?16@0:8
- (id /* block */)customArchiveBlock;
// IMP 0x10058d3ac | v24@0:8@?16
- (void)setCustomArchiveBlock:(id /* block */)arg0;
// IMP 0x10058d3b4 | @?16@0:8
- (id /* block */)customUnarchiveBlock;
// IMP 0x10058d3c0 | v24@0:8@?16
- (void)setCustomUnarchiveBlock:(id /* block */)arg0;
// IMP 0x10058d3c8 | @?16@0:8
- (id /* block */)customFileNameBlock;
// IMP 0x10058d3d4 | v24@0:8@?16
- (void)setCustomFileNameBlock:(id /* block */)arg0;
// IMP 0x10058d3dc | Q16@0:8
- (unsigned long long)countLimit;
// IMP 0x10058d3e4 | v24@0:8Q16
- (void)setCountLimit:(unsigned long long)arg0;
// IMP 0x10058d3ec | Q16@0:8
- (unsigned long long)costLimit;
// IMP 0x10058d3f4 | v24@0:8Q16
- (void)setCostLimit:(unsigned long long)arg0;
// IMP 0x10058d3fc | d16@0:8
- (double)ageLimit;
// IMP 0x10058d408 | v24@0:8d16
- (void)setAgeLimit:(double)arg0;
// IMP 0x10058d414 | Q16@0:8
- (unsigned long long)freeDiskSpaceLimit;
// IMP 0x10058d41c | v24@0:8Q16
- (void)setFreeDiskSpaceLimit:(unsigned long long)arg0;
// IMP 0x10058d424 | d16@0:8
- (double)autoTrimInterval;
// IMP 0x10058d430 | v24@0:8d16
- (void)setAutoTrimInterval:(double)arg0;
// IMP 0x10058d43c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10058d230 | @24@0:8@16
+ (id)getExtendedDataFromObject:(id)arg0;
// IMP 0x10058d264 | v32@0:8@16@24
+ (void)setExtendedData:(id)arg0 toObject:(id)arg1;
@end
