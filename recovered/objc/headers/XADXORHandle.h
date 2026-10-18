// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ee60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADXORHandle : XADHandle
// ivar password encoding=@"NSData" offset=32
// ivar passwordbytes encoding=r* offset=40
// ivar passwordlength encoding=i offset=48
// IMP 0x1008e2d0c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 password:(id)arg1;
// IMP 0x1008e2da0 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e2dc4 | v16@0:8
- (void)dealloc;
// IMP 0x1008e2e14 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e2e30 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e2e4c | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e2e68 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e2e84 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e2ea0 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
