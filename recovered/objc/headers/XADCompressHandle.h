// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d8c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCompressHandle : XADByteStreamHandle
// ivar blockmode encoding=B offset=268
// ivar lzw encoding=^{LZW=iiiii*i[0{LZWTreeNode=Ci}]} offset=272
// ivar symbolcounter encoding=i offset=280
// ivar buffer encoding=* offset=288
// ivar bufferend encoding=* offset=296
// IMP 0x1008b3510 | @28@0:8@16i24
- (id)initWithHandle:(id)arg0 flags:(int)arg1;
// IMP 0x1008b3524 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 flags:(int)arg2;
// IMP 0x1008b35c4 | v16@0:8
- (void)dealloc;
// IMP 0x1008b3614 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008b3664 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
