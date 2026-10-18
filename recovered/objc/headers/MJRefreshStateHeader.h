// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c854f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshStateHeader : MJRefreshHeader
// ivar _lastUpdatedTimeLabel encoding=@"UILabel" offset=48
// ivar _stateLabel encoding=@"UILabel" offset=56
// ivar _lastUpdatedTimeText encoding=@? offset=64
// ivar _labelLeftInset encoding=d offset=72
// ivar _stateTitles encoding=@"NSMutableDictionary" offset=80
// property stateTitles attributes=T@"NSMutableDictionary",&,N,V_stateTitles
// property lastUpdatedTimeText attributes=T@?,C,N,V_lastUpdatedTimeText
// property lastUpdatedTimeLabel attributes=T@"UILabel",R,W,N
// property labelLeftInset attributes=Td,N,V_labelLeftInset
// property stateLabel attributes=T@"UILabel",R,W,N
// IMP 0x10042e548 | @24@0:8@?16
- (id)modifyLastUpdatedTimeText:(id /* block */)arg0;
// IMP 0x10042d888 | @16@0:8
- (id)stateTitles;
// IMP 0x10042d8ec | @16@0:8
- (id)stateLabel;
// IMP 0x10042d954 | @16@0:8
- (id)lastUpdatedTimeLabel;
// IMP 0x10042d9bc | v24@0:8@?16
- (void)setLastUpdatedTimeText:(id /* block */)arg0;
// IMP 0x10042da1c | @32@0:8@16q24
- (id)setTitle:(id)arg0 forState:(long long)arg1;
// IMP 0x10042db44 | v24@0:8@16
- (void)setLastUpdatedTimeKey:(id)arg0;
// IMP 0x10042df34 | v16@0:8
- (void)textConfiguration;
// IMP 0x10042e02c | v16@0:8
- (void)prepare;
// IMP 0x10042e088 | v16@0:8
- (void)i18nDidChange;
// IMP 0x10042e0cc | v16@0:8
- (void)placeSubviews;
// IMP 0x10042e3b4 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042e4c4 | @?16@0:8
- (id /* block */)lastUpdatedTimeText;
// IMP 0x10042e4d4 | d16@0:8
- (double)labelLeftInset;
// IMP 0x10042e4e4 | v24@0:8d16
- (void)setLabelLeftInset:(double)arg0;
// IMP 0x10042e4f4 | v24@0:8@16
- (void)setStateTitles:(id)arg0;
// IMP 0x10042e508 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
