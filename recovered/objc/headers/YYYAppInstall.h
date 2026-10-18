// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7fa60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppInstall : NSObject
// ivar _ipaPath encoding=@"NSString" offset=8
// ivar _logoPath encoding=@"NSString" offset=16
// ivar _name encoding=@"NSString" offset=24
// ivar _bundleId encoding=@"NSString" offset=32
// ivar _version encoding=@"NSString" offset=40
// ivar _idf encoding=@"NSString" offset=48
// ivar _ipaddress encoding=@"NSString" offset=56
// ivar _beginBlock encoding=@? offset=64
// ivar _progressBlock encoding=@? offset=72
// ivar _finishBlock encoding=@? offset=80
// property ipaPath attributes=T@"NSString",C,N,V_ipaPath
// property logoPath attributes=T@"NSString",C,N,V_logoPath
// property name attributes=T@"NSString",C,N,V_name
// property bundleId attributes=T@"NSString",C,N,V_bundleId
// property version attributes=T@"NSString",C,N,V_version
// property idf attributes=T@"NSString",C,N,V_idf
// property ipaddress attributes=T@"NSString",C,N,V_ipaddress
// property beginBlock attributes=T@?,C,N,V_beginBlock
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property finishBlock attributes=T@?,C,N,V_finishBlock
// IMP 0x100259ff4 | @16@0:8
- (id)init;
// IMP 0x10025a2c0 | @24@0:8q16
- (id)localInstallInfoWithPort:(long long)arg0;
// IMP 0x10025ad48 | @16@0:8
- (id)getInfoDictionaryFromArchive;
// IMP 0x10025b9d0 | @16@0:8
- (id)esignInstallInfo;
// IMP 0x10025e40c | v16@0:8
- (void)setupAutoShowProgress;
// IMP 0x10025eca4 | v16@0:8
- (void)dealloc;
// IMP 0x10025ece8 | @16@0:8
- (id)ipaPath;
// IMP 0x10025ecfc | v24@0:8@16
- (void)setIpaPath:(id)arg0;
// IMP 0x10025ed74 | @16@0:8
- (id)logoPath;
// IMP 0x10025ed94 | v24@0:8@16
- (void)setLogoPath:(id)arg0;
// IMP 0x10025ee0c | @16@0:8
- (id)name;
// IMP 0x10025ee2c | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10025ee5c | @16@0:8
- (id)bundleId;
// IMP 0x10025ee7c | v24@0:8@16
- (void)setBundleId:(id)arg0;
// IMP 0x10025ef00 | @16@0:8
- (id)version;
// IMP 0x10025ef20 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x10025ef50 | @16@0:8
- (id)idf;
// IMP 0x10025ef80 | v24@0:8@16
- (void)setIdf:(id)arg0;
// IMP 0x10025f004 | @16@0:8
- (id)ipaddress;
// IMP 0x10025f030 | v24@0:8@16
- (void)setIpaddress:(id)arg0;
// IMP 0x10025f044 | @?16@0:8
- (id /* block */)beginBlock;
// IMP 0x10025f058 | v24@0:8@?16
- (void)setBeginBlock:(id /* block */)arg0;
// IMP 0x10025f0d0 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x10025f0f0 | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x10025f168 | @?16@0:8
- (id /* block */)finishBlock;
// IMP 0x10025f188 | v24@0:8@?16
- (void)setFinishBlock:(id /* block */)arg0;
// IMP 0x10025f20c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
