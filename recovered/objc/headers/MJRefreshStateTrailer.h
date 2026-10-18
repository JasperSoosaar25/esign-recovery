// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85540
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshStateTrailer : MJRefreshTrailer
// ivar _stateLabel encoding=@"UILabel" offset=48
// ivar _stateTitles encoding=@"NSMutableDictionary" offset=56
// property stateTitles attributes=T@"NSMutableDictionary",&,N,V_stateTitles
// property stateLabel attributes=T@"UILabel",R,W,N
// IMP 0x10042e56c | @16@0:8
- (id)stateTitles;
// IMP 0x10042e5d0 | @16@0:8
- (id)stateLabel;
// IMP 0x10042e640 | @32@0:8@16q24
- (id)setTitle:(id)arg0 forState:(long long)arg1;
// IMP 0x10042e768 | v16@0:8
- (void)textConfiguration;
// IMP 0x10042e848 | v16@0:8
- (void)prepare;
// IMP 0x10042e890 | v16@0:8
- (void)i18nDidChange;
// IMP 0x10042e8d4 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042e9b4 | v16@0:8
- (void)placeSubviews;
// IMP 0x10042eb2c | v24@0:8@16
- (void)setStateTitles:(id)arg0;
// IMP 0x10042eb40 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
