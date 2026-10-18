// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7fa10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDAVRequest : NSObject
// ivar _request encoding=@"NSMutableURLRequest" offset=8
// ivar _responseData encoding=@"NSMutableData" offset=16
// ivar _completion encoding=@? offset=24
// ivar _progressBlock encoding=@? offset=32
// property request attributes=T@"NSMutableURLRequest",&,N,V_request
// property responseData attributes=T@"NSMutableData",&,N,V_responseData
// property completion attributes=T@?,C,N,V_completion
// property progressBlock attributes=T@?,C,N,V_progressBlock
// IMP 0x100252e18 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100252fe0 | v16@0:8
- (void)dealloc;
// IMP 0x100253018 | @16@0:8
- (id)request;
// IMP 0x100253044 | v24@0:8@16
- (void)setRequest:(id)arg0;
// IMP 0x100253050 | @16@0:8
- (id)responseData;
// IMP 0x10025307c | v24@0:8@16
- (void)setResponseData:(id)arg0;
// IMP 0x10025310c | @?16@0:8
- (id /* block */)completion;
// IMP 0x100253138 | v24@0:8@?16
- (void)setCompletion:(id /* block */)arg0;
// IMP 0x100253168 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x100253194 | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x10025320c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
