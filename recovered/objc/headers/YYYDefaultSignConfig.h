// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b3f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDefaultSignConfig : NSObject
// ivar _installWhenSign encoding=B offset=8
// ivar _removePlugIns encoding=B offset=9
// ivar _removeWatchs encoding=B offset=10
// ivar _removeMinimumOSVersion encoding=B offset=11
// ivar _removeUISupportedDevices encoding=B offset=12
// ivar _removeURLScheme encoding=B offset=13
// ivar _addUISupportsDocumentBrowser encoding=B offset=14
// ivar _fixIcon encoding=B offset=15
// ivar _fixJb encoding=B offset=16
// ivar _igonSign encoding=B offset=17
// ivar _removeEmbedded encoding=B offset=18
// ivar _appNamePrefix encoding=@"NSString" offset=24
// ivar _appNameSuffix encoding=@"NSString" offset=32
// ivar _addDylibs encoding=@"NSMutableArray" offset=40
// ivar _addFiles encoding=@"NSMutableArray" offset=48
// ivar _customInfos encoding=@"NSMutableArray" offset=56
// ivar _fileNameRule encoding=Q offset=64
// ivar _injectPath encoding=Q offset=72
// ivar _injectFolder encoding=Q offset=80
// ivar _zipLevel encoding=Q offset=88
// property appNamePrefix attributes=T@"NSString",C,N,V_appNamePrefix
// property appNameSuffix attributes=T@"NSString",C,N,V_appNameSuffix
// property installWhenSign attributes=TB,N,V_installWhenSign
// property removePlugIns attributes=TB,N,V_removePlugIns
// property removeWatchs attributes=TB,N,V_removeWatchs
// property removeMinimumOSVersion attributes=TB,N,V_removeMinimumOSVersion
// property removeUISupportedDevices attributes=TB,N,V_removeUISupportedDevices
// property removeURLScheme attributes=TB,N,V_removeURLScheme
// property addUISupportsDocumentBrowser attributes=TB,N,V_addUISupportsDocumentBrowser
// property fixIcon attributes=TB,N,V_fixIcon
// property fixJb attributes=TB,N,V_fixJb
// property igonSign attributes=TB,N,V_igonSign
// property removeEmbedded attributes=TB,N,V_removeEmbedded
// property addDylibs attributes=T@"NSMutableArray",&,N,V_addDylibs
// property addFiles attributes=T@"NSMutableArray",&,N,V_addFiles
// property customInfos attributes=T@"NSMutableArray",&,N,V_customInfos
// property fileNameRule attributes=TQ,N,V_fileNameRule
// property injectPath attributes=TQ,N,V_injectPath
// property injectFolder attributes=TQ,N,V_injectFolder
// property zipLevel attributes=TQ,N,V_zipLevel
// IMP 0x100027910 | @16@0:8
- (id)init;
// IMP 0x100027c2c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100027ccc | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100027dc4 | v16@0:8
- (void)save;
// IMP 0x100028128 | @16@0:8
- (id)customInfos;
// IMP 0x1000281c8 | @16@0:8
- (id)addFiles;
// IMP 0x1000282a4 | @16@0:8
- (id)appNamePrefix;
// IMP 0x1000282c4 | v24@0:8@16
- (void)setAppNamePrefix:(id)arg0;
// IMP 0x100028348 | @16@0:8
- (id)appNameSuffix;
// IMP 0x100028368 | v24@0:8@16
- (void)setAppNameSuffix:(id)arg0;
// IMP 0x1000283e0 | B16@0:8
- (BOOL)installWhenSign;
// IMP 0x100028414 | v20@0:8B16
- (void)setInstallWhenSign:(BOOL)arg0;
// IMP 0x100028450 | B16@0:8
- (BOOL)removePlugIns;
// IMP 0x100028470 | v20@0:8B16
- (void)setRemovePlugIns:(BOOL)arg0;
// IMP 0x1000284ac | B16@0:8
- (BOOL)removeWatchs;
// IMP 0x1000284d4 | v20@0:8B16
- (void)setRemoveWatchs:(BOOL)arg0;
// IMP 0x100028500 | B16@0:8
- (BOOL)removeMinimumOSVersion;
// IMP 0x100028528 | v20@0:8B16
- (void)setRemoveMinimumOSVersion:(BOOL)arg0;
// IMP 0x100028554 | B16@0:8
- (BOOL)removeUISupportedDevices;
// IMP 0x10002857c | v20@0:8B16
- (void)setRemoveUISupportedDevices:(BOOL)arg0;
// IMP 0x10002859c | B16@0:8
- (BOOL)removeURLScheme;
// IMP 0x1000285d0 | v20@0:8B16
- (void)setRemoveURLScheme:(BOOL)arg0;
// IMP 0x1000285f0 | B16@0:8
- (BOOL)addUISupportsDocumentBrowser;
// IMP 0x100028618 | v20@0:8B16
- (void)setAddUISupportsDocumentBrowser:(BOOL)arg0;
// IMP 0x100028644 | B16@0:8
- (BOOL)fixIcon;
// IMP 0x100028670 | v20@0:8B16
- (void)setFixIcon:(BOOL)arg0;
// IMP 0x10002869c | B16@0:8
- (BOOL)fixJb;
// IMP 0x1000286b0 | v20@0:8B16
- (void)setFixJb:(BOOL)arg0;
// IMP 0x1000286ec | B16@0:8
- (BOOL)igonSign;
// IMP 0x10002870c | v20@0:8B16
- (void)setIgonSign:(BOOL)arg0;
// IMP 0x100028714 | B16@0:8
- (BOOL)removeEmbedded;
// IMP 0x100028734 | v20@0:8B16
- (void)setRemoveEmbedded:(BOOL)arg0;
// IMP 0x10002877c | @16@0:8
- (id)addDylibs;
// IMP 0x100028790 | v24@0:8@16
- (void)setAddDylibs:(id)arg0;
// IMP 0x1000287f8 | v24@0:8@16
- (void)setAddFiles:(id)arg0;
// IMP 0x10002884c | v24@0:8@16
- (void)setCustomInfos:(id)arg0;
// IMP 0x1000288d0 | Q16@0:8
- (unsigned long long)fileNameRule;
// IMP 0x1000288fc | v24@0:8Q16
- (void)setFileNameRule:(unsigned long long)arg0;
// IMP 0x10002891c | Q16@0:8
- (unsigned long long)injectPath;
// IMP 0x100028930 | v24@0:8Q16
- (void)setInjectPath:(unsigned long long)arg0;
// IMP 0x10002895c | Q16@0:8
- (unsigned long long)injectFolder;
// IMP 0x10002897c | v24@0:8Q16
- (void)setInjectFolder:(unsigned long long)arg0;
// IMP 0x100028990 | Q16@0:8
- (unsigned long long)zipLevel;
// IMP 0x1000289a4 | v24@0:8Q16
- (void)setZipLevel:(unsigned long long)arg0;
// IMP 0x1000289e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100027470 | @16@0:8
+ (id)shared;
@end
