// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c84938
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshBackGifFooter : MJRefreshBackStateFooter
// ivar _gifView encoding=@"UIImageView" offset=48
// ivar _stateImages encoding=@"NSMutableDictionary" offset=56
// ivar _stateDurations encoding=@"NSMutableDictionary" offset=64
// property stateImages attributes=T@"NSMutableDictionary",&,N,V_stateImages
// property stateDurations attributes=T@"NSMutableDictionary",&,N,V_stateDurations
// property gifView attributes=T@"UIImageView",R,W,N
// IMP 0x100427d30 | @16@0:8
- (id)gifView;
// IMP 0x100427d94 | @16@0:8
- (id)stateImages;
// IMP 0x100427df8 | @16@0:8
- (id)stateDurations;
// IMP 0x100427e5c | @40@0:8@16d24q32
- (id)setImages:(id)arg0 duration:(double)arg1 forState:(long long)arg2;
// IMP 0x100427fd0 | @32@0:8@16q24
- (id)setImages:(id)arg0 forState:(long long)arg1;
// IMP 0x100428040 | v16@0:8
- (void)prepare;
// IMP 0x10042808c | v24@0:8d16
- (void)setPullingPercent:(double)arg0;
// IMP 0x1004281f0 | v16@0:8
- (void)placeSubviews;
// IMP 0x100428390 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042861c | v24@0:8@16
- (void)setStateImages:(id)arg0;
// IMP 0x100428630 | v24@0:8@16
- (void)setStateDurations:(id)arg0;
// IMP 0x100428644 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
