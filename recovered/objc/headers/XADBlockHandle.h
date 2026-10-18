// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9eb40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADBlockHandle : XADHandle
// ivar currpos encoding=q offset=32
// ivar length encoding=q offset=40
// ivar numblocks encoding=i offset=48
// ivar blocksize encoding=i offset=52
// ivar blockoffsets encoding=^q offset=56
// IMP 0x1008dfed4 | @28@0:8@16i24
- (id)initWithHandle:(id)arg0 blockSize:(int)arg1;
// IMP 0x1008dff58 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 blockSize:(int)arg2;
// IMP 0x1008dffdc | v16@0:8
- (void)dealloc;
// IMP 0x1008e002c | v40@0:8^I16i24I28q32
- (void)setBlockChain:(unsigned int *)arg0 numberOfBlocks:(int)arg1 firstBlock:(unsigned int)arg2 headerSize:(long long)arg3;
// IMP 0x1008e00f0 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e0124 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e0134 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e0184 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e026c | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e02ac | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
