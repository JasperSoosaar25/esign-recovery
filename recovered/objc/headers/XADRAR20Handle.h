// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c470
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR20Handle : XADFastLZSSHandle
// ivar parser encoding=@"XADRARParser" offset=120
// ivar files encoding=@"NSArray" offset=128
// ivar file encoding=i offset=136
// ivar endpos encoding=q offset=144
// ivar maincode encoding=@"XADPrefixCode" offset=152
// ivar offsetcode encoding=@"XADPrefixCode" offset=160
// ivar lengthcode encoding=@"XADPrefixCode" offset=168
// ivar audiocode encoding=[4@"XADPrefixCode"] offset=176
// ivar lastoffset encoding=i offset=208
// ivar lastlength encoding=i offset=212
// ivar oldoffset encoding=[4i] offset=216
// ivar oldoffsetindex encoding=i offset=232
// ivar audioblock encoding=B offset=236
// ivar channel encoding=i offset=240
// ivar channeldelta encoding=i offset=244
// ivar numchannels encoding=i offset=248
// ivar audiostate encoding=[4{RAR20AudioState="weight1"i"weight2"i"weight3"i"weight4"i"weight5"i"delta1"i"delta2"i"delta3"i"delta4"i"lastdelta"i"error"[11i]"count"i"lastbyte"i}] offset=252
// ivar lengthtable encoding=[1028i] offset=620
// IMP 0x1008907fc | @32@0:8@16@24
- (id)initWithRARParser:(id)arg0 files:(id)arg1;
// IMP 0x1008908c8 | v16@0:8
- (void)dealloc;
// IMP 0x100890974 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x100890a64 | v16@0:8
- (void)startNextFile;
// IMP 0x100890b14 | v24@0:8q16
- (void)expandFromPosition:(long long)arg0;
// IMP 0x100891064 | v16@0:8
- (void)allocAndParseCodes;
@end
