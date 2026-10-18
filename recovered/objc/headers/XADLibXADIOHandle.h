// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e7c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLibXADIOHandle : XADMemoryHandle
// ivar unpacked encoding=B offset=48
// ivar inlen encoding=q offset=56
// ivar outlen encoding=q offset=64
// ivar inbuf encoding=[10240C] offset=72
// ivar outbuf encoding=[10240C] offset=10312
// ivar iostruct encoding={xadInOut="xio_ArchiveInfo"^{xadArchiveInfo}"xio_xadMasterBase"^{xadMasterBase}"xio_Error"i"xio_Flags"I"xio_GetFunc"^?"xio_GetFuncPrivate"^v"xio_PutFunc"^?"xio_PutFuncPrivate"^v"xio_InFunc"^?"xio_InFuncPrivate"^v"xio_InSize"Q"xio_InBufferSize"Q"xio_InBufferPos"Q"xio_InBuffer"*"xio_BitBuf"I"xio_BitNum"S"xio_CRC16"S"xio_CRC32"I"xio_OutFunc"^?"xio_OutFuncPrivate"^v"xio_OutSize"Q"xio_OutBufferSize"Q"xio_OutBufferPos"Q"xio_OutBuffer"*"xio_WindowSize"Q"xio_WindowPos"Q"xio_Window"*"inputhandle"@"XADHandle""outputdata"@"NSMutableData"} offset=20552
// IMP 0x1008d7308 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008d7318 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008d73d8 | q16@0:8
- (long long)fileSize;
// IMP 0x1008d7438 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008d7498 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008d74f8 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008d7560 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008d75c0 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008d7638 | v28@0:8i16r^v20
- (void)writeBytes:(int)arg0 fromBuffer:(void *)arg1;
// IMP 0x1008d7648 | @16@0:8
- (id)fileContents;
// IMP 0x1008d76a8 | @16@0:8
- (id)remainingFileContents;
// IMP 0x1008d7708 | @20@0:8i16
- (id)readDataOfLength:(int)arg0;
// IMP 0x1008d7770 | @20@0:8i16
- (id)readDataOfLengthAtMost:(int)arg0;
// IMP 0x1008d77d8 | @20@0:8i16
- (id)copyDataOfLength:(int)arg0;
// IMP 0x1008d7840 | @20@0:8i16
- (id)copyDataOfLengthAtMost:(int)arg0;
// IMP 0x1008d78a8 | v16@0:8
- (void)runUnpacker;
// IMP 0x1008d78f4 | ^{xadInOut=^{xadArchiveInfo}^{xadMasterBase}iI^?^v^?^v^?^vQQQ*ISSI^?^vQQQ*QQ*@@}20@0:8I16
- (struct xadInOut *)ioStructWithFlags:(unsigned int)arg0;
// IMP 0x1008d7b6c | i16@0:8
- (int)unpackData;
@end
