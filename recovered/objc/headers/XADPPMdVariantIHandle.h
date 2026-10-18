// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ce20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPPMdVariantIHandle : XADByteStreamHandle
// ivar model encoding={PPMdModelVariantI="core"{PPMdCoreModel="alloc"^{PPMdSubAllocator}"coder"{PPMdRangeCoder="readfunc"^?"inputcontext"^v"low"I"code"I"range"I"bottom"I"uselow"B}"scale"I"FoundState"^{PPMdState}"OrderFall"i"InitEsc"i"RunLength"i"InitRL"i"CharMask"[256C]"LastMaskIndex"C"EscCount"C"PrevSuccess"C"RescalePPMdContext"^?}"alloc"^{PPMdSubAllocatorVariantI}"NS2BSIndx"[256C]"QTable"[260C]"MaxContext"^{PPMdContext}"MaxOrder"i"MRMethod"i"SEE2Cont"[24[32{SEE2Context="Summ"S"Shift"C"Count"C}]]"DummySEE2Cont"{SEE2Context="Summ"S"Shift"C"Count"C}"BinSumm"[25[64S]]"endofstream"B} offset=272
// ivar alloc encoding=^{PPMdSubAllocatorVariantI={PPMdSubAllocator=^?^?^?^?^?^?}II[38C][128C]****[38{PPMdMemoryBlockVariantI=III}][0C]} offset=7448
// ivar max encoding=i offset=7456
// ivar method encoding=i offset=7460
// IMP 0x1008a0ee4 | @36@0:8@16i24i28i32
- (id)initWithHandle:(id)arg0 maxOrder:(int)arg1 subAllocSize:(int)arg2 modelRestorationMethod:(int)arg3;
// IMP 0x1008a0f00 | @44@0:8@16q24i32i36i40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 maxOrder:(int)arg2 subAllocSize:(int)arg3 modelRestorationMethod:(int)arg4;
// IMP 0x1008a0f88 | v16@0:8
- (void)dealloc;
// IMP 0x1008a0fd8 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008a105c | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
