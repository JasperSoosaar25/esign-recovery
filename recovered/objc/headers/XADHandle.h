// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9f9c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADHandle : NSObject
// ivar parent encoding=@"XADHandle" offset=8
// ivar bitoffs encoding=q offset=16
// ivar readbyte encoding=C offset=24
// ivar readbitsleft encoding=C offset=25
// ivar writebyte encoding=C offset=26
// ivar writebitsleft encoding=C offset=27
// IMP 0x1008e36b8 | B28@0:8r^v16i24
- (BOOL)scanForByteString:(void *)arg0 length:(int)arg1;
// IMP 0x1008e372c | i28@0:8^?16i24
- (int)scanUsingMatchingFunction:(void *)arg0 maximumLength:(int)arg1;
// IMP 0x1008e373c | i36@0:8^?16i24^v28
- (int)scanUsingMatchingFunction:(void *)arg0 maximumLength:(int)arg1 context:(void *)arg2;
// IMP 0x1008e35ac | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e2f8c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e2f94 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008dfd3c | q20@0:8i16
- (long long)readDecimalNumberWithDigits:(int)arg0;
// IMP 0x1008dfdc4 | q20@0:8i16
- (long long)readHexadecimalNumberWithDigits:(int)arg0;
// IMP 0x1008dfe4c | q20@0:8i16
- (long long)readOctalNumberWithDigits:(int)arg0;
// IMP 0x1008e4d30 | @16@0:8
- (id)init;
// IMP 0x1008e4d78 | @24@0:8@16
- (id)initWithParentHandle:(id)arg0;
// IMP 0x1008e4ddc | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e4e5c | v16@0:8
- (void)dealloc;
// IMP 0x1008e4ea4 | v16@0:8
- (void)close;
// IMP 0x1008e4ea8 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e4eb0 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e4ed4 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e4ef8 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e4f08 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e4f18 | v20@0:8i16
- (void)pushBackByte:(int)arg0;
// IMP 0x1008e4f28 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e4f4c | v28@0:8i16r^v20
- (void)writeBytes:(int)arg0 fromBuffer:(void *)arg1;
// IMP 0x1008e4f5c | v24@0:8q16
- (void)skipBytes:(long long)arg0;
// IMP 0x1008e4f98 | c16@0:8
- (signed char)readInt8;
// IMP 0x1008e4fc8 | C16@0:8
- (unsigned char)readUInt8;
// IMP 0x1008e4ff8 | s16@0:8
- (short)readInt16BE;
// IMP 0x1008e5054 | i16@0:8
- (int)readInt32BE;
// IMP 0x1008e50ac | q16@0:8
- (long long)readInt64BE;
// IMP 0x1008e5130 | S16@0:8
- (unsigned short)readUInt16BE;
// IMP 0x1008e518c | I16@0:8
- (unsigned int)readUInt32BE;
// IMP 0x1008e51e4 | Q16@0:8
- (unsigned long long)readUInt64BE;
// IMP 0x1008e5268 | s16@0:8
- (short)readInt16LE;
// IMP 0x1008e52bc | i16@0:8
- (int)readInt32LE;
// IMP 0x1008e5310 | q16@0:8
- (long long)readInt64LE;
// IMP 0x1008e5390 | S16@0:8
- (unsigned short)readUInt16LE;
// IMP 0x1008e53e4 | I16@0:8
- (unsigned int)readUInt32LE;
// IMP 0x1008e5438 | Q16@0:8
- (unsigned long long)readUInt64LE;
// IMP 0x1008e54b8 | s20@0:8B16
- (short)readInt16InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e54d8 | i20@0:8B16
- (int)readInt32InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e54f8 | q20@0:8B16
- (long long)readInt64InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e5518 | S20@0:8B16
- (unsigned short)readUInt16InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e5538 | I20@0:8B16
- (unsigned int)readUInt32InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e5558 | Q20@0:8B16
- (unsigned long long)readUInt64InBigEndianOrder:(BOOL)arg0;
// IMP 0x1008e5578 | I16@0:8
- (unsigned int)readID;
// IMP 0x1008e55d0 | I20@0:8i16
- (unsigned int)readBits:(int)arg0;
// IMP 0x1008e56c0 | I20@0:8i16
- (unsigned int)readBitsLE:(int)arg0;
// IMP 0x1008e57b8 | i20@0:8i16
- (int)readSignedBits:(int)arg0;
// IMP 0x1008e57f8 | i20@0:8i16
- (int)readSignedBitsLE:(int)arg0;
// IMP 0x1008e5838 | v16@0:8
- (void)flushReadBits;
// IMP 0x1008e5840 | @16@0:8
- (id)readLine;
// IMP 0x1008e597c | @24@0:8Q16
- (id)readLineWithEncoding:(unsigned long long)arg0;
// IMP 0x1008e59dc | @16@0:8
- (id)readUTF8Line;
// IMP 0x1008e5a30 | @16@0:8
- (id)fileContents;
// IMP 0x1008e5a68 | @16@0:8
- (id)remainingFileContents;
// IMP 0x1008e5b40 | @20@0:8i16
- (id)readDataOfLength:(int)arg0;
// IMP 0x1008e5b5c | @20@0:8i16
- (id)readDataOfLengthAtMost:(int)arg0;
// IMP 0x1008e5b78 | @20@0:8i16
- (id)copyDataOfLength:(int)arg0;
// IMP 0x1008e5c00 | @20@0:8i16
- (id)copyDataOfLengthAtMost:(int)arg0;
// IMP 0x1008e5c9c | v28@0:8i16^v20
- (void)readBytes:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e5ce8 | q24@0:8q16
- (long long)readAndDiscardAtMost:(long long)arg0;
// IMP 0x1008e5d94 | v24@0:8q16
- (void)readAndDiscardBytes:(long long)arg0;
// IMP 0x1008e5de0 | @24@0:8q16
- (id)subHandleOfLength:(long long)arg0;
// IMP 0x1008e5e5c | @32@0:8q16q24
- (id)subHandleFrom:(long long)arg0 length:(long long)arg1;
// IMP 0x1008e5ec8 | @24@0:8q16
- (id)subHandleToEndOfFileFrom:(long long)arg0;
// IMP 0x1008e5f4c | @24@0:8q16
- (id)nonCopiedSubHandleOfLength:(long long)arg0;
// IMP 0x1008e5fb0 | @32@0:8q16q24
- (id)nonCopiedSubHandleFrom:(long long)arg0 length:(long long)arg1;
// IMP 0x1008e6000 | @24@0:8q16
- (id)nonCopiedSubHandleToEndOfFileFrom:(long long)arg0;
// IMP 0x1008e6068 | v20@0:8c16
- (void)writeInt8:(signed char)arg0;
// IMP 0x1008e6098 | v20@0:8C16
- (void)writeUInt8:(unsigned char)arg0;
// IMP 0x1008e60c8 | v20@0:8s16
- (void)writeInt16BE:(short)arg0;
// IMP 0x1008e6100 | v20@0:8i16
- (void)writeInt32BE:(int)arg0;
// IMP 0x1008e6134 | v20@0:8S16
- (void)writeUInt16BE:(unsigned short)arg0;
// IMP 0x1008e6168 | v20@0:8I16
- (void)writeUInt32BE:(unsigned int)arg0;
// IMP 0x1008e619c | v20@0:8s16
- (void)writeInt16LE:(short)arg0;
// IMP 0x1008e61cc | v20@0:8i16
- (void)writeInt32LE:(int)arg0;
// IMP 0x1008e61fc | v24@0:8q16
- (void)writeInt64LE:(long long)arg0;
// IMP 0x1008e6258 | v20@0:8S16
- (void)writeUInt16LE:(unsigned short)arg0;
// IMP 0x1008e6288 | v20@0:8I16
- (void)writeUInt32LE:(unsigned int)arg0;
// IMP 0x1008e62b8 | v24@0:8Q16
- (void)writeUInt64LE:(unsigned long long)arg0;
// IMP 0x1008e6314 | v20@0:8I16
- (void)writeID:(unsigned int)arg0;
// IMP 0x1008e6348 | v24@0:8i16I20
- (void)writeBits:(int)arg0 value:(unsigned int)arg1;
// IMP 0x1008e63f0 | v24@0:8i16i20
- (void)writeSignedBits:(int)arg0 value:(int)arg1;
// IMP 0x1008e63fc | v16@0:8
- (void)flushWriteBits;
// IMP 0x1008e6440 | v24@0:8@16
- (void)writeData:(id)arg0;
// IMP 0x1008e64a0 | v16@0:8
- (void)_raiseMemory;
// IMP 0x1008e651c | v16@0:8
- (void)_raiseEOF;
// IMP 0x1008e6598 | v24@0:8:16
- (void)_raiseNotImplemented:(SEL)arg0;
// IMP 0x1008e6630 | v24@0:8:16
- (void)_raiseNotSupported:(SEL)arg0;
// IMP 0x1008e66c8 | @16@0:8
- (id)name;
// IMP 0x1008e66d8 | @16@0:8
- (id)parentHandle;
// IMP 0x1008e66e0 | v24@0:8@16
- (void)setParentHandle:(id)arg0;
// IMP 0x1008e6714 | @16@0:8
- (id)description;
// IMP 0x1008e683c | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
@end
