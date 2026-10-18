// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ef00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADBlockStreamHandle : XADStreamHandle
// ivar _currblock encoding=* offset=64
// ivar _blockstartpos encoding=q offset=72
// ivar _blocklength encoding=i offset=80
// ivar _endofblocks encoding=B offset=84
// IMP 0x1008e390c | @36@0:8@16q24i32
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1 bufferSize:(int)arg2;
// IMP 0x1008e3968 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e398c | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e3a98 | v16@0:8
- (void)resetStream;
// IMP 0x1008e3ac8 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e3bf4 | v16@0:8
- (void)_readNextBlock;
// IMP 0x1008e3c84 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008e3c88 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008e3c90 | v24@0:8*16
- (void)setBlockPointer:(char *)arg0;
// IMP 0x1008e3ca0 | v16@0:8
- (void)endBlockStream;
@end
