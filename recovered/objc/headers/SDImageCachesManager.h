// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c902f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCachesManager : NSObject
// ivar _cachesLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _queryOperationPolicy encoding=Q offset=16
// ivar _storeOperationPolicy encoding=Q offset=24
// ivar _removeOperationPolicy encoding=Q offset=32
// ivar _containsOperationPolicy encoding=Q offset=40
// ivar _clearOperationPolicy encoding=Q offset=48
// ivar _imageCaches encoding=@"NSMutableArray" offset=56
// property imageCaches attributes=T@"NSMutableArray",&,N,V_imageCaches
// property queryOperationPolicy attributes=TQ,N,V_queryOperationPolicy
// property storeOperationPolicy attributes=TQ,N,V_storeOperationPolicy
// property removeOperationPolicy attributes=TQ,N,V_removeOperationPolicy
// property containsOperationPolicy attributes=TQ,N,V_containsOperationPolicy
// property clearOperationPolicy attributes=TQ,N,V_clearOperationPolicy
// property caches attributes=T@"NSArray",C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100540268 | @16@0:8
- (id)init;
// IMP 0x100540344 | @16@0:8
- (id)caches;
// IMP 0x100540384 | v24@0:8@16
- (void)setCaches:(id)arg0;
// IMP 0x1005403ec | v24@0:8@16
- (void)addCache:(id)arg0;
// IMP 0x100540450 | v24@0:8@16
- (void)removeCache:(id)arg0;
// IMP 0x1005404b4 | @48@0:8@16Q24@32@?40
- (id)queryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
// IMP 0x1005404c0 | @56@0:8@16Q24@32q40@?48
- (id)queryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4;
// IMP 0x1005406d0 | v56@0:8@16@24@32q40@?48
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4;
// IMP 0x1005408b0 | v40@0:8@16q24@?32
- (void)removeImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2;
// IMP 0x100540a38 | v40@0:8@16q24@?32
- (void)containsImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2;
// IMP 0x100540be8 | v32@0:8q16@?24
- (void)clearWithCacheType:(long long)arg0 completion:(id /* block */)arg1;
// IMP 0x100540d40 | v72@0:8@16Q24@32q40@?48@56@64
- (void)concurrentQueryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4 enumerator:(id)arg5 operation:(id)arg6;
// IMP 0x100540ff0 | v72@0:8@16@24@32q40@?48@56@64
- (void)concurrentStoreImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4 enumerator:(id)arg5 operation:(id)arg6;
// IMP 0x10054124c | v56@0:8@16q24@?32@40@48
- (void)concurrentRemoveImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2 enumerator:(id)arg3 operation:(id)arg4;
// IMP 0x100541470 | v56@0:8@16q24@?32@40@48
- (void)concurrentContainsImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2 enumerator:(id)arg3 operation:(id)arg4;
// IMP 0x1005416b4 | v48@0:8q16@?24@32@40
- (void)concurrentClearWithCacheType:(long long)arg0 completion:(id /* block */)arg1 enumerator:(id)arg2 operation:(id)arg3;
// IMP 0x1005418bc | v72@0:8@16Q24@32q40@?48@56@64
- (void)serialQueryImageForKey:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4 enumerator:(id)arg5 operation:(id)arg6;
// IMP 0x100541bbc | v64@0:8@16@24@32q40@?48@56
- (void)serialStoreImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4 enumerator:(id)arg5;
// IMP 0x100541df8 | v48@0:8@16q24@?32@40
- (void)serialRemoveImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2 enumerator:(id)arg3;
// IMP 0x100542038 | v56@0:8@16q24@?32@40@48
- (void)serialContainsImageForKey:(id)arg0 cacheType:(long long)arg1 completion:(id /* block */)arg2 enumerator:(id)arg3 operation:(id)arg4;
// IMP 0x100542318 | v40@0:8q16@?24@32
- (void)serialClearWithCacheType:(long long)arg0 completion:(id /* block */)arg1 enumerator:(id)arg2;
// IMP 0x100542498 | Q16@0:8
- (unsigned long long)queryOperationPolicy;
// IMP 0x1005424a0 | v24@0:8Q16
- (void)setQueryOperationPolicy:(unsigned long long)arg0;
// IMP 0x1005424a8 | Q16@0:8
- (unsigned long long)storeOperationPolicy;
// IMP 0x1005424b0 | v24@0:8Q16
- (void)setStoreOperationPolicy:(unsigned long long)arg0;
// IMP 0x1005424b8 | Q16@0:8
- (unsigned long long)removeOperationPolicy;
// IMP 0x1005424c0 | v24@0:8Q16
- (void)setRemoveOperationPolicy:(unsigned long long)arg0;
// IMP 0x1005424c8 | Q16@0:8
- (unsigned long long)containsOperationPolicy;
// IMP 0x1005424d0 | v24@0:8Q16
- (void)setContainsOperationPolicy:(unsigned long long)arg0;
// IMP 0x1005424d8 | Q16@0:8
- (unsigned long long)clearOperationPolicy;
// IMP 0x1005424e0 | v24@0:8Q16
- (void)setClearOperationPolicy:(unsigned long long)arg0;
// IMP 0x1005424e8 | @16@0:8
- (id)imageCaches;
// IMP 0x1005424f0 | v24@0:8@16
- (void)setImageCaches:(id)arg0;
// IMP 0x1005424fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005401f8 | @16@0:8
+ (id)sharedManager;
@end
