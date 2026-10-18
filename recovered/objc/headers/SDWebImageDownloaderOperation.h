// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91080
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloaderOperation : NSOperation
// ivar _executing encoding=B offset=8
// ivar _finished encoding=B offset=9
// ivar _request encoding=@"NSURLRequest" offset=16
// ivar _response encoding=@"NSURLResponse" offset=24
// ivar _dataTask encoding=@"NSURLSessionTask" offset=32
// ivar _metrics encoding=@"NSURLSessionTaskMetrics" offset=40
// ivar _credential encoding=@"NSURLCredential" offset=48
// ivar _minimumProgressInterval encoding=d offset=56
// ivar _acceptableStatusCodes encoding=@"NSIndexSet" offset=64
// ivar _acceptableContentTypes encoding=@"NSSet" offset=72
// ivar _options encoding=Q offset=80
// ivar _context encoding=@"NSDictionary" offset=88
// ivar _callbackBlocks encoding=@"NSMutableArray" offset=96
// ivar _imageData encoding=@"NSMutableData" offset=104
// ivar _cachedData encoding=@"NSData" offset=112
// ivar _expectedSize encoding=Q offset=120
// ivar _receivedSize encoding=Q offset=128
// ivar _responseError encoding=@"NSError" offset=136
// ivar _previousProgress encoding=d offset=144
// ivar _responseModifier encoding=@"<SDWebImageDownloaderResponseModifier>" offset=152
// ivar _decryptor encoding=@"<SDWebImageDownloaderDecryptor>" offset=160
// ivar _unownedSession encoding=@"NSURLSession" offset=168
// ivar _ownedSession encoding=@"NSURLSession" offset=176
// ivar _coderQueue encoding=@"NSOperationQueue" offset=184
// ivar _backgroundTaskId encoding=Q offset=192
// property callbackBlocks attributes=T@"NSMutableArray",&,N,V_callbackBlocks
// property options attributes=TQ,N,V_options
// property context attributes=T@"NSDictionary",C,N,V_context
// property executing attributes=TB,N,GisExecuting,V_executing
// property finished attributes=TB,N,GisFinished,V_finished
// property imageData attributes=T@"NSMutableData",&,N,V_imageData
// property cachedData attributes=T@"NSData",C,N,V_cachedData
// property expectedSize attributes=TQ,N,V_expectedSize
// property receivedSize attributes=TQ,N,V_receivedSize
// property response attributes=T@"NSURLResponse",&,N,V_response
// property responseError attributes=T@"NSError",&,N,V_responseError
// property previousProgress attributes=Td,N,V_previousProgress
// property responseModifier attributes=T@"<SDWebImageDownloaderResponseModifier>",&,N,V_responseModifier
// property decryptor attributes=T@"<SDWebImageDownloaderDecryptor>",&,N,V_decryptor
// property unownedSession attributes=T@"NSURLSession",W,N,V_unownedSession
// property ownedSession attributes=T@"NSURLSession",&,N,V_ownedSession
// property dataTask attributes=T@"NSURLSessionTask",&,N,V_dataTask
// property metrics attributes=T@"NSURLSessionTaskMetrics",&,N,V_metrics
// property coderQueue attributes=T@"NSOperationQueue",&,N,V_coderQueue
// property backgroundTaskId attributes=TQ,N,V_backgroundTaskId
// property request attributes=T@"NSURLRequest",R,N,V_request
// property credential attributes=T@"NSURLCredential",&,N,V_credential
// property minimumProgressInterval attributes=Td,N,V_minimumProgressInterval
// property acceptableStatusCodes attributes=T@"NSIndexSet",C,N,V_acceptableStatusCodes
// property acceptableContentTypes attributes=T@"NSSet",C,N,V_acceptableContentTypes
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054dce4 | @16@0:8
- (id)init;
// IMP 0x10054dcf4 | @40@0:8@16@24Q32
- (id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(unsigned long long)arg2;
// IMP 0x10054dcfc | @48@0:8@16@24Q32@40
- (id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
// IMP 0x10054def8 | @32@0:8@?16@?24
- (id)addHandlersForProgress:(id /* block */)arg0 completed:(id /* block */)arg1;
// IMP 0x10054e014 | @24@0:8@16
- (id)callbacksForKey:(id)arg0;
// IMP 0x10054e10c | B24@0:8@16
- (BOOL)cancel:(id)arg0;
// IMP 0x10054e514 | v16@0:8
- (void)start;
// IMP 0x10054ee1c | v16@0:8
- (void)cancel;
// IMP 0x10054ee68 | v16@0:8
- (void)cancelInternal;
// IMP 0x10054f108 | v16@0:8
- (void)done;
// IMP 0x10054f13c | v16@0:8
- (void)reset;
// IMP 0x10054f264 | v20@0:8B16
- (void)setFinished:(BOOL)arg0;
// IMP 0x10054f2b0 | v20@0:8B16
- (void)setExecuting:(BOOL)arg0;
// IMP 0x10054f2fc | B16@0:8
- (BOOL)isConcurrent;
// IMP 0x10054f304 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10054faf4 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x100550110 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1005501a0 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x100550a14 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x100550b80 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
// IMP 0x100550bb4 | B16@0:8
- (BOOL)shouldContinueWhenAppEntersBackground;
// IMP 0x100550bcc | v24@0:8@16
- (void)callCompletionBlocksWithError:(id)arg0;
// IMP 0x100550be0 | v44@0:8@16@24@32B40
- (void)callCompletionBlocksWithImage:(id)arg0 imageData:(id)arg1 error:(id)arg2 finished:(BOOL)arg3;
// IMP 0x100550fd4 | B16@0:8
- (BOOL)isExecuting;
// IMP 0x100550fe4 | B16@0:8
- (BOOL)isFinished;
// IMP 0x100550ff4 | @16@0:8
- (id)request;
// IMP 0x100551004 | @16@0:8
- (id)response;
// IMP 0x100551014 | v24@0:8@16
- (void)setResponse:(id)arg0;
// IMP 0x100551028 | @16@0:8
- (id)dataTask;
// IMP 0x100551038 | v24@0:8@16
- (void)setDataTask:(id)arg0;
// IMP 0x10055104c | @16@0:8
- (id)metrics;
// IMP 0x10055105c | v24@0:8@16
- (void)setMetrics:(id)arg0;
// IMP 0x100551070 | @16@0:8
- (id)credential;
// IMP 0x100551080 | v24@0:8@16
- (void)setCredential:(id)arg0;
// IMP 0x100551094 | d16@0:8
- (double)minimumProgressInterval;
// IMP 0x1005510a4 | v24@0:8d16
- (void)setMinimumProgressInterval:(double)arg0;
// IMP 0x1005510b4 | @16@0:8
- (id)acceptableStatusCodes;
// IMP 0x1005510c4 | v24@0:8@16
- (void)setAcceptableStatusCodes:(id)arg0;
// IMP 0x1005510d0 | @16@0:8
- (id)acceptableContentTypes;
// IMP 0x1005510e0 | v24@0:8@16
- (void)setAcceptableContentTypes:(id)arg0;
// IMP 0x1005510ec | Q16@0:8
- (unsigned long long)options;
// IMP 0x1005510fc | v24@0:8Q16
- (void)setOptions:(unsigned long long)arg0;
// IMP 0x10055110c | @16@0:8
- (id)context;
// IMP 0x10055111c | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x100551128 | @16@0:8
- (id)callbackBlocks;
// IMP 0x100551138 | v24@0:8@16
- (void)setCallbackBlocks:(id)arg0;
// IMP 0x10055114c | @16@0:8
- (id)imageData;
// IMP 0x10055115c | v24@0:8@16
- (void)setImageData:(id)arg0;
// IMP 0x100551170 | @16@0:8
- (id)cachedData;
// IMP 0x100551180 | v24@0:8@16
- (void)setCachedData:(id)arg0;
// IMP 0x10055118c | Q16@0:8
- (unsigned long long)expectedSize;
// IMP 0x10055119c | v24@0:8Q16
- (void)setExpectedSize:(unsigned long long)arg0;
// IMP 0x1005511ac | Q16@0:8
- (unsigned long long)receivedSize;
// IMP 0x1005511bc | v24@0:8Q16
- (void)setReceivedSize:(unsigned long long)arg0;
// IMP 0x1005511cc | @16@0:8
- (id)responseError;
// IMP 0x1005511dc | v24@0:8@16
- (void)setResponseError:(id)arg0;
// IMP 0x1005511f0 | d16@0:8
- (double)previousProgress;
// IMP 0x100551200 | v24@0:8d16
- (void)setPreviousProgress:(double)arg0;
// IMP 0x100551210 | @16@0:8
- (id)responseModifier;
// IMP 0x100551220 | v24@0:8@16
- (void)setResponseModifier:(id)arg0;
// IMP 0x100551234 | @16@0:8
- (id)decryptor;
// IMP 0x100551244 | v24@0:8@16
- (void)setDecryptor:(id)arg0;
// IMP 0x100551258 | @16@0:8
- (id)unownedSession;
// IMP 0x100551278 | v24@0:8@16
- (void)setUnownedSession:(id)arg0;
// IMP 0x10055128c | @16@0:8
- (id)ownedSession;
// IMP 0x10055129c | v24@0:8@16
- (void)setOwnedSession:(id)arg0;
// IMP 0x1005512b0 | @16@0:8
- (id)coderQueue;
// IMP 0x1005512c0 | v24@0:8@16
- (void)setCoderQueue:(id)arg0;
// IMP 0x1005512d4 | Q16@0:8
- (unsigned long long)backgroundTaskId;
// IMP 0x1005512e4 | v24@0:8Q16
- (void)setBackgroundTaskId:(unsigned long long)arg0;
// IMP 0x1005512f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100550b88 | Q24@0:8Q16
+ (unsigned long long)imageOptionsFromDownloaderOptions:(unsigned long long)arg0;
@end
