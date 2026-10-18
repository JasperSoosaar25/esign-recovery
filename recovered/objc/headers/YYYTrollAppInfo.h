// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d368
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTrollAppInfo : NSObject
// ivar _hasTryGetLogo encoding=B offset=8
// ivar _isDecryptApp encoding=B offset=9
// ivar _containPath encoding=@"NSString" offset=16
// ivar _appPath encoding=@"NSString" offset=24
// ivar _executable encoding=@"NSString" offset=32
// ivar _appName encoding=@"NSString" offset=40
// ivar _bundleId encoding=@"NSString" offset=48
// ivar _version encoding=@"NSString" offset=56
// ivar _logo encoding=@"UIImage" offset=64
// ivar _infoDictionary encoding=@"NSDictionary" offset=72
// ivar _modifyDate encoding=@"NSDate" offset=80
// ivar _applicationType encoding=@"NSString" offset=88
// ivar _entitlements encoding=@"NSDictionary" offset=96
// property hasTryGetLogo attributes=TB,N,V_hasTryGetLogo
// property containPath attributes=T@"NSString",C,N,V_containPath
// property appPath attributes=T@"NSString",C,N,V_appPath
// property executable attributes=T@"NSString",C,N,V_executable
// property appName attributes=T@"NSString",C,N,V_appName
// property bundleId attributes=T@"NSString",C,N,V_bundleId
// property version attributes=T@"NSString",C,N,V_version
// property logo attributes=T@"UIImage",&,N,V_logo
// property infoDictionary attributes=T@"NSDictionary",&,N,V_infoDictionary
// property modifyDate attributes=T@"NSDate",&,N,V_modifyDate
// property applicationType attributes=T@"NSString",C,N,V_applicationType
// property entitlements attributes=T@"NSDictionary",&,N,V_entitlements
// property isDecryptApp attributes=TB,N,V_isDecryptApp
// IMP 0x100101928 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100101a20 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100101d4c | @16@0:8
- (id)tryGetImageFromInfoDictionary;
// IMP 0x100103ec8 | v16@0:8
- (void)refreshApplistionType;
// IMP 0x100103ffc | v16@0:8
- (void)refreshInfo;
// IMP 0x100105150 | @16@0:8
- (id)logo;
// IMP 0x1001054e0 | @16@0:8
- (id)applicationType;
// IMP 0x100105574 | B16@0:8
- (BOOL)isDegbugEnabled;
// IMP 0x1001059e0 | B16@0:8
- (BOOL)hasTryGetLogo;
// IMP 0x100105a14 | v20@0:8B16
- (void)setHasTryGetLogo:(BOOL)arg0;
// IMP 0x100105a5c | @16@0:8
- (id)containPath;
// IMP 0x100105a88 | v24@0:8@16
- (void)setContainPath:(id)arg0;
// IMP 0x100105b0c | @16@0:8
- (id)appPath;
// IMP 0x100105b2c | v24@0:8@16
- (void)setAppPath:(id)arg0;
// IMP 0x100105ba4 | @16@0:8
- (id)executable;
// IMP 0x100105bc4 | v24@0:8@16
- (void)setExecutable:(id)arg0;
// IMP 0x100105c3c | @16@0:8
- (id)appName;
// IMP 0x100105c50 | v24@0:8@16
- (void)setAppName:(id)arg0;
// IMP 0x100105cd4 | @16@0:8
- (id)bundleId;
// IMP 0x100105cf4 | v24@0:8@16
- (void)setBundleId:(id)arg0;
// IMP 0x100105d14 | @16@0:8
- (id)version;
// IMP 0x100105d40 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x100105dc4 | v24@0:8@16
- (void)setLogo:(id)arg0;
// IMP 0x100105de8 | @16@0:8
- (id)infoDictionary;
// IMP 0x100105e14 | v24@0:8@16
- (void)setInfoDictionary:(id)arg0;
// IMP 0x100105e7c | @16@0:8
- (id)modifyDate;
// IMP 0x100105e9c | v24@0:8@16
- (void)setModifyDate:(id)arg0;
// IMP 0x100105eb4 | v24@0:8@16
- (void)setApplicationType:(id)arg0;
// IMP 0x100105f2c | @16@0:8
- (id)entitlements;
// IMP 0x100105f40 | v24@0:8@16
- (void)setEntitlements:(id)arg0;
// IMP 0x100105f58 | B16@0:8
- (BOOL)isDecryptApp;
// IMP 0x100105f8c | v20@0:8B16
- (void)setIsDecryptApp:(BOOL)arg0;
// IMP 0x100105fa0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
