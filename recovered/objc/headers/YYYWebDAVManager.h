// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81530
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDAVManager : NSObject
// ivar _timeout encoding=q offset=8
// ivar _username encoding=@"NSString" offset=16
// ivar _password encoding=@"NSString" offset=24
// ivar _baseUrl encoding=@"NSURL" offset=32
// ivar _session encoding=@"NSURLSession" offset=40
// ivar _queue encoding=@"NSOperationQueue" offset=48
// ivar _dataCacheDic encoding=@"NSMutableDictionary" offset=56
// property session attributes=T@"NSURLSession",&,N,V_session
// property queue attributes=T@"NSOperationQueue",&,N,V_queue
// property dataCacheDic attributes=T@"NSMutableDictionary",&,N,V_dataCacheDic
// property timeout attributes=Tq,N,V_timeout
// property username attributes=T@"NSString",C,N,V_username
// property password attributes=T@"NSString",C,N,V_password
// property baseUrl attributes=T@"NSURL",C,N,V_baseUrl
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10038192c | @16@0:8
- (id)init;
// IMP 0x100381bd8 | @24@0:8@16
- (id)urlForPath:(id)arg0;
// IMP 0x100381d20 | v32@0:8@16@?24
- (void)fileListWithPath:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x100382c18 | v32@0:8@16@?24
- (void)removeItemWithPath:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x100382ea4 | v32@0:8@16@?24
- (void)createDirectoryWithPath:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x100383170 | v40@0:8@16@24@?32
- (void)copyItemWithPath:(id)arg0 toPath:(id)arg1 completion:(id /* block */)arg2;
// IMP 0x10038375c | v40@0:8@16@24@?32
- (void)moveItemWithPath:(id)arg0 toPath:(id)arg1 completion:(id /* block */)arg2;
// IMP 0x100383da4 | v48@0:8@16@24@?32@?40
- (void)uploadFileWithPath:(id)arg0 fileUrl:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
// IMP 0x100384cd0 | v40@0:8@16@24@?32
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x100384fe0 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x100385374 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1003855ac | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x100385700 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x1003868ec | q16@0:8
- (long long)timeout;
// IMP 0x100386918 | v24@0:8q16
- (void)setTimeout:(long long)arg0;
// IMP 0x100386954 | @16@0:8
- (id)username;
// IMP 0x100386980 | v24@0:8@16
- (void)setUsername:(id)arg0;
// IMP 0x100386a04 | @16@0:8
- (id)password;
// IMP 0x100386a30 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x100386a9c | @16@0:8
- (id)baseUrl;
// IMP 0x100386abc | v24@0:8@16
- (void)setBaseUrl:(id)arg0;
// IMP 0x100386ac4 | @16@0:8
- (id)session;
// IMP 0x100386ae4 | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x100386afc | @16@0:8
- (id)queue;
// IMP 0x100386b1c | v24@0:8@16
- (void)setQueue:(id)arg0;
// IMP 0x100386b7c | @16@0:8
- (id)dataCacheDic;
// IMP 0x100386b90 | v24@0:8@16
- (void)setDataCacheDic:(id)arg0;
// IMP 0x100386c00 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
