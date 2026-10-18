// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c963b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashManager : BLYAbstractModule
// ivar _enableSymbolicationOnDevice encoding=B offset=8
// ivar _enableAppNotTerminatingSafelyDetection encoding=B offset=9
// ivar _didCrashInLastSession encoding=B offset=10
// ivar _didReceiveMemoryWarningInLastSession encoding=B offset=11
// ivar _isInstalled encoding=B offset=12
// ivar _isObserverRegistered encoding=B offset=13
// ivar _didCrashed encoding=B offset=14
// ivar _timeIntervalCrashInLastSessionOccurred encoding=d offset=16
// ivar _crashReporter encoding=@"BLYCrashReporter" offset=24
// ivar _checkerCount encoding=Q offset=32
// property crashReporter attributes=T@"BLYCrashReporter",&,N,V_crashReporter
// property isInstalled attributes=TB,N,V_isInstalled
// property isObserverRegistered attributes=TB,N,V_isObserverRegistered
// property didCrashed attributes=TB,N,V_didCrashed
// property checkerCount attributes=TQ,N,V_checkerCount
// property enableSymbolicationOnDevice attributes=TB,N,GisSymbolicationOnDeviceEnabled,V_enableSymbolicationOnDevice
// property enableAppNotTerminatingSafelyDetection attributes=TB,N,GisAppNotTerminatingSafelyDetectionEnabled,V_enableAppNotTerminatingSafelyDetection
// property didCrashInLastSession attributes=TB,R,N,V_didCrashInLastSession
// property didReceiveMemoryWarningInLastSession attributes=TB,R,N,V_didReceiveMemoryWarningInLastSession
// property timeIntervalCrashInLastSessionOccurred attributes=Td,R,N,V_timeIntervalCrashInLastSessionOccurred
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006699e4 | @16@0:8
- (id)init;
// IMP 0x100669aa0 | v16@0:8
- (void)dealloc;
// IMP 0x100669af8 | @16@0:8
- (id)strategyGetterSelector;
// IMP 0x100669b04 | B16@0:8
- (BOOL)enableModule;
// IMP 0x100669b80 | B16@0:8
- (BOOL)disableModule;
// IMP 0x100669bd4 | v16@0:8
- (void)startManager;
// IMP 0x100669d70 | v16@0:8
- (void)stopManager;
// IMP 0x100669e0c | v24@0:8@16
- (void)setExcludeModuleFilter:(id)arg0;
// IMP 0x100669e7c | v16@0:8
- (void)didCrashAccidentHappened;
// IMP 0x100669fb0 | v16@0:8
- (void)willSendCrashReport;
// IMP 0x10066a010 | v16@0:8
- (void)unregisterObservers;
// IMP 0x10066a080 | v16@0:8
- (void)registerObservers;
// IMP 0x10066a10c | v24@0:8@16
- (void)receivedEventNotification:(id)arg0;
// IMP 0x10066a190 | v16@0:8
- (void)protectHandler;
// IMP 0x10066a264 | v16@0:8
- (void)sendPendingCrashReport;
// IMP 0x10066a318 | v24@0:8@16
- (void)sendCrashReport:(id)arg0;
// IMP 0x10066a3d0 | v16@0:8
- (void)sendLiveCrashReport;
// IMP 0x10066a4b4 | @16@0:8
- (id)generateExceptionUploadPackage;
// IMP 0x10066b0b0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10066af9c | B16@0:8
- (BOOL)isSymbolicationOnDeviceEnabled;
// IMP 0x10066afac | v20@0:8B16
- (void)setEnableSymbolicationOnDevice:(BOOL)arg0;
// IMP 0x10066afbc | B16@0:8
- (BOOL)isAppNotTerminatingSafelyDetectionEnabled;
// IMP 0x10066afcc | v20@0:8B16
- (void)setEnableAppNotTerminatingSafelyDetection:(BOOL)arg0;
// IMP 0x10066afdc | B16@0:8
- (BOOL)didCrashInLastSession;
// IMP 0x10066afec | B16@0:8
- (BOOL)didReceiveMemoryWarningInLastSession;
// IMP 0x10066affc | d16@0:8
- (double)timeIntervalCrashInLastSessionOccurred;
// IMP 0x10066b00c | @16@0:8
- (id)crashReporter;
// IMP 0x10066b01c | v24@0:8@16
- (void)setCrashReporter:(id)arg0;
// IMP 0x10066b030 | B16@0:8
- (BOOL)isInstalled;
// IMP 0x10066b040 | v20@0:8B16
- (void)setIsInstalled:(BOOL)arg0;
// IMP 0x10066b050 | B16@0:8
- (BOOL)isObserverRegistered;
// IMP 0x10066b060 | v20@0:8B16
- (void)setIsObserverRegistered:(BOOL)arg0;
// IMP 0x10066b070 | B16@0:8
- (BOOL)didCrashed;
// IMP 0x10066b080 | v20@0:8B16
- (void)setDidCrashed:(BOOL)arg0;
// IMP 0x10066b090 | Q16@0:8
- (unsigned long long)checkerCount;
// IMP 0x10066b0a0 | v24@0:8Q16
- (void)setCheckerCount:(unsigned long long)arg0;
// IMP 0x100669964 | @16@0:8
+ (id)sharedManager;
// IMP 0x100669aec | @16@0:8
+ (id)constructSelector;
@end
