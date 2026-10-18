// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97530
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClickApp : NSObject
// ivar _crashReportEnabled encoding=B offset=8
// ivar _autoPageEnabled encoding=B offset=9
// ivar _logSendInterval encoding=d offset=16
// ivar _appCrashedHandlerInstalled encoding=B offset=24
// ivar _scenarioType encoding=Q offset=32
// ivar _appVersion encoding=@"NSString" offset=40
// ivar _wrapperType encoding=@"NSString" offset=48
// ivar _wrapperVersion encoding=@"NSString" offset=56
// ivar _vcName encoding=@"NSString" offset=64
// ivar _pageView encoding=@"NSString" offset=72
// property crashReportEnabled attributes=TB,N,V_crashReportEnabled
// property autoPageEnabled attributes=TB,N,V_autoPageEnabled
// property appCrashedHandlerInstalled attributes=TB,N,V_appCrashedHandlerInstalled
// property scenarioType attributes=TQ,N,V_scenarioType
// property appVersion attributes=T@"NSString",C,N,V_appVersion
// property wrapperType attributes=T@"NSString",C,N,V_wrapperType
// property wrapperVersion attributes=T@"NSString",C,N,V_wrapperVersion
// property vcName attributes=T@"NSString",C,V_vcName
// property pageView attributes=T@"NSString",C,V_pageView
// IMP 0x1006b75b8 | v16@0:8
- (void)noAppKeyException;
// IMP 0x1006b7774 | B16@0:8
- (BOOL)crashReportEnabled;
// IMP 0x1006b777c | v20@0:8B16
- (void)setCrashReportEnabled:(BOOL)arg0;
// IMP 0x1006b7784 | B16@0:8
- (BOOL)autoPageEnabled;
// IMP 0x1006b778c | v20@0:8B16
- (void)setAutoPageEnabled:(BOOL)arg0;
// IMP 0x1006b7794 | B16@0:8
- (BOOL)appCrashedHandlerInstalled;
// IMP 0x1006b779c | v20@0:8B16
- (void)setAppCrashedHandlerInstalled:(BOOL)arg0;
// IMP 0x1006b77a4 | Q16@0:8
- (unsigned long long)scenarioType;
// IMP 0x1006b77ac | v24@0:8Q16
- (void)setScenarioType:(unsigned long long)arg0;
// IMP 0x1006b77b4 | @16@0:8
- (id)appVersion;
// IMP 0x1006b77c0 | v24@0:8@16
- (void)setAppVersion:(id)arg0;
// IMP 0x1006b77d4 | @16@0:8
- (id)wrapperType;
// IMP 0x1006b77e0 | v24@0:8@16
- (void)setWrapperType:(id)arg0;
// IMP 0x1006b77f4 | @16@0:8
- (id)wrapperVersion;
// IMP 0x1006b7800 | v24@0:8@16
- (void)setWrapperVersion:(id)arg0;
// IMP 0x1006b7814 | @16@0:8
- (id)vcName;
// IMP 0x1006b7820 | v24@0:8@16
- (void)setVcName:(id)arg0;
// IMP 0x1006b7834 | @16@0:8
- (id)pageView;
// IMP 0x1006b7840 | v24@0:8@16
- (void)setPageView:(id)arg0;
// IMP 0x1006b747c | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006b7550 | B24@0:8Q16
+ (BOOL)checkScenario:(unsigned long long)arg0;
// IMP 0x1006b7610 | @16@0:8
+ (id)sessionId;
@end
