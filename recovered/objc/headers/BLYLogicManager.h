// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96540
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYLogicManager : NSObject
// ivar _enableAbortAction encoding=B offset=8
// ivar _queue encoding=@"NSOperationQueue" offset=16
// ivar _count encoding=Q offset=24
// ivar _abortAfterCrashTimeout encoding=Q offset=32
// property count attributes=TQ,V_count
// property queue attributes=T@"NSOperationQueue",&,V_queue
// property enableAbortAction attributes=TB,N,V_enableAbortAction
// property abortAfterCrashTimeout attributes=TQ,N,V_abortAfterCrashTimeout
// IMP 0x100670a88 | @16@0:8
- (id)init;
// IMP 0x100670ad0 | v24@0:8@16
- (void)setQueue:(id)arg0;
// IMP 0x100670b44 | @16@0:8
- (id)queue;
// IMP 0x100670c34 | v24@0:8Q16
- (void)setCount:(unsigned long long)arg0;
// IMP 0x100670c88 | Q16@0:8
- (unsigned long long)count;
// IMP 0x100670cd4 | v24@0:8@16
- (void)addLogic:(id)arg0;
// IMP 0x100671038 | v24@0:8@16
- (void)executeEmergencyLogic:(id)arg0;
// IMP 0x10067154c | v16@0:8
- (void)abortAfterSendingReportIfNeed;
// IMP 0x10067165c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10067163c | B16@0:8
- (BOOL)enableAbortAction;
// IMP 0x100671644 | v20@0:8B16
- (void)setEnableAbortAction:(BOOL)arg0;
// IMP 0x10067164c | Q16@0:8
- (unsigned long long)abortAfterCrashTimeout;
// IMP 0x100671654 | v24@0:8Q16
- (void)setAbortAfterCrashTimeout:(unsigned long long)arg0;
// IMP 0x100670a08 | @16@0:8
+ (id)sharedManager;
@end
