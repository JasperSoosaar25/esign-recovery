// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90550
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageIOCoderFrame : NSObject
// ivar _index encoding=Q offset=8
// ivar _duration encoding=d offset=16
// property index attributes=TQ,N,V_index
// property duration attributes=Td,N,V_duration
// IMP 0x100544a28 | Q16@0:8
- (unsigned long long)index;
// IMP 0x100544a30 | v24@0:8Q16
- (void)setIndex:(unsigned long long)arg0;
// IMP 0x100544a38 | d16@0:8
- (double)duration;
// IMP 0x100544a40 | v24@0:8d16
- (void)setDuration:(double)arg0;
@end
