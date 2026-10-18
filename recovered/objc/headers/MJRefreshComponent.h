// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c850e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshComponent : UIView
// ivar _scrollViewOriginalInset encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=8
// ivar _scrollView encoding=@"UIScrollView" offset=40
// ivar _automaticallyChangeAlpha encoding=B offset=48
// ivar _fastAnimationDuration encoding=d offset=56
// ivar _slowAnimationDuration encoding=d offset=64
// ivar _refreshingBlock encoding=@? offset=72
// ivar _refreshingTarget encoding=@ offset=80
// ivar _refreshingAction encoding=: offset=88
// ivar _beginRefreshingCompletionBlock encoding=@? offset=96
// ivar _endRefreshingAnimateCompletionBlock encoding=@? offset=104
// ivar _endRefreshingAnimationBeginAction encoding=@? offset=112
// ivar _endRefreshingCompletionBlock encoding=@? offset=120
// ivar _state encoding=q offset=128
// ivar _pullingPercent encoding=d offset=136
// ivar _pan encoding=@"UIPanGestureRecognizer" offset=144
// property pan attributes=T@"UIPanGestureRecognizer",&,N,V_pan
// property fastAnimationDuration attributes=Td,N,V_fastAnimationDuration
// property slowAnimationDuration attributes=Td,N,V_slowAnimationDuration
// property refreshingBlock attributes=T@?,C,N,V_refreshingBlock
// property refreshingTarget attributes=T@,W,N,V_refreshingTarget
// property refreshingAction attributes=T:,N,V_refreshingAction
// property beginRefreshingCompletionBlock attributes=T@?,C,N,V_beginRefreshingCompletionBlock
// property endRefreshingAnimateCompletionBlock attributes=T@?,C,N,V_endRefreshingAnimateCompletionBlock
// property endRefreshingAnimationBeginAction attributes=T@?,C,N,V_endRefreshingAnimationBeginAction
// property endRefreshingCompletionBlock attributes=T@?,C,N,V_endRefreshingCompletionBlock
// property refreshing attributes=TB,R,N,GisRefreshing
// property state attributes=Tq,N,V_state
// property scrollViewOriginalInset attributes=T{UIEdgeInsets=dddd},R,N,V_scrollViewOriginalInset
// property scrollView attributes=T@"UIScrollView",R,W,N,V_scrollView
// property pullingPercent attributes=Td,N,V_pullingPercent
// property autoChangeAlpha attributes=TB,N,GisAutoChangeAlpha
// property automaticallyChangeAlpha attributes=TB,N,GisAutomaticallyChangeAlpha,V_automaticallyChangeAlpha
// IMP 0x10042a60c | @20@0:8B16
- (id)autoChangeTransparency:(BOOL)arg0;
// IMP 0x10042a630 | @24@0:8@?16
- (id)afterBeginningAction:(id /* block */)arg0;
// IMP 0x10042a654 | @24@0:8@?16
- (id)endingAnimationBeginningAction:(id /* block */)arg0;
// IMP 0x10042a678 | @24@0:8@?16
- (id)afterEndingAction:(id /* block */)arg0;
// IMP 0x10042a69c | @24@0:8@16
- (id)linkTo:(id)arg0;
// IMP 0x1004295bc | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100429634 | v16@0:8
- (void)prepare;
// IMP 0x100429680 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004296c4 | v16@0:8
- (void)placeSubviews;
// IMP 0x1004296c8 | v24@0:8@16
- (void)willMoveToSuperview:(id)arg0;
// IMP 0x100429808 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg0;
// IMP 0x100429864 | v16@0:8
- (void)addObservers;
// IMP 0x1004299dc | v16@0:8
- (void)removeObservers;
// IMP 0x100429a8c | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100429b60 | v24@0:8@16
- (void)scrollViewContentOffsetDidChange:(id)arg0;
// IMP 0x100429b64 | v24@0:8@16
- (void)scrollViewContentSizeDidChange:(id)arg0;
// IMP 0x100429b68 | v24@0:8@16
- (void)scrollViewPanStateDidChange:(id)arg0;
// IMP 0x100429b6c | v16@0:8
- (void)i18nDidChange;
// IMP 0x100429b70 | v32@0:8@16:24
- (void)setRefreshingTarget:(id)arg0 refreshingAction:(SEL)arg1;
// IMP 0x100429b9c | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x100429ca0 | v16@0:8
- (void)beginRefreshing;
// IMP 0x100429d74 | v24@0:8@?16
- (void)beginRefreshingWithCompletionBlock:(id /* block */)arg0;
// IMP 0x100429d98 | v16@0:8
- (void)endRefreshing;
// IMP 0x100429e94 | v24@0:8@?16
- (void)endRefreshingWithCompletionBlock:(id /* block */)arg0;
// IMP 0x100429eb8 | B16@0:8
- (BOOL)isRefreshing;
// IMP 0x100429ef8 | v20@0:8B16
- (void)setAutoChangeAlpha:(BOOL)arg0;
// IMP 0x100429efc | B16@0:8
- (BOOL)isAutoChangeAlpha;
// IMP 0x100429f00 | v20@0:8B16
- (void)setAutomaticallyChangeAlpha:(BOOL)arg0;
// IMP 0x100429f54 | v24@0:8d16
- (void)setPullingPercent:(double)arg0;
// IMP 0x100429fb4 | v16@0:8
- (void)executeRefreshingCallback;
// IMP 0x10042a0cc | @16@0:8
- (id)setAnimationDisabled;
// IMP 0x10042a100 | v24@0:8@?16
- (void)setEndRefreshingAnimateCompletionBlock:(id /* block */)arg0;
// IMP 0x10042a138 | d16@0:8
- (double)fastAnimationDuration;
// IMP 0x10042a148 | v24@0:8d16
- (void)setFastAnimationDuration:(double)arg0;
// IMP 0x10042a158 | d16@0:8
- (double)slowAnimationDuration;
// IMP 0x10042a168 | v24@0:8d16
- (void)setSlowAnimationDuration:(double)arg0;
// IMP 0x10042a178 | @?16@0:8
- (id /* block */)refreshingBlock;
// IMP 0x10042a188 | v24@0:8@?16
- (void)setRefreshingBlock:(id /* block */)arg0;
// IMP 0x10042a194 | @16@0:8
- (id)refreshingTarget;
// IMP 0x10042a1b4 | v24@0:8@16
- (void)setRefreshingTarget:(id)arg0;
// IMP 0x10042a1c8 | :16@0:8
- (SEL)refreshingAction;
// IMP 0x10042a1d8 | v24@0:8:16
- (void)setRefreshingAction:(SEL)arg0;
// IMP 0x10042a1e8 | @?16@0:8
- (id /* block */)beginRefreshingCompletionBlock;
// IMP 0x10042a1f8 | v24@0:8@?16
- (void)setBeginRefreshingCompletionBlock:(id /* block */)arg0;
// IMP 0x10042a204 | @?16@0:8
- (id /* block */)endRefreshingAnimateCompletionBlock;
// IMP 0x10042a214 | @?16@0:8
- (id /* block */)endRefreshingAnimationBeginAction;
// IMP 0x10042a224 | v24@0:8@?16
- (void)setEndRefreshingAnimationBeginAction:(id /* block */)arg0;
// IMP 0x10042a230 | @?16@0:8
- (id /* block */)endRefreshingCompletionBlock;
// IMP 0x10042a240 | v24@0:8@?16
- (void)setEndRefreshingCompletionBlock:(id /* block */)arg0;
// IMP 0x10042a24c | q16@0:8
- (long long)state;
// IMP 0x10042a25c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)scrollViewOriginalInset;
// IMP 0x10042a274 | @16@0:8
- (id)scrollView;
// IMP 0x10042a294 | d16@0:8
- (double)pullingPercent;
// IMP 0x10042a2a4 | B16@0:8
- (BOOL)isAutomaticallyChangeAlpha;
// IMP 0x10042a2b4 | @16@0:8
- (id)pan;
// IMP 0x10042a2c4 | v24@0:8@16
- (void)setPan:(id)arg0;
// IMP 0x10042a2d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
