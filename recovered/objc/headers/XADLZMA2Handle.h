// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9cce0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZMA2Handle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar lzma encoding={?="decoder"{?="prop"{_CLzmaProps="lc"I"lp"I"pb"I"dicSize"I}"probs"^S"dic"*"buf"*"range"I"code"I"dicPos"Q"dicBufSize"Q"processedPos"I"checkDicSize"I"state"I"reps"[4I]"remainLen"I"needFlush"i"needInitState"i"numProbs"I"tempBufSize"I"tempBuf"[20C]}"packSize"I"unpackSize"I"state"i"control"C"needInitDic"i"needInitState"i"needInitProp"i} offset=72
// ivar inbuffer encoding=[16384C] offset=240
// ivar bufbytes encoding=i offset=16624
// ivar bufoffs encoding=i offset=16628
// ivar seekback encoding=B offset=16632
// IMP 0x1008a012c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 propertyData:(id)arg1;
// IMP 0x1008a0140 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 propertyData:(id)arg2;
// IMP 0x1008a0220 | v16@0:8
- (void)dealloc;
// IMP 0x1008a0278 | v20@0:8B16
- (void)setSeekBackAtEOF:(BOOL)arg0;
// IMP 0x1008a0288 | v16@0:8
- (void)resetStream;
// IMP 0x1008a02f4 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
