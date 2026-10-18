// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0098
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADDiskDoublerMethod2Handle : XADByteStreamHandle
// ivar numtrees encoding=i offset=268
// ivar currtree encoding=i offset=272
// ivar trees encoding=[256{?="parents"[512C]"leftchildren"[256S]"rightchildren"[256S]}] offset=276
// IMP 0x1008fb944 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 numberOfTrees:(int)arg2;
// IMP 0x1008fb994 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008fba10 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1008fbab4 | v20@0:8i16
- (void)updateStateForByte:(int)arg0;
@end
