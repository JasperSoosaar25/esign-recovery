// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95dc0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAnalyticsManager : BLYAbstractModule
// ivar _launchTimestamp encoding=q offset=8
// ivar _activeTimestamp encoding=q offset=16
// ivar _inActiveTimestamp encoding=q offset=24
// ivar _coldStart encoding=B offset=32
// ivar _inProgress encoding=B offset=33
// ivar _crashedLastSession encoding=B offset=34
// ivar _bCustomReport encoding=B offset=35
// ivar _previousActiveTimestamp encoding=q offset=40
// ivar _previousInActiveTimestamp encoding=q offset=48
// ivar _previousUsedTime encoding=q offset=56
// ivar _lastCustomReportTime encoding=q offset=64
// property launchTimestamp attributes=Tq,N,V_launchTimestamp
// property activeTimestamp attributes=Tq,N,V_activeTimestamp
// property inActiveTimestamp attributes=Tq,N,V_inActiveTimestamp
// property coldStart attributes=TB,N,GisColdStart,V_coldStart
// property inProgress attributes=TB,N,V_inProgress
// property previousActiveTimestamp attributes=Tq,N,V_previousActiveTimestamp
// property previousInActiveTimestamp attributes=Tq,N,V_previousInActiveTimestamp
// property previousUsedTime attributes=Tq,N,V_previousUsedTime
// property crashedLastSession attributes=TB,N,V_crashedLastSession
// property bCustomReport attributes=TB,N,V_bCustomReport
// property lastCustomReportTime attributes=Tq,N,V_lastCustomReportTime
// IMP 0x100655ee0 | @16@0:8
- (id)init;
// IMP 0x100655f40 | @16@0:8
- (id)strategyGetterSelector;
// IMP 0x100655f48 | B16@0:8
- (BOOL)enableModule;
// IMP 0x10065616c | B16@0:8
- (BOOL)disableModule;
// IMP 0x1006561f8 | v24@0:8@16
- (void)receivedEventNotification:(id)arg0;
// IMP 0x1006562d0 | v24@0:8@16
- (void)applicationDidCrashed:(id)arg0;
// IMP 0x10065637c | v16@0:8
- (void)willResignActiveHandler;
// IMP 0x100656408 | v16@0:8
- (void)willTerminateHandler;
// IMP 0x1006564b0 | v16@0:8
- (void)didFinishLaunchingHandler;
// IMP 0x1006564e4 | v16@0:8
- (void)didBecomeActiveHandler;
// IMP 0x10065659c | v16@0:8
- (void)willEnterForegroundHandler;
// IMP 0x1006565d0 | v16@0:8
- (void)didEnterBackgroundHandler;
// IMP 0x100656634 | @16@0:8
- (id)createSummaryInfo;
// IMP 0x100656a5c | q16@0:8
- (long long)buglyStartType;
// IMP 0x100656aac | v16@0:8
- (void)resetStartTypeFlag;
// IMP 0x100656abc | @16@0:8
- (id)lastSessionUseInfo;
// IMP 0x100656de4 | v16@0:8
- (void)recordEvent;
// IMP 0x100656f5c | v24@0:8@16
- (void)startLogicWithSummaryInfo:(id)arg0;
// IMP 0x100656ffc | v16@0:8
- (void)recordPrevUseTime;
// IMP 0x1006573e0 | q16@0:8
- (long long)launchTimestamp;
// IMP 0x1006574b8 | q16@0:8
- (long long)activeTimestamp;
// IMP 0x10065758c | q16@0:8
- (long long)inActiveTimestamp;
// IMP 0x100657660 | v24@0:8q16
- (void)setLaunchTimestamp:(long long)arg0;
// IMP 0x10065777c | v24@0:8q16
- (void)setActiveTimestamp:(long long)arg0;
// IMP 0x100657894 | v24@0:8q16
- (void)setInActiveTimestamp:(long long)arg0;
// IMP 0x1006579b8 | v16@0:8
- (void)reportAnalyticsEvent;
// IMP 0x100657ab4 | B16@0:8
- (BOOL)isColdStart;
// IMP 0x100657ac4 | v20@0:8B16
- (void)setColdStart:(BOOL)arg0;
// IMP 0x100657ad4 | B16@0:8
- (BOOL)inProgress;
// IMP 0x100657ae4 | v20@0:8B16
- (void)setInProgress:(BOOL)arg0;
// IMP 0x100657af4 | q16@0:8
- (long long)previousActiveTimestamp;
// IMP 0x100657b04 | v24@0:8q16
- (void)setPreviousActiveTimestamp:(long long)arg0;
// IMP 0x100657b14 | q16@0:8
- (long long)previousInActiveTimestamp;
// IMP 0x100657b24 | v24@0:8q16
- (void)setPreviousInActiveTimestamp:(long long)arg0;
// IMP 0x100657b34 | q16@0:8
- (long long)previousUsedTime;
// IMP 0x100657b44 | v24@0:8q16
- (void)setPreviousUsedTime:(long long)arg0;
// IMP 0x100657b54 | B16@0:8
- (BOOL)crashedLastSession;
// IMP 0x100657b64 | v20@0:8B16
- (void)setCrashedLastSession:(BOOL)arg0;
// IMP 0x100657b74 | B16@0:8
- (BOOL)bCustomReport;
// IMP 0x100657b84 | v20@0:8B16
- (void)setBCustomReport:(BOOL)arg0;
// IMP 0x100657b94 | q16@0:8
- (long long)lastCustomReportTime;
// IMP 0x100657ba4 | v24@0:8q16
- (void)setLastCustomReportTime:(long long)arg0;
// IMP 0x100655e60 | @16@0:8
+ (id)sharedManager;
// IMP 0x100655f34 | @16@0:8
+ (id)constructSelector;
@end
