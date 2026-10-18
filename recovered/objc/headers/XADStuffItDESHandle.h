// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca12c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItDESHandle : XADBlockStreamHandle
// ivar block encoding=[8C] offset=85
// ivar A encoding=I offset=96
// ivar B encoding=I offset=100
// ivar C encoding=I offset=104
// ivar D encoding=I offset=108
// IMP 0x10092d0bc | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 key:(id)arg1;
// IMP 0x10092d0d0 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 key:(id)arg2;
// IMP 0x10092d1e0 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x10092c9e4 | @40@0:8@16@24@32
+ (id)keyForPasswordData:(id)arg0 entryKey:(id)arg1 MKey:(id)arg2;
@end
