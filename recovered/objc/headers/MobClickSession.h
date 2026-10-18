// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96e00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClickSession : NSObject
// ivar _observerRegistered encoding=B offset=8
// ivar _appInBackGround encoding=B offset=9
// ivar _appBeKilling encoding=B offset=10
// ivar _appCrashed encoding=B offset=11
// ivar _sessionStatus encoding=i offset=12
// ivar _lastLaunchTime encoding=d offset=16
// ivar _launchTime encoding=d offset=24
// property observerRegistered attributes=TB,N,V_observerRegistered
// property appInBackGround attributes=TB,N,V_appInBackGround
// property appBeKilling attributes=TB,N,V_appBeKilling
// property appCrashed attributes=TB,N,V_appCrashed
// property sessionStatus attributes=Ti,N,V_sessionStatus
// property lastLaunchTime attributes=Td,N,V_lastLaunchTime
// property launchTime attributes=Td,N,V_launchTime
// IMP 0x1006954e8 | v24@0:8@16
- (void)appActivate:(id)arg0;
// IMP 0x100695718 | v24@0:8@16
- (void)appInactivate:(id)arg0;
// IMP 0x10069591c | v16@0:8
- (void)beginSessionTime;
// IMP 0x1006959cc | q16@0:8
- (long long)endSessionTime;
// IMP 0x100695a0c | v16@0:8
- (void)ensureSessionLaunch;
// IMP 0x100696290 | B16@0:8
- (BOOL)observerRegistered;
// IMP 0x100696298 | v20@0:8B16
- (void)setObserverRegistered:(BOOL)arg0;
// IMP 0x1006962a0 | B16@0:8
- (BOOL)appInBackGround;
// IMP 0x1006962a8 | v20@0:8B16
- (void)setAppInBackGround:(BOOL)arg0;
// IMP 0x1006962b0 | B16@0:8
- (BOOL)appBeKilling;
// IMP 0x1006962b8 | v20@0:8B16
- (void)setAppBeKilling:(BOOL)arg0;
// IMP 0x1006962c0 | B16@0:8
- (BOOL)appCrashed;
// IMP 0x1006962c8 | v20@0:8B16
- (void)setAppCrashed:(BOOL)arg0;
// IMP 0x1006962d0 | i16@0:8
- (int)sessionStatus;
// IMP 0x1006962d8 | v20@0:8i16
- (void)setSessionStatus:(int)arg0;
// IMP 0x1006962e0 | d16@0:8
- (double)lastLaunchTime;
// IMP 0x1006962e8 | v24@0:8d16
- (void)setLastLaunchTime:(double)arg0;
// IMP 0x1006962f0 | d16@0:8
- (double)launchTime;
// IMP 0x1006962f8 | v24@0:8d16
- (void)setLaunchTime:(double)arg0;
// IMP 0x1006950bc | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006951bc | v32@0:8@16@24
+ (void)signInPUID:(id)arg0 provider:(id)arg1;
// IMP 0x100695428 | v24@0:8@16
+ (void)profileSignInPUID:(id)arg0;
// IMP 0x100695444 | v32@0:8@16@24
+ (void)profileSignInPUID:(id)arg0 withProvider:(id)arg1;
// IMP 0x1006954cc | v16@0:8
+ (void)profileSignOff;
// IMP 0x100695a28 | v24@0:8@16
+ (void)startWithAppkey:(id)arg0;
// IMP 0x100695ee0 | v24@0:8@16
+ (void)startAnalyticsWithAppkey:(id)arg0;
// IMP 0x100696054 | v24@0:8Q16
+ (void)setScenarioType:(unsigned long long)arg0;
// IMP 0x1006960f8 | v28@0:8i16@20
+ (void)getAppState:(int)arg0 obj:(id)arg1;
@end
