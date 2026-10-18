// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c420
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR20CryptHandle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar password encoding=@"NSData" offset=96
// ivar outblock encoding=[16C] offset=104
// ivar key encoding=[4I] offset=120
// ivar table encoding=[256C] offset=136
// IMP 0x1008900e4 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2;
// IMP 0x10089016c | v16@0:8
- (void)dealloc;
// IMP 0x1008901bc | v16@0:8
- (void)resetBlockStream;
// IMP 0x100890228 | v16@0:8
- (void)calculateKey;
// IMP 0x1008905d4 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
