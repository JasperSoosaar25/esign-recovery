// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96310
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYEnvironmentInfo : BLYAbstractModule
// ivar _didReceiveMemoryWarning encoding=B offset=8
// ivar _networkAPN encoding=@"NSString" offset=16
// ivar _reachabilityState encoding=Q offset=24
// ivar _lastEvent encoding=q offset=32
// ivar _receivedMemoryWarningCount encoding=Q offset=40
// ivar _lifecycleEventBlock encoding=@? offset=48
// property lifecycleEventBlock attributes=T@?,C,N,V_lifecycleEventBlock
// property lastEvent attributes=Tq,N,V_lastEvent
// property networkAPN attributes=T@"NSString",C,N,V_networkAPN
// property didReceiveMemoryWarning attributes=TB,N,V_didReceiveMemoryWarning
// property receivedMemoryWarningCount attributes=TQ,N,V_receivedMemoryWarningCount
// property reachabilityState attributes=TQ,N,V_reachabilityState
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10066887c | @16@0:8
- (id)init;
// IMP 0x1006688dc | B16@0:8
- (BOOL)enableModule;
// IMP 0x100668968 | B16@0:8
- (BOOL)disableModule;
// IMP 0x100668a30 | v16@0:8
- (void)subscribeForReachability;
// IMP 0x100668acc | v24@0:8Q16
- (void)setReachabilityState:(unsigned long long)arg0;
// IMP 0x100668b3c | v32@0:8@16Q24
- (void)reachability:(id)arg0 didChangeReachabilityState:(unsigned long long)arg1;
// IMP 0x100668b4c | B16@0:8
- (BOOL)isWIFIAvailable;
// IMP 0x100668b70 | B16@0:8
- (BOOL)isNetworkReachable;
// IMP 0x100668b94 | v24@0:8@?16
- (void)subscribeForApplicationLifecycleEvents:(id /* block */)arg0;
// IMP 0x100668ba0 | v24@0:8q16
- (void)postAppLifeCycleNotification:(long long)arg0;
// IMP 0x100668bf8 | v16@0:8
- (void)registerApplicationLifeCycleEventsObserver;
// IMP 0x100668e10 | v24@0:8@16
- (void)applicationDidEnterBackgroundHandler:(id)arg0;
// IMP 0x100668ed8 | v24@0:8@16
- (void)applicationWillEnterForegroundHandler:(id)arg0;
// IMP 0x100668fa0 | v24@0:8@16
- (void)applicationDidFinishLaunchingHandler:(id)arg0;
// IMP 0x100669068 | v24@0:8@16
- (void)applicationDidBecomeActiveHandler:(id)arg0;
// IMP 0x100669130 | v24@0:8@16
- (void)applicationWillResignActiveHandler:(id)arg0;
// IMP 0x1006691f8 | v24@0:8@16
- (void)applicationWillTerminateHandler:(id)arg0;
// IMP 0x1006692c0 | v24@0:8@16
- (void)applicationDidReceiveMemoryWarning:(id)arg0;
// IMP 0x100669458 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006693b0 | @16@0:8
- (id)networkAPN;
// IMP 0x1006693c0 | v24@0:8@16
- (void)setNetworkAPN:(id)arg0;
// IMP 0x1006693cc | Q16@0:8
- (unsigned long long)reachabilityState;
// IMP 0x1006693dc | q16@0:8
- (long long)lastEvent;
// IMP 0x1006693ec | v24@0:8q16
- (void)setLastEvent:(long long)arg0;
// IMP 0x1006693fc | B16@0:8
- (BOOL)didReceiveMemoryWarning;
// IMP 0x10066940c | v20@0:8B16
- (void)setDidReceiveMemoryWarning:(BOOL)arg0;
// IMP 0x10066941c | Q16@0:8
- (unsigned long long)receivedMemoryWarningCount;
// IMP 0x10066942c | v24@0:8Q16
- (void)setReceivedMemoryWarningCount:(unsigned long long)arg0;
// IMP 0x10066943c | @?16@0:8
- (id /* block */)lifecycleEventBlock;
// IMP 0x10066944c | v24@0:8@?16
- (void)setLifecycleEventBlock:(id /* block */)arg0;
// IMP 0x1006687fc | @16@0:8
+ (id)sharedInfo;
// IMP 0x100668a24 | @16@0:8
+ (id)constructSelector;
@end
