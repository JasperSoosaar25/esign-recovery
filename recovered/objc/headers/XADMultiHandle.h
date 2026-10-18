// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9fa68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMultiHandle : XADSegmentedHandle
// ivar handles encoding=@"NSArray" offset=72
// IMP 0x1008e7c48 | @24@0:8@16
- (id)initWithHandles:(id)arg0;
// IMP 0x1008e7cb0 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e7dd0 | v16@0:8
- (void)dealloc;
// IMP 0x1008e7e20 | @16@0:8
- (id)handles;
// IMP 0x1008e7e30 | q16@0:8
- (long long)numberOfSegments;
// IMP 0x1008e7e48 | q24@0:8q16
- (long long)segmentSizeAtIndex:(long long)arg0;
// IMP 0x1008e7e78 | @24@0:8q16
- (id)handleAtIndex:(long long)arg0;
// IMP 0x1008e7b24 | @24@0:8@16
+ (id)handleWithHandleArray:(id)arg0;
// IMP 0x1008e7ba8 | @24@0:8@16
+ (id)handleWithHandles:(id)arg0;
@end
