// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7f948
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppInfoModel : NSObject
// ivar _md5 encoding=@"NSString" offset=8
// ivar _ipaPath encoding=@"NSString" offset=16
// ivar _folder encoding=@"NSString" offset=24
// ivar _appPath encoding=@"NSString" offset=32
// ivar _logoPath encoding=@"NSString" offset=40
// ivar _infoDictionary encoding=@"NSMutableDictionary" offset=48
// ivar _idf encoding=@"NSString" offset=56
// property md5 attributes=T@"NSString",C,N,V_md5
// property ipaPath attributes=T@"NSString",C,N,V_ipaPath
// property folder attributes=T@"NSString",C,N,V_folder
// property appPath attributes=T@"NSString",C,N,V_appPath
// property logoPath attributes=T@"NSString",C,N,V_logoPath
// property infoDictionary attributes=T@"NSMutableDictionary",&,N,V_infoDictionary
// property executablePath attributes=T@"NSString",R,N
// property executable attributes=T@"NSString",R,N
// property appName attributes=T@"NSString",R,N
// property bundleId attributes=T@"NSString",R,N
// property version attributes=T@"NSString",R,N
// property idf attributes=T@"NSString",C,N,V_idf
// IMP 0x10023f4c0 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x10023fcac | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100240870 | @32@0:8@16^@24
- (id)initWithIPAPath:(id)arg0 error:(id *)arg1;
// IMP 0x100241184 | @40@0:8@16@?24^@32
- (id)initWithIPAPath:(id)arg0 progress:(id /* block */)arg1 error:(id *)arg2;
// IMP 0x10024191c | B16@0:8
- (BOOL)needResetFile;
// IMP 0x1002419c0 | B32@0:8^@16@?24
- (BOOL)resetFile:(id *)arg0 progress:(id /* block */)arg1;
// IMP 0x10024389c | B24@0:8^@16
- (BOOL)resetFile:(id *)arg0;
// IMP 0x100245a88 | v16@0:8
- (void)removeAllFile;
// IMP 0x100245b14 | B16@0:8
- (BOOL)isApp;
// IMP 0x100245cc0 | @24@0:8@16
- (id)_getAppDicPath:(id)arg0;
// IMP 0x100246190 | @16@0:8
- (id)installDictionary;
// IMP 0x10024681c | @16@0:8
- (id)executablePath;
// IMP 0x1002469c8 | @16@0:8
- (id)executable;
// IMP 0x100246c6c | @16@0:8
- (id)appName;
// IMP 0x100247278 | @16@0:8
- (id)bundleId;
// IMP 0x1002474e0 | @16@0:8
- (id)version;
// IMP 0x100247968 | @16@0:8
- (id)idf;
// IMP 0x100247c68 | @16@0:8
- (id)md5;
// IMP 0x100247c7c | v24@0:8@16
- (void)setMd5:(id)arg0;
// IMP 0x100247d00 | @16@0:8
- (id)ipaPath;
// IMP 0x100247d2c | v24@0:8@16
- (void)setIpaPath:(id)arg0;
// IMP 0x100247d98 | @16@0:8
- (id)folder;
// IMP 0x100247db8 | v24@0:8@16
- (void)setFolder:(id)arg0;
// IMP 0x100247e30 | @16@0:8
- (id)appPath;
// IMP 0x100247e44 | v24@0:8@16
- (void)setAppPath:(id)arg0;
// IMP 0x100247ebc | @16@0:8
- (id)logoPath;
// IMP 0x100247edc | v24@0:8@16
- (void)setLogoPath:(id)arg0;
// IMP 0x100247ef0 | @16@0:8
- (id)infoDictionary;
// IMP 0x100247f10 | v24@0:8@16
- (void)setInfoDictionary:(id)arg0;
// IMP 0x100247f94 | v24@0:8@16
- (void)setIdf:(id)arg0;
// IMP 0x10024800c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
