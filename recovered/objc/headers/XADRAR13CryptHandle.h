// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c330
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR13CryptHandle : XADByteStreamHandle
// ivar password encoding=@"NSData" offset=272
// ivar key1 encoding=C offset=280
// ivar key2 encoding=C offset=281
// ivar key3 encoding=C offset=282
// IMP 0x10088dc24 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2;
// IMP 0x10088dc84 | v16@0:8
- (void)dealloc;
// IMP 0x10088dcd4 | v16@0:8
- (void)resetByteStream;
// IMP 0x10088ddc0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
