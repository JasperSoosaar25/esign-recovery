// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95fa0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BuglyConfig : NSObject
// ivar _debugMode encoding=B offset=8
// ivar _blockMonitorEnable encoding=B offset=9
// ivar _symbolicateInProcessEnable encoding=B offset=10
// ivar _unexpectedTerminatingDetectionEnable encoding=B offset=11
// ivar _viewControllerTrackingEnable encoding=B offset=12
// ivar _consolelogEnable encoding=B offset=13
// ivar _channel encoding=@"NSString" offset=16
// ivar _version encoding=@"NSString" offset=24
// ivar _deviceIdentifier encoding=@"NSString" offset=32
// ivar _blockMonitorTimeout encoding=d offset=40
// ivar _applicationGroupIdentifier encoding=@"NSString" offset=48
// ivar _delegate encoding=@"<BuglyDelegate>" offset=56
// ivar _reportLogLevel encoding=Q offset=64
// ivar _excludeModuleFilter encoding=@"NSArray" offset=72
// ivar _crashAbortTimeout encoding=Q offset=80
// ivar _crashServerUrl encoding=@"NSString" offset=88
// property debugMode attributes=TB,N,V_debugMode
// property channel attributes=T@"NSString",C,N,V_channel
// property version attributes=T@"NSString",C,N,V_version
// property deviceIdentifier attributes=T@"NSString",C,N,V_deviceIdentifier
// property blockMonitorEnable attributes=TB,N,V_blockMonitorEnable
// property blockMonitorTimeout attributes=Td,N,V_blockMonitorTimeout
// property applicationGroupIdentifier attributes=T@"NSString",C,N,V_applicationGroupIdentifier
// property symbolicateInProcessEnable attributes=TB,N,V_symbolicateInProcessEnable
// property unexpectedTerminatingDetectionEnable attributes=TB,N,V_unexpectedTerminatingDetectionEnable
// property viewControllerTrackingEnable attributes=TB,N,V_viewControllerTrackingEnable
// property delegate attributes=T@"<BuglyDelegate>",N,V_delegate
// property reportLogLevel attributes=TQ,N,V_reportLogLevel
// property excludeModuleFilter attributes=T@"NSArray",C,N,V_excludeModuleFilter
// property consolelogEnable attributes=TB,N,V_consolelogEnable
// property crashAbortTimeout attributes=TQ,N,V_crashAbortTimeout
// property crashServerUrl attributes=T@"NSString",C,N,V_crashServerUrl
// IMP 0x100659fe4 | @16@0:8
- (id)init;
// IMP 0x10065a158 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10065a040 | B16@0:8
- (BOOL)debugMode;
// IMP 0x10065a048 | v20@0:8B16
- (void)setDebugMode:(BOOL)arg0;
// IMP 0x10065a050 | @16@0:8
- (id)channel;
// IMP 0x10065a05c | v24@0:8@16
- (void)setChannel:(id)arg0;
// IMP 0x10065a064 | @16@0:8
- (id)version;
// IMP 0x10065a070 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x10065a078 | @16@0:8
- (id)deviceIdentifier;
// IMP 0x10065a084 | v24@0:8@16
- (void)setDeviceIdentifier:(id)arg0;
// IMP 0x10065a08c | B16@0:8
- (BOOL)blockMonitorEnable;
// IMP 0x10065a094 | v20@0:8B16
- (void)setBlockMonitorEnable:(BOOL)arg0;
// IMP 0x10065a09c | d16@0:8
- (double)blockMonitorTimeout;
// IMP 0x10065a0a4 | v24@0:8d16
- (void)setBlockMonitorTimeout:(double)arg0;
// IMP 0x10065a0ac | @16@0:8
- (id)applicationGroupIdentifier;
// IMP 0x10065a0b8 | v24@0:8@16
- (void)setApplicationGroupIdentifier:(id)arg0;
// IMP 0x10065a0c0 | B16@0:8
- (BOOL)symbolicateInProcessEnable;
// IMP 0x10065a0c8 | v20@0:8B16
- (void)setSymbolicateInProcessEnable:(BOOL)arg0;
// IMP 0x10065a0d0 | B16@0:8
- (BOOL)unexpectedTerminatingDetectionEnable;
// IMP 0x10065a0d8 | v20@0:8B16
- (void)setUnexpectedTerminatingDetectionEnable:(BOOL)arg0;
// IMP 0x10065a0e0 | B16@0:8
- (BOOL)viewControllerTrackingEnable;
// IMP 0x10065a0e8 | v20@0:8B16
- (void)setViewControllerTrackingEnable:(BOOL)arg0;
// IMP 0x10065a0f0 | @16@0:8
- (id)delegate;
// IMP 0x10065a0f8 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10065a100 | Q16@0:8
- (unsigned long long)reportLogLevel;
// IMP 0x10065a108 | v24@0:8Q16
- (void)setReportLogLevel:(unsigned long long)arg0;
// IMP 0x10065a110 | @16@0:8
- (id)excludeModuleFilter;
// IMP 0x10065a11c | v24@0:8@16
- (void)setExcludeModuleFilter:(id)arg0;
// IMP 0x10065a124 | B16@0:8
- (BOOL)consolelogEnable;
// IMP 0x10065a12c | v20@0:8B16
- (void)setConsolelogEnable:(BOOL)arg0;
// IMP 0x10065a134 | Q16@0:8
- (unsigned long long)crashAbortTimeout;
// IMP 0x10065a13c | v24@0:8Q16
- (void)setCrashAbortTimeout:(unsigned long long)arg0;
// IMP 0x10065a144 | @16@0:8
- (id)crashServerUrl;
// IMP 0x10065a150 | v24@0:8@16
- (void)setCrashServerUrl:(id)arg0;
@end
