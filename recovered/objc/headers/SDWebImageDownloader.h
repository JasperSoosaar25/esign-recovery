// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90f08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloader : NSObject
// ivar _HTTPHeadersLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _operationsLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=12
// ivar _config encoding=@"SDWebImageDownloaderConfig" offset=16
// ivar _requestModifier encoding=@"<SDWebImageDownloaderRequestModifier>" offset=24
// ivar _responseModifier encoding=@"<SDWebImageDownloaderResponseModifier>" offset=32
// ivar _decryptor encoding=@"<SDWebImageDownloaderDecryptor>" offset=40
// ivar _downloadQueue encoding=@"NSOperationQueue" offset=48
// ivar _URLOperations encoding=@"NSMutableDictionary" offset=56
// ivar _HTTPHeaders encoding=@"NSMutableDictionary" offset=64
// ivar _session encoding=@"NSURLSession" offset=72
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property downloadQueue attributes=T@"NSOperationQueue",&,N,V_downloadQueue
// property URLOperations attributes=T@"NSMutableDictionary",&,N,V_URLOperations
// property HTTPHeaders attributes=T@"NSMutableDictionary",&,N,V_HTTPHeaders
// property session attributes=T@"NSURLSession",&,N,V_session
// property config attributes=T@"SDWebImageDownloaderConfig",R,C,N,V_config
// property requestModifier attributes=T@"<SDWebImageDownloaderRequestModifier>",&,N,V_requestModifier
// property responseModifier attributes=T@"<SDWebImageDownloaderResponseModifier>",&,N,V_responseModifier
// property decryptor attributes=T@"<SDWebImageDownloaderDecryptor>",&,N,V_decryptor
// property sessionConfiguration attributes=T@"NSURLSessionConfiguration",R,N
// property suspended attributes=TB,N,GisSuspended
// property currentDownloadCount attributes=TQ,R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054d43c | B24@0:8@16
- (BOOL)canRequestImageForURL:(id)arg0;
// IMP 0x10054d448 | B40@0:8@16Q24@32
- (BOOL)canRequestImageForURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10054d454 | @56@0:8@16Q24@32@?40@?48
- (id)requestImageWithURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 progress:(id /* block */)arg3 completed:(id /* block */)arg4;
// IMP 0x10054d598 | B32@0:8@16@24
- (BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1;
// IMP 0x10054d5a4 | B48@0:8@16@24Q32@40
- (BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
// IMP 0x10054b0d0 | @16@0:8
- (id)init;
// IMP 0x10054b120 | @24@0:8@16
- (id)initWithConfig:(id)arg0;
// IMP 0x10054b5e8 | v16@0:8
- (void)dealloc;
// IMP 0x10054b6cc | v20@0:8B16
- (void)invalidateSessionAndCancel:(BOOL)arg0;
// IMP 0x10054b750 | v32@0:8@16@24
- (void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1;
// IMP 0x10054b7e0 | @24@0:8@16
- (id)valueForHTTPHeaderField:(id)arg0;
// IMP 0x10054b86c | @32@0:8@16@?24
- (id)downloadImageWithURL:(id)arg0 completed:(id /* block */)arg1;
// IMP 0x10054b87c | @48@0:8@16Q24@?32@?40
- (id)downloadImageWithURL:(id)arg0 options:(unsigned long long)arg1 progress:(id /* block */)arg2 completed:(id /* block */)arg3;
// IMP 0x10054b88c | @56@0:8@16Q24@32@?40@?48
- (id)downloadImageWithURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 progress:(id /* block */)arg3 completed:(id /* block */)arg4;
// IMP 0x10054bd60 | @40@0:8@16Q24@32
- (id)createDownloaderOperationWithUrl:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10054c4e4 | v16@0:8
- (void)cancelAllDownloads;
// IMP 0x10054c514 | B16@0:8
- (BOOL)isSuspended;
// IMP 0x10054c550 | v20@0:8B16
- (void)setSuspended:(BOOL)arg0;
// IMP 0x10054c588 | Q16@0:8
- (unsigned long long)currentDownloadCount;
// IMP 0x10054c5c4 | @16@0:8
- (id)sessionConfiguration;
// IMP 0x10054c608 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x10054c748 | @24@0:8@16
- (id)operationWithTask:(id)arg0;
// IMP 0x10054c91c | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10054ca00 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x10054caa8 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10054cb8c | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x10054cc34 | v56@0:8@16@24@32@40@?48
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
// IMP 0x10054cd34 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10054ce1c | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
// IMP 0x10054cec4 | @16@0:8
- (id)config;
// IMP 0x10054cecc | @16@0:8
- (id)requestModifier;
// IMP 0x10054ced4 | v24@0:8@16
- (void)setRequestModifier:(id)arg0;
// IMP 0x10054cee0 | @16@0:8
- (id)responseModifier;
// IMP 0x10054cee8 | v24@0:8@16
- (void)setResponseModifier:(id)arg0;
// IMP 0x10054cef4 | @16@0:8
- (id)decryptor;
// IMP 0x10054cefc | v24@0:8@16
- (void)setDecryptor:(id)arg0;
// IMP 0x10054cf08 | @16@0:8
- (id)downloadQueue;
// IMP 0x10054cf10 | v24@0:8@16
- (void)setDownloadQueue:(id)arg0;
// IMP 0x10054cf1c | @16@0:8
- (id)URLOperations;
// IMP 0x10054cf24 | v24@0:8@16
- (void)setURLOperations:(id)arg0;
// IMP 0x10054cf30 | @16@0:8
- (id)HTTPHeaders;
// IMP 0x10054cf38 | v24@0:8@16
- (void)setHTTPHeaders:(id)arg0;
// IMP 0x10054cf44 | @16@0:8
- (id)session;
// IMP 0x10054cf4c | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x10054cf58 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054aec4 | v16@0:8
+ (void)initialize;
// IMP 0x10054b034 | @16@0:8
+ (id)sharedDownloader;
@end
