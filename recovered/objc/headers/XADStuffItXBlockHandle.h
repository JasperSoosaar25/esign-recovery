// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d640
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXBlockHandle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar buffer encoding=* offset=96
// ivar currsize encoding=Q offset=104
// IMP 0x1008aea10 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008aea98 | v16@0:8
- (void)dealloc;
// IMP 0x1008aeae8 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008aeb14 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
