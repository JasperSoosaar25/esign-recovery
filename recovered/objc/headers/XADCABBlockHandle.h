// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9df00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCABBlockHandle : XADBlockStreamHandle
// ivar blocks encoding=@"XADCABBlockReader" offset=88
// ivar inbuffer encoding=[38912C] offset=96
// IMP 0x1008bee24 | @24@0:8@16
- (id)initWithBlockReader:(id)arg0;
// IMP 0x1008beebc | v16@0:8
- (void)dealloc;
// IMP 0x1008bef0c | v16@0:8
- (void)resetBlockStream;
// IMP 0x1008bef4c | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x1008befdc | v16@0:8
- (void)resetCABBlockHandle;
// IMP 0x1008befe0 | i40@0:8*16i24q28i36
- (int)produceCABBlockWithInputBuffer:(char *)arg0 length:(int)arg1 atOffset:(long long)arg2 length:(int)arg3;
@end
