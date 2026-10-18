// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97fa8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTBinaryProtocol : NSObject
// ivar mTransport encoding=@"<UMTTransport>" offset=8
// ivar mStrictRead encoding=B offset=16
// ivar mStrictWrite encoding=B offset=17
// ivar mMessageSizeLimit encoding=i offset=20
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006d34e8 | @24@0:8@16
- (id)initWithTransport:(id)arg0;
// IMP 0x1006d34fc | @32@0:8@16B24B28
- (id)initWithTransport:(id)arg0 strictRead:(BOOL)arg1 strictWrite:(BOOL)arg2;
// IMP 0x1006d35a0 | i16@0:8
- (int)messageSizeLimit;
// IMP 0x1006d35a8 | v20@0:8i16
- (void)setMessageSizeLimit:(int)arg0;
// IMP 0x1006d35b0 | v16@0:8
- (void)dealloc;
// IMP 0x1006d3638 | @16@0:8
- (id)transport;
// IMP 0x1006d3640 | @20@0:8i16
- (id)readStringBody:(int)arg0;
// IMP 0x1006d374c | v40@0:8^@16^i24^i32
- (void)readMessageBeginReturningName:(id *)arg0 type:(int *)arg1 sequenceID:(int *)arg2;
// IMP 0x1006d3970 | v16@0:8
- (void)readMessageEnd;
// IMP 0x1006d3974 | v24@0:8^@16
- (void)readStructBeginReturningName:(id *)arg0;
// IMP 0x1006d3980 | v16@0:8
- (void)readStructEnd;
// IMP 0x1006d3984 | v40@0:8^@16^i24^i32
- (void)readFieldBeginReturningName:(id *)arg0 type:(int *)arg1 fieldID:(int *)arg2;
// IMP 0x1006d39ec | v16@0:8
- (void)readFieldEnd;
// IMP 0x1006d39f0 | i16@0:8
- (int)readI32;
// IMP 0x1006d3a2c | @16@0:8
- (id)readString;
// IMP 0x1006d3a64 | B16@0:8
- (BOOL)readBool;
// IMP 0x1006d3a88 | C16@0:8
- (unsigned char)readByte;
// IMP 0x1006d3ac0 | s16@0:8
- (short)readI16;
// IMP 0x1006d3b00 | q16@0:8
- (long long)readI64;
// IMP 0x1006d3b68 | d16@0:8
- (double)readDouble;
// IMP 0x1006d3b88 | @16@0:8
- (id)readBinary;
// IMP 0x1006d3c78 | v40@0:8^i16^i24^i32
- (void)readMapBeginReturningKeyType:(int *)arg0 valueType:(int *)arg1 size:(int *)arg2;
// IMP 0x1006d3cfc | v16@0:8
- (void)readMapEnd;
// IMP 0x1006d3d00 | v32@0:8^i16^i24
- (void)readSetBeginReturningElementType:(int *)arg0 size:(int *)arg1;
// IMP 0x1006d3d5c | v16@0:8
- (void)readSetEnd;
// IMP 0x1006d3d60 | v32@0:8^i16^i24
- (void)readListBeginReturningElementType:(int *)arg0 size:(int *)arg1;
// IMP 0x1006d3dbc | v16@0:8
- (void)readListEnd;
// IMP 0x1006d3dc0 | v20@0:8C16
- (void)writeByte:(unsigned char)arg0;
// IMP 0x1006d3df8 | v32@0:8@16i24i28
- (void)writeMessageBeginWithName:(id)arg0 type:(int)arg1 sequenceID:(int)arg2;
// IMP 0x1006d3ed8 | v16@0:8
- (void)writeMessageEnd;
// IMP 0x1006d3edc | v24@0:8@16
- (void)writeStructBeginWithName:(id)arg0;
// IMP 0x1006d3ee0 | v16@0:8
- (void)writeStructEnd;
// IMP 0x1006d3ee4 | v32@0:8@16i24i28
- (void)writeFieldBeginWithName:(id)arg0 type:(int)arg1 fieldID:(int)arg2;
// IMP 0x1006d3f24 | v20@0:8i16
- (void)writeI32:(int)arg0;
// IMP 0x1006d3f60 | v20@0:8s16
- (void)writeI16:(short)arg0;
// IMP 0x1006d3fa0 | v24@0:8q16
- (void)writeI64:(long long)arg0;
// IMP 0x1006d4008 | v24@0:8d16
- (void)writeDouble:(double)arg0;
// IMP 0x1006d4018 | v24@0:8@16
- (void)writeString:(id)arg0;
// IMP 0x1006d40a8 | v24@0:8@16
- (void)writeBinary:(id)arg0;
// IMP 0x1006d414c | v16@0:8
- (void)writeFieldStop;
// IMP 0x1006d415c | v16@0:8
- (void)writeFieldEnd;
// IMP 0x1006d4160 | v28@0:8i16i20i24
- (void)writeMapBeginWithKeyType:(int)arg0 valueType:(int)arg1 size:(int)arg2;
// IMP 0x1006d41c0 | v16@0:8
- (void)writeMapEnd;
// IMP 0x1006d41c4 | v24@0:8i16i20
- (void)writeSetBeginWithElementType:(int)arg0 size:(int)arg1;
// IMP 0x1006d4204 | v16@0:8
- (void)writeSetEnd;
// IMP 0x1006d4208 | v24@0:8i16i20
- (void)writeListBeginWithElementType:(int)arg0 size:(int)arg1;
// IMP 0x1006d4248 | v16@0:8
- (void)writeListEnd;
// IMP 0x1006d424c | v20@0:8B16
- (void)writeBool:(BOOL)arg0;
// IMP 0x1006d4258 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
