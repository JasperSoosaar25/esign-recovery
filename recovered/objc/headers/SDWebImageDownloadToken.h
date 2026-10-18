// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90f30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloadToken : NSObject
// ivar _cancelled encoding=B offset=8
// ivar _url encoding=@"NSURL" offset=16
// ivar _request encoding=@"NSURLRequest" offset=24
// ivar _response encoding=@"NSURLResponse" offset=32
// ivar _metrics encoding=@"NSURLSessionTaskMetrics" offset=40
// ivar _downloadOperationCancelToken encoding=@ offset=48
// ivar _downloadOperation encoding=@"NSOperation<SDWebImageDownloaderOperation>" offset=56
// property url attributes=T@"NSURL",&,N,V_url
// property request attributes=T@"NSURLRequest",&,N,V_request
// property response attributes=T@"NSURLResponse",&,N,V_response
// property metrics attributes=T@"NSURLSessionTaskMetrics",&,N,V_metrics
// property downloadOperationCancelToken attributes=T@,W,N,V_downloadOperationCancelToken
// property downloadOperation attributes=T@"NSOperation<SDWebImageDownloaderOperation>",W,N,V_downloadOperation
// property cancelled attributes=TB,N,GisCancelled,V_cancelled
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054cfd0 | v16@0:8
- (void)dealloc;
// IMP 0x10054d07c | @24@0:8@16
- (id)initWithDownloadOperation:(id)arg0;
// IMP 0x10054d164 | v24@0:8@16
- (void)downloadDidReceiveResponse:(id)arg0;
// IMP 0x10054d1ec | v24@0:8@16
- (void)downloadDidStop:(id)arg0;
// IMP 0x10054d288 | v16@0:8
- (void)cancel;
// IMP 0x10054d33c | @16@0:8
- (id)url;
// IMP 0x10054d344 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x10054d350 | @16@0:8
- (id)request;
// IMP 0x10054d358 | v24@0:8@16
- (void)setRequest:(id)arg0;
// IMP 0x10054d364 | @16@0:8
- (id)response;
// IMP 0x10054d36c | v24@0:8@16
- (void)setResponse:(id)arg0;
// IMP 0x10054d378 | @16@0:8
- (id)metrics;
// IMP 0x10054d380 | v24@0:8@16
- (void)setMetrics:(id)arg0;
// IMP 0x10054d38c | @16@0:8
- (id)downloadOperationCancelToken;
// IMP 0x10054d3a4 | v24@0:8@16
- (void)setDownloadOperationCancelToken:(id)arg0;
// IMP 0x10054d3b0 | @16@0:8
- (id)downloadOperation;
// IMP 0x10054d3c8 | v24@0:8@16
- (void)setDownloadOperation:(id)arg0;
// IMP 0x10054d3d4 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x10054d3dc | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x10054d3e4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
