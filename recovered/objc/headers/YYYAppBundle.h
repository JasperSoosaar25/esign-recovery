// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99f58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppBundle : YYYBundle
// ivar _isSubApp encoding=B offset=112
// ivar _plugIns encoding=@"NSMutableArray" offset=120
// ivar _watchs encoding=@"NSMutableArray" offset=128
// ivar _signProgressBlock encoding=@? offset=136
// property appName attributes=T@"NSString",R,N
// property bundleId attributes=T@"NSString",R,N
// property version attributes=T@"NSString",R,N
// property isSubApp attributes=TB,N,V_isSubApp
// property plugIns attributes=T@"NSMutableArray",&,N,V_plugIns
// property watchs attributes=T@"NSMutableArray",&,N,V_watchs
// property signProgressBlock attributes=T@?,C,N,V_signProgressBlock
// IMP 0x1007593e8 | @16@0:8
- (id)appName;
// IMP 0x100759978 | @16@0:8
- (id)bundleId;
// IMP 0x100759c54 | @16@0:8
- (id)version;
// IMP 0x100746330 | @28@0:8@16B24
- (id)initWithAppPath:(id)arg0 readOnly:(BOOL)arg1;
// IMP 0x1007463f8 | @32@0:8@16B24B28
- (id)initWithAppPath:(id)arg0 readOnly:(BOOL)arg1 thinToArm64:(BOOL)arg2;
// IMP 0x10074710c | @24@0:8@16
- (id)initWithAppPath:(id)arg0;
// IMP 0x1007471ec | v24@0:8@16
- (void)addInfoPlistInfo:(id)arg0;
// IMP 0x1007478e0 | v24@0:8@16
- (void)changeVersion:(id)arg0;
// IMP 0x100747c54 | v32@0:8@16@24
- (void)changePlugBundleIdentifier:(id)arg0 toNewBundleIdentifier:(id)arg1;
// IMP 0x100749090 | v24@0:8@16
- (void)changeBundleIdentifier:(id)arg0;
// IMP 0x10074ac2c | v24@0:8@16
- (void)changeDisplayName:(id)arg0;
// IMP 0x10074bd08 | v16@0:8
- (void)removeMinimumOSVersion;
// IMP 0x10074c08c | v16@0:8
- (void)removeUISupportedDevices;
// IMP 0x10074c3e0 | v16@0:8
- (void)removePlugInsApp;
// IMP 0x10074cfd8 | v16@0:8
- (void)removeWatchFile;
// IMP 0x10074dc08 | v16@0:8
- (void)removeURLScheme;
// IMP 0x10074dffc | v16@0:8
- (void)fixLogoIcon;
// IMP 0x10074ec38 | v16@0:8
- (void)addUISupportsDocumentBrowser;
// IMP 0x10074f358 | v24@0:8q16
- (void)callProgress:(long long)arg0;
// IMP 0x10074f4c0 | B32@0:8@16^@24
- (BOOL)signWithSignAsset:(id)arg0 error:(id *)arg1;
// IMP 0x100754220 | B32@0:8@16^@24
- (BOOL)addDylib:(id)arg0 error:(id *)arg1;
// IMP 0x1007542e8 | B40@0:8@16@24^@32
- (BOOL)addDylib:(id)arg0 options:(id)arg1 error:(id *)arg2;
// IMP 0x1007560f4 | v24@0:8@16
- (void)removeLinkedDylib:(id)arg0;
// IMP 0x100756690 | @16@0:8
- (id)getDylibLinks;
// IMP 0x100756704 | @16@0:8
- (id)pluginsDirectory;
// IMP 0x10075694c | @16@0:8
- (id)watchDirectory;
// IMP 0x100756bbc | @16@0:8
- (id)watchPlaceholderDirectory;
// IMP 0x10075708c | @16@0:8
- (id)plugIns;
// IMP 0x100758120 | @16@0:8
- (id)watchs;
// IMP 0x100758f00 | @16@0:8
- (id)getAllSubframeworks;
// IMP 0x1007591d0 | B16@0:8
- (BOOL)isSubApp;
// IMP 0x1007591ec | v20@0:8B16
- (void)setIsSubApp:(BOOL)arg0;
// IMP 0x1007591fc | v24@0:8@16
- (void)setPlugIns:(id)arg0;
// IMP 0x100759274 | v24@0:8@16
- (void)setWatchs:(id)arg0;
// IMP 0x100759294 | @?16@0:8
- (id /* block */)signProgressBlock;
// IMP 0x1007592bc | v24@0:8@?16
- (void)setSignProgressBlock:(id /* block */)arg0;
// IMP 0x100759348 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100745e04 | @24@0:8@16
+ (id)bundleWithPath:(id)arg0;
@end
