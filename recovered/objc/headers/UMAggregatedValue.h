// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97030
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMAggregatedValue : NSObject
// ivar _count encoding=i offset=8
// ivar _twNum encoding=i offset=12
// ivar _valueSum encoding=q offset=16
// ivar _tsSum encoding=q offset=24
// ivar _labels encoding=@"NSMutableArray" offset=32
// property valueSum attributes=Tq,N,V_valueSum
// property tsSum attributes=Tq,N,V_tsSum
// property count attributes=Ti,N,V_count
// property twNum attributes=Ti,N,V_twNum
// property labels attributes=T@"NSMutableArray",&,N,V_labels
// IMP 0x1006a116c | @16@0:8
- (id)init;
// IMP 0x1006a11e8 | v24@0:8r*16
- (void)setLabelsWithString:(char *)arg0;
// IMP 0x1006a12c8 | v24@0:8@16
- (void)addLabels:(id)arg0;
// IMP 0x1006a1410 | q16@0:8
- (long long)valueSum;
// IMP 0x1006a1418 | v24@0:8q16
- (void)setValueSum:(long long)arg0;
// IMP 0x1006a1420 | q16@0:8
- (long long)tsSum;
// IMP 0x1006a1428 | v24@0:8q16
- (void)setTsSum:(long long)arg0;
// IMP 0x1006a1430 | i16@0:8
- (int)count;
// IMP 0x1006a1438 | v20@0:8i16
- (void)setCount:(int)arg0;
// IMP 0x1006a1440 | i16@0:8
- (int)twNum;
// IMP 0x1006a1448 | v20@0:8i16
- (void)setTwNum:(int)arg0;
// IMP 0x1006a1450 | @16@0:8
- (id)labels;
// IMP 0x1006a1458 | v24@0:8@16
- (void)setLabels:(id)arg0;
// IMP 0x1006a1464 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
