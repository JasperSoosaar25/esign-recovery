// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96d60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTMemoryBuffer : NSObject
// ivar mBuffer encoding=@"NSMutableData" offset=8
// ivar mOffset encoding=Q offset=16
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006946a4 | @16@0:8
- (id)init;
// IMP 0x100694720 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x1006947a4 | i32@0:8*16i24i28
- (int)readAll:(char *)arg0 offset:(int)arg1 length:(int)arg2;
// IMP 0x100694870 | v32@0:8r*16I24I28
- (void)write:(char *)arg0 offset:(unsigned int)arg1 length:(unsigned int)arg2;
// IMP 0x100694888 | v16@0:8
- (void)flush;
// IMP 0x10069488c | @16@0:8
- (id)getBuffer;
// IMP 0x1006948dc | v16@0:8
- (void)dealloc;
// IMP 0x100694964 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
