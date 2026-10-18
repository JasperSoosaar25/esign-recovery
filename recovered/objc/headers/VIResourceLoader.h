// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e308
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIResourceLoader : NSObject
// ivar _cancelled encoding=B offset=8
// ivar _url encoding=@"NSURL" offset=16
// ivar _delegate encoding=@"<VIResourceLoaderDelegate>" offset=24
// ivar _cacheWorker encoding=@"VIMediaCacheWorker" offset=32
// ivar _pendingRequestWorkers encoding=@"NSMutableArray" offset=40
// property url attributes=T@"NSURL",&,N,V_url
// property cacheWorker attributes=T@"VIMediaCacheWorker",&,N,V_cacheWorker
// property pendingRequestWorkers attributes=T@"NSMutableArray",&,N,V_pendingRequestWorkers
// property cancelled attributes=TB,N,GisCancelled,V_cancelled
// property delegate attributes=T@"<VIResourceLoaderDelegate>",W,N,V_delegate
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1001ded38 | v16@0:8
- (void)dealloc;
// IMP 0x1001dedd0 | @24@0:8@16
- (id)initWithURL:(id)arg0;
// IMP 0x1001deee8 | @16@0:8
- (id)init;
// IMP 0x1001def30 | v24@0:8@16
- (void)addRequest:(id)arg0;
// IMP 0x1001defc4 | v24@0:8@16
- (void)removeRequest:(id)arg0;
// IMP 0x1001df3f8 | v16@0:8
- (void)cancel;
// IMP 0x1001df4ec | v32@0:8@16@24
- (void)resourceLoadingRequestWorker:(id)arg0 didCompleteWithError:(id)arg1;
// IMP 0x1001df864 | v24@0:8@16
- (void)startWorkerWithRequest:(id)arg0;
// IMP 0x1001dfb1c | @16@0:8
- (id)loaderCancelledError;
// IMP 0x1001e0080 | @16@0:8
- (id)url;
// IMP 0x1001e00ac | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1001e0114 | @16@0:8
- (id)delegate;
// IMP 0x1001e0138 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1001e0194 | @16@0:8
- (id)cacheWorker;
// IMP 0x1001e01a8 | v24@0:8@16
- (void)setCacheWorker:(id)arg0;
// IMP 0x1001e0210 | @16@0:8
- (id)pendingRequestWorkers;
// IMP 0x1001e0224 | v24@0:8@16
- (void)setPendingRequestWorkers:(id)arg0;
// IMP 0x1001e0280 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x1001e02a8 | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x1001e02bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
