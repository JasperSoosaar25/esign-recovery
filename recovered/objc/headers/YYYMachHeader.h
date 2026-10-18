// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a110
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMachHeader : YYYOffsetNode
// ivar _machHeader encoding=^{mach_header=IiiIIII} offset=8
// ivar _machHeader64 encoding=^{mach_header_64=IiiIIIII} offset=16
// property magic attributes=TI,R,N
// property ncmds attributes=TI,D,N
// property sizeofcmds attributes=TI,D,N
// property filetype attributes=TI,R,N
// property header_size attributes=TI,R,N
// property load_commands_offset attributes=Tq,R,N
// property machHeader attributes=T^{mach_header=IiiIIII},N,V_machHeader
// property machHeader64 attributes=T^{mach_header_64=IiiIIIII},N,V_machHeader64
// IMP 0x10075e4f4 | I16@0:8
- (unsigned int)magic;
// IMP 0x10075e5c0 | I16@0:8
- (unsigned int)filetype;
// IMP 0x10075e668 | I16@0:8
- (unsigned int)ncmds;
// IMP 0x10075e75c | v20@0:8I16
- (void)setNcmds:(unsigned int)arg0;
// IMP 0x10075e824 | I16@0:8
- (unsigned int)sizeofcmds;
// IMP 0x10075e8c8 | v20@0:8I16
- (void)setSizeofcmds:(unsigned int)arg0;
// IMP 0x10075e998 | q16@0:8
- (long long)load_commands_offset;
// IMP 0x10075e9d4 | I16@0:8
- (unsigned int)header_size;
// IMP 0x10075ea40 | ^{mach_header=IiiIIII}16@0:8
- (struct mach_header *)machHeader;
// IMP 0x10075ea68 | v24@0:8^{mach_header=IiiIIII}16
- (void)setMachHeader:(struct mach_header *)arg0;
// IMP 0x10075eab8 | ^{mach_header_64=IiiIIIII}16@0:8
- (struct mach_header_64 *)machHeader64;
// IMP 0x10075ead4 | v24@0:8^{mach_header_64=IiiIIIII}16
- (void)setMachHeader64:(struct mach_header_64 *)arg0;
@end
