// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c955f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAbstractLogic : NSOperation
// ivar _shouldRetry encoding=B offset=8
// ivar _logicExecuting encoding=B offset=9
// ivar _logicFinished encoding=B offset=10
// ivar _logicReady encoding=B offset=11
// ivar _logicCanceled encoding=B offset=12
// ivar _executionTimes encoding=Q offset=16
// ivar _logicNumber encoding=Q offset=24
// ivar _error encoding=@"NSError" offset=32
// ivar _lock encoding=@"NSRecursiveLock" offset=40
// property executionTimes attributes=TQ,N,V_executionTimes
// property shouldRetry attributes=TB,N,V_shouldRetry
// property logicNumber attributes=TQ,N,V_logicNumber
// property error attributes=T@"NSError",&,N,V_error
// property logicExecuting attributes=TB,V_logicExecuting
// property logicFinished attributes=TB,V_logicFinished
// property logicReady attributes=TB,V_logicReady
// property logicCanceled attributes=TB,V_logicCanceled
// property lock attributes=T@"NSRecursiveLock",&,N,V_lock
// IMP 0x100641350 | @16@0:8
- (id)init;
// IMP 0x100641438 | B16@0:8
- (BOOL)isExecuting;
// IMP 0x100641448 | B16@0:8
- (BOOL)isFinished;
// IMP 0x100641458 | B16@0:8
- (BOOL)isReady;
// IMP 0x100641468 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x100641478 | B16@0:8
- (BOOL)isConcurrent;
// IMP 0x100641480 | B16@0:8
- (BOOL)isAsynchronous;
// IMP 0x100641488 | v16@0:8
- (void)cancel;
// IMP 0x10064152c | v16@0:8
- (void)finish;
// IMP 0x10064167c | @16@0:8
- (id)persistFileKey;
// IMP 0x1006416a8 | q16@0:8
- (long long)persistType;
// IMP 0x1006416b0 | @16@0:8
- (id)jceCMDString;
// IMP 0x1006416dc | @24@0:8@16
- (id)errorWithDescription:(id)arg0;
// IMP 0x100641934 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006417fc | Q16@0:8
- (unsigned long long)executionTimes;
// IMP 0x10064180c | v24@0:8Q16
- (void)setExecutionTimes:(unsigned long long)arg0;
// IMP 0x10064181c | B16@0:8
- (BOOL)shouldRetry;
// IMP 0x10064182c | v20@0:8B16
- (void)setShouldRetry:(BOOL)arg0;
// IMP 0x10064183c | Q16@0:8
- (unsigned long long)logicNumber;
// IMP 0x10064184c | v24@0:8Q16
- (void)setLogicNumber:(unsigned long long)arg0;
// IMP 0x10064185c | @16@0:8
- (id)error;
// IMP 0x10064186c | v24@0:8@16
- (void)setError:(id)arg0;
// IMP 0x100641880 | B16@0:8
- (BOOL)logicExecuting;
// IMP 0x100641894 | v20@0:8B16
- (void)setLogicExecuting:(BOOL)arg0;
// IMP 0x1006418a4 | B16@0:8
- (BOOL)logicFinished;
// IMP 0x1006418b8 | v20@0:8B16
- (void)setLogicFinished:(BOOL)arg0;
// IMP 0x1006418c8 | B16@0:8
- (BOOL)logicReady;
// IMP 0x1006418dc | v20@0:8B16
- (void)setLogicReady:(BOOL)arg0;
// IMP 0x1006418ec | B16@0:8
- (BOOL)logicCanceled;
// IMP 0x100641900 | v20@0:8B16
- (void)setLogicCanceled:(BOOL)arg0;
// IMP 0x100641910 | @16@0:8
- (id)lock;
// IMP 0x100641920 | v24@0:8@16
- (void)setLock:(id)arg0;
@end
