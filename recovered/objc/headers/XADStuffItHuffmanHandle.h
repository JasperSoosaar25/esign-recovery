// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d4b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItHuffmanHandle : XADByteStreamHandle
// ivar code encoding=@"XADPrefixCode" offset=272
// IMP 0x1008ac2d4 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008ac2e4 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008ac328 | v16@0:8
- (void)dealloc;
// IMP 0x1008ac378 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008ac3d4 | v16@0:8
- (void)parseTree;
// IMP 0x1008ac498 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
