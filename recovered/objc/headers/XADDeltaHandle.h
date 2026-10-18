// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ecd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADDeltaHandle : XADByteStreamHandle
// ivar deltabuffer encoding=[256C] offset=268
// ivar distance encoding=i offset=524
// IMP 0x1008e0eec | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008e0f00 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008e0f10 | @28@0:8@16i24
- (id)initWithHandle:(id)arg0 deltaDistance:(int)arg1;
// IMP 0x1008e0f24 | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 deltaDistance:(int)arg2;
// IMP 0x1008e0f74 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 propertyData:(id)arg1;
// IMP 0x1008e0f88 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 propertyData:(id)arg2;
// IMP 0x1008e1004 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008e1038 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
