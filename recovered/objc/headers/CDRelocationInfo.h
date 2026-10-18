// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99318
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDRelocationInfo : NSObject
// ivar _rinfo encoding={relocation_info="r_address"i"r_symbolnum"b24"r_pcrel"b1"r_length"b2"r_extern"b1"r_type"b4} offset=8
// property offset attributes=TQ,R,N
// property size attributes=TQ,R,N
// property symbolnum attributes=TI,R,N
// property isExtern attributes=TB,R,N
// IMP 0x1007013f4 | @24@0:8{relocation_info=ib24b1b2b1b4}16
- (id)initWithInfo:(struct relocation_info)arg0;
// IMP 0x10070143c | @16@0:8
- (id)description;
// IMP 0x1007014d4 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1007014dc | Q16@0:8
- (unsigned long long)size;
// IMP 0x1007014e8 | I16@0:8
- (unsigned int)symbolnum;
// IMP 0x1007014f4 | B16@0:8
- (BOOL)isExtern;
@end
