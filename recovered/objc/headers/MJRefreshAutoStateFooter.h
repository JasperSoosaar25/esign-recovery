// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c84898
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter
// ivar _stateLabel encoding=@"UILabel" offset=48
// ivar _refreshingTitleHidden encoding=B offset=56
// ivar _labelLeftInset encoding=d offset=64
// ivar _stateTitles encoding=@"NSMutableDictionary" offset=72
// property stateTitles attributes=T@"NSMutableDictionary",&,N,V_stateTitles
// property labelLeftInset attributes=Td,N,V_labelLeftInset
// property stateLabel attributes=T@"UILabel",R,W,N
// property refreshingTitleHidden attributes=TB,N,GisRefreshingTitleHidden,V_refreshingTitleHidden
// IMP 0x100426e08 | @16@0:8
- (id)stateTitles;
// IMP 0x100426e6c | @16@0:8
- (id)stateLabel;
// IMP 0x100426ed4 | @32@0:8@16q24
- (id)setTitle:(id)arg0 forState:(long long)arg1;
// IMP 0x100426ffc | v16@0:8
- (void)stateLabelClick;
// IMP 0x100427048 | v16@0:8
- (void)textConfiguration;
// IMP 0x10042712c | v16@0:8
- (void)prepare;
// IMP 0x1004271fc | v16@0:8
- (void)i18nDidChange;
// IMP 0x100427240 | v16@0:8
- (void)placeSubviews;
// IMP 0x100427320 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x100427434 | d16@0:8
- (double)labelLeftInset;
// IMP 0x100427444 | v24@0:8d16
- (void)setLabelLeftInset:(double)arg0;
// IMP 0x100427454 | B16@0:8
- (BOOL)isRefreshingTitleHidden;
// IMP 0x100427464 | v20@0:8B16
- (void)setRefreshingTitleHidden:(BOOL)arg0;
// IMP 0x100427474 | v24@0:8@16
- (void)setStateTitles:(id)arg0;
// IMP 0x100427488 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
