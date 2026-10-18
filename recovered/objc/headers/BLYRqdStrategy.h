// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95f50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYRqdStrategy : BLYJceObjectV2
// ivar jcev2_p_0_r_enable encoding=B offset=8
// ivar jcev2_p_1_r_enableUserInfo encoding=B offset=9
// ivar jcev2_p_2_r_enableQuery encoding=B offset=10
// ivar jcev2_p_10_o_eventRecordCount encoding=i offset=12
// ivar jcev2_p_11_o_eventTimeInterval encoding=i offset=16
// ivar jcev2_p_3_o_url encoding=@"NSString" offset=24
// ivar jcev2_p_4_o_expUrl encoding=@"NSString" offset=32
// ivar jcev2_p_5_o_security encoding=@"BLYRqdSecurity" offset=40
// ivar jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString encoding=@"NSDictionary" offset=48
// ivar jcev2_p_7_o_strategylastUpdateTime encoding=q offset=56
// ivar jcev2_p_8_o_httpsUrl encoding=@"NSString" offset=64
// ivar jcev2_p_9_o_httpsExpUrl encoding=@"NSString" offset=72
// property jcev2_p_0_r_enable attributes=TB,N,Gjce_enable,SsetJce_enable:,Vjcev2_p_0_r_enable
// property jcev2_p_1_r_enableUserInfo attributes=TB,N,Gjce_enableUserInfo,SsetJce_enableUserInfo:,Vjcev2_p_1_r_enableUserInfo
// property jcev2_p_2_r_enableQuery attributes=TB,N,Gjce_enableQuery,SsetJce_enableQuery:,Vjcev2_p_2_r_enableQuery
// property jcev2_p_3_o_url attributes=T@"NSString",&,N,Gjce_url,SsetJce_url:,Vjcev2_p_3_o_url
// property jcev2_p_4_o_expUrl attributes=T@"NSString",&,N,Gjce_expUrl,SsetJce_expUrl:,Vjcev2_p_4_o_expUrl
// property jcev2_p_5_o_security attributes=T@"BLYRqdSecurity",&,N,Gjce_security,SsetJce_security:,Vjcev2_p_5_o_security
// property jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString attributes=T@"NSDictionary",&,N,Gjce_valueMap,SsetJce_valueMap:,Vjcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString
// property jcev2_p_7_o_strategylastUpdateTime attributes=Tq,N,Gjce_strategylastUpdateTime,SsetJce_strategylastUpdateTime:,Vjcev2_p_7_o_strategylastUpdateTime
// property jcev2_p_8_o_httpsUrl attributes=T@"NSString",&,N,Gjce_httpsUrl,SsetJce_httpsUrl:,Vjcev2_p_8_o_httpsUrl
// property jcev2_p_9_o_httpsExpUrl attributes=T@"NSString",&,N,Gjce_httpsExpUrl,SsetJce_httpsExpUrl:,Vjcev2_p_9_o_httpsExpUrl
// property jcev2_p_10_o_eventRecordCount attributes=Ti,N,Gjce_eventRecordCount,SsetJce_eventRecordCount:,Vjcev2_p_10_o_eventRecordCount
// property jcev2_p_11_o_eventTimeInterval attributes=Ti,N,Gjce_eventTimeInterval,SsetJce_eventTimeInterval:,Vjcev2_p_11_o_eventTimeInterval
// IMP 0x100659b84 | @16@0:8
- (id)init;
// IMP 0x100659c8c | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100659ce8 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100659f54 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100659dbc | B16@0:8
- (BOOL)jce_enable;
// IMP 0x100659dcc | v20@0:8B16
- (void)setJce_enable:(BOOL)arg0;
// IMP 0x100659ddc | B16@0:8
- (BOOL)jce_enableUserInfo;
// IMP 0x100659dec | v20@0:8B16
- (void)setJce_enableUserInfo:(BOOL)arg0;
// IMP 0x100659dfc | B16@0:8
- (BOOL)jce_enableQuery;
// IMP 0x100659e0c | v20@0:8B16
- (void)setJce_enableQuery:(BOOL)arg0;
// IMP 0x100659e1c | @16@0:8
- (id)jce_url;
// IMP 0x100659e2c | v24@0:8@16
- (void)setJce_url:(id)arg0;
// IMP 0x100659e40 | @16@0:8
- (id)jce_expUrl;
// IMP 0x100659e50 | v24@0:8@16
- (void)setJce_expUrl:(id)arg0;
// IMP 0x100659e64 | @16@0:8
- (id)jce_security;
// IMP 0x100659e74 | v24@0:8@16
- (void)setJce_security:(id)arg0;
// IMP 0x100659e88 | @16@0:8
- (id)jce_valueMap;
// IMP 0x100659e98 | v24@0:8@16
- (void)setJce_valueMap:(id)arg0;
// IMP 0x100659eac | q16@0:8
- (long long)jce_strategylastUpdateTime;
// IMP 0x100659ebc | v24@0:8q16
- (void)setJce_strategylastUpdateTime:(long long)arg0;
// IMP 0x100659ecc | @16@0:8
- (id)jce_httpsUrl;
// IMP 0x100659edc | v24@0:8@16
- (void)setJce_httpsUrl:(id)arg0;
// IMP 0x100659ef0 | @16@0:8
- (id)jce_httpsExpUrl;
// IMP 0x100659f00 | v24@0:8@16
- (void)setJce_httpsExpUrl:(id)arg0;
// IMP 0x100659f14 | i16@0:8
- (int)jce_eventRecordCount;
// IMP 0x100659f24 | v20@0:8i16
- (void)setJce_eventRecordCount:(int)arg0;
// IMP 0x100659f34 | i16@0:8
- (int)jce_eventTimeInterval;
// IMP 0x100659f44 | v20@0:8i16
- (void)setJce_eventTimeInterval:(int)arg0;
// IMP 0x100659b14 | v16@0:8
+ (void)initialize;
// IMP 0x100659c60 | @16@0:8
+ (id)jceType;
@end
