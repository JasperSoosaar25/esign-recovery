// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dc78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppStoreSource : NSObject
// ivar _isEncrypt encoding=B offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _identifier encoding=@"NSString" offset=24
// ivar _sourceURL encoding=@"NSString" offset=32
// ivar _sourceicon encoding=@"NSString" offset=40
// ivar _message encoding=@"NSString" offset=48
// ivar _payURL encoding=@"NSString" offset=56
// ivar _unlockURL encoding=@"NSString" offset=64
// ivar _apps encoding=@"NSMutableArray" offset=72
// ivar _encryptTime encoding=q offset=80
// ivar _UDID encoding=@"NSString" offset=88
// ivar _refreshTime encoding=@"NSDate" offset=96
// ivar _errmsg encoding=@"NSString" offset=104
// property name attributes=T@"NSString",C,N,V_name
// property identifier attributes=T@"NSString",C,N,V_identifier
// property sourceURL attributes=T@"NSString",C,N,V_sourceURL
// property sourceicon attributes=T@"NSString",C,N,V_sourceicon
// property message attributes=T@"NSString",C,N,V_message
// property payURL attributes=T@"NSString",C,N,V_payURL
// property unlockURL attributes=T@"NSString",C,N,V_unlockURL
// property apps attributes=T@"NSMutableArray",&,N,V_apps
// property isEncrypt attributes=TB,N,V_isEncrypt
// property encryptTime attributes=Tq,N,V_encryptTime
// property UDID attributes=T@"NSString",C,N,V_UDID
// property refreshTime attributes=T@"NSDate",&,N,V_refreshTime
// property errmsg attributes=T@"NSString",&,N,V_errmsg
// IMP 0x10017feac | B24@0:8@16
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
// IMP 0x100180240 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001802d8 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001937d8 | v24@0:8@16
- (void)changeValue:(id)arg0;
// IMP 0x100193aa0 | @16@0:8
- (id)name;
// IMP 0x100193acc | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100193ae0 | @16@0:8
- (id)identifier;
// IMP 0x100193b00 | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x100193b84 | @16@0:8
- (id)sourceURL;
// IMP 0x100193ba4 | v24@0:8@16
- (void)setSourceURL:(id)arg0;
// IMP 0x100193bc4 | @16@0:8
- (id)sourceicon;
// IMP 0x100193be4 | v24@0:8@16
- (void)setSourceicon:(id)arg0;
// IMP 0x100193c04 | @16@0:8
- (id)message;
// IMP 0x100193c18 | v24@0:8@16
- (void)setMessage:(id)arg0;
// IMP 0x100193c84 | @16@0:8
- (id)payURL;
// IMP 0x100193ca4 | v24@0:8@16
- (void)setPayURL:(id)arg0;
// IMP 0x100193d1c | @16@0:8
- (id)unlockURL;
// IMP 0x100193d4c | v24@0:8@16
- (void)setUnlockURL:(id)arg0;
// IMP 0x100193dd0 | @16@0:8
- (id)apps;
// IMP 0x100193df0 | v24@0:8@16
- (void)setApps:(id)arg0;
// IMP 0x100193e08 | B16@0:8
- (BOOL)isEncrypt;
// IMP 0x100193e28 | v20@0:8B16
- (void)setIsEncrypt:(BOOL)arg0;
// IMP 0x100193e54 | q16@0:8
- (long long)encryptTime;
// IMP 0x100193e80 | v24@0:8q16
- (void)setEncryptTime:(long long)arg0;
// IMP 0x100193e94 | @16@0:8
- (id)UDID;
// IMP 0x100193eb4 | v24@0:8@16
- (void)setUDID:(id)arg0;
// IMP 0x100193f38 | @16@0:8
- (id)refreshTime;
// IMP 0x100193f4c | v24@0:8@16
- (void)setRefreshTime:(id)arg0;
// IMP 0x100193fdc | @16@0:8
- (id)errmsg;
// IMP 0x100193ff0 | v24@0:8@16
- (void)setErrmsg:(id)arg0;
// IMP 0x100194050 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10017fbcc | @16@0:8
+ (id)modelContainerPropertyGenericClass;
// IMP 0x10018034c | @24@0:8@16
+ (id)modelWithJSON:(id)arg0;
@end
