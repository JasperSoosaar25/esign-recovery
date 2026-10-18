// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d000
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCompactProLZHHandle : XADLZSSHandle
// ivar literalcode encoding=@"XADPrefixCode" offset=304
// ivar lengthcode encoding=@"XADPrefixCode" offset=312
// ivar offsetcode encoding=@"XADPrefixCode" offset=320
// ivar blocksize encoding=i offset=328
// ivar blockcount encoding=i offset=332
// ivar blockstart encoding=q offset=336
// IMP 0x1008a29b4 | @28@0:8@16i24
- (id)initWithHandle:(id)arg0 blockSize:(int)arg1;
// IMP 0x1008a2a2c | v16@0:8
- (void)dealloc;
// IMP 0x1008a2a9c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008a2ac4 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008a2cb8 | @20@0:8i16
- (id)allocAndParseCodeOfSize:(int)arg0;
@end
