// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c847a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshAutoFooter : MJRefreshFooter
// ivar _automaticallyRefresh encoding=B offset=48
// ivar _triggerByDrag encoding=B offset=49
// ivar _triggerAutomaticallyRefreshPercent encoding=d offset=56
// ivar _autoTriggerTimes encoding=q offset=64
// ivar _leftTriggerTimes encoding=q offset=72
// property triggerByDrag attributes=TB,N,V_triggerByDrag
// property leftTriggerTimes attributes=Tq,N,V_leftTriggerTimes
// property automaticallyRefresh attributes=TB,N,GisAutomaticallyRefresh,V_automaticallyRefresh
// property appearencePercentTriggerAutoRefresh attributes=Td,N
// property triggerAutomaticallyRefreshPercent attributes=Td,N,V_triggerAutomaticallyRefreshPercent
// property autoTriggerTimes attributes=Tq,N,V_autoTriggerTimes
// IMP 0x100426dd4 | v16@0:8
- (void)beginRefreshingWithoutValidation;
// IMP 0x1004256f0 | v24@0:8@16
- (void)willMoveToSuperview:(id)arg0;
// IMP 0x1004257f0 | v24@0:8d16
- (void)setAppearencePercentTriggerAutoRefresh:(double)arg0;
// IMP 0x1004257f4 | d16@0:8
- (double)appearencePercentTriggerAutoRefresh;
// IMP 0x1004257f8 | v16@0:8
- (void)prepare;
// IMP 0x10042585c | v24@0:8@16
- (void)scrollViewContentSizeDidChange:(id)arg0;
// IMP 0x100425950 | v24@0:8@16
- (void)scrollViewContentOffsetDidChange:(id)arg0;
// IMP 0x100425b9c | v24@0:8@16
- (void)scrollViewPanStateDidChange:(id)arg0;
// IMP 0x100425d60 | B16@0:8
- (BOOL)unlimitedTrigger;
// IMP 0x100425d7c | v16@0:8
- (void)beginRefreshing;
// IMP 0x100425de0 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x1004260d0 | v16@0:8
- (void)resetTriggerTimes;
// IMP 0x1004260f8 | v20@0:8B16
- (void)setHidden:(BOOL)arg0;
// IMP 0x100426214 | v24@0:8q16
- (void)setAutoTriggerTimes:(long long)arg0;
// IMP 0x100426224 | B16@0:8
- (BOOL)isAutomaticallyRefresh;
// IMP 0x100426234 | v20@0:8B16
- (void)setAutomaticallyRefresh:(BOOL)arg0;
// IMP 0x100426244 | d16@0:8
- (double)triggerAutomaticallyRefreshPercent;
// IMP 0x100426254 | v24@0:8d16
- (void)setTriggerAutomaticallyRefreshPercent:(double)arg0;
// IMP 0x100426264 | q16@0:8
- (long long)autoTriggerTimes;
// IMP 0x100426274 | B16@0:8
- (BOOL)triggerByDrag;
// IMP 0x100426284 | v20@0:8B16
- (void)setTriggerByDrag:(BOOL)arg0;
// IMP 0x100426294 | q16@0:8
- (long long)leftTriggerTimes;
// IMP 0x1004262a4 | v24@0:8q16
- (void)setLeftTriggerTimes:(long long)arg0;
@end
