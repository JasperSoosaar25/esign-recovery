// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c8d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARVirtualMachine : NSObject
// ivar vm encoding={RARVirtualMachine="registers"[8I]"flags"I"memory"[262147C]} offset=8
// IMP 0x100898474 | @16@0:8
- (id)init;
// IMP 0x1008984c4 | v16@0:8
- (void)dealloc;
// IMP 0x1008984f8 | *16@0:8
- (char *)memory;
// IMP 0x100898500 | v24@0:8^I16
- (void)setRegisters:(unsigned int *)arg0;
// IMP 0x100898510 | v32@0:8I16i20*24
- (void)readMemoryAtAddress:(unsigned int)arg0 length:(int)arg1 toBuffer:(char *)arg2;
// IMP 0x100898534 | v32@0:8I16i20@24
- (void)readMemoryAtAddress:(unsigned int)arg0 length:(int)arg1 toMutableData:(id)arg2;
// IMP 0x100898588 | v32@0:8I16i20r*24
- (void)writeMemoryAtAddress:(unsigned int)arg0 length:(int)arg1 fromBuffer:(char *)arg2;
// IMP 0x1008985ac | v32@0:8I16i20@24
- (void)writeMemoryAtAddress:(unsigned int)arg0 length:(int)arg1 fromData:(id)arg2;
// IMP 0x100898600 | I20@0:8I16
- (unsigned int)readWordAtAddress:(unsigned int)arg0;
// IMP 0x100898610 | v24@0:8I16I20
- (void)writeWordAtAddress:(unsigned int)arg0 value:(unsigned int)arg1;
// IMP 0x100898620 | B24@0:8@16
- (BOOL)executeProgramCode:(id)arg0;
@end
