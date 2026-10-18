// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91608
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImagePrefetchToken : NSObject
// ivar _skippedCount encoding=AQ offset=8
// ivar _finishedCount encoding=AQ offset=16
// ivar _isAllFinished encoding={atomic_flag="_Value"AB} offset=24
// ivar _totalCount encoding=Q offset=32
// ivar _prefetchOperationsLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=40
// ivar _loadOperationsLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=44
// ivar _urls encoding=@"NSArray" offset=48
// ivar _loadOperations encoding=@"NSPointerArray" offset=56
// ivar _prefetchOperations encoding=@"NSPointerArray" offset=64
// ivar _prefetcher encoding=@"SDWebImagePrefetcher" offset=72
// ivar _completionBlock encoding=@? offset=80
// ivar _progressBlock encoding=@? offset=88
// property urls attributes=T@"NSArray",C,N,V_urls
// property loadOperations attributes=T@"NSPointerArray",&,N,V_loadOperations
// property prefetchOperations attributes=T@"NSPointerArray",&,N,V_prefetchOperations
// property prefetcher attributes=T@"SDWebImagePrefetcher",W,N,V_prefetcher
// property completionBlock attributes=T@?,C,N,V_completionBlock
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property cancelled attributes=TB,R,N,GisCancelled
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100557a70 | @16@0:8
- (id)init;
// IMP 0x100557aac | v16@0:8
- (void)cancel;
// IMP 0x100557d38 | @16@0:8
- (id)urls;
// IMP 0x100557d40 | v24@0:8@16
- (void)setUrls:(id)arg0;
// IMP 0x100557d48 | @16@0:8
- (id)loadOperations;
// IMP 0x100557d50 | v24@0:8@16
- (void)setLoadOperations:(id)arg0;
// IMP 0x100557d5c | @16@0:8
- (id)prefetchOperations;
// IMP 0x100557d64 | v24@0:8@16
- (void)setPrefetchOperations:(id)arg0;
// IMP 0x100557d70 | @16@0:8
- (id)prefetcher;
// IMP 0x100557d88 | v24@0:8@16
- (void)setPrefetcher:(id)arg0;
// IMP 0x100557d94 | @?16@0:8
- (id /* block */)completionBlock;
// IMP 0x100557d9c | v24@0:8@?16
- (void)setCompletionBlock:(id /* block */)arg0;
// IMP 0x100557da4 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x100557dac | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x100557db4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
