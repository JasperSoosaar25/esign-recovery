// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d780
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXIronHandle : XADBlockStreamHandle
// ivar block encoding=* offset=88
// ivar sorted encoding=* offset=96
// ivar table encoding=^I offset=104
// ivar currsize encoding=Q offset=112
// ivar st4transform encoding=i offset=120
// ivar fancymtf encoding=i offset=124
// ivar maxfreq1 encoding=I offset=128
// ivar maxfreq2 encoding=I offset=132
// ivar maxfreq3 encoding=I offset=136
// ivar byteshift1 encoding=I offset=140
// ivar byteshift2 encoding=I offset=144
// ivar byteshift3 encoding=I offset=148
// ivar countshift1 encoding=I offset=152
// ivar countshift2 encoding=I offset=156
// ivar countshift3 encoding=I offset=160
// IMP 0x1008b0858 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008b08a8 | v16@0:8
- (void)dealloc;
// IMP 0x1008b08f8 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008b0a14 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008b0ca0 | v20@0:8i16
- (void)decodeBlockWithLength:(int)arg0;
@end
