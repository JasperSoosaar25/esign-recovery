// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85210
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshGifHeader : MJRefreshStateHeader
// ivar _gifView encoding=@"UIImageView" offset=48
// ivar _stateImages encoding=@"NSMutableDictionary" offset=56
// ivar _stateDurations encoding=@"NSMutableDictionary" offset=64
// property stateImages attributes=T@"NSMutableDictionary",&,N,V_stateImages
// property stateDurations attributes=T@"NSMutableDictionary",&,N,V_stateDurations
// property gifView attributes=T@"UIImageView",R,W,N
// IMP 0x10042aba0 | @16@0:8
- (id)gifView;
// IMP 0x10042ac04 | @16@0:8
- (id)stateImages;
// IMP 0x10042ac68 | @16@0:8
- (id)stateDurations;
// IMP 0x10042accc | @40@0:8@16d24q32
- (id)setImages:(id)arg0 duration:(double)arg1 forState:(long long)arg2;
// IMP 0x10042ae40 | @32@0:8@16q24
- (id)setImages:(id)arg0 forState:(long long)arg1;
// IMP 0x10042aeb0 | v16@0:8
- (void)prepare;
// IMP 0x10042aefc | v24@0:8d16
- (void)setPullingPercent:(double)arg0;
// IMP 0x10042b060 | v16@0:8
- (void)placeSubviews;
// IMP 0x10042b29c | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042b4dc | v24@0:8@16
- (void)setStateImages:(id)arg0;
// IMP 0x10042b4f0 | v24@0:8@16
- (void)setStateDurations:(id)arg0;
// IMP 0x10042b504 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
