// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f880
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDAsyncBlockOperation : NSOperation
// ivar _executing encoding=B offset=8
// ivar _finished encoding=B offset=9
// ivar _executionBlock encoding=@? offset=16
// property executing attributes=TB,N,GisExecuting,V_executing
// property finished attributes=TB,N,GisFinished,V_finished
// property executionBlock attributes=T@?,C,N,V_executionBlock
// IMP 0x100537ffc | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x1005380b4 | v16@0:8
- (void)start;
// IMP 0x10053818c | v16@0:8
- (void)cancel;
// IMP 0x10053821c | v16@0:8
- (void)complete;
// IMP 0x100538284 | v20@0:8B16
- (void)setFinished:(BOOL)arg0;
// IMP 0x1005382d0 | v20@0:8B16
- (void)setExecuting:(BOOL)arg0;
// IMP 0x10053831c | B16@0:8
- (BOOL)isConcurrent;
// IMP 0x100538324 | B16@0:8
- (BOOL)isExecuting;
// IMP 0x100538334 | B16@0:8
- (BOOL)isFinished;
// IMP 0x100538344 | @?16@0:8
- (id /* block */)executionBlock;
// IMP 0x100538354 | v24@0:8@?16
- (void)setExecutionBlock:(id /* block */)arg0;
// IMP 0x100538360 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100538068 | @24@0:8@?16
+ (id)blockOperationWithBlock:(id /* block */)arg0;
@end
