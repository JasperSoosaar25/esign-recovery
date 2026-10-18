// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d2a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPackItDESHandle : XADBlockStreamHandle
// ivar block encoding=[8C] offset=85
// ivar schedule encoding={DES_key_schedule="KS"[16{DES_key_stage="h"I"l"I}]} offset=96
// IMP 0x1008a9748 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 password:(id)arg1;
// IMP 0x1008a975c | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2;
// IMP 0x1008a9828 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
