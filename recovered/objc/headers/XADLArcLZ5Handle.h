// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e2c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLArcLZ5Handle : XADLZSSHandle
// ivar flags encoding=i offset=300
// ivar flagbit encoding=i offset=304
// IMP 0x1008c5798 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008c57d0 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008c5898 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
@end
