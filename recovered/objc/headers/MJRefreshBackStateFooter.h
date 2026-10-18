// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c849d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshBackStateFooter : MJRefreshBackFooter
// ivar _stateLabel encoding=@"UILabel" offset=48
// ivar _labelLeftInset encoding=d offset=56
// ivar _stateTitles encoding=@"NSMutableDictionary" offset=64
// property stateTitles attributes=T@"NSMutableDictionary",&,N,V_stateTitles
// property labelLeftInset attributes=Td,N,V_labelLeftInset
// property stateLabel attributes=T@"UILabel",R,W,N
// IMP 0x100428f80 | @16@0:8
- (id)stateTitles;
// IMP 0x100428fe4 | @16@0:8
- (id)stateLabel;
// IMP 0x10042904c | @32@0:8@16q24
- (id)setTitle:(id)arg0 forState:(long long)arg1;
// IMP 0x100429174 | @24@0:8q16
- (id)titleForState:(long long)arg0;
// IMP 0x1004291f0 | v16@0:8
- (void)textConfiguration;
// IMP 0x100429314 | v16@0:8
- (void)prepare;
// IMP 0x100429370 | v16@0:8
- (void)i18nDidChange;
// IMP 0x1004293b4 | v16@0:8
- (void)placeSubviews;
// IMP 0x100429494 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x100429574 | d16@0:8
- (double)labelLeftInset;
// IMP 0x100429584 | v24@0:8d16
- (void)setLabelLeftInset:(double)arg0;
// IMP 0x100429594 | v24@0:8@16
- (void)setStateTitles:(id)arg0;
// IMP 0x1004295a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
