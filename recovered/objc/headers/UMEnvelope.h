// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97760
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMEnvelope : NSObject
// ivar __version encoding=@"NSString" offset=8
// ivar __address encoding=@"NSString" offset=16
// ivar __signature encoding=@"NSString" offset=24
// ivar __serial_num encoding=i offset=32
// ivar __ts_secs encoding=i offset=36
// ivar __length encoding=i offset=40
// ivar __entity encoding=@"NSData" offset=48
// ivar __guid encoding=@"NSString" offset=56
// ivar __checksum encoding=@"NSString" offset=64
// ivar __codex encoding=i offset=72
// ivar __version_isset encoding=B offset=76
// ivar __address_isset encoding=B offset=77
// ivar __signature_isset encoding=B offset=78
// ivar __serial_num_isset encoding=B offset=79
// ivar __ts_secs_isset encoding=B offset=80
// ivar __length_isset encoding=B offset=81
// ivar __entity_isset encoding=B offset=82
// ivar __guid_isset encoding=B offset=83
// ivar __checksum_isset encoding=B offset=84
// ivar __codex_isset encoding=B offset=85
// property version attributes=T@"NSString",&,N,Gversion,SsetVersion:
// property address attributes=T@"NSString",&,N,Gaddress,SsetAddress:
// property signature attributes=T@"NSString",&,N,Gsignature,SsetSignature:
// property serial_num attributes=Ti,N,Gserial_num,SsetSerial_num:
// property ts_secs attributes=Ti,N,Gts_secs,SsetTs_secs:
// property length attributes=Ti,N,Glength,SsetLength:
// property entity attributes=T@"NSData",&,N,Gentity,SsetEntity:
// property guid attributes=T@"NSString",&,N,Gguid,SsetGuid:
// property checksum attributes=T@"NSString",&,N,Gchecksum,SsetChecksum:
// property codex attributes=Ti,N,Gcodex,SsetCodex:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006bf1ac | @16@0:8
- (id)init;
// IMP 0x1006bf1e0 | @80@0:8@16@24@32i40i44i48@52@60@68i76
- (id)initWithVersion:(id)arg0 address:(id)arg1 signature:(id)arg2 serial_num:(int)arg3 ts_secs:(int)arg4 length:(int)arg5 entity:(id)arg6 guid:(id)arg7 checksum:(id)arg8 codex:(int)arg9;
// IMP 0x1006bf400 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006bf7d8 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006bf954 | v16@0:8
- (void)dealloc;
// IMP 0x1006bfa54 | @16@0:8
- (id)version;
// IMP 0x1006bfaac | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x1006bfb24 | B16@0:8
- (BOOL)versionIsSet;
// IMP 0x1006bfb2c | v16@0:8
- (void)unsetVersion;
// IMP 0x1006bfb74 | @16@0:8
- (id)address;
// IMP 0x1006bfbcc | v24@0:8@16
- (void)setAddress:(id)arg0;
// IMP 0x1006bfc44 | B16@0:8
- (BOOL)addressIsSet;
// IMP 0x1006bfc4c | v16@0:8
- (void)unsetAddress;
// IMP 0x1006bfc94 | @16@0:8
- (id)signature;
// IMP 0x1006bfcec | v24@0:8@16
- (void)setSignature:(id)arg0;
// IMP 0x1006bfd64 | B16@0:8
- (BOOL)signatureIsSet;
// IMP 0x1006bfd6c | v16@0:8
- (void)unsetSignature;
// IMP 0x1006bfdb4 | i16@0:8
- (int)serial_num;
// IMP 0x1006bfdbc | v20@0:8i16
- (void)setSerial_num:(int)arg0;
// IMP 0x1006bfdcc | B16@0:8
- (BOOL)serial_numIsSet;
// IMP 0x1006bfdd4 | v16@0:8
- (void)unsetSerial_num;
// IMP 0x1006bfddc | i16@0:8
- (int)ts_secs;
// IMP 0x1006bfde4 | v20@0:8i16
- (void)setTs_secs:(int)arg0;
// IMP 0x1006bfdf4 | B16@0:8
- (BOOL)ts_secsIsSet;
// IMP 0x1006bfdfc | v16@0:8
- (void)unsetTs_secs;
// IMP 0x1006bfe04 | i16@0:8
- (int)length;
// IMP 0x1006bfe0c | v20@0:8i16
- (void)setLength:(int)arg0;
// IMP 0x1006bfe1c | B16@0:8
- (BOOL)lengthIsSet;
// IMP 0x1006bfe24 | v16@0:8
- (void)unsetLength;
// IMP 0x1006bfe2c | @16@0:8
- (id)entity;
// IMP 0x1006bfe84 | v24@0:8@16
- (void)setEntity:(id)arg0;
// IMP 0x1006bfefc | B16@0:8
- (BOOL)entityIsSet;
// IMP 0x1006bff04 | v16@0:8
- (void)unsetEntity;
// IMP 0x1006bff4c | @16@0:8
- (id)guid;
// IMP 0x1006bffa4 | v24@0:8@16
- (void)setGuid:(id)arg0;
// IMP 0x1006c001c | B16@0:8
- (BOOL)guidIsSet;
// IMP 0x1006c0024 | v16@0:8
- (void)unsetGuid;
// IMP 0x1006c006c | @16@0:8
- (id)checksum;
// IMP 0x1006c00c4 | v24@0:8@16
- (void)setChecksum:(id)arg0;
// IMP 0x1006c013c | B16@0:8
- (BOOL)checksumIsSet;
// IMP 0x1006c0144 | v16@0:8
- (void)unsetChecksum;
// IMP 0x1006c018c | i16@0:8
- (int)codex;
// IMP 0x1006c0194 | v20@0:8i16
- (void)setCodex:(int)arg0;
// IMP 0x1006c01a4 | B16@0:8
- (BOOL)codexIsSet;
// IMP 0x1006c01ac | v16@0:8
- (void)unsetCodex;
// IMP 0x1006c01b4 | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006c0558 | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006c089c | v16@0:8
- (void)validate;
// IMP 0x1006c0a88 | @16@0:8
- (id)description;
// IMP 0x1006c0d04 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
