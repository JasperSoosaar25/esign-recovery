// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9cd30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZMAHandle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar lzma encoding={?="prop"{_CLzmaProps="lc"I"lp"I"pb"I"dicSize"I}"probs"^S"dic"*"buf"*"range"I"code"I"dicPos"Q"dicBufSize"Q"processedPos"I"checkDicSize"I"state"I"reps"[4I]"remainLen"I"needFlush"i"needInitState"i"numProbs"I"tempBufSize"I"tempBuf"[20C]} offset=72
// ivar inbuffer encoding=[16384C] offset=208
// ivar bufbytes encoding=i offset=16592
// ivar bufoffs encoding=i offset=16596
// IMP 0x1008a04b8 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 propertyData:(id)arg1;
// IMP 0x1008a04cc | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 propertyData:(id)arg2;
// IMP 0x1008a05a4 | v16@0:8
- (void)dealloc;
// IMP 0x1008a05fc | v16@0:8
- (void)resetStream;
// IMP 0x1008a0668 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
