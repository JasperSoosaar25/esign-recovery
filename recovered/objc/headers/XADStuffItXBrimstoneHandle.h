// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ce70
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXBrimstoneHandle : XADByteStreamHandle
// ivar model encoding={PPMdModelVariantG="core"{PPMdCoreModel="alloc"^{PPMdSubAllocator}"coder"{PPMdRangeCoder="readfunc"^?"inputcontext"^v"low"I"code"I"range"I"bottom"I"uselow"B}"scale"I"FoundState"^{PPMdState}"OrderFall"i"InitEsc"i"RunLength"i"InitRL"i"CharMask"[256C]"LastMaskIndex"C"EscCount"C"PrevSuccess"C"RescalePPMdContext"^?}"MinContext"^{PPMdContext}"MedContext"^{PPMdContext}"MaxContext"^{PPMdContext}"MaxOrder"i"Brimstone"B"SEE2Cont"[43[8{SEE2Context="Summ"S"Shift"C"Count"C}]]"DummySEE2Cont"{SEE2Context="Summ"S"Shift"C"Count"C}"NS2BSIndx"[256C]"NS2Indx"[256C]"BinSumm"[128[16S]]"errorjmp"[48i]} offset=272
// ivar alloc encoding=^{PPMdSubAllocatorBrimstone={PPMdSubAllocator=^?^?^?^?^?^?}I[38C][128C]**[38{PPMAllocatorNodeBrimstone=^{PPMAllocatorNodeBrimstone}}][0C]} offset=6840
// ivar max encoding=i offset=6848
// IMP 0x1008a1098 | @32@0:8@16i24i28
- (id)initWithHandle:(id)arg0 maxOrder:(int)arg1 subAllocSize:(int)arg2;
// IMP 0x1008a10b0 | @40@0:8@16q24i32i36
- (id)initWithHandle:(id)arg0 length:(long long)arg1 maxOrder:(int)arg2 subAllocSize:(int)arg3;
// IMP 0x1008a1128 | v16@0:8
- (void)dealloc;
// IMP 0x1008a1178 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008a11ec | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
