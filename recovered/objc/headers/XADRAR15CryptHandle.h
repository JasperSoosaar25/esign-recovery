// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c380
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR15CryptHandle : XADByteStreamHandle
// ivar password encoding=@"NSData" offset=272
// ivar key0 encoding=S offset=280
// ivar key1 encoding=S offset=282
// ivar key2 encoding=S offset=284
// ivar key3 encoding=S offset=286
// IMP 0x10088df14 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2;
// IMP 0x10088df74 | v16@0:8
- (void)dealloc;
// IMP 0x10088dfc4 | v16@0:8
- (void)resetByteStream;
// IMP 0x10088e0d0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
