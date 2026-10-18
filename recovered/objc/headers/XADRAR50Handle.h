// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9eaf0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR50Handle : XADBlockStreamHandle
// ivar parser encoding=@"XADRAR5Parser" offset=88
// ivar files encoding=@"NSArray" offset=96
// ivar file encoding=i offset=104
// ivar startnewfile encoding=B offset=108
// ivar currfilestartpos encoding=q offset=112
// ivar blockbitend encoding=q offset=120
// ivar islastblock encoding=B offset=128
// ivar lzss encoding={LZSS="window"*"mask"Q"position"q} offset=136
// ivar maincode encoding=@"XADPrefixCode" offset=160
// ivar offsetcode encoding=@"XADPrefixCode" offset=168
// ivar lowoffsetcode encoding=@"XADPrefixCode" offset=176
// ivar lengthcode encoding=@"XADPrefixCode" offset=184
// ivar lastlength encoding=i offset=192
// ivar oldoffset encoding=[4i] offset=196
// ivar lastlowoffset encoding=i offset=212
// ivar numlowoffsetrepeats encoding=i offset=216
// ivar filters encoding=@"NSMutableArray" offset=224
// ivar filterdata encoding=@"NSMutableData" offset=232
// ivar lengthtable encoding=[430i] offset=240
// IMP 0x1008de060 | @32@0:8@16@24
- (id)initWithRARParser:(id)arg0 files:(id)arg1;
// IMP 0x1008de1d8 | v16@0:8
- (void)dealloc;
// IMP 0x1008de298 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008de34c | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008de654 | q24@0:8q16
- (long long)expandToPosition:(long long)arg0;
// IMP 0x1008debc0 | v16@0:8
- (void)readBlockHeader;
// IMP 0x1008dee90 | v16@0:8
- (void)allocAndParseCodes;
@end
