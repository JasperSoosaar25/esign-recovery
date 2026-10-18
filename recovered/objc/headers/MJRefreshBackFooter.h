// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c848e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshBackFooter : MJRefreshFooter
// ivar _lastRefreshCount encoding=q offset=48
// ivar _lastBottomDelta encoding=d offset=56
// property lastRefreshCount attributes=Tq,N,V_lastRefreshCount
// property lastBottomDelta attributes=Td,N,V_lastBottomDelta
// IMP 0x10042749c | v24@0:8@16
- (void)willMoveToSuperview:(id)arg0;
// IMP 0x1004274e8 | v24@0:8@16
- (void)scrollViewContentOffsetDidChange:(id)arg0;
// IMP 0x1004276a0 | v24@0:8@16
- (void)scrollViewContentSizeDidChange:(id)arg0;
// IMP 0x1004277e4 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x100427c28 | d16@0:8
- (double)heightForContentBreakView;
// IMP 0x100427cac | d16@0:8
- (double)happenOffsetY;
// IMP 0x100427cf0 | q16@0:8
- (long long)lastRefreshCount;
// IMP 0x100427d00 | v24@0:8q16
- (void)setLastRefreshCount:(long long)arg0;
// IMP 0x100427d10 | d16@0:8
- (double)lastBottomDelta;
// IMP 0x100427d20 | v24@0:8d16
- (void)setLastBottomDelta:(double)arg0;
@end
