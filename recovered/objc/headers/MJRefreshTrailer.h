// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85590
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshTrailer : MJRefreshComponent
// ivar _ignoredScrollViewContentInsetRight encoding=d offset=48
// ivar _lastRefreshCount encoding=q offset=56
// ivar _lastRightDelta encoding=d offset=64
// property lastRefreshCount attributes=Tq,N,V_lastRefreshCount
// property lastRightDelta attributes=Td,N,V_lastRightDelta
// property ignoredScrollViewContentInsetRight attributes=Td,N,V_ignoredScrollViewContentInsetRight
// IMP 0x10042ebfc | v24@0:8@16
- (void)scrollViewContentOffsetDidChange:(id)arg0;
// IMP 0x10042edb4 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042f224 | v24@0:8@16
- (void)scrollViewContentSizeDidChange:(id)arg0;
// IMP 0x10042f2f4 | v16@0:8
- (void)placeSubviews;
// IMP 0x10042f374 | v24@0:8@16
- (void)willMoveToSuperview:(id)arg0;
// IMP 0x10042f404 | @24@0:8@16
- (id)linkTo:(id)arg0;
// IMP 0x10042f430 | d16@0:8
- (double)happenOffsetX;
// IMP 0x10042f474 | d16@0:8
- (double)widthForContentBreakView;
// IMP 0x10042f4f8 | d16@0:8
- (double)ignoredScrollViewContentInsetRight;
// IMP 0x10042f508 | v24@0:8d16
- (void)setIgnoredScrollViewContentInsetRight:(double)arg0;
// IMP 0x10042f518 | q16@0:8
- (long long)lastRefreshCount;
// IMP 0x10042f528 | v24@0:8q16
- (void)setLastRefreshCount:(long long)arg0;
// IMP 0x10042f538 | d16@0:8
- (double)lastRightDelta;
// IMP 0x10042f548 | v24@0:8d16
- (void)setLastRightDelta:(double)arg0;
// IMP 0x10042eb54 | @24@0:8@?16
+ (id)trailerWithRefreshingBlock:(id /* block */)arg0;
// IMP 0x10042eba0 | @32@0:8@16:24
+ (id)trailerWithRefreshingTarget:(id)arg0 refreshingAction:(SEL)arg1;
@end
