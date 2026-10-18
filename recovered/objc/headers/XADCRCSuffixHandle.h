// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ec80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCRCSuffixHandle : XADStreamHandle
// ivar crcparent encoding=@"XADHandle" offset=64
// ivar crcsize encoding=i offset=72
// ivar bigend encoding=B offset=76
// ivar crc encoding=I offset=80
// ivar initcrc encoding=I offset=84
// ivar compcrc encoding=I offset=88
// ivar table encoding=r^I offset=96
// ivar didtest encoding=B offset=104
// ivar wascorrect encoding=B offset=105
// IMP 0x1008e0b60 | @52@0:8@16@24I32i36B40r^I44
- (id)initWithHandle:(id)arg0 CRCHandle:(id)arg1 initialCRC:(unsigned int)arg2 CRCSize:(int)arg3 bigEndianCRC:(BOOL)arg4 CRCTable:(unsigned int *)arg5;
// IMP 0x1008e0c34 | v16@0:8
- (void)dealloc;
// IMP 0x1008e0c84 | v16@0:8
- (void)resetStream;
// IMP 0x1008e0cd8 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e0d4c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e0d54 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e0ed0 | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e0aa0 | @40@0:8@16@24B32B36
+ (id)IEEECRC32SuffixHandleWithHandle:(id)arg0 CRCHandle:(id)arg1 bigEndianCRC:(BOOL)arg2 conditioned:(BOOL)arg3;
// IMP 0x1008e0afc | @40@0:8@16@24B32B36
+ (id)CCITTCRC16SuffixHandleWithHandle:(id)arg0 CRCHandle:(id)arg1 bigEndianCRC:(BOOL)arg2 conditioned:(BOOL)arg3;
@end
