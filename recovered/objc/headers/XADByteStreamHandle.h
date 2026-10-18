// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ef50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADByteStreamHandle : XADStreamHandle
// ivar bytestreamproducebyte_ptr encoding=^? offset=64
// ivar bytesproduced encoding=i offset=72
// ivar eofenv encoding=[48i] offset=76
// IMP 0x1008e3cb4 | @36@0:8@16q24i32
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1 bufferSize:(int)arg2;
// IMP 0x1008e3d20 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e3d44 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e3e24 | v16@0:8
- (void)resetStream;
// IMP 0x1008e3e30 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008e3e34 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1008e3e3c | v16@0:8
- (void)endByteStream;
@end
