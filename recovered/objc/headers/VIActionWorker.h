// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c388
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIActionWorker : NSObject
// ivar _canSaveToCache encoding=B offset=8
// ivar _cancelled encoding=B offset=9
// ivar _actions encoding=@"NSMutableArray" offset=16
// ivar _delegate encoding=@"<VIActionWorkerDelegate>" offset=24
// ivar _cacheWorker encoding=@"VIMediaCacheWorker" offset=32
// ivar _url encoding=@"NSURL" offset=40
// ivar _session encoding=@"NSURLSession" offset=48
// ivar _sessionDelegateObject encoding=@"VIURLSessionDelegateObject" offset=56
// ivar _task encoding=@"NSURLSessionDataTask" offset=64
// ivar _startOffset encoding=q offset=72
// ivar _notifyTime encoding=d offset=80
// property notifyTime attributes=Td,N,V_notifyTime
// property actions attributes=T@"NSMutableArray",&,N,V_actions
// property canSaveToCache attributes=TB,N,V_canSaveToCache
// property delegate attributes=T@"<VIActionWorkerDelegate>",W,N,V_delegate
// property cancelled attributes=TB,N,GisCancelled,V_cancelled
// property cacheWorker attributes=T@"VIMediaCacheWorker",&,N,V_cacheWorker
// property url attributes=T@"NSURL",&,N,V_url
// property session attributes=T@"NSURLSession",&,N,V_session
// property sessionDelegateObject attributes=T@"VIURLSessionDelegateObject",&,N,V_sessionDelegateObject
// property task attributes=T@"NSURLSessionDataTask",&,N,V_task
// property startOffset attributes=Tq,N,V_startOffset
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1000828b0 | v16@0:8
- (void)dealloc;
// IMP 0x100082920 | @40@0:8@16@24@32
- (id)initWithActions:(id)arg0 url:(id)arg1 cacheWorker:(id)arg2;
// IMP 0x100082b50 | v16@0:8
- (void)start;
// IMP 0x100082bac | v16@0:8
- (void)cancel;
// IMP 0x100082c94 | @16@0:8
- (id)sessionDelegateObject;
// IMP 0x100082d58 | @16@0:8
- (id)session;
// IMP 0x100082f48 | v16@0:8
- (void)processActions;
// IMP 0x100083bf0 | v40@0:8@16@24@?32
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x100083d68 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x100084400 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x100084960 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x100084cb8 | @16@0:8
- (id)actions;
// IMP 0x100084ce4 | v24@0:8@16
- (void)setActions:(id)arg0;
// IMP 0x100084d54 | B16@0:8
- (BOOL)canSaveToCache;
// IMP 0x100084d80 | v20@0:8B16
- (void)setCanSaveToCache:(BOOL)arg0;
// IMP 0x100084da0 | @16@0:8
- (id)delegate;
// IMP 0x100084e04 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100084e60 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x100084e94 | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x100084ed0 | @16@0:8
- (id)cacheWorker;
// IMP 0x100084ee4 | v24@0:8@16
- (void)setCacheWorker:(id)arg0;
// IMP 0x100084f08 | @16@0:8
- (id)url;
// IMP 0x100084f28 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x100084fac | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x10008500c | v24@0:8@16
- (void)setSessionDelegateObject:(id)arg0;
// IMP 0x10008509c | @16@0:8
- (id)task;
// IMP 0x1000850cc | v24@0:8@16
- (void)setTask:(id)arg0;
// IMP 0x100085130 | q16@0:8
- (long long)startOffset;
// IMP 0x100085160 | v24@0:8q16
- (void)setStartOffset:(long long)arg0;
// IMP 0x100085180 | d16@0:8
- (double)notifyTime;
// IMP 0x1000851a0 | v24@0:8d16
- (void)setNotifyTime:(double)arg0;
// IMP 0x1000851cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
