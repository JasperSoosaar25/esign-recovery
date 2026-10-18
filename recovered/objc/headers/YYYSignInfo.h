// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d8e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignInfo : NSObject
// ivar _removePlugIns encoding=B offset=8
// ivar _removeWatchs encoding=B offset=9
// ivar _removeMinimumOSVersion encoding=B offset=10
// ivar _removeUISupportedDevices encoding=B offset=11
// ivar _fixIcon encoding=B offset=12
// ivar _fixJb encoding=B offset=13
// ivar _addUISupportsDocumentBrowser encoding=B offset=14
// ivar _removeURLScheme encoding=B offset=15
// ivar _installWhenSign encoding=B offset=16
// ivar _igonSign encoding=B offset=17
// ivar _duokai encoding=B offset=18
// ivar _removeEmbedded encoding=B offset=19
// ivar _filePath encoding=@"NSString" offset=24
// ivar _bundle encoding=@"YYYAppBundle" offset=32
// ivar _cert encoding=@"YYYCertModel" offset=40
// ivar _bundleId encoding=@"NSString" offset=48
// ivar _appName encoding=@"NSString" offset=56
// ivar _version encoding=@"NSString" offset=64
// ivar _startIndex encoding=q offset=72
// ivar _duokaiNumber encoding=q offset=80
// ivar _fileName encoding=@"NSString" offset=88
// ivar _injectPath encoding=Q offset=96
// ivar _injectFolder encoding=Q offset=104
// ivar _zipLevel encoding=Q offset=112
// ivar _logo encoding=@"UIImage" offset=120
// ivar _addDylibs encoding=@"NSMutableArray" offset=128
// ivar _removeDylibs encoding=@"NSMutableArray" offset=136
// ivar _customInfos encoding=@"NSMutableArray" offset=144
// ivar _defaultLogoData encoding=@"NSData" offset=152
// ivar _signAsset encoding=@"YYYSignAsset" offset=160
// ivar _appBundle encoding=@"YYYAppBundle" offset=168
// ivar _logoPath encoding=@"NSString" offset=176
// ivar _entitlementsPath encoding=@"NSString" offset=184
// property filePath attributes=T@"NSString",C,N,V_filePath
// property bundle attributes=T@"YYYAppBundle",&,N,V_bundle
// property cert attributes=T@"YYYCertModel",&,N,V_cert
// property bundleId attributes=T@"NSString",C,N,V_bundleId
// property appName attributes=T@"NSString",C,N,V_appName
// property version attributes=T@"NSString",C,N,V_version
// property removePlugIns attributes=TB,N,V_removePlugIns
// property removeWatchs attributes=TB,N,V_removeWatchs
// property removeMinimumOSVersion attributes=TB,N,V_removeMinimumOSVersion
// property removeUISupportedDevices attributes=TB,N,V_removeUISupportedDevices
// property fixIcon attributes=TB,N,V_fixIcon
// property fixJb attributes=TB,N,V_fixJb
// property addUISupportsDocumentBrowser attributes=TB,N,V_addUISupportsDocumentBrowser
// property removeURLScheme attributes=TB,N,V_removeURLScheme
// property installWhenSign attributes=TB,N,V_installWhenSign
// property igonSign attributes=TB,N,V_igonSign
// property duokai attributes=TB,N,V_duokai
// property removeEmbedded attributes=TB,N,V_removeEmbedded
// property startIndex attributes=Tq,N,V_startIndex
// property duokaiNumber attributes=Tq,N,V_duokaiNumber
// property fileName attributes=T@"NSString",C,N,V_fileName
// property injectPath attributes=TQ,N,V_injectPath
// property injectFolder attributes=TQ,N,V_injectFolder
// property zipLevel attributes=TQ,N,V_zipLevel
// property logo attributes=T@"UIImage",&,N,V_logo
// property addDylibs attributes=T@"NSMutableArray",&,N,V_addDylibs
// property removeDylibs attributes=T@"NSMutableArray",&,N,V_removeDylibs
// property customInfos attributes=T@"NSMutableArray",&,N,V_customInfos
// property defaultLogoData attributes=T@"NSData",&,N,V_defaultLogoData
// property currentFileName attributes=T@"NSString",R,N
// property currentBundleId attributes=T@"NSString",R,N
// property currentAppName attributes=T@"NSString",R,N
// property currentVersion attributes=T@"NSString",R,N
// property currentLogo attributes=T@"UIImage",R,N
// property signAsset attributes=T@"YYYSignAsset",&,N,V_signAsset
// property appBundle attributes=T@"YYYAppBundle",&,N,V_appBundle
// property logoPath attributes=T@"NSString",C,N,V_logoPath
// property entitlementsPath attributes=T@"NSString",C,N,V_entitlementsPath
// IMP 0x100163ba4 | @24@0:8@16
- (id)initWithFilePath:(id)arg0;
// IMP 0x100163f18 | v16@0:8
- (void)defaultSetup;
// IMP 0x1001647b8 | @16@0:8
- (id)searchAppIcon;
// IMP 0x10016587c | @16@0:8
- (id)addDylibs;
// IMP 0x100165964 | @16@0:8
- (id)removeDylibs;
// IMP 0x100165a64 | @16@0:8
- (id)customInfos;
// IMP 0x100165b4c | @16@0:8
- (id)currentAppName;
// IMP 0x100165cc0 | @16@0:8
- (id)currentVersion;
// IMP 0x100165f04 | @16@0:8
- (id)currentBundleId;
// IMP 0x1001660e8 | @16@0:8
- (id)currentLogo;
// IMP 0x10016648c | @16@0:8
- (id)currentFileName;
// IMP 0x100166b2c | B16@0:8
- (BOOL)duokai;
// IMP 0x100166bcc | @16@0:8
- (id)description;
// IMP 0x10016764c | @16@0:8
- (id)filePath;
// IMP 0x100167660 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1001676d8 | @16@0:8
- (id)bundle;
// IMP 0x1001676f8 | v24@0:8@16
- (void)setBundle:(id)arg0;
// IMP 0x10016774c | @16@0:8
- (id)cert;
// IMP 0x100167760 | v24@0:8@16
- (void)setCert:(id)arg0;
// IMP 0x1001677bc | @16@0:8
- (id)bundleId;
// IMP 0x1001677ec | v24@0:8@16
- (void)setBundleId:(id)arg0;
// IMP 0x100167800 | @16@0:8
- (id)appName;
// IMP 0x100167830 | v24@0:8@16
- (void)setAppName:(id)arg0;
// IMP 0x1001678b4 | @16@0:8
- (id)version;
// IMP 0x1001678d4 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x100167958 | B16@0:8
- (BOOL)removePlugIns;
// IMP 0x10016798c | v20@0:8B16
- (void)setRemovePlugIns:(BOOL)arg0;
// IMP 0x1001679b8 | B16@0:8
- (BOOL)removeWatchs;
// IMP 0x1001679cc | v20@0:8B16
- (void)setRemoveWatchs:(BOOL)arg0;
// IMP 0x1001679ec | B16@0:8
- (BOOL)removeMinimumOSVersion;
// IMP 0x100167a0c | v20@0:8B16
- (void)setRemoveMinimumOSVersion:(BOOL)arg0;
// IMP 0x100167a2c | B16@0:8
- (BOOL)removeUISupportedDevices;
// IMP 0x100167a4c | v20@0:8B16
- (void)setRemoveUISupportedDevices:(BOOL)arg0;
// IMP 0x100167a7c | B16@0:8
- (BOOL)fixIcon;
// IMP 0x100167a98 | v20@0:8B16
- (void)setFixIcon:(BOOL)arg0;
// IMP 0x100167ac4 | B16@0:8
- (BOOL)fixJb;
// IMP 0x100167af8 | v20@0:8B16
- (void)setFixJb:(BOOL)arg0;
// IMP 0x100167b24 | B16@0:8
- (BOOL)addUISupportsDocumentBrowser;
// IMP 0x100167b4c | v20@0:8B16
- (void)setAddUISupportsDocumentBrowser:(BOOL)arg0;
// IMP 0x100167b78 | B16@0:8
- (BOOL)removeURLScheme;
// IMP 0x100167b94 | v20@0:8B16
- (void)setRemoveURLScheme:(BOOL)arg0;
// IMP 0x100167bb4 | B16@0:8
- (BOOL)installWhenSign;
// IMP 0x100167be8 | v20@0:8B16
- (void)setInstallWhenSign:(BOOL)arg0;
// IMP 0x100167bfc | B16@0:8
- (BOOL)igonSign;
// IMP 0x100167c18 | v20@0:8B16
- (void)setIgonSign:(BOOL)arg0;
// IMP 0x100167c38 | v20@0:8B16
- (void)setDuokai:(BOOL)arg0;
// IMP 0x100167c58 | B16@0:8
- (BOOL)removeEmbedded;
// IMP 0x100167c74 | v20@0:8B16
- (void)setRemoveEmbedded:(BOOL)arg0;
// IMP 0x100167c88 | q16@0:8
- (long long)startIndex;
// IMP 0x100167ca8 | v24@0:8q16
- (void)setStartIndex:(long long)arg0;
// IMP 0x100167cd4 | q16@0:8
- (long long)duokaiNumber;
// IMP 0x100167cf4 | v24@0:8q16
- (void)setDuokaiNumber:(long long)arg0;
// IMP 0x100167d08 | @16@0:8
- (id)fileName;
// IMP 0x100167d1c | v24@0:8@16
- (void)setFileName:(id)arg0;
// IMP 0x100167da0 | Q16@0:8
- (unsigned long long)injectPath;
// IMP 0x100167dd0 | v24@0:8Q16
- (void)setInjectPath:(unsigned long long)arg0;
// IMP 0x100167dfc | Q16@0:8
- (unsigned long long)injectFolder;
// IMP 0x100167e2c | v24@0:8Q16
- (void)setInjectFolder:(unsigned long long)arg0;
// IMP 0x100167e4c | Q16@0:8
- (unsigned long long)zipLevel;
// IMP 0x100167e60 | v24@0:8Q16
- (void)setZipLevel:(unsigned long long)arg0;
// IMP 0x100167e80 | @16@0:8
- (id)logo;
// IMP 0x100167eac | v24@0:8@16
- (void)setLogo:(id)arg0;
// IMP 0x100167f08 | v24@0:8@16
- (void)setAddDylibs:(id)arg0;
// IMP 0x100167f64 | v24@0:8@16
- (void)setRemoveDylibs:(id)arg0;
// IMP 0x100167fc8 | v24@0:8@16
- (void)setCustomInfos:(id)arg0;
// IMP 0x100168028 | @16@0:8
- (id)defaultLogoData;
// IMP 0x100168048 | v24@0:8@16
- (void)setDefaultLogoData:(id)arg0;
// IMP 0x1001680d8 | @16@0:8
- (id)signAsset;
// IMP 0x1001680ec | v24@0:8@16
- (void)setSignAsset:(id)arg0;
// IMP 0x100168154 | @16@0:8
- (id)appBundle;
// IMP 0x100168180 | v24@0:8@16
- (void)setAppBundle:(id)arg0;
// IMP 0x1001681f0 | @16@0:8
- (id)logoPath;
// IMP 0x100168220 | v24@0:8@16
- (void)setLogoPath:(id)arg0;
// IMP 0x100168234 | @16@0:8
- (id)entitlementsPath;
// IMP 0x100168254 | v24@0:8@16
- (void)setEntitlementsPath:(id)arg0;
// IMP 0x1001682cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
