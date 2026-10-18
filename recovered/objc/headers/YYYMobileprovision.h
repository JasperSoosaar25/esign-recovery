// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99b10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMobileprovision : NSObject
// ivar _provisionsAllDevices encoding=B offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _appIDName encoding=@"NSString" offset=24
// ivar _appID encoding=@"NSString" offset=32
// ivar _teamName encoding=@"NSString" offset=40
// ivar _teamIdentifier encoding=@"NSArray" offset=48
// ivar _platform encoding=@"NSArray" offset=56
// ivar _UUID encoding=@"NSString" offset=64
// ivar _createDate encoding=@"NSDate" offset=72
// ivar _expirationDate encoding=@"NSDate" offset=80
// ivar _applicationIdentifierPrefix encoding=@"NSArray" offset=88
// ivar _provisionedDevices encoding=@"NSArray" offset=96
// ivar _developerCertificates encoding=@"NSArray" offset=104
// ivar _developerCertificatesFormatter encoding=@"NSArray" offset=112
// ivar _entitlements encoding=@"NSDictionary" offset=120
// ivar _info encoding=@"NSDictionary" offset=128
// ivar _data encoding=@"NSData" offset=136
// property name attributes=T@"NSString",C,N,V_name
// property appIDName attributes=T@"NSString",C,N,V_appIDName
// property appID attributes=T@"NSString",C,N,V_appID
// property teamName attributes=T@"NSString",C,N,V_teamName
// property teamIdentifier attributes=T@"NSArray",&,N,V_teamIdentifier
// property platform attributes=T@"NSArray",&,N,V_platform
// property UUID attributes=T@"NSString",C,N,V_UUID
// property provisionsAllDevices attributes=TB,N,V_provisionsAllDevices
// property createDate attributes=T@"NSDate",C,N,V_createDate
// property expirationDate attributes=T@"NSDate",C,N,V_expirationDate
// property applicationIdentifierPrefix attributes=T@"NSArray",&,N,V_applicationIdentifierPrefix
// property provisionedDevices attributes=T@"NSArray",&,N,V_provisionedDevices
// property developerCertificates attributes=T@"NSArray",&,N,V_developerCertificates
// property developerCertificatesFormatter attributes=T@"NSArray",&,N,V_developerCertificatesFormatter
// property entitlements attributes=T@"NSDictionary",&,N,V_entitlements
// property info attributes=T@"NSDictionary",&,N,V_info
// property data attributes=T@"NSData",&,N,V_data
// IMP 0x100719144 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x1007192e4 | B16@0:8
- (BOOL)setup;
// IMP 0x10071b800 | B24@0:8@16
- (BOOL)containsCertificate:(id)arg0;
// IMP 0x10071bbf8 | @16@0:8
- (id)name;
// IMP 0x10071bc24 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10071bc38 | @16@0:8
- (id)appIDName;
// IMP 0x10071bc68 | v24@0:8@16
- (void)setAppIDName:(id)arg0;
// IMP 0x10071bc70 | @16@0:8
- (id)appID;
// IMP 0x10071bc90 | v24@0:8@16
- (void)setAppID:(id)arg0;
// IMP 0x10071bd08 | @16@0:8
- (id)teamName;
// IMP 0x10071bd28 | v24@0:8@16
- (void)setTeamName:(id)arg0;
// IMP 0x10071bdac | @16@0:8
- (id)teamIdentifier;
// IMP 0x10071bdc0 | v24@0:8@16
- (void)setTeamIdentifier:(id)arg0;
// IMP 0x10071be28 | @16@0:8
- (id)platform;
// IMP 0x10071be48 | v24@0:8@16
- (void)setPlatform:(id)arg0;
// IMP 0x10071bed8 | @16@0:8
- (id)UUID;
// IMP 0x10071bf04 | v24@0:8@16
- (void)setUUID:(id)arg0;
// IMP 0x10071bf88 | B16@0:8
- (BOOL)provisionsAllDevices;
// IMP 0x10071bfb4 | v20@0:8B16
- (void)setProvisionsAllDevices:(BOOL)arg0;
// IMP 0x10071bfd4 | @16@0:8
- (id)createDate;
// IMP 0x10071c000 | v24@0:8@16
- (void)setCreateDate:(id)arg0;
// IMP 0x10071c084 | @16@0:8
- (id)expirationDate;
// IMP 0x10071c0b0 | v24@0:8@16
- (void)setExpirationDate:(id)arg0;
// IMP 0x10071c134 | @16@0:8
- (id)applicationIdentifierPrefix;
// IMP 0x10071c154 | v24@0:8@16
- (void)setApplicationIdentifierPrefix:(id)arg0;
// IMP 0x10071c178 | @16@0:8
- (id)provisionedDevices;
// IMP 0x10071c18c | v24@0:8@16
- (void)setProvisionedDevices:(id)arg0;
// IMP 0x10071c1b0 | @16@0:8
- (id)developerCertificates;
// IMP 0x10071c1c4 | v24@0:8@16
- (void)setDeveloperCertificates:(id)arg0;
// IMP 0x10071c234 | @16@0:8
- (id)developerCertificatesFormatter;
// IMP 0x10071c254 | v24@0:8@16
- (void)setDeveloperCertificatesFormatter:(id)arg0;
// IMP 0x10071c2b0 | @16@0:8
- (id)entitlements;
// IMP 0x10071c2c4 | v24@0:8@16
- (void)setEntitlements:(id)arg0;
// IMP 0x10071c348 | @16@0:8
- (id)info;
// IMP 0x10071c368 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x10071c3cc | @16@0:8
- (id)data;
// IMP 0x10071c3d4 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x10071c458 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
