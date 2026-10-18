// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95cd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYSummaryInfo : BLYJceObjectV2
// ivar jcev2_p_1_r_startType encoding=c offset=8
// ivar jcev2_p_7_o_coldStart encoding=B offset=9
// ivar jcev2_p_0_r_startTime encoding=q offset=16
// ivar jcev2_p_2_o_userId encoding=@"NSString" offset=24
// ivar jcev2_p_3_o_proceName encoding=@"NSString" offset=32
// ivar jcev2_p_4_o_sessionId encoding=@"NSString" offset=40
// ivar jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString encoding=@"NSDictionary" offset=48
// ivar jcev2_p_6_o_gatewayIp encoding=@"NSString" offset=56
// property jcev2_p_0_r_startTime attributes=Tq,N,Gjce_startTime,SsetJce_startTime:,Vjcev2_p_0_r_startTime
// property jcev2_p_1_r_startType attributes=Tc,N,Gjce_startType,SsetJce_startType:,Vjcev2_p_1_r_startType
// property jcev2_p_2_o_userId attributes=T@"NSString",&,N,Gjce_userId,SsetJce_userId:,Vjcev2_p_2_o_userId
// property jcev2_p_3_o_proceName attributes=T@"NSString",&,N,Gjce_proceName,SsetJce_proceName:,Vjcev2_p_3_o_proceName
// property jcev2_p_4_o_sessionId attributes=T@"NSString",&,N,Gjce_sessionId,SsetJce_sessionId:,Vjcev2_p_4_o_sessionId
// property jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString attributes=T@"NSDictionary",&,N,Gjce_valueMap,SsetJce_valueMap:,Vjcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString
// property jcev2_p_6_o_gatewayIp attributes=T@"NSString",&,N,Gjce_gatewayIp,SsetJce_gatewayIp:,Vjcev2_p_6_o_gatewayIp
// property jcev2_p_7_o_coldStart attributes=TB,N,Gjce_coldStart,SsetJce_coldStart:,Vjcev2_p_7_o_coldStart
// IMP 0x100651898 | @16@0:8
- (id)init;
// IMP 0x100651a8c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100651978 | q16@0:8
- (long long)jce_startTime;
// IMP 0x100651988 | v24@0:8q16
- (void)setJce_startTime:(long long)arg0;
// IMP 0x100651998 | c16@0:8
- (signed char)jce_startType;
// IMP 0x1006519a8 | v20@0:8c16
- (void)setJce_startType:(signed char)arg0;
// IMP 0x1006519b8 | @16@0:8
- (id)jce_userId;
// IMP 0x1006519c8 | v24@0:8@16
- (void)setJce_userId:(id)arg0;
// IMP 0x1006519dc | @16@0:8
- (id)jce_proceName;
// IMP 0x1006519ec | v24@0:8@16
- (void)setJce_proceName:(id)arg0;
// IMP 0x100651a00 | @16@0:8
- (id)jce_sessionId;
// IMP 0x100651a10 | v24@0:8@16
- (void)setJce_sessionId:(id)arg0;
// IMP 0x100651a24 | @16@0:8
- (id)jce_valueMap;
// IMP 0x100651a34 | v24@0:8@16
- (void)setJce_valueMap:(id)arg0;
// IMP 0x100651a48 | @16@0:8
- (id)jce_gatewayIp;
// IMP 0x100651a58 | v24@0:8@16
- (void)setJce_gatewayIp:(id)arg0;
// IMP 0x100651a6c | B16@0:8
- (BOOL)jce_coldStart;
// IMP 0x100651a7c | v20@0:8B16
- (void)setJce_coldStart:(BOOL)arg0;
// IMP 0x10065183c | v16@0:8
+ (void)initialize;
// IMP 0x10065194c | @16@0:8
+ (id)jceType;
@end
