// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c817b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYModifyInfo : NSObject
// ivar _removeMinimumOSVersion encoding=B offset=8
// ivar _removeUISupportedDevices encoding=B offset=9
// ivar _fixJb encoding=B offset=10
// ivar _addUISupportsDocumentBrowser encoding=B offset=11
// ivar _removeURLScheme encoding=B offset=12
// ivar _bundle encoding=@"YYYAppBundle" offset=16
// ivar _origImage encoding=@"UIImage" offset=24
// ivar _appPath encoding=@"NSString" offset=32
// ivar _appName encoding=@"NSString" offset=40
// ivar _version encoding=@"NSString" offset=48
// ivar _logo encoding=@"UIImage" offset=56
// ivar _logoData encoding=@"NSData" offset=64
// ivar _addDylibs encoding=@"NSMutableArray" offset=72
// ivar _removeDylibs encoding=@"NSMutableArray" offset=80
// ivar _injectPath encoding=Q offset=88
// ivar _injectFolder encoding=Q offset=96
// ivar _customInfos encoding=@"NSMutableArray" offset=104
// property bundle attributes=T@"YYYAppBundle",&,N,V_bundle
// property origImage attributes=T@"UIImage",&,N,V_origImage
// property appPath attributes=T@"NSString",C,N,V_appPath
// property appName attributes=T@"NSString",C,N,V_appName
// property version attributes=T@"NSString",C,N,V_version
// property logo attributes=T@"UIImage",&,N,V_logo
// property logoData attributes=T@"NSData",&,N,V_logoData
// property addDylibs attributes=T@"NSMutableArray",&,N,V_addDylibs
// property removeDylibs attributes=T@"NSMutableArray",&,N,V_removeDylibs
// property currentAppName attributes=T@"NSString",R,N
// property currentVersion attributes=T@"NSString",R,N
// property currentLogo attributes=T@"UIImage",R,N
// property removeMinimumOSVersion attributes=TB,N,V_removeMinimumOSVersion
// property removeUISupportedDevices attributes=TB,N,V_removeUISupportedDevices
// property fixJb attributes=TB,N,V_fixJb
// property addUISupportsDocumentBrowser attributes=TB,N,V_addUISupportsDocumentBrowser
// property removeURLScheme attributes=TB,N,V_removeURLScheme
// property injectPath attributes=TQ,N,V_injectPath
// property injectFolder attributes=TQ,N,V_injectFolder
// property customInfos attributes=T@"NSMutableArray",&,N,V_customInfos
// IMP 0x1003c8af4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1003ca0d4 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1003cba44 | @16@0:8
- (id)init;
// IMP 0x1003cbc68 | v16@0:8
- (void)defaultSetup;
// IMP 0x1003cbe00 | @16@0:8
- (id)replaceDEBToDylib;
// IMP 0x1003cd03c | @16@0:8
- (id)currentAppName;
// IMP 0x1003cd214 | @16@0:8
- (id)currentVersion;
// IMP 0x1003cd3f0 | @16@0:8
- (id)currentLogo;
// IMP 0x1003cd764 | v24@0:8@16
- (void)setLogo:(id)arg0;
// IMP 0x1003cd8ec | @16@0:8
- (id)bundle;
// IMP 0x1003cd90c | v24@0:8@16
- (void)setBundle:(id)arg0;
// IMP 0x1003cd99c | @16@0:8
- (id)origImage;
// IMP 0x1003cd9b0 | v24@0:8@16
- (void)setOrigImage:(id)arg0;
// IMP 0x1003cda10 | @16@0:8
- (id)appPath;
// IMP 0x1003cda3c | v24@0:8@16
- (void)setAppPath:(id)arg0;
// IMP 0x1003cdac0 | @16@0:8
- (id)appName;
// IMP 0x1003cdae0 | v24@0:8@16
- (void)setAppName:(id)arg0;
// IMP 0x1003cdb58 | @16@0:8
- (id)version;
// IMP 0x1003cdb88 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x1003cdc0c | @16@0:8
- (id)logo;
// IMP 0x1003cdc2c | @16@0:8
- (id)logoData;
// IMP 0x1003cdc4c | v24@0:8@16
- (void)setLogoData:(id)arg0;
// IMP 0x1003cdcac | @16@0:8
- (id)addDylibs;
// IMP 0x1003cdcdc | v24@0:8@16
- (void)setAddDylibs:(id)arg0;
// IMP 0x1003cdd70 | @16@0:8
- (id)removeDylibs;
// IMP 0x1003cdd90 | v24@0:8@16
- (void)setRemoveDylibs:(id)arg0;
// IMP 0x1003cddf0 | B16@0:8
- (BOOL)removeMinimumOSVersion;
// IMP 0x1003cde1c | v20@0:8B16
- (void)setRemoveMinimumOSVersion:(BOOL)arg0;
// IMP 0x1003cde3c | B16@0:8
- (BOOL)removeUISupportedDevices;
// IMP 0x1003cde64 | v20@0:8B16
- (void)setRemoveUISupportedDevices:(BOOL)arg0;
// IMP 0x1003cde90 | B16@0:8
- (BOOL)fixJb;
// IMP 0x1003cdea4 | v20@0:8B16
- (void)setFixJb:(BOOL)arg0;
// IMP 0x1003cded4 | B16@0:8
- (BOOL)addUISupportsDocumentBrowser;
// IMP 0x1003cdee8 | v20@0:8B16
- (void)setAddUISupportsDocumentBrowser:(BOOL)arg0;
// IMP 0x1003cdf08 | B16@0:8
- (BOOL)removeURLScheme;
// IMP 0x1003cdf28 | v20@0:8B16
- (void)setRemoveURLScheme:(BOOL)arg0;
// IMP 0x1003cdf54 | Q16@0:8
- (unsigned long long)injectPath;
// IMP 0x1003cdf74 | v24@0:8Q16
- (void)setInjectPath:(unsigned long long)arg0;
// IMP 0x1003cdf94 | Q16@0:8
- (unsigned long long)injectFolder;
// IMP 0x1003cdfc4 | v24@0:8Q16
- (void)setInjectFolder:(unsigned long long)arg0;
// IMP 0x1003cdfe4 | @16@0:8
- (id)customInfos;
// IMP 0x1003ce010 | v24@0:8@16
- (void)setCustomInfos:(id)arg0;
// IMP 0x1003ce080 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003cd8cc | B16@0:8
+ (BOOL)supportsSecureCoding;
@end
