// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d5f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXBlendHandle : XADStreamHandle
// ivar currhandle encoding=@"XADHandle" offset=64
// ivar currinput encoding=^{CSInputBuffer=@qB*IIIII} offset=72
// IMP 0x1008ae304 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008ae354 | v16@0:8
- (void)dealloc;
// IMP 0x1008ae3a4 | v16@0:8
- (void)resetStream;
// IMP 0x1008ae3d4 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
