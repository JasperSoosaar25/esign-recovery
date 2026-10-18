// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a188
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYOffsetNode : NSObject
// ivar _shouldSwap encoding=B offset=8
// ivar _offset encoding=q offset=16
// property offset attributes=Tq,N,V_offset
// property shouldSwap attributes=TB,N,V_shouldSwap
// IMP 0x100762cc8 | @16@0:8
- (id)init;
// IMP 0x100762dec | q16@0:8
- (long long)offset;
// IMP 0x100762e0c | v24@0:8q16
- (void)setOffset:(long long)arg0;
// IMP 0x100762e38 | B16@0:8
- (BOOL)shouldSwap;
// IMP 0x100762e6c | v20@0:8B16
- (void)setShouldSwap:(BOOL)arg0;
@end
