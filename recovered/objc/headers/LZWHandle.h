// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0b88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface LZWHandle : XADByteStreamHandle
// ivar early encoding=B offset=268
// ivar lzw encoding=^{LZW=iiiii*i[0{LZWTreeNode=Ci}]} offset=272
// ivar symbolsize encoding=i offset=280
// ivar currbyte encoding=i offset=284
// ivar buffer encoding=[4096C] offset=288
// IMP 0x10091ec64 | @28@0:8@16B24
- (id)initWithHandle:(id)arg0 earlyChange:(BOOL)arg1;
// IMP 0x10091ecd4 | v16@0:8
- (void)dealloc;
// IMP 0x10091ed24 | v16@0:8
- (void)clearTable;
// IMP 0x10091ed6c | v16@0:8
- (void)resetByteStream;
// IMP 0x10091ed78 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
