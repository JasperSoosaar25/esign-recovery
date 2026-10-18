// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d0a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCompactProRLEHandle : XADByteStreamHandle
// ivar saved encoding=i offset=268
// ivar repeat encoding=i offset=272
// ivar halfescaped encoding=B offset=276
// IMP 0x1008a3e10 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008a3e44 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008a3e6c | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
