// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80118
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignAppInfoModel : NSObject
// ivar _ipaPath encoding=@"NSString" offset=8
// ivar _logoPath encoding=@"NSString" offset=16
// ivar _appName encoding=@"NSString" offset=24
// ivar _bundleId encoding=@"NSString" offset=32
// ivar _version encoding=@"NSString" offset=40
// ivar _certName encoding=@"NSString" offset=48
// ivar _signDate encoding=@"NSDate" offset=56
// ivar _fileSize encoding=Q offset=64
// property ipaPath attributes=T@"NSString",C,N,V_ipaPath
// property logoPath attributes=T@"NSString",C,N,V_logoPath
// property appName attributes=T@"NSString",C,N,V_appName
// property bundleId attributes=T@"NSString",C,N,V_bundleId
// property version attributes=T@"NSString",C,N,V_version
// property certName attributes=T@"NSString",C,N,V_certName
// property signDate attributes=T@"NSDate",&,N,V_signDate
// property fileSize attributes=TQ,N,V_fileSize
// IMP 0x1002ce978 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1002cf390 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1002d0664 | @16@0:8
- (id)installDictionary;
// IMP 0x1002d0c5c | Q16@0:8
- (unsigned long long)fileSize;
// IMP 0x1002d0d44 | v16@0:8
- (void)removeAllFile;
// IMP 0x1002d0e34 | @16@0:8
- (id)ipaPath;
// IMP 0x1002d0e54 | v24@0:8@16
- (void)setIpaPath:(id)arg0;
// IMP 0x1002d0ed8 | @16@0:8
- (id)logoPath;
// IMP 0x1002d0f04 | v24@0:8@16
- (void)setLogoPath:(id)arg0;
// IMP 0x1002d0f24 | @16@0:8
- (id)appName;
// IMP 0x1002d0f54 | v24@0:8@16
- (void)setAppName:(id)arg0;
// IMP 0x1002d0f84 | @16@0:8
- (id)bundleId;
// IMP 0x1002d0f98 | v24@0:8@16
- (void)setBundleId:(id)arg0;
// IMP 0x1002d1010 | @16@0:8
- (id)version;
// IMP 0x1002d1030 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x1002d10b4 | @16@0:8
- (id)certName;
// IMP 0x1002d10e0 | v24@0:8@16
- (void)setCertName:(id)arg0;
// IMP 0x1002d1158 | @16@0:8
- (id)signDate;
// IMP 0x1002d1184 | v24@0:8@16
- (void)setSignDate:(id)arg0;
// IMP 0x1002d1218 | v24@0:8Q16
- (void)setFileSize:(unsigned long long)arg0;
// IMP 0x1002d122c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
