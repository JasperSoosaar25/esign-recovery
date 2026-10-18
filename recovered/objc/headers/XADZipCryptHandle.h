// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c060
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipCryptHandle : XADByteStreamHandle
// ivar password encoding=@"NSData" offset=272
// ivar header encoding=@"NSData" offset=280
// ivar test encoding=C offset=288
// ivar key0 encoding=I offset=292
// ivar key1 encoding=I offset=296
// ivar key2 encoding=I offset=300
// IMP 0x100888afc | @44@0:8@16q24@32C40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2 testByte:(unsigned char)arg3;
// IMP 0x100888b78 | v16@0:8
- (void)dealloc;
// IMP 0x100888bc8 | v16@0:8
- (void)resetByteStream;
// IMP 0x100888e60 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
