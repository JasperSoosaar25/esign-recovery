// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca03b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSqueezeHandle : XADByteStreamHandle
// ivar code encoding=@"XADPrefixCode" offset=272
// IMP 0x10090016c | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x10090017c | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1009001c0 | v16@0:8
- (void)dealloc;
// IMP 0x100900210 | v16@0:8
- (void)resetByteStream;
// IMP 0x1009004e0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
