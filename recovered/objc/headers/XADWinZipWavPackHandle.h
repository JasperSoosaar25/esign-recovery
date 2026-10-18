// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0598
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADWinZipWavPackHandle : XADBlockStreamHandle
// ivar context encoding=^v offset=88
// ivar header encoding=B offset=96
// ivar headerlength encoding=i offset=100
// ivar buffer encoding=* offset=104
// IMP 0x100903d5c | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x100903dac | v16@0:8
- (void)dealloc;
// IMP 0x100903e10 | v16@0:8
- (void)resetBlockStream;
// IMP 0x100903f1c | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
