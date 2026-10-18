// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca00e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADNowCompressHandle : XADBlockStreamHandle
// ivar files encoding=@"NSMutableArray" offset=88
// ivar nextfile encoding=i offset=96
// ivar blocks encoding=^{?=IIi} offset=104
// ivar maxblocks encoding=i offset=112
// ivar numblocks encoding=i offset=116
// ivar nextblock encoding=i offset=120
// ivar inblock encoding=[32768C] offset=124
// ivar outblock encoding=[65536C] offset=32892
// ivar dictionarycache encoding=[32768C] offset=98428
// IMP 0x1008fbb6c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 files:(id)arg1;
// IMP 0x1008fbbe4 | v16@0:8
- (void)dealloc;
// IMP 0x1008fbc34 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008fbc88 | B28@0:8I16I20i24
- (BOOL)parseAndCheckFileHeaderWithHeaderOffset:(unsigned int)arg0 firstOffset:(unsigned int)arg1 delta:(int)arg2;
// IMP 0x1008fbe94 | i24@0:8I16I20
- (int)findFileHeaderDeltaWithHeaderOffset:(unsigned int)arg0 firstOffset:(unsigned int)arg1;
// IMP 0x1008fbfcc | B16@0:8
- (BOOL)readNextFileHeader;
// IMP 0x1008fc1a0 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
