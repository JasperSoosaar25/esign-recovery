// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0548
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPaddedBlockHandle : XADHandle
// ivar startoffset encoding=q offset=32
// ivar logicalsize encoding=i offset=40
// ivar physicalsize encoding=i offset=44
// IMP 0x100903a00 | @40@0:8@16q24i32i36
- (id)initWithHandle:(id)arg0 startOffset:(long long)arg1 logicalBlockSize:(int)arg2 physicalBlockSize:(int)arg3;
// IMP 0x100903a78 | q16@0:8
- (long long)fileSize;
// IMP 0x100903b04 | q16@0:8
- (long long)offsetInFile;
// IMP 0x100903b80 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x100903b9c | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x100903c1c | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x100903c38 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
