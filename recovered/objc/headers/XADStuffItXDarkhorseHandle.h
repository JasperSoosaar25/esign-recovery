// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d6e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXDarkhorseHandle : XADLZSSHandle
// ivar coder encoding={CarrylessRangeCoder="input"^{CSInputBuffer}"low"I"code"I"range"I"bottom"I"uselow"B} offset=304
// ivar next encoding=i offset=336
// ivar flagweights encoding=[4I] offset=340
// ivar flagweight2 encoding=I offset=356
// ivar litweights encoding=[16[256I]] offset=360
// ivar litweights2 encoding=[16[256[2I]]] offset=16744
// ivar recencyweight1 encoding=I offset=49512
// ivar recencyweight2 encoding=I offset=49516
// ivar recencyweight3 encoding=I offset=49520
// ivar recencyweights encoding=[4I] offset=49524
// ivar lenweight encoding=I offset=49540
// ivar shortweights encoding=[4[16I]] offset=49544
// ivar longweights encoding=[256I] offset=49800
// ivar distlenweights encoding=[4[64I]] offset=50824
// ivar distweights encoding=[10[32I]] offset=51848
// ivar distlowbitweights encoding=[16I] offset=53128
// ivar distancetable encoding=[4i] offset=53192
// IMP 0x1008af5b0 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 windowSize:(int)arg2;
// IMP 0x1008af5e4 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008af7ec | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008afa20 | i24@0:8i16i20
- (int)readLiteralWithPrevious:(int)arg0 next:(int)arg1;
// IMP 0x1008afb3c | i20@0:8i16
- (int)readLengthWithIndex:(int)arg0;
// IMP 0x1008afbd0 | i20@0:8i16
- (int)readDistanceWithLength:(int)arg0;
// IMP 0x1008afd10 | i20@0:8i16
- (int)readRecencyWithIndex:(int)arg0;
// IMP 0x1008afdc0 | i28@0:8^I16i24
- (int)readSymbolWithWeights:(unsigned int *)arg0 numberOfBits:(int)arg1;
// IMP 0x1008afe38 | v24@0:8i16i20
- (void)updateDistanceMemoryWithOldIndex:(int)arg0 distance:(int)arg1;
@end
