// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e400
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZHStaticHandle : XADLZSSHandle
// ivar literalcode encoding=@"XADPrefixCode" offset=304
// ivar distancecode encoding=@"XADPrefixCode" offset=312
// ivar blocksize encoding=i offset=320
// ivar blockpos encoding=i offset=324
// ivar windowbits encoding=i offset=328
// IMP 0x1008c6060 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 windowBits:(int)arg2;
// IMP 0x1008c60d0 | v16@0:8
- (void)dealloc;
// IMP 0x1008c6130 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008c614c | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008c62b4 | @24@0:8i16i20
- (id)allocAndParseCodeOfWidth:(int)arg0 specialIndex:(int)arg1;
// IMP 0x1008c646c | @16@0:8
- (id)allocAndParseLiteralCode;
@end
