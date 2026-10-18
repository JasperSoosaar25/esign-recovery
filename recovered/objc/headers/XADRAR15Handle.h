// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c3d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR15Handle : XADFastLZSSHandle
// ivar parser encoding=@"XADRARParser" offset=120
// ivar files encoding=@"NSArray" offset=128
// ivar file encoding=i offset=136
// ivar endpos encoding=q offset=144
// ivar lengthcode1 encoding=@"XADPrefixCode" offset=152
// ivar lengthcode2 encoding=@"XADPrefixCode" offset=160
// ivar huffmancode0 encoding=@"XADPrefixCode" offset=168
// ivar huffmancode1 encoding=@"XADPrefixCode" offset=176
// ivar huffmancode2 encoding=@"XADPrefixCode" offset=184
// ivar huffmancode3 encoding=@"XADPrefixCode" offset=192
// ivar huffmancode4 encoding=@"XADPrefixCode" offset=200
// ivar shortmatchcode0 encoding=@"XADPrefixCode" offset=208
// ivar shortmatchcode1 encoding=@"XADPrefixCode" offset=216
// ivar shortmatchcode2 encoding=@"XADPrefixCode" offset=224
// ivar shortmatchcode3 encoding=@"XADPrefixCode" offset=232
// ivar storedblock encoding=B offset=240
// ivar flags encoding=I offset=244
// ivar flagbits encoding=I offset=248
// ivar literalweight encoding=I offset=252
// ivar matchweight encoding=I offset=256
// ivar numrepeatedliterals encoding=I offset=260
// ivar numrepeatedlastmatches encoding=I offset=264
// ivar runningaverageliteral encoding=I offset=268
// ivar runningaverageselector encoding=I offset=272
// ivar runningaveragelength encoding=I offset=276
// ivar runningaverageoffset encoding=I offset=280
// ivar runningaveragebelowmaximum encoding=I offset=284
// ivar maximumoffset encoding=I offset=288
// ivar bugfixflag encoding=B offset=292
// ivar lastoffset encoding=i offset=296
// ivar lastlength encoding=i offset=300
// ivar oldoffset encoding=[4i] offset=304
// ivar oldoffsetindex encoding=i offset=320
// ivar flagtable encoding=[256i] offset=324
// ivar flagreverse encoding=[256i] offset=1348
// ivar literaltable encoding=[256i] offset=2372
// ivar literalreverse encoding=[256i] offset=3396
// ivar offsettable encoding=[256i] offset=4420
// ivar offsetreverse encoding=[256i] offset=5444
// ivar shortoffsettable encoding=[256i] offset=6468
// IMP 0x10088e290 | @32@0:8@16@24
- (id)initWithRARParser:(id)arg0 files:(id)arg1;
// IMP 0x10088eb5c | v16@0:8
- (void)dealloc;
// IMP 0x10088ec4c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x10088eeb0 | v16@0:8
- (void)startNextFile;
// IMP 0x10088ef84 | v24@0:8q16
- (void)expandFromPosition:(long long)arg0;
@end
