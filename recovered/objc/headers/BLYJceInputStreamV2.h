// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c964a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJceInputStreamV2 : BLYJceStream
// ivar _headType encoding=i offset=24
// ivar _headTag encoding=i offset=28
// ivar _dataHolders encoding=@"NSData" offset=32
// property dataHolders attributes=T@"NSData",&,N,V_dataHolders
// property headType attributes=Ti,N,V_headType
// property headTag attributes=Ti,R,N,V_headTag
// IMP 0x10066de8c | @16@0:8
- (id)init;
// IMP 0x10066dee0 | @16@0:8
- (id)data;
// IMP 0x10066df18 | B16@0:8
- (BOOL)peakHead;
// IMP 0x10066dfa4 | B16@0:8
- (BOOL)readHead;
// IMP 0x10066e03c | c16@0:8
- (signed char)readInt1;
// IMP 0x10066e0a8 | s16@0:8
- (short)readInt2;
// IMP 0x10066e11c | i16@0:8
- (int)readInt4;
// IMP 0x10066e18c | q16@0:8
- (long long)readInt8;
// IMP 0x10066e1fc | q20@0:8i16
- (long long)readInt:(int)arg0;
// IMP 0x10066e3c8 | f20@0:8i16
- (float)readFloat:(int)arg0;
// IMP 0x10066e560 | d20@0:8i16
- (double)readDouble:(int)arg0;
// IMP 0x10066e6f8 | f16@0:8
- (float)readFloat;
// IMP 0x10066e758 | d16@0:8
- (double)readDouble;
// IMP 0x10066e7b8 | *20@0:8I16
- (char *)readBytes:(unsigned int)arg0;
// IMP 0x10066e8e4 | v20@0:8I16
- (void)skip:(unsigned int)arg0;
// IMP 0x10066e91c | @20@0:8i16
- (id)readDataWithSize:(int)arg0;
// IMP 0x10066e95c | @24@0:8i16B20
- (id)readNumber:(int)arg0 required:(BOOL)arg1;
// IMP 0x10066ec48 | @24@0:8i16B20
- (id)readString:(int)arg0 required:(BOOL)arg1;
// IMP 0x10066eed8 | @24@0:8i16B20
- (id)readData:(int)arg0 required:(BOOL)arg1;
// IMP 0x10066f154 | @32@0:8i16B20#24
- (id)readObject:(int)arg0 required:(BOOL)arg1 description:(Class)arg2;
// IMP 0x10066f6bc | @32@0:8i16B20@24
- (id)readArray:(int)arg0 required:(BOOL)arg1 description:(id)arg2;
// IMP 0x10066f908 | @32@0:8i16B20@24
- (id)readDictionary:(int)arg0 required:(BOOL)arg1 description:(id)arg2;
// IMP 0x10066fbe0 | @32@0:8i16B20@24
- (id)readAnything:(int)arg0 required:(BOOL)arg1 description:(id)arg2;
// IMP 0x10066ff18 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10066fec4 | i16@0:8
- (int)headType;
// IMP 0x10066fed4 | v20@0:8i16
- (void)setHeadType:(int)arg0;
// IMP 0x10066fee4 | i16@0:8
- (int)headTag;
// IMP 0x10066fef4 | @16@0:8
- (id)dataHolders;
// IMP 0x10066ff04 | v24@0:8@16
- (void)setDataHolders:(id)arg0;
// IMP 0x10066ddb4 | @24@0:8@16
+ (id)streamWithData:(id)arg0;
@end
