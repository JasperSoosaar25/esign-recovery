// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e8b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADFastLZSSHandle : XADStreamHandle
// ivar lzss encoding={LZSS="window"*"mask"Q"position"q} offset=64
// ivar flushbarrier encoding=q offset=88
// ivar bufferpos encoding=q offset=96
// ivar bufferend encoding=q offset=104
// ivar bufferpointer encoding=* offset=112
// IMP 0x1008d9cb0 | @28@0:8@16i24
- (id)initWithParentHandle:(id)arg0 windowSize:(int)arg1;
// IMP 0x1008d9cc4 | @36@0:8@16q24i32
- (id)initWithParentHandle:(id)arg0 length:(long long)arg1 windowSize:(int)arg2;
// IMP 0x1008d9d24 | @28@0:8@16i24
- (id)initWithInputBufferForHandle:(id)arg0 windowSize:(int)arg1;
// IMP 0x1008d9d38 | @36@0:8@16q24i32
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1 windowSize:(int)arg2;
// IMP 0x1008d9d98 | v16@0:8
- (void)dealloc;
// IMP 0x1008d9de8 | v16@0:8
- (void)resetStream;
// IMP 0x1008d9e20 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008d9f84 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008d9f88 | v24@0:8q16
- (void)expandFromPosition:(long long)arg0;
// IMP 0x1008d9f8c | v16@0:8
- (void)endLZSSHandle;
@end
