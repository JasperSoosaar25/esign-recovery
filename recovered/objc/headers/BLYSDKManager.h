// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95b90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYSDKManager : NSObject
// ivar _inProgress encoding=B offset=8
// ivar _started encoding=B offset=9
// ivar _crashedOverFlow encoding=B offset=10
// ivar _enabledModules encoding=@"NSMutableArray" offset=16
// ivar _sdkStartQueue encoding=@"NSOperationQueue" offset=24
// ivar _modules encoding=@"NSArray" offset=32
// ivar _strategy encoding=@"BLYRqdStrategy" offset=40
// ivar _config encoding=@"BLYSDKConfig" offset=48
// property started attributes=TB,GisStarted,V_started
// property inProgress attributes=TB,V_inProgress
// property enabledModules attributes=T@"NSMutableArray",C,V_enabledModules
// property modules attributes=T@"NSArray",C,V_modules
// property strategy attributes=T@"BLYRqdStrategy",&,V_strategy
// property sdkStartQueue attributes=T@"NSOperationQueue",&,V_sdkStartQueue
// property crashedOverFlow attributes=TB,V_crashedOverFlow
// property config attributes=T@"BLYSDKConfig",&,N,V_config
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100649dbc | @16@0:8
- (id)init;
// IMP 0x100649e38 | v20@0:8B16
- (void)setInProgress:(BOOL)arg0;
// IMP 0x100649f88 | B16@0:8
- (BOOL)inProgress;
// IMP 0x100649fd4 | v20@0:8B16
- (void)setCrashedOverFlow:(BOOL)arg0;
// IMP 0x10064a01c | B16@0:8
- (BOOL)crashedOverFlow;
// IMP 0x10064a068 | @16@0:8
- (id)enabledModules;
// IMP 0x10064a0fc | v24@0:8@16
- (void)setEnabledModules:(id)arg0;
// IMP 0x10064a158 | @16@0:8
- (id)sdkStartQueue;
// IMP 0x10064a218 | v24@0:8@16
- (void)setSdkStartQueue:(id)arg0;
// IMP 0x10064a274 | v16@0:8
- (void)start;
// IMP 0x10064a608 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x10064a808 | v16@0:8
- (void)loadStrategy;
// IMP 0x10064aa88 | @16@0:8
- (id)defaultStrategy;
// IMP 0x10064ad0c | v32@0:8@16@24
- (void)dataManagerNotifyValue:(id)arg0 changedForKey:(id)arg1;
// IMP 0x10064b0d4 | @24@0:8@16
- (id)moduleWithClassName:(id)arg0;
// IMP 0x10064b158 | @16@0:8
- (id)basicModules;
// IMP 0x10064b238 | B24@0:8@16
- (BOOL)shouldEnableModule:(id)arg0;
// IMP 0x10064b410 | v16@0:8
- (void)constructModules;
// IMP 0x10064bb90 | B28@0:8@16B24
- (BOOL)toggleModule:(id)arg0 enable:(BOOL)arg1;
// IMP 0x10064bf48 | v24@0:8@16
- (void)updateModule:(id)arg0;
// IMP 0x10064c360 | @24@0:8#16
- (id)findModuleWithClass:(Class)arg0;
// IMP 0x10064c500 | @32@0:8@16Q24
- (id)fixCallStackSymbols:(id)arg0 skipFrame:(unsigned long long)arg1;
// IMP 0x10064c740 | B24@0:8@16
- (BOOL)shouldEnableSDK:(id)arg0;
// IMP 0x10064ca78 | v36@0:8@16B24@28
- (void)startWithAppId:(id)arg0 developmentDevice:(BOOL)arg1 config:(id)arg2;
// IMP 0x10064d5ec | v16@0:8
- (void)stop;
// IMP 0x10064d7a4 | v60@0:8Q16@24@32@40@48B56
- (void)reportCustomizedException:(unsigned long long)arg0 name:(id)arg1 reason:(id)arg2 callStack:(id)arg3 extraInfo:(id)arg4 terminateApp:(BOOL)arg5;
// IMP 0x10064dbf4 | v40@0:8@16@24@32
- (void)reportException:(id)arg0 reason:(id)arg1 extraInfo:(id)arg2;
// IMP 0x10064de18 | v40@0:8@16@24@32
- (void)reportError:(id)arg0 reason:(id)arg1 extraInfo:(id)arg2;
// IMP 0x10064dfc4 | Q16@0:8
- (unsigned long long)currentTag;
// IMP 0x10064e04c | v32@0:8@16@24
- (void)setUserValue:(id)arg0 forKey:(id)arg1;
// IMP 0x10064e390 | @16@0:8
- (id)allUserValues;
// IMP 0x10064e488 | @16@0:8
- (id)deviceIdentify;
// IMP 0x10064e4e4 | v24@0:8@16
- (void)updateAppVersion:(id)arg0;
// IMP 0x10064e5cc | v24@0:8@16
- (void)setUserInfo:(id)arg0;
// IMP 0x10064e72c | @16@0:8
- (id)getUserInfo;
// IMP 0x10064e794 | v24@0:8Q16
- (void)setTag:(unsigned long long)arg0;
// IMP 0x10064e8f0 | B16@0:8
- (BOOL)isAppCrashedOnStartUpExceedTheLimit;
// IMP 0x10064e8fc | v16@0:8
- (void)dealloc;
// IMP 0x10064e98c | v24@0:8@16
- (void)setStrategyRequestURL:(id)arg0;
// IMP 0x10064eb00 | v24@0:8@16
- (void)setCrashRequestURL:(id)arg0;
// IMP 0x10064ec8c | B16@0:8
- (BOOL)isBLYSDKStarted;
// IMP 0x10064ec98 | v16@0:8
- (void)closeCrashReport;
// IMP 0x10064ed30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10064ece0 | B16@0:8
- (BOOL)isStarted;
// IMP 0x10064ecec | v20@0:8B16
- (void)setStarted:(BOOL)arg0;
// IMP 0x10064ecf4 | @16@0:8
- (id)modules;
// IMP 0x10064ed00 | v24@0:8@16
- (void)setModules:(id)arg0;
// IMP 0x10064ed08 | @16@0:8
- (id)strategy;
// IMP 0x10064ed14 | v24@0:8@16
- (void)setStrategy:(id)arg0;
// IMP 0x10064ed1c | @16@0:8
- (id)config;
// IMP 0x10064ed24 | v24@0:8@16
- (void)setConfig:(id)arg0;
// IMP 0x100649d3c | @16@0:8
+ (id)sharedManager;
// IMP 0x10064e3f8 | @16@0:8
+ (id)sdkVersion;
// IMP 0x10064e440 | @16@0:8
+ (id)userFriendlyVersion;
@end
