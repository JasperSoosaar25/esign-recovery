// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e5e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADNSISBzip2Handle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar hasrand encoding=B offset=96
// ivar bd encoding={?="writeCopies"i"writePos"i"writeRunCountdown"i"writeCount"i"writeCurrent"i"inhandle"@"XADHandle""inbufCount"i"inbufPos"i"inbuf"[4096C]"inbufBitCount"I"inbufBits"I"hasrand"B"dbuf"^I"dbufSize"I"selectors"[32768C]"groups"[6{group_data="limit"[21i]"base"[20i]"permute"[258i]"minLen"i"maxLen"i}]"jmpbuf"[48i]} offset=104
// ivar blocktable encoding=[900000I] offset=44456
// ivar outblock encoding=[65536C] offset=3644456
// IMP 0x1008c9b70 | @36@0:8@16q24B32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 hasRandomizationBit:(BOOL)arg2;
// IMP 0x1008c9c0c | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008c9ca8 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
