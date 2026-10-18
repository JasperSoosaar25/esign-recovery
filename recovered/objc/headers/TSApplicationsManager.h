// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d228
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface TSApplicationsManager : NSObject
// ivar _canDecrypt encoding=B offset=8
// ivar _helperVersion encoding=@"NSString" offset=16
// property isInstallHelperApp attributes=TB,R,N
// property isInstallLdid attributes=TB,R,N
// property canDecrypt attributes=TB,N,V_canDecrypt
// property helperVersion attributes=T@"NSString",C,N,V_helperVersion
// IMP 0x1000f0504 | @24@0:8@16
- (id)infoDictionaryForAppPath:(id)arg0;
// IMP 0x1000f0818 | @24@0:8@16
- (id)appIdForAppPath:(id)arg0;
// IMP 0x1000f0bc4 | @24@0:8@16
- (id)displayNameForAppPath:(id)arg0;
// IMP 0x1000f14b0 | @20@0:8i16
- (id)errorForCode:(int)arg0;
// IMP 0x1000f4d04 | i36@0:8@16B24^@28
- (int)installIpa:(id)arg0 force:(BOOL)arg1 log:(id *)arg2;
// IMP 0x1000f518c | i36@0:8@16B24^@28
- (int)installApp:(id)arg0 force:(BOOL)arg1 log:(id *)arg2;
// IMP 0x1000f566c | i24@0:8@16
- (int)uninstallApp:(id)arg0;
// IMP 0x1000f5c58 | i24@0:8@16
- (int)uninstallAppByPath:(id)arg0;
// IMP 0x1000f5fdc | i16@0:8
- (int)refreshIconCache;
// IMP 0x1000f6258 | i20@0:8B16
- (int)uninstallESignAndPreserve:(BOOL)arg0;
// IMP 0x1000f689c | i24@0:8@16
- (int)installHelperByBundlerIdentifier:(id)arg0;
// IMP 0x1000f6cc8 | i16@0:8
- (int)uninstallHelper;
// IMP 0x1000f7154 | i24@0:8@16
- (int)installLdidByPath:(id)arg0;
// IMP 0x1000f74bc | v16@0:8
- (void)respring;
// IMP 0x1000f74cc | i32@0:8@16@24
- (int)decryptApp:(id)arg0 toPath:(id)arg1;
// IMP 0x1000f7898 | i32@0:8@16@24
- (int)changeAppRegistration:(id)arg0 toState:(id)arg1;
// IMP 0x1000f7e30 | i24@0:8@16
- (int)refreshAppWithBundleID:(id)arg0;
// IMP 0x1000f81e4 | i24@0:8@16
- (int)modifyAppWithPath:(id)arg0;
// IMP 0x1000f85a8 | i24@0:8@16
- (int)installESignWithPath:(id)arg0;
// IMP 0x1000f8a18 | @16@0:8
- (id)persistenceHelperApp;
// IMP 0x1000f94f0 | v16@0:8
- (void)fixPermissions;
// IMP 0x1000f984c | v24@0:8@16
- (void)changeLocationWithString:(id)arg0;
// IMP 0x1000f9c38 | i24@0:8@16
- (int)enabledJITWithBundleId:(id)arg0;
// IMP 0x1000f9f4c | B16@0:8
- (BOOL)isInstallHelperApp;
// IMP 0x1000f9fcc | B16@0:8
- (BOOL)isInstallLdid;
// IMP 0x1000fa1b8 | B16@0:8
- (BOOL)canDecrypt;
// IMP 0x1000fa1e4 | v20@0:8B16
- (void)setCanDecrypt:(BOOL)arg0;
// IMP 0x1000fa22c | @16@0:8
- (id)helperVersion;
// IMP 0x1000fa240 | v24@0:8@16
- (void)setHelperVersion:(id)arg0;
// IMP 0x1000fa260 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000ed6c0 | B24@0:8^@16
+ (BOOL)testHelperCanUse:(id *)arg0;
// IMP 0x1000edb60 | B16@0:8
+ (BOOL)testDecrypt;
// IMP 0x1000edfe8 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1000eea4c | @16@0:8
+ (id)installedApps;
// IMP 0x1000effb4 | @24@0:8@16
+ (id)_getAppDicPath:(id)arg0;
// IMP 0x1000f7d14 | B24@0:8@16
+ (BOOL)openApplicationWithBundleID:(id)arg0;
@end
