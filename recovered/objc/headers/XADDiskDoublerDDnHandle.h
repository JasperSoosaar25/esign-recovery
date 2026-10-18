// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d140
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADDiskDoublerDDnHandle : XADLZSSHandle
// ivar blocksize encoding=i offset=300
// ivar blockend encoding=q offset=304
// ivar literalsleft encoding=i offset=312
// ivar correctxor encoding=i offset=316
// ivar lengthcode encoding=@"XADPrefixCode" offset=320
// ivar buffer encoding=[65536C] offset=328
// ivar literalptr encoding=* offset=65864
// ivar offsetptr encoding=^S offset=65872
// ivar nextblock encoding=q offset=65880
// ivar checksumcorrect encoding=B offset=65888
// ivar uncompressed encoding=B offset=65889
// IMP 0x1008a4740 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008a4788 | v16@0:8
- (void)dealloc;
// IMP 0x1008a47d8 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008a481c | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008a4a04 | v24@0:8q16
- (void)readBlockAtPosition:(long long)arg0;
// IMP 0x1008a54ac | @16@0:8
- (id)readCode;
// IMP 0x1008a5680 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008a5688 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
