// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c962c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYMainRunloopMonitorManager : BLYAbstractModule
// ivar _runloopObserver encoding=^{__CFRunLoopObserver=} offset=8
// ivar _monitorThread encoding=@"NSThread" offset=16
// ivar _monitorThreadCanceled encoding=B offset=24
// ivar _duration encoding=d offset=32
// ivar _runloopTimeoutEvent encoding=@"NSString" offset=40
// ivar _semaphore encoding=@"NSObject<OS_dispatch_semaphore>" offset=48
// ivar _activity encoding=Q offset=56
// ivar _runloopTimeoutThreshold encoding=d offset=64
// ivar _runloopCPURatioThreshold encoding=q offset=72
// ivar _runloopReportCountForWiFi encoding=q offset=80
// ivar _runloopReportTrafficForWiFi encoding=q offset=88
// ivar _runloopReportCountForCellular encoding=q offset=96
// ivar _runloopReportTrafficForCellular encoding=q offset=104
// property runloopTimeoutThreshold attributes=Td,N,V_runloopTimeoutThreshold
// property runloopCPURatioThreshold attributes=Tq,N,V_runloopCPURatioThreshold
// property runloopReportCountForWiFi attributes=Tq,N,V_runloopReportCountForWiFi
// property runloopReportTrafficForWiFi attributes=Tq,N,V_runloopReportTrafficForWiFi
// property runloopReportCountForCellular attributes=Tq,N,V_runloopReportCountForCellular
// property runloopReportTrafficForCellular attributes=Tq,N,V_runloopReportTrafficForCellular
// IMP 0x100666cd0 | @16@0:8
- (id)init;
// IMP 0x100666e9c | B16@0:8
- (BOOL)enableModule;
// IMP 0x100666f74 | B16@0:8
- (BOOL)disableModule;
// IMP 0x100667048 | @16@0:8
- (id)strategyGetterSelector;
// IMP 0x100667054 | @16@0:8
- (id)strategyValueMapKey;
// IMP 0x100667080 | v32@0:8@16@24
- (void)dataManagerNotifyValue:(id)arg0 changedForKey:(id)arg1;
// IMP 0x10066719c | v24@0:8@16
- (void)updateStrategy:(id)arg0;
// IMP 0x100667450 | v16@0:8
- (void)start;
// IMP 0x100667484 | v16@0:8
- (void)stop;
// IMP 0x1006674b8 | v16@0:8
- (void)addRunloopObserver;
// IMP 0x10066757c | v16@0:8
- (void)removeRunloopObserver;
// IMP 0x1006675cc | v16@0:8
- (void)startMonitorThread;
// IMP 0x100667674 | v16@0:8
- (void)stopMonitorThread;
// IMP 0x1006676d4 | v16@0:8
- (void)monitorThreadRun;
// IMP 0x100667928 | v16@0:8
- (void)dumpMainThreadCallStackSymbols;
// IMP 0x100667a8c | v16@0:8
- (void)dumpAllThreadCallStackSymbols;
// IMP 0x100667bf0 | @24@0:8@16
- (id)packageModelFromCrashReport:(id)arg0;
// IMP 0x100668610 | v16@0:8
- (void)sendPendingData;
// IMP 0x1006687a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006686e8 | d16@0:8
- (double)runloopTimeoutThreshold;
// IMP 0x1006686f8 | v24@0:8d16
- (void)setRunloopTimeoutThreshold:(double)arg0;
// IMP 0x100668708 | q16@0:8
- (long long)runloopCPURatioThreshold;
// IMP 0x100668718 | v24@0:8q16
- (void)setRunloopCPURatioThreshold:(long long)arg0;
// IMP 0x100668728 | q16@0:8
- (long long)runloopReportCountForWiFi;
// IMP 0x100668738 | v24@0:8q16
- (void)setRunloopReportCountForWiFi:(long long)arg0;
// IMP 0x100668748 | q16@0:8
- (long long)runloopReportTrafficForWiFi;
// IMP 0x100668758 | v24@0:8q16
- (void)setRunloopReportTrafficForWiFi:(long long)arg0;
// IMP 0x100668768 | q16@0:8
- (long long)runloopReportCountForCellular;
// IMP 0x100668778 | v24@0:8q16
- (void)setRunloopReportCountForCellular:(long long)arg0;
// IMP 0x100668788 | q16@0:8
- (long long)runloopReportTrafficForCellular;
// IMP 0x100668798 | v24@0:8q16
- (void)setRunloopReportTrafficForCellular:(long long)arg0;
// IMP 0x100666c50 | @16@0:8
+ (id)sharedManager;
// IMP 0x10066703c | @16@0:8
+ (id)constructSelector;
@end
