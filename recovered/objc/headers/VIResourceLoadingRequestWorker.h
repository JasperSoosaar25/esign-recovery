// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7ddb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIResourceLoadingRequestWorker : NSObject
// ivar _delegate encoding=@"<VIResourceLoadingRequestWorkerDelegate>" offset=8
// ivar _request encoding=@"AVAssetResourceLoadingRequest" offset=16
// ivar _mediaDownloader encoding=@"VIMediaDownloader" offset=24
// property request attributes=T@"AVAssetResourceLoadingRequest",&,N,V_request
// property mediaDownloader attributes=T@"VIMediaDownloader",&,N,V_mediaDownloader
// property delegate attributes=T@"<VIResourceLoadingRequestWorkerDelegate>",W,N,V_delegate
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10019f768 | @32@0:8@16@24
- (id)initWithMediaDownloader:(id)arg0 resourceLoadingRequest:(id)arg1;
// IMP 0x10019f968 | v16@0:8
- (void)startWork;
// IMP 0x10019fb34 | v16@0:8
- (void)cancel;
// IMP 0x10019fbd0 | v16@0:8
- (void)finish;
// IMP 0x10019fccc | @16@0:8
- (id)loaderCancelledError;
// IMP 0x1001a00cc | v16@0:8
- (void)fullfillContentInfo;
// IMP 0x1001a0450 | v32@0:8@16@24
- (void)mediaDownloader:(id)arg0 didReceiveResponse:(id)arg1;
// IMP 0x1001a04e4 | v32@0:8@16@24
- (void)mediaDownloader:(id)arg0 didReceiveData:(id)arg1;
// IMP 0x1001a0600 | v32@0:8@16@24
- (void)mediaDownloader:(id)arg0 didFinishedWithError:(id)arg1;
// IMP 0x1001a084c | @16@0:8
- (id)delegate;
// IMP 0x1001a0898 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1001a08f4 | @16@0:8
- (id)request;
// IMP 0x1001a0914 | v24@0:8@16
- (void)setRequest:(id)arg0;
// IMP 0x1001a097c | @16@0:8
- (id)mediaDownloader;
// IMP 0x1001a0990 | v24@0:8@16
- (void)setMediaDownloader:(id)arg0;
// IMP 0x1001a0a14 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
