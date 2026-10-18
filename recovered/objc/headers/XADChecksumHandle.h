// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9eb90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADChecksumHandle : XADStreamHandle
// ivar correctchecksum encoding=I offset=64
// ivar summask encoding=I offset=68
// ivar checksum encoding=I offset=72
// IMP 0x1008e03e8 | @40@0:8@16q24i32i36
- (id)initWithHandle:(id)arg0 length:(long long)arg1 correctChecksum:(int)arg2 mask:(int)arg3;
// IMP 0x1008e0448 | v16@0:8
- (void)resetStream;
// IMP 0x1008e0490 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e04f8 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e0500 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e0534 | d16@0:8
- (double)estimatedProgress;
@end
