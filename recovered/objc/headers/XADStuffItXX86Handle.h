// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca04a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXX86Handle : XADByteStreamHandle
// ivar lasthit encoding=q offset=272
// ivar bitfield encoding=I offset=280
// ivar numbufferbytes encoding=i offset=284
// ivar currbufferbyte encoding=i offset=288
// ivar buffer encoding=[4C] offset=292
// IMP 0x100901064 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x100901098 | v16@0:8
- (void)resetByteStream;
// IMP 0x1009010d0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
