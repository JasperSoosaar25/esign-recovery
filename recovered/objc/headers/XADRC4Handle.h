// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ed20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRC4Handle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar key encoding=@"NSData" offset=72
// ivar rc4 encoding=@"XADRC4Engine" offset=80
// IMP 0x1008e1184 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 key:(id)arg1;
// IMP 0x1008e1240 | v16@0:8
- (void)dealloc;
// IMP 0x1008e12a0 | v16@0:8
- (void)resetStream;
// IMP 0x1008e131c | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
