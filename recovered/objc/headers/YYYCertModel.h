// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80578
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCertModel : NSObject
// ivar _isEnterprise encoding=B offset=8
// ivar _p12Password encoding=@"NSString" offset=16
// ivar _p12Data encoding=@"NSData" offset=24
// ivar _mobileprovisionData encoding=@"NSData" offset=32
// ivar _name encoding=@"NSString" offset=40
// ivar _expireTime encoding=@"NSDate" offset=48
// ivar _serialNumber encoding=@"NSString" offset=56
// ivar _authorityInfoAccessURI encoding=@"NSString" offset=64
// ivar _ou encoding=@"NSString" offset=72
// ivar _status encoding=@"NSString" offset=80
// ivar _provisionedDevices encoding=@"NSArray" offset=88
// property p12Password attributes=T@"NSString",&,N,V_p12Password
// property p12Data attributes=T@"NSData",&,N,V_p12Data
// property mobileprovisionData attributes=T@"NSData",&,N,V_mobileprovisionData
// property name attributes=T@"NSString",&,N,V_name
// property expireTime attributes=T@"NSDate",&,N,V_expireTime
// property serialNumber attributes=T@"NSString",&,N,V_serialNumber
// property authorityInfoAccessURI attributes=T@"NSString",&,N,V_authorityInfoAccessURI
// property ou attributes=T@"NSString",C,N,V_ou
// property status attributes=T@"NSString",&,N,V_status
// property isEnterprise attributes=TB,N,V_isEnterprise
// property provisionedDevices attributes=T@"NSArray",&,N,V_provisionedDevices
// IMP 0x10031a3d8 | @24@0:8@16
- (id)initWithCertFile:(id)arg0;
// IMP 0x10031b6bc | @40@0:8@16@24@32
- (id)initWithMobileprovisionData:(id)arg0 certData:(id)arg1 certPassword:(id)arg2;
// IMP 0x10031d0cc | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x10031d16c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10031d21c | @16@0:8
- (id)sharedData;
// IMP 0x10031dddc | @16@0:8
- (id)authorityInfoAccessURI;
// IMP 0x10031e1f4 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10031e284 | @16@0:8
- (id)p12Password;
// IMP 0x10031e2b4 | v24@0:8@16
- (void)setP12Password:(id)arg0;
// IMP 0x10031e314 | @16@0:8
- (id)p12Data;
// IMP 0x10031e334 | v24@0:8@16
- (void)setP12Data:(id)arg0;
// IMP 0x10031e394 | @16@0:8
- (id)mobileprovisionData;
// IMP 0x10031e3a8 | v24@0:8@16
- (void)setMobileprovisionData:(id)arg0;
// IMP 0x10031e404 | @16@0:8
- (id)name;
// IMP 0x10031e418 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10031e474 | @16@0:8
- (id)expireTime;
// IMP 0x10031e494 | v24@0:8@16
- (void)setExpireTime:(id)arg0;
// IMP 0x10031e528 | @16@0:8
- (id)serialNumber;
// IMP 0x10031e554 | v24@0:8@16
- (void)setSerialNumber:(id)arg0;
// IMP 0x10031e5b4 | v24@0:8@16
- (void)setAuthorityInfoAccessURI:(id)arg0;
// IMP 0x10031e618 | @16@0:8
- (id)ou;
// IMP 0x10031e638 | v24@0:8@16
- (void)setOu:(id)arg0;
// IMP 0x10031e658 | @16@0:8
- (id)status;
// IMP 0x10031e678 | v24@0:8@16
- (void)setStatus:(id)arg0;
// IMP 0x10031e6dc | B16@0:8
- (BOOL)isEnterprise;
// IMP 0x10031e708 | v20@0:8B16
- (void)setIsEnterprise:(BOOL)arg0;
// IMP 0x10031e744 | @16@0:8
- (id)provisionedDevices;
// IMP 0x10031e764 | v24@0:8@16
- (void)setProvisionedDevices:(id)arg0;
// IMP 0x10031e7c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
