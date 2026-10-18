// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0368
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADARCCrushHandle : XADByteStreamHandle
// ivar lzw encoding=^{LZW=iiiii*i[0{LZWTreeNode=Ci}]} offset=272
// ivar symbolsize encoding=i offset=280
// ivar nextsizebump encoding=i offset=284
// ivar useliteralbit encoding=B offset=288
// ivar numrecentstrings encoding=i offset=292
// ivar ringindex encoding=i offset=296
// ivar stringring encoding=[500B] offset=300
// ivar usageindex encoding=i offset=800
// ivar currbyte encoding=i offset=804
// ivar buffer encoding=[8192C] offset=808
// ivar usage encoding=[8192C] offset=9000
// IMP 0x1008ffc70 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008ffc80 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008ffce0 | v16@0:8
- (void)dealloc;
// IMP 0x1008ffd30 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008ffe10 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
