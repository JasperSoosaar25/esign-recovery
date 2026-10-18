// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c338
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIURLSessionDelegateObject : NSObject
// ivar _delegate encoding=@"<VIURLSessionDelegateObjectDelegate>" offset=8
// ivar _bufferData encoding=@"NSMutableData" offset=16
// property delegate attributes=T@"<VIURLSessionDelegateObjectDelegate>",W,N,V_delegate
// property bufferData attributes=T@"NSMutableData",&,N,V_bufferData
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1000819bc | @24@0:8@16
- (id)initWithDelegate:(id)arg0;
// IMP 0x100081b7c | v40@0:8@16@24@?32
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x100081c60 | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x100081db8 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x1000822d4 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x100082748 | @16@0:8
- (id)delegate;
// IMP 0x100082798 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1000827bc | @16@0:8
- (id)bufferData;
// IMP 0x1000827e8 | v24@0:8@16
- (void)setBufferData:(id)arg0;
// IMP 0x100082850 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
