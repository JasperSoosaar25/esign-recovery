// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95e10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYBundle : NSObject
// ivar _executableUUID encoding=@"NSString" offset=8
// ivar _executableBaseAddress encoding=@"NSString" offset=16
// ivar _executableArch encoding=@"NSString" offset=24
// ivar _customizedVersion encoding=@"NSString" offset=32
// ivar _customizedChannel encoding=@"NSString" offset=40
// ivar _bundleIdentifier encoding=@"NSString" offset=48
// ivar _bundleVer encoding=@"NSString" offset=56
// ivar _bundleBuild encoding=@"NSString" offset=64
// ivar _processName encoding=@"NSString" offset=72
// ivar _applicatiionName encoding=@"NSString" offset=80
// ivar _ciUUID encoding=@"NSString" offset=88
// property bundleIdentifier attributes=T@"NSString",C,N,V_bundleIdentifier
// property bundleVer attributes=T@"NSString",C,N,V_bundleVer
// property bundleBuild attributes=T@"NSString",C,N,V_bundleBuild
// property processName attributes=T@"NSString",C,N,V_processName
// property executableUUID attributes=T@"NSString",C,N,V_executableUUID
// property executableArch attributes=T@"NSString",C,N,V_executableArch
// property executableBaseAddress attributes=T@"NSString",C,N,V_executableBaseAddress
// property applicatiionName attributes=T@"NSString",C,N,V_applicatiionName
// property ciUUID attributes=T@"NSString",C,N,V_ciUUID
// property versionChanged attributes=TB,R,N,GisVersionChanged
// property customizedVersion attributes=T@"NSString",C,N,V_customizedVersion
// property customizedChannel attributes=T@"NSString",C,N,V_customizedChannel
// IMP 0x100657c34 | @16@0:8
- (id)init;
// IMP 0x100657c8c | @24@0:8@16
- (id)objectValueFromInfoPlist:(id)arg0;
// IMP 0x100657d38 | @16@0:8
- (id)bundleIdentifier;
// IMP 0x100657d94 | @16@0:8
- (id)bundleVer;
// IMP 0x100657dec | @16@0:8
- (id)bundleBuild;
// IMP 0x100657e48 | @16@0:8
- (id)ciUUID;
// IMP 0x100657f44 | @16@0:8
- (id)fullBundleVersion;
// IMP 0x1006580e0 | @16@0:8
- (id)customizedChannel;
// IMP 0x100658130 | @16@0:8
- (id)bundleName;
// IMP 0x100658148 | @16@0:8
- (id)bundleExecutable;
// IMP 0x100658160 | @16@0:8
- (id)processName;
// IMP 0x1006581d4 | @16@0:8
- (id)applicatiionName;
// IMP 0x10065828c | v16@0:8
- (void)loadExecutableInfo;
// IMP 0x100658538 | B16@0:8
- (BOOL)isVersionChanged;
// IMP 0x10065871c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100658694 | @16@0:8
- (id)executableUUID;
// IMP 0x1006586a0 | v24@0:8@16
- (void)setExecutableUUID:(id)arg0;
// IMP 0x1006586a8 | @16@0:8
- (id)executableBaseAddress;
// IMP 0x1006586b4 | v24@0:8@16
- (void)setExecutableBaseAddress:(id)arg0;
// IMP 0x1006586bc | @16@0:8
- (id)executableArch;
// IMP 0x1006586c8 | v24@0:8@16
- (void)setExecutableArch:(id)arg0;
// IMP 0x1006586d0 | @16@0:8
- (id)customizedVersion;
// IMP 0x1006586dc | v24@0:8@16
- (void)setCustomizedVersion:(id)arg0;
// IMP 0x1006586e4 | v24@0:8@16
- (void)setCustomizedChannel:(id)arg0;
// IMP 0x1006586ec | v24@0:8@16
- (void)setBundleIdentifier:(id)arg0;
// IMP 0x1006586f4 | v24@0:8@16
- (void)setBundleVer:(id)arg0;
// IMP 0x1006586fc | v24@0:8@16
- (void)setBundleBuild:(id)arg0;
// IMP 0x100658704 | v24@0:8@16
- (void)setProcessName:(id)arg0;
// IMP 0x10065870c | v24@0:8@16
- (void)setApplicatiionName:(id)arg0;
// IMP 0x100658714 | v24@0:8@16
- (void)setCiUUID:(id)arg0;
// IMP 0x100657bb4 | @16@0:8
+ (id)currentBundle;
@end
