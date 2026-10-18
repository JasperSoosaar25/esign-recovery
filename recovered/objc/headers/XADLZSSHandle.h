// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e900
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZSSHandle : XADByteStreamHandle
// ivar nextliteral_ptr encoding=^? offset=272
// ivar windowbuffer encoding=* offset=280
// ivar windowmask encoding=i offset=288
// ivar matchlength encoding=i offset=292
// ivar matchoffset encoding=i offset=296
// IMP 0x1008d9f98 | @28@0:8@16i24
- (id)initWithInputBufferForHandle:(id)arg0 windowSize:(int)arg1;
// IMP 0x1008d9fac | @36@0:8@16q24i32
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1 windowSize:(int)arg2;
// IMP 0x1008da040 | v16@0:8
- (void)dealloc;
// IMP 0x1008da090 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008da0f0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1008da21c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008da220 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
@end
