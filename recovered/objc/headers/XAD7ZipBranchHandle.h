// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ca10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD7ZipBranchHandle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar inbuffer encoding=[4096C] offset=96
// ivar leftoverstart encoding=i offset=4192
// ivar leftoverlength encoding=i offset=4196
// ivar baseoffset encoding=I offset=4200
// IMP 0x10089bd88 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x10089bd9c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 propertyData:(id)arg1;
// IMP 0x10089bdb0 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x10089bdc0 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 propertyData:(id)arg2;
// IMP 0x10089be94 | v16@0:8
- (void)resetBlockStream;
// IMP 0x10089bef0 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x10089bfdc | i36@0:8*16i24q28
- (int)decodeBlock:(char *)arg0 length:(int)arg1 offset:(long long)arg2;
@end
