// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c915e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImagePrefetcher : NSObject
// ivar _manager encoding=@"SDWebImageManager" offset=8
// ivar _options encoding=Q offset=16
// ivar _context encoding=@"NSDictionary" offset=24
// ivar _delegateQueue encoding=@"NSObject<OS_dispatch_queue>" offset=32
// ivar _delegate encoding=@"<SDWebImagePrefetcherDelegate>" offset=40
// ivar _runningTokens encoding=@"NSMutableSet" offset=48
// ivar _prefetchQueue encoding=@"NSOperationQueue" offset=56
// property manager attributes=T@"SDWebImageManager",&,N,V_manager
// property runningTokens attributes=T@"NSMutableSet",&,V_runningTokens
// property prefetchQueue attributes=T@"NSOperationQueue",&,N,V_prefetchQueue
// property maxConcurrentPrefetchCount attributes=TQ,N
// property options attributes=TQ,N,V_options
// property context attributes=T@"NSDictionary",C,N,V_context
// property delegateQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_delegateQueue
// property delegate attributes=T@"<SDWebImagePrefetcherDelegate>",W,N,V_delegate
// IMP 0x100556754 | @16@0:8
- (id)init;
// IMP 0x10055679c | @24@0:8@16
- (id)initWithImageManager:(id)arg0;
// IMP 0x100556884 | v24@0:8Q16
- (void)setMaxConcurrentPrefetchCount:(unsigned long long)arg0;
// IMP 0x1005568bc | Q16@0:8
- (unsigned long long)maxConcurrentPrefetchCount;
// IMP 0x1005568f8 | @24@0:8@16
- (id)prefetchURLs:(id)arg0;
// IMP 0x100556904 | @40@0:8@16@?24@?32
- (id)prefetchURLs:(id)arg0 progress:(id /* block */)arg1 completed:(id /* block */)arg2;
// IMP 0x100556a94 | v24@0:8@16
- (void)startPrefetchWithToken:(id)arg0;
// IMP 0x100556f88 | v16@0:8
- (void)cancelPrefetching;
// IMP 0x10055703c | v32@0:8@16@24
- (void)callProgressBlockForToken:(id)arg0 imageURL:(id)arg1;
// IMP 0x100557220 | v24@0:8@16
- (void)callCompletionBlockForToken:(id)arg0;
// IMP 0x1005573e8 | Q16@0:8
- (unsigned long long)tokenTotalCount;
// IMP 0x100557534 | Q16@0:8
- (unsigned long long)tokenSkippedCount;
// IMP 0x100557680 | Q16@0:8
- (unsigned long long)tokenFinishedCount;
// IMP 0x1005577cc | v24@0:8@16
- (void)addRunningToken:(id)arg0;
// IMP 0x100557864 | v24@0:8@16
- (void)removeRunningToken:(id)arg0;
// IMP 0x1005578fc | Q16@0:8
- (unsigned long long)countOfRunningTokens;
// IMP 0x100557980 | @16@0:8
- (id)manager;
// IMP 0x100557988 | v24@0:8@16
- (void)setManager:(id)arg0;
// IMP 0x100557994 | Q16@0:8
- (unsigned long long)options;
// IMP 0x10055799c | v24@0:8Q16
- (void)setOptions:(unsigned long long)arg0;
// IMP 0x1005579a4 | @16@0:8
- (id)context;
// IMP 0x1005579ac | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x1005579b4 | @16@0:8
- (id)delegateQueue;
// IMP 0x1005579bc | v24@0:8@16
- (void)setDelegateQueue:(id)arg0;
// IMP 0x1005579c8 | @16@0:8
- (id)delegate;
// IMP 0x1005579e0 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1005579ec | @16@0:8
- (id)runningTokens;
// IMP 0x1005579f8 | v24@0:8@16
- (void)setRunningTokens:(id)arg0;
// IMP 0x100557a00 | @16@0:8
- (id)prefetchQueue;
// IMP 0x100557a08 | v24@0:8@16
- (void)setPrefetchQueue:(id)arg0;
// IMP 0x100557a14 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005566b8 | @16@0:8
+ (id)sharedImagePrefetcher;
@end
