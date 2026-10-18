// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c790
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR30Handle : XADBlockStreamHandle
// ivar parser encoding=@"XADRARParser" offset=88
// ivar files encoding=@"NSArray" offset=96
// ivar file encoding=i offset=104
// ivar lastend encoding=q offset=112
// ivar startnewfile encoding=B offset=120
// ivar startnewtable encoding=B offset=121
// ivar lzss encoding={LZSS="window"*"mask"Q"position"q} offset=128
// ivar maincode encoding=@"XADPrefixCode" offset=152
// ivar offsetcode encoding=@"XADPrefixCode" offset=160
// ivar lowoffsetcode encoding=@"XADPrefixCode" offset=168
// ivar lengthcode encoding=@"XADPrefixCode" offset=176
// ivar lastoffset encoding=i offset=184
// ivar lastlength encoding=i offset=188
// ivar oldoffset encoding=[4i] offset=192
// ivar lastlowoffset encoding=i offset=208
// ivar numlowoffsetrepeats encoding=i offset=212
// ivar ppmblock encoding=B offset=216
// ivar ppmd encoding={PPMdModelVariantH="core"{PPMdCoreModel="alloc"^{PPMdSubAllocator}"coder"{PPMdRangeCoder="readfunc"^?"inputcontext"^v"low"I"code"I"range"I"bottom"I"uselow"B}"scale"I"FoundState"^{PPMdState}"OrderFall"i"InitEsc"i"RunLength"i"InitRL"i"CharMask"[256C]"LastMaskIndex"C"EscCount"C"PrevSuccess"C"RescalePPMdContext"^?}"alloc"^{PPMdSubAllocatorVariantH}"MinContext"^{PPMdContext}"MaxContext"^{PPMdContext}"MaxOrder"i"HiBitsFlag"i"SevenZip"B"SEE2Cont"[25[16{SEE2Context="Summ"S"Shift"C"Count"C}]]"DummySEE2Cont"{SEE2Context="Summ"S"Shift"C"Count"C}"NS2BSIndx"[256C]"HB2Flag"[256C]"NS2Indx"[256C]"BinSumm"[128[64S]]} offset=224
// ivar alloc encoding=^{PPMdSubAllocatorVariantH={PPMdSubAllocator=^?^?^?^?^?^?}I[38C][128C]C****[38{PPMAllocatorNodeVariantH=^{PPMAllocatorNodeVariantH}}]{PPMdMemoryBlockVariantH=SSII}[0C]} offset=19368
// ivar ppmescape encoding=i offset=19376
// ivar vm encoding=@"XADRARVirtualMachine" offset=19384
// ivar filtercode encoding=@"NSMutableArray" offset=19392
// ivar stack encoding=@"NSMutableArray" offset=19400
// ivar filterstart encoding=q offset=19408
// ivar lastfilternum encoding=i offset=19416
// ivar oldfilterlength encoding=[1024i] offset=19420
// ivar usagecount encoding=[1024i] offset=23516
// ivar currfilestartpos encoding=q offset=27616
// ivar lengthtable encoding=[404i] offset=27624
// IMP 0x100893ac8 | @32@0:8@16@24
- (id)initWithRARParser:(id)arg0 files:(id)arg1;
// IMP 0x100893bcc | v16@0:8
- (void)dealloc;
// IMP 0x100893cac | v16@0:8
- (void)resetBlockStream;
// IMP 0x100893db0 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008941b4 | v16@0:8
- (void)skipEmptyEntries;
// IMP 0x100894288 | q24@0:8q16
- (long long)expandToPosition:(long long)arg0;
// IMP 0x100894940 | v16@0:8
- (void)allocAndParseCodes;
// IMP 0x1008950a4 | v16@0:8
- (void)readFilterFromInput;
// IMP 0x1008951dc | v16@0:8
- (void)readFilterFromPPMd;
// IMP 0x100895310 | v32@0:8r*16i24i28
- (void)parseFilter:(char *)arg0 length:(int)arg1 flags:(int)arg2;
@end
