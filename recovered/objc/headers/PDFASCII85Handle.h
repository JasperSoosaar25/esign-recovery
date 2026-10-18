// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1020
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFASCII85Handle : XADByteStreamHandle
// ivar val encoding=I offset=268
// ivar finalbytes encoding=B offset=272
// IMP 0x100925a1c | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x100925a50 | v16@0:8
- (void)resetByteStream;
// IMP 0x100925a60 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
