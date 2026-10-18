// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95eb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYResponsePkg : BLYJceObjectV2
// ivar jcev2_p_0_r_result encoding=c offset=8
// ivar jcev2_p_1_r_cmd encoding=i offset=12
// ivar jcev2_p_2_o_sBuffer encoding=@"NSData" offset=16
// ivar jcev2_p_3_o_gatewayIp encoding=@"NSString" offset=24
// ivar jcev2_p_4_o_serverTime encoding=q offset=32
// ivar jcev2_p_5_o_status encoding=@"NSString" offset=40
// ivar jcev2_p_6_o_qimei encoding=@"NSString" offset=48
// ivar jcev2_p_7_o_valueMap__b0x9i_M09ONSStringONSString encoding=@"NSDictionary" offset=56
// property jcev2_p_0_r_result attributes=Tc,N,Gjce_result,SsetJce_result:,Vjcev2_p_0_r_result
// property jcev2_p_1_r_cmd attributes=Ti,N,Gjce_cmd,SsetJce_cmd:,Vjcev2_p_1_r_cmd
// property jcev2_p_2_o_sBuffer attributes=T@"NSData",&,N,Gjce_sBuffer,SsetJce_sBuffer:,Vjcev2_p_2_o_sBuffer
// property jcev2_p_3_o_gatewayIp attributes=T@"NSString",&,N,Gjce_gatewayIp,SsetJce_gatewayIp:,Vjcev2_p_3_o_gatewayIp
// property jcev2_p_4_o_serverTime attributes=Tq,N,Gjce_serverTime,SsetJce_serverTime:,Vjcev2_p_4_o_serverTime
// property jcev2_p_5_o_status attributes=T@"NSString",&,N,Gjce_status,SsetJce_status:,Vjcev2_p_5_o_status
// property jcev2_p_6_o_qimei attributes=T@"NSString",&,N,Gjce_qimei,SsetJce_qimei:,Vjcev2_p_6_o_qimei
// property jcev2_p_7_o_valueMap__b0x9i_M09ONSStringONSString attributes=T@"NSDictionary",&,N,Gjce_valueMap,SsetJce_valueMap:,Vjcev2_p_7_o_valueMap__b0x9i_M09ONSStringONSString
// IMP 0x100658da4 | @16@0:8
- (id)init;
// IMP 0x100658f70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100658e5c | c16@0:8
- (signed char)jce_result;
// IMP 0x100658e6c | v20@0:8c16
- (void)setJce_result:(signed char)arg0;
// IMP 0x100658e7c | i16@0:8
- (int)jce_cmd;
// IMP 0x100658e8c | v20@0:8i16
- (void)setJce_cmd:(int)arg0;
// IMP 0x100658e9c | @16@0:8
- (id)jce_sBuffer;
// IMP 0x100658eac | v24@0:8@16
- (void)setJce_sBuffer:(id)arg0;
// IMP 0x100658ec0 | @16@0:8
- (id)jce_gatewayIp;
// IMP 0x100658ed0 | v24@0:8@16
- (void)setJce_gatewayIp:(id)arg0;
// IMP 0x100658ee4 | q16@0:8
- (long long)jce_serverTime;
// IMP 0x100658ef4 | v24@0:8q16
- (void)setJce_serverTime:(long long)arg0;
// IMP 0x100658f04 | @16@0:8
- (id)jce_status;
// IMP 0x100658f14 | v24@0:8@16
- (void)setJce_status:(id)arg0;
// IMP 0x100658f28 | @16@0:8
- (id)jce_qimei;
// IMP 0x100658f38 | v24@0:8@16
- (void)setJce_qimei:(id)arg0;
// IMP 0x100658f4c | @16@0:8
- (id)jce_valueMap;
// IMP 0x100658f5c | v24@0:8@16
- (void)setJce_valueMap:(id)arg0;
// IMP 0x100658d48 | v16@0:8
+ (void)initialize;
// IMP 0x100658e30 | @16@0:8
+ (id)jceType;
@end
