// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1070
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFPNGPredictorHandle : XADByteStreamHandle
// ivar cols encoding=i offset=268
// ivar comps encoding=i offset=272
// ivar bpc encoding=i offset=276
// ivar prevbuf encoding=* offset=280
// ivar type encoding=i offset=288
// IMP 0x100925f34 | @36@0:8@16i24i28i32
- (id)initWithHandle:(id)arg0 columns:(int)arg1 components:(int)arg2 bitsPerComponent:(int)arg3;
// IMP 0x100926024 | v16@0:8
- (void)dealloc;
// IMP 0x100926074 | v16@0:8
- (void)resetByteStream;
// IMP 0x1009260bc | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
