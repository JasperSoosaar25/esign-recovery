// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9cf60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADBinHexHandle : XADByteStreamHandle
// ivar bytes encoding=I offset=268
// ivar prev_bits encoding=C offset=272
// ivar rle_byte encoding=i offset=276
// ivar rle_num encoding=i offset=280
// IMP 0x1008a2568 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008a259c | v16@0:8
- (void)resetByteStream;
// IMP 0x1008a26f0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
