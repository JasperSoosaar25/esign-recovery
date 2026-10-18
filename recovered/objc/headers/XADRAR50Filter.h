// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c650
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR50Filter : NSObject
// ivar start encoding=q offset=8
// ivar length encoding=I offset=16
// IMP 0x100891b64 | @28@0:8q16I24
- (id)initWithStart:(long long)arg0 length:(unsigned int)arg1;
// IMP 0x100891bb4 | q16@0:8
- (long long)start;
// IMP 0x100891bbc | I16@0:8
- (unsigned int)length;
// IMP 0x100891bc4 | v32@0:8@16q24
- (void)runOnData:(id)arg0 fileOffset:(long long)arg1;
@end
