// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ec08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCRCHandle : XADStreamHandle
// ivar crc encoding=I offset=64
// ivar initcrc encoding=I offset=68
// ivar compcrc encoding=I offset=72
// ivar table encoding=r^I offset=80
// ivar transformationfunction encoding=^? offset=88
// ivar transformationcontext encoding=@ offset=96
// IMP 0x1008e0778 | @48@0:8@16q24I32I36r^I40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 initialCRC:(unsigned int)arg2 correctCRC:(unsigned int)arg3 CRCTable:(unsigned int *)arg4;
// IMP 0x1008e0814 | v16@0:8
- (void)dealloc;
// IMP 0x1008e0864 | v32@0:8^?16@24
- (void)setCRCTransformationFunction:(void *)arg0 context:(id)arg1;
// IMP 0x1008e08b4 | v16@0:8
- (void)resetStream;
// IMP 0x1008e0908 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e097c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e0984 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e0a14 | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e0550 | @32@0:8@16I24B28
+ (id)IEEECRC32HandleWithHandle:(id)arg0 correctCRC:(unsigned int)arg1 conditioned:(BOOL)arg2;
// IMP 0x1008e05d4 | @40@0:8@16q24I32B36
+ (id)IEEECRC32HandleWithHandle:(id)arg0 length:(long long)arg1 correctCRC:(unsigned int)arg2 conditioned:(BOOL)arg3;
// IMP 0x1008e065c | @40@0:8@16q24I32B36
+ (id)IBMCRC16HandleWithHandle:(id)arg0 length:(long long)arg1 correctCRC:(unsigned int)arg2 conditioned:(BOOL)arg3;
// IMP 0x1008e06dc | @40@0:8@16q24I32B36
+ (id)CCITTCRC16HandleWithHandle:(id)arg0 length:(long long)arg1 correctCRC:(unsigned int)arg2 conditioned:(BOOL)arg3;
@end
