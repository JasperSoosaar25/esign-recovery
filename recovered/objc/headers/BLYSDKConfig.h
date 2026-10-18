// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95b18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYSDKConfig : NSObject
// ivar _debugMode encoding=B offset=8
// ivar _defaultVersionFieldUsed encoding=B offset=9
// ivar _monitorEnabled encoding=B offset=10
// ivar _symbolicateInProcessEnable encoding=B offset=11
// ivar _unexpectedTerminatingDetectionEnable encoding=B offset=12
// ivar _viewControllerTrackingEnable encoding=B offset=13
// ivar _consolelogEnable encoding=B offset=14
// ivar _channel encoding=@"NSString" offset=16
// ivar _version encoding=@"NSString" offset=24
// ivar _deviceIdentifier encoding=@"NSString" offset=32
// ivar _monitorTimeout encoding=d offset=40
// ivar _delegate encoding=@ offset=48
// ivar _applicationGroupIdentifier encoding=@"NSString" offset=56
// ivar _customizedLogLevelReport encoding=Q offset=64
// ivar _excludeModuleFilter encoding=@"NSArray" offset=72
// ivar _crashAbortTimeout encoding=Q offset=80
// ivar _crashServerUrl encoding=@"NSString" offset=88
// property debugMode attributes=TB,N,V_debugMode
// property channel attributes=T@"NSString",C,N,V_channel
// property version attributes=T@"NSString",C,N,V_version
// property defaultVersionFieldUsed attributes=TB,N,V_defaultVersionFieldUsed
// property deviceIdentifier attributes=T@"NSString",C,N,V_deviceIdentifier
// property monitorEnabled attributes=TB,N,V_monitorEnabled
// property monitorTimeout attributes=Td,N,V_monitorTimeout
// property delegate attributes=T@,N,V_delegate
// property symbolicateInProcessEnable attributes=TB,N,V_symbolicateInProcessEnable
// property unexpectedTerminatingDetectionEnable attributes=TB,N,V_unexpectedTerminatingDetectionEnable
// property viewControllerTrackingEnable attributes=TB,N,V_viewControllerTrackingEnable
// property applicationGroupIdentifier attributes=T@"NSString",C,N,V_applicationGroupIdentifier
// property customizedLogLevelReport attributes=TQ,N,V_customizedLogLevelReport
// property excludeModuleFilter attributes=T@"NSArray",C,N,V_excludeModuleFilter
// property consolelogEnable attributes=TB,N,V_consolelogEnable
// property crashAbortTimeout attributes=TQ,N,V_crashAbortTimeout
// property crashServerUrl attributes=T@"NSString",C,N,V_crashServerUrl
// IMP 0x100649a20 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006498f8 | B16@0:8
- (BOOL)debugMode;
// IMP 0x100649900 | v20@0:8B16
- (void)setDebugMode:(BOOL)arg0;
// IMP 0x100649908 | @16@0:8
- (id)channel;
// IMP 0x100649914 | v24@0:8@16
- (void)setChannel:(id)arg0;
// IMP 0x10064991c | @16@0:8
- (id)version;
// IMP 0x100649928 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x100649930 | B16@0:8
- (BOOL)defaultVersionFieldUsed;
// IMP 0x100649938 | v20@0:8B16
- (void)setDefaultVersionFieldUsed:(BOOL)arg0;
// IMP 0x100649940 | @16@0:8
- (id)deviceIdentifier;
// IMP 0x10064994c | v24@0:8@16
- (void)setDeviceIdentifier:(id)arg0;
// IMP 0x100649954 | B16@0:8
- (BOOL)monitorEnabled;
// IMP 0x10064995c | v20@0:8B16
- (void)setMonitorEnabled:(BOOL)arg0;
// IMP 0x100649964 | d16@0:8
- (double)monitorTimeout;
// IMP 0x10064996c | v24@0:8d16
- (void)setMonitorTimeout:(double)arg0;
// IMP 0x100649974 | @16@0:8
- (id)delegate;
// IMP 0x10064997c | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100649984 | B16@0:8
- (BOOL)symbolicateInProcessEnable;
// IMP 0x10064998c | v20@0:8B16
- (void)setSymbolicateInProcessEnable:(BOOL)arg0;
// IMP 0x100649994 | B16@0:8
- (BOOL)unexpectedTerminatingDetectionEnable;
// IMP 0x10064999c | v20@0:8B16
- (void)setUnexpectedTerminatingDetectionEnable:(BOOL)arg0;
// IMP 0x1006499a4 | B16@0:8
- (BOOL)viewControllerTrackingEnable;
// IMP 0x1006499ac | v20@0:8B16
- (void)setViewControllerTrackingEnable:(BOOL)arg0;
// IMP 0x1006499b4 | @16@0:8
- (id)applicationGroupIdentifier;
// IMP 0x1006499c0 | v24@0:8@16
- (void)setApplicationGroupIdentifier:(id)arg0;
// IMP 0x1006499c8 | Q16@0:8
- (unsigned long long)customizedLogLevelReport;
// IMP 0x1006499d0 | v24@0:8Q16
- (void)setCustomizedLogLevelReport:(unsigned long long)arg0;
// IMP 0x1006499d8 | @16@0:8
- (id)excludeModuleFilter;
// IMP 0x1006499e4 | v24@0:8@16
- (void)setExcludeModuleFilter:(id)arg0;
// IMP 0x1006499ec | B16@0:8
- (BOOL)consolelogEnable;
// IMP 0x1006499f4 | v20@0:8B16
- (void)setConsolelogEnable:(BOOL)arg0;
// IMP 0x1006499fc | Q16@0:8
- (unsigned long long)crashAbortTimeout;
// IMP 0x100649a04 | v24@0:8Q16
- (void)setCrashAbortTimeout:(unsigned long long)arg0;
// IMP 0x100649a0c | @16@0:8
- (id)crashServerUrl;
// IMP 0x100649a18 | v24@0:8@16
- (void)setCrashServerUrl:(id)arg0;
@end
