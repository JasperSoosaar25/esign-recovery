// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99a98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMachO : NSObject
// ivar _thin encoding=B offset=8
// ivar _machoPath encoding=@"NSString" offset=16
// ivar _machoFileHandle encoding=@"NSFileHandle" offset=24
// ivar _archOs encoding=@"NSArray" offset=32
// ivar _fat_header encoding=^{fat_header=II} offset=40
// ivar _fatArchs encoding=@"NSArray" offset=48
// ivar _defaultEntitlements encoding=@"NSDictionary" offset=56
// property machoPath attributes=T@"NSString",C,N,V_machoPath
// property machoFileHandle attributes=T@"NSFileHandle",&,N,V_machoFileHandle
// property archOs attributes=T@"NSArray",&,N,V_archOs
// property fat_header attributes=T^{fat_header=II},N,V_fat_header
// property fatArchs attributes=T@"NSArray",&,N,V_fatArchs
// property isEncryption attributes=TB,R,N
// property defaultEntitlements attributes=T@"NSDictionary",&,N,V_defaultEntitlements
// property thin attributes=TB,N,V_thin
// IMP 0x10070de48 | @32@0:8@16B24B28
- (id)initWithMachOPath:(id)arg0 readOnly:(BOOL)arg1 thinToArm64:(BOOL)arg2;
// IMP 0x10070e7a4 | v16@0:8
- (void)setupDefaultEntitlements;
// IMP 0x10071075c | B16@0:8
- (BOOL)setupArcho;
// IMP 0x10071226c | I24@0:8Q16
- (unsigned int)readMagicWithOffset:(unsigned long long)arg0;
// IMP 0x100712348 | @24@0:8@16
- (id)getMachHeaderInFatArch:(id)arg0;
// IMP 0x1007128e0 | B20@0:8I16
- (BOOL)addCodeSignSpaceLength:(unsigned int)arg0;
// IMP 0x100713aec | B16@0:8
- (BOOL)reallocCodeSignSpace;
// IMP 0x100714d28 | v24@0:8@16
- (void)removeLinkedDylib:(id)arg0;
// IMP 0x100714f90 | B36@0:8@16B24^@28
- (BOOL)addDylibLink:(id)arg0 weakInject:(BOOL)arg1 error:(id *)arg2;
// IMP 0x1007152ac | B40@0:8@16@24^@32
- (BOOL)changeDylibLink:(id)arg0 toLink:(id)arg1 error:(id *)arg2;
// IMP 0x100715694 | @16@0:8
- (id)getDylibLinks;
// IMP 0x100715d1c | @16@0:8
- (id)getAllDylibLinks;
// IMP 0x100716298 | @16@0:8
- (id)getRPaths;
// IMP 0x1007168c0 | B56@0:8@16@24@32@40^@48
- (BOOL)signWithSignAsset:(id)arg0 bundleId:(id)arg1 infoPlistData:(id)arg2 codeResourcesData:(id)arg3 error:(id *)arg4;
// IMP 0x1007187a0 | v16@0:8
- (void)reload;
// IMP 0x10071883c | v16@0:8
- (void)removeSourceVersion;
// IMP 0x100718ae0 | B16@0:8
- (BOOL)isEncryption;
// IMP 0x100718db0 | @16@0:8
- (id)machoPath;
// IMP 0x100718dd0 | v24@0:8@16
- (void)setMachoPath:(id)arg0;
// IMP 0x100718e48 | @16@0:8
- (id)machoFileHandle;
// IMP 0x100718e5c | v24@0:8@16
- (void)setMachoFileHandle:(id)arg0;
// IMP 0x100718eb8 | @16@0:8
- (id)archOs;
// IMP 0x100718ed8 | v24@0:8@16
- (void)setArchOs:(id)arg0;
// IMP 0x100718f6c | ^{fat_header=II}16@0:8
- (struct fat_header *)fat_header;
// IMP 0x100718f8c | v24@0:8^{fat_header=II}16
- (void)setFat_header:(struct fat_header *)arg0;
// IMP 0x100718fac | @16@0:8
- (id)fatArchs;
// IMP 0x100718fcc | v24@0:8@16
- (void)setFatArchs:(id)arg0;
// IMP 0x100719028 | @16@0:8
- (id)defaultEntitlements;
// IMP 0x10071903c | v24@0:8@16
- (void)setDefaultEntitlements:(id)arg0;
// IMP 0x1007190a4 | B16@0:8
- (BOOL)thin;
// IMP 0x1007190b8 | v20@0:8B16
- (void)setThin:(BOOL)arg0;
// IMP 0x1007190cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10070e6b8 | @28@0:8@16B24
+ (id)machOWithMachOPath:(id)arg0 readOnly:(BOOL)arg1;
// IMP 0x10070e744 | @28@0:8@16B24
+ (id)machOWithMachOPath:(id)arg0 thinToArm64:(BOOL)arg1;
@end
