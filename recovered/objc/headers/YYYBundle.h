// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99f80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBundle : NSObject
// ivar _isFramework encoding=B offset=8
// ivar _isReadOnly encoding=B offset=9
// ivar _thin encoding=B offset=10
// ivar _bundlePath encoding=@"NSString" offset=16
// ivar _executable encoding=@"NSString" offset=24
// ivar _executablePath encoding=@"NSString" offset=32
// ivar _machO encoding=@"YYYMachO" offset=40
// ivar _frameworks encoding=@"NSMutableArray" offset=48
// ivar _infoPath encoding=@"NSString" offset=56
// ivar _bundleIdentifier encoding=@"NSString" offset=64
// ivar _infoDictionary encoding=@"NSMutableDictionary" offset=72
// ivar _link_path encoding=@"NSString" offset=80
// ivar _executable_path encoding=@"NSString" offset=88
// ivar _loader_path encoding=@"NSString" offset=96
// ivar _rpaths encoding=@"NSArray" offset=104
// property bundlePath attributes=T@"NSString",C,N,V_bundlePath
// property executable attributes=T@"NSString",C,N,V_executable
// property infoPath attributes=T@"NSString",C,N,V_infoPath
// property executablePath attributes=T@"NSString",C,N,V_executablePath
// property isFramework attributes=TB,N,V_isFramework
// property machO attributes=T@"YYYMachO",&,N,V_machO
// property frameworks attributes=T@"NSMutableArray",&,N,V_frameworks
// property bundleIdentifier attributes=T@"NSString",C,N,V_bundleIdentifier
// property infoDictionary attributes=T@"NSMutableDictionary",&,N,V_infoDictionary
// property link_path attributes=T@"NSString",C,N,V_link_path
// property executable_path attributes=T@"NSString",C,N,V_executable_path
// property loader_path attributes=T@"NSString",C,N,V_loader_path
// property rpaths attributes=T@"NSArray",&,N,V_rpaths
// property isReadOnly attributes=TB,N,V_isReadOnly
// property thin attributes=TB,N,V_thin
// IMP 0x10073a2e0 | @28@0:8@16B24
- (id)initWithPath:(id)arg0 readOnly:(BOOL)arg1;
// IMP 0x10073a390 | @32@0:8@16B24B28
- (id)initWithPath:(id)arg0 readOnly:(BOOL)arg1 thinToArm64:(BOOL)arg2;
// IMP 0x10073b948 | @24@0:8@16
- (id)initWithPath:(id)arg0;
// IMP 0x10073b9f8 | B32@0:8@16^@24
- (BOOL)signWithSignAsset:(id)arg0 error:(id *)arg1;
// IMP 0x10073cfd0 | @16@0:8
- (id)generateCodeResources;
// IMP 0x100742750 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100742840 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100742b44 | @24@0:8@16
- (id)getAllSubframeworksWithoutArray:(id)arg0;
// IMP 0x100742e48 | @16@0:8
- (id)frameworks;
// IMP 0x100744e8c | @16@0:8
- (id)bundleIdentifier;
// IMP 0x1007451a0 | v16@0:8
- (void)releaseMachO;
// IMP 0x100745324 | @16@0:8
- (id)machO;
// IMP 0x100745444 | @16@0:8
- (id)debugDescription;
// IMP 0x1007454d0 | @16@0:8
- (id)description;
// IMP 0x100745524 | B16@0:8
- (BOOL)isFramework;
// IMP 0x10074554c | v20@0:8B16
- (void)setIsFramework:(BOOL)arg0;
// IMP 0x10074556c | @16@0:8
- (id)bundlePath;
// IMP 0x10074558c | v24@0:8@16
- (void)setBundlePath:(id)arg0;
// IMP 0x100745604 | @16@0:8
- (id)executable;
// IMP 0x100745624 | v24@0:8@16
- (void)setExecutable:(id)arg0;
// IMP 0x1007456a8 | @16@0:8
- (id)executablePath;
// IMP 0x1007456d4 | v24@0:8@16
- (void)setExecutablePath:(id)arg0;
// IMP 0x100745758 | v24@0:8@16
- (void)setMachO:(id)arg0;
// IMP 0x1007457b0 | v24@0:8@16
- (void)setFrameworks:(id)arg0;
// IMP 0x10074580c | @16@0:8
- (id)infoPath;
// IMP 0x10074582c | v24@0:8@16
- (void)setInfoPath:(id)arg0;
// IMP 0x1007458a4 | v24@0:8@16
- (void)setBundleIdentifier:(id)arg0;
// IMP 0x100745928 | @16@0:8
- (id)infoDictionary;
// IMP 0x100745954 | v24@0:8@16
- (void)setInfoDictionary:(id)arg0;
// IMP 0x1007459e4 | @16@0:8
- (id)link_path;
// IMP 0x100745a04 | v24@0:8@16
- (void)setLink_path:(id)arg0;
// IMP 0x100745a88 | @16@0:8
- (id)executable_path;
// IMP 0x100745aa8 | v24@0:8@16
- (void)setExecutable_path:(id)arg0;
// IMP 0x100745b14 | @16@0:8
- (id)loader_path;
// IMP 0x100745b40 | v24@0:8@16
- (void)setLoader_path:(id)arg0;
// IMP 0x100745bc4 | @16@0:8
- (id)rpaths;
// IMP 0x100745be4 | v24@0:8@16
- (void)setRpaths:(id)arg0;
// IMP 0x100745c78 | B16@0:8
- (BOOL)isReadOnly;
// IMP 0x100745ca0 | v20@0:8B16
- (void)setIsReadOnly:(BOOL)arg0;
// IMP 0x100745ccc | B16@0:8
- (BOOL)thin;
// IMP 0x100745cec | v20@0:8B16
- (void)setThin:(BOOL)arg0;
// IMP 0x100745d0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100739e8c | @24@0:8@16
+ (id)bundleWithPath:(id)arg0;
@end
