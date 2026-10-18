// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95410
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYReachability : BLYAbstractModule
// ivar _didInited encoding=B offset=8
// ivar _flags encoding=I offset=12
// ivar _networkReachability encoding=^{__SCNetworkReachability=} offset=16
// ivar _synchronizationQueue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// ivar _listenersArray encoding=@"NSMutableArray" offset=32
// property flags attributes=TI,N,V_flags
// property networkReachability attributes=T^{__SCNetworkReachability=},N,V_networkReachability
// property synchronizationQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_synchronizationQueue
// property listenersArray attributes=T@"NSMutableArray",&,N,V_listenersArray
// property didInited attributes=TB,N,V_didInited
// property currentState attributes=TQ,R,N
// IMP 0x10063efdc | B16@0:8
- (BOOL)enableModule;
// IMP 0x10063f000 | B16@0:8
- (BOOL)disableModule;
// IMP 0x10063f070 | @24@0:8@16
- (id)initWithURL:(id)arg0;
// IMP 0x10063f264 | v16@0:8
- (void)dealloc;
// IMP 0x10063f2d8 | v24@0:8@16
- (void)addSubscriber:(id)arg0;
// IMP 0x10063f394 | v24@0:8@16
- (void)removeSubscriber:(id)arg0;
// IMP 0x10063f544 | v16@0:8
- (void)removeAllSubscribers;
// IMP 0x10063f5c0 | v16@0:8
- (void)_notifyAllListeners;
// IMP 0x10063f910 | v20@0:8I16
- (void)setFlags:(unsigned int)arg0;
// IMP 0x10063f998 | I16@0:8
- (unsigned int)flags;
// IMP 0x10063faa8 | Q16@0:8
- (unsigned long long)currentState;
// IMP 0x10063fb18 | v24@0:8@16
- (void)_startMonitoringReachabilityWithURL:(id)arg0;
// IMP 0x10063fd64 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10063fcdc | ^{__SCNetworkReachability=}16@0:8
- (struct __SCNetworkReachability *)networkReachability;
// IMP 0x10063fcec | v24@0:8^{__SCNetworkReachability=}16
- (void)setNetworkReachability:(struct __SCNetworkReachability *)arg0;
// IMP 0x10063fcfc | @16@0:8
- (id)synchronizationQueue;
// IMP 0x10063fd0c | v24@0:8@16
- (void)setSynchronizationQueue:(id)arg0;
// IMP 0x10063fd20 | @16@0:8
- (id)listenersArray;
// IMP 0x10063fd30 | v24@0:8@16
- (void)setListenersArray:(id)arg0;
// IMP 0x10063fd44 | B16@0:8
- (BOOL)didInited;
// IMP 0x10063fd54 | v20@0:8B16
- (void)setDidInited:(BOOL)arg0;
// IMP 0x10063f024 | @16@0:8
+ (id)constructSelector;
// IMP 0x10063f030 | Q20@0:8I16
+ (unsigned long long)_reachabilityStateForFlags:(unsigned int)arg0;
// IMP 0x10063f144 | @16@0:8
+ (id)sharedReachability;
@end
