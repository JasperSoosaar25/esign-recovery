// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0138
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZooMethod1Handle : XADByteStreamHandle
// ivar lzw encoding=^{LZW=iiiii*i[0{LZWTreeNode=Ci}]} offset=272
// ivar currbyte encoding=i offset=280
// ivar buffer encoding=[8192C] offset=284
// IMP 0x1008fd994 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008fd9f4 | v16@0:8
- (void)dealloc;
// IMP 0x1008fda44 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008fda7c | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
