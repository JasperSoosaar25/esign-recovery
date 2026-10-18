// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c2e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipShrinkHandle : XADByteStreamHandle
// ivar lzw encoding=^{LZW=iiiii*i[0{LZWTreeNode=Ci}]} offset=272
// ivar symbolsize encoding=i offset=280
// ivar currbyte encoding=i offset=284
// ivar buffer encoding=[8192C] offset=288
// IMP 0x10088d9f4 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x10088da54 | v16@0:8
- (void)dealloc;
// IMP 0x10088daa4 | v16@0:8
- (void)resetByteStream;
// IMP 0x10088daec | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
