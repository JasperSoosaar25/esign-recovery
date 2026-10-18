// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0278
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRLE90Handle : XADByteStreamHandle
// ivar repeatedbyte encoding=i offset=268
// ivar count encoding=i offset=272
// IMP 0x1008feaf4 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008feb04 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008feb38 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008feb54 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
