// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d690
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXCyanideHandle : XADBlockStreamHandle
// ivar block encoding=* offset=88
// ivar sorted encoding=* offset=96
// ivar table encoding=^I offset=104
// ivar currsize encoding=Q offset=112
// IMP 0x1008aebf0 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008aec40 | v16@0:8
- (void)dealloc;
// IMP 0x1008aec90 | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008aed34 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008af028 | v24@0:8i16i20
- (void)readTernaryCodedBlock:(int)arg0 numberOfSymbols:(int)arg1;
@end
