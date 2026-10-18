// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c964f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYRequestPacket : BLYJceObjectV2
// ivar _iVersion encoding=@"NSNumber" offset=8
// ivar _cPacketType encoding=@"NSNumber" offset=16
// ivar _iMessageType encoding=@"NSNumber" offset=24
// ivar _iRequestId encoding=@"NSNumber" offset=32
// ivar _sServantName encoding=@"NSString" offset=40
// ivar _sFuncName encoding=@"NSString" offset=48
// ivar _sBuffer encoding=@"NSData" offset=56
// ivar _iTimeout encoding=@"NSNumber" offset=64
// ivar _context encoding=@"NSDictionary" offset=72
// ivar _status encoding=@"NSDictionary" offset=80
// property iVersion attributes=T@"NSNumber",&,N,V_iVersion
// property cPacketType attributes=T@"NSNumber",&,N,V_cPacketType
// property iMessageType attributes=T@"NSNumber",&,N,V_iMessageType
// property iRequestId attributes=T@"NSNumber",&,N,V_iRequestId
// property sServantName attributes=T@"NSString",&,N,V_sServantName
// property sFuncName attributes=T@"NSString",&,N,V_sFuncName
// property sBuffer attributes=T@"NSData",&,N,V_sBuffer
// property iTimeout attributes=T@"NSNumber",&,N,V_iTimeout
// property context attributes=T@"NSDictionary",&,N,V_context
// property status attributes=T@"NSDictionary",&,N,V_status
// IMP 0x10066ff2c | @16@0:8
- (id)init;
// IMP 0x1006701b8 | v24@0:8@16
- (void)__pack:(id)arg0;
// IMP 0x100670440 | v24@0:8@16
- (void)__unpack:(id)arg0;
// IMP 0x100670928 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006707c0 | @16@0:8
- (id)iVersion;
// IMP 0x1006707d0 | v24@0:8@16
- (void)setIVersion:(id)arg0;
// IMP 0x1006707e4 | @16@0:8
- (id)cPacketType;
// IMP 0x1006707f4 | v24@0:8@16
- (void)setCPacketType:(id)arg0;
// IMP 0x100670808 | @16@0:8
- (id)iMessageType;
// IMP 0x100670818 | v24@0:8@16
- (void)setIMessageType:(id)arg0;
// IMP 0x10067082c | @16@0:8
- (id)iRequestId;
// IMP 0x10067083c | v24@0:8@16
- (void)setIRequestId:(id)arg0;
// IMP 0x100670850 | @16@0:8
- (id)sServantName;
// IMP 0x100670860 | v24@0:8@16
- (void)setSServantName:(id)arg0;
// IMP 0x100670874 | @16@0:8
- (id)sFuncName;
// IMP 0x100670884 | v24@0:8@16
- (void)setSFuncName:(id)arg0;
// IMP 0x100670898 | @16@0:8
- (id)sBuffer;
// IMP 0x1006708a8 | v24@0:8@16
- (void)setSBuffer:(id)arg0;
// IMP 0x1006708bc | @16@0:8
- (id)iTimeout;
// IMP 0x1006708cc | v24@0:8@16
- (void)setITimeout:(id)arg0;
// IMP 0x1006708e0 | @16@0:8
- (id)context;
// IMP 0x1006708f0 | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x100670904 | @16@0:8
- (id)status;
// IMP 0x100670914 | v24@0:8@16
- (void)setStatus:(id)arg0;
@end
