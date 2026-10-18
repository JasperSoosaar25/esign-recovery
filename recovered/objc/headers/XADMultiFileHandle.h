// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c150
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMultiFileHandle : XADSegmentedHandle
// ivar paths encoding=@"NSArray" offset=72
// IMP 0x10088d0f0 | @24@0:8@16
- (id)initWithPaths:(id)arg0;
// IMP 0x10088d158 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x10088d1c0 | v16@0:8
- (void)dealloc;
// IMP 0x10088d210 | @16@0:8
- (id)paths;
// IMP 0x10088d220 | q16@0:8
- (long long)numberOfSegments;
// IMP 0x10088d238 | q24@0:8q16
- (long long)segmentSizeAtIndex:(long long)arg0;
// IMP 0x10088d2a0 | @24@0:8q16
- (id)handleAtIndex:(long long)arg0;
// IMP 0x10088d2dc | v16@0:8
- (void)_raiseError;
// IMP 0x10088cfb0 | @24@0:8@16
+ (id)handleWithPathArray:(id)arg0;
// IMP 0x10088d050 | @24@0:8@16
+ (id)handleWithPaths:(id)arg0;
@end
