// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0eb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFAESHandle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar key encoding=@"NSData" offset=96
// ivar iv encoding=@"NSData" offset=104
// ivar aes encoding={?="ks"[60I]"inf"(?="l"I"b"[4C])} offset=112
// ivar ivbuffer encoding=[16C] offset=356
// ivar streambuffer encoding=[16C] offset=372
// IMP 0x10092099c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 key:(id)arg1;
// IMP 0x100920aa4 | v16@0:8
- (void)dealloc;
// IMP 0x100920b04 | v16@0:8
- (void)resetBlockStream;
// IMP 0x100920b70 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
