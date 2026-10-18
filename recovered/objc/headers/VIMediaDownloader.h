// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c428
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIMediaDownloader : NSObject
// ivar _saveToCache encoding=B offset=8
// ivar _downloadToEnd encoding=B offset=9
// ivar _url encoding=@"NSURL" offset=16
// ivar _delegate encoding=@"<VIMediaDownloaderDelegate>" offset=24
// ivar _info encoding=@"VIContentInfo" offset=32
// ivar _task encoding=@"NSURLSessionDataTask" offset=40
// ivar _cacheWorker encoding=@"VIMediaCacheWorker" offset=48
// ivar _actionWorker encoding=@"VIActionWorker" offset=56
// property url attributes=T@"NSURL",&,N,V_url
// property task attributes=T@"NSURLSessionDataTask",&,N,V_task
// property cacheWorker attributes=T@"VIMediaCacheWorker",&,N,V_cacheWorker
// property actionWorker attributes=T@"VIActionWorker",&,N,V_actionWorker
// property downloadToEnd attributes=TB,N,V_downloadToEnd
// property delegate attributes=T@"<VIMediaDownloaderDelegate>",W,N,V_delegate
// property info attributes=T@"VIContentInfo",&,N,V_info
// property saveToCache attributes=TB,N,V_saveToCache
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100085a14 | v16@0:8
- (void)dealloc;
// IMP 0x100085af8 | @32@0:8@16@24
- (id)initWithURL:(id)arg0 cacheWorker:(id)arg1;
// IMP 0x100085e20 | v36@0:8Q16Q24B32
- (void)downloadTaskFromOffset:(unsigned long long)arg0 length:(unsigned long long)arg1 toEnd:(BOOL)arg2;
// IMP 0x10008602c | v16@0:8
- (void)downloadFromStartToEnd;
// IMP 0x100086250 | v16@0:8
- (void)cancel;
// IMP 0x100086314 | v32@0:8@16@24
- (void)actionWorker:(id)arg0 didReceiveResponse:(id)arg1;
// IMP 0x100086d60 | v36@0:8@16@24B32
- (void)actionWorker:(id)arg0 didReceiveData:(id)arg1 isLocal:(BOOL)arg2;
// IMP 0x100086f4c | v32@0:8@16@24
- (void)actionWorker:(id)arg0 didFinishWithError:(id)arg1;
// IMP 0x100087288 | @16@0:8
- (id)url;
// IMP 0x1000872a8 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1000872e8 | @16@0:8
- (id)delegate;
// IMP 0x10008734c | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100087370 | @16@0:8
- (id)info;
// IMP 0x10008739c | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x1000873cc | B16@0:8
- (BOOL)saveToCache;
// IMP 0x1000873ec | v20@0:8B16
- (void)setSaveToCache:(BOOL)arg0;
// IMP 0x100087400 | @16@0:8
- (id)task;
// IMP 0x100087420 | v24@0:8@16
- (void)setTask:(id)arg0;
// IMP 0x1000874b0 | @16@0:8
- (id)cacheWorker;
// IMP 0x1000874e0 | v24@0:8@16
- (void)setCacheWorker:(id)arg0;
// IMP 0x100087514 | @16@0:8
- (id)actionWorker;
// IMP 0x100087528 | v24@0:8@16
- (void)setActionWorker:(id)arg0;
// IMP 0x100087590 | B16@0:8
- (BOOL)downloadToEnd;
// IMP 0x1000875c4 | v20@0:8B16
- (void)setDownloadToEnd:(BOOL)arg0;
// IMP 0x10008760c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
