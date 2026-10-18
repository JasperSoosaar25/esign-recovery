// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c965e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYHttpRequest : NSObject
// ivar _completionBlock encoding=@? offset=8
// ivar _request encoding=@"NSMutableURLRequest" offset=16
// ivar _dataTask encoding=@"NSURLSessionDataTask" offset=24
// ivar _loading encoding=B offset=32
// property completionBlock attributes=T@?,C,N,V_completionBlock
// property request attributes=T@"NSMutableURLRequest",&,N,V_request
// property dataTask attributes=T@"NSURLSessionDataTask",&,N,V_dataTask
// property loading attributes=TB,GisLoading,V_loading
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100672850 | @48@0:8@16@24@32@?40
- (id)initWithUrlString:(id)arg0 requestData:(id)arg1 headerInfo:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x100672ca0 | @24@0:8@16
- (id)stringByAddingPercentEncodingForFormData:(id)arg0;
// IMP 0x100672e0c | @32@0:8@16@?24
- (id)initWithUrlRequest:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x100672eb8 | @16@0:8
- (id)dataTask;
// IMP 0x100673108 | v16@0:8
- (void)sendUrlConnectionRequest;
// IMP 0x100673340 | v16@0:8
- (void)start;
// IMP 0x100673410 | v16@0:8
- (void)cancel;
// IMP 0x100673500 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006734b8 | @?16@0:8
- (id /* block */)completionBlock;
// IMP 0x1006734c4 | v24@0:8@?16
- (void)setCompletionBlock:(id /* block */)arg0;
// IMP 0x1006734cc | @16@0:8
- (id)request;
// IMP 0x1006734d4 | v24@0:8@16
- (void)setRequest:(id)arg0;
// IMP 0x1006734e0 | v24@0:8@16
- (void)setDataTask:(id)arg0;
// IMP 0x1006734ec | B16@0:8
- (BOOL)isLoading;
// IMP 0x1006734f8 | v20@0:8B16
- (void)setLoading:(BOOL)arg0;
@end
