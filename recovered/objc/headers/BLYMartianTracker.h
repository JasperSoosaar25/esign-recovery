// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96400
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYMartianTracker : BLYAbstractModule
// ivar _autoTrackingEnable encoding=B offset=8
// ivar _trackerQueue encoding=@"NSObject<OS_dispatch_queue>" offset=16
// ivar _trackerMessages encoding=@"NSMutableArray" offset=24
// property trackerQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_trackerQueue
// property trackerMessages attributes=T@"NSMutableArray",&,N,V_trackerMessages
// property autoTrackingEnable attributes=TB,N,GisAutoTrackingEnabled,V_autoTrackingEnable
// IMP 0x10066b15c | B16@0:8
- (BOOL)enableModule;
// IMP 0x10066b1ec | B16@0:8
- (BOOL)disableModule;
// IMP 0x10066b250 | @16@0:8
- (id)init;
// IMP 0x10066b30c | v16@0:8
- (void)startTrack;
// IMP 0x10066b388 | v16@0:8
- (void)registerAppLifeCycleEvents;
// IMP 0x10066b3f0 | v24@0:8@16
- (void)didReceiveAppLifeCycleEvent:(id)arg0;
// IMP 0x10066b4f0 | v24@0:8@16
- (void)trackMessage:(id)arg0;
// IMP 0x10066b800 | @16@0:8
- (id)allLogs;
// IMP 0x10066bba0 | v24@0:8@16
- (void)trackAppLifeCycleEvent:(id)arg0;
// IMP 0x10066bcb8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10066bc50 | B16@0:8
- (BOOL)isAutoTrackingEnabled;
// IMP 0x10066bc60 | v20@0:8B16
- (void)setAutoTrackingEnable:(BOOL)arg0;
// IMP 0x10066bc70 | @16@0:8
- (id)trackerQueue;
// IMP 0x10066bc80 | v24@0:8@16
- (void)setTrackerQueue:(id)arg0;
// IMP 0x10066bc94 | @16@0:8
- (id)trackerMessages;
// IMP 0x10066bca4 | v24@0:8@16
- (void)setTrackerMessages:(id)arg0;
// IMP 0x10066b0c4 | @16@0:8
+ (id)sharedTracker;
// IMP 0x10066b244 | @16@0:8
+ (id)constructSelector;
// IMP 0x10066b754 | @16@0:8
+ (id)currentTimeString;
// IMP 0x10066ba1c | @16@0:8
+ (id)trackLog;
// IMP 0x10066bad0 | v24@0:8@16
+ (void)trackPageView:(id)arg0;
@end
