// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e680
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADQuantumHandle : XADCABBlockHandle
// ivar lzss encoding={LZSS="window"*"mask"Q"position"q} offset=39008
// ivar numslots4 encoding=i offset=39032
// ivar numslots5 encoding=i offset=39036
// ivar numslots6 encoding=i offset=39040
// ivar coder encoding={QuantumCoder="CS_L"S"CS_H"S"CS_C"S"input"^{CSInputBuffer}} offset=39048
// ivar selectormodel encoding={QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]} offset=39064
// ivar literalmodel encoding=[4{QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]}] offset=39332
// ivar offsetmodel4 encoding={QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]} offset=40404
// ivar offsetmodel5 encoding={QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]} offset=40672
// ivar offsetmodel6 encoding={QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]} offset=40940
// ivar lengthmodel6 encoding={QuantumModel="numsymbols"i"shiftsleft"i"symbols"[65{QuantumModelSymbol="symbol"S"cumfreq"S}]} offset=41208
// IMP 0x1008ce2d8 | @28@0:8@16i24
- (id)initWithBlockReader:(id)arg0 windowBits:(int)arg1;
// IMP 0x1008ce39c | v16@0:8
- (void)dealloc;
// IMP 0x1008ce3ec | v16@0:8
- (void)resetCABBlockHandle;
// IMP 0x1008ce5e8 | i40@0:8*16i24q28i36
- (int)produceCABBlockWithInputBuffer:(char *)arg0 length:(int)arg1 atOffset:(long long)arg2 length:(int)arg3;
@end
