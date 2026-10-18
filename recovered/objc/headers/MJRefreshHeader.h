// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85260
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshHeader : MJRefreshComponent
// ivar _isCollectionViewAnimationBug encoding=B offset=48
// ivar _lastUpdatedTimeKey encoding=@"NSString" offset=56
// ivar _ignoredScrollViewContentInsetTop encoding=d offset=64
// ivar _insetTDelta encoding=d offset=72
// property insetTDelta attributes=Td,N,V_insetTDelta
// property lastUpdatedTimeKey attributes=T@"NSString",C,N,V_lastUpdatedTimeKey
// property lastUpdatedTime attributes=T@"NSDate",R,N
// property ignoredScrollViewContentInsetTop attributes=Td,N,V_ignoredScrollViewContentInsetTop
// property isCollectionViewAnimationBug attributes=TB,N,V_isCollectionViewAnimationBug
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10042b5ec | v16@0:8
- (void)prepare;
// IMP 0x10042b654 | v16@0:8
- (void)placeSubviews;
// IMP 0x10042b6bc | v16@0:8
- (void)resetInset;
// IMP 0x10042b7d8 | v24@0:8@16
- (void)scrollViewContentOffsetDidChange:(id)arg0;
// IMP 0x10042b990 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x10042ba1c | v16@0:8
- (void)headerEndingAction;
// IMP 0x10042bff8 | v16@0:8
- (void)headerRefreshingAction;
// IMP 0x10042c438 | @24@0:8@16
- (id)linkTo:(id)arg0;
// IMP 0x10042c464 | v28@0:8@16B24
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
// IMP 0x10042c748 | @16@0:8
- (id)lastUpdatedTime;
// IMP 0x10042c7c4 | v24@0:8d16
- (void)setIgnoredScrollViewContentInsetTop:(double)arg0;
// IMP 0x10042c800 | @16@0:8
- (id)lastUpdatedTimeKey;
// IMP 0x10042c810 | v24@0:8@16
- (void)setLastUpdatedTimeKey:(id)arg0;
// IMP 0x10042c81c | d16@0:8
- (double)ignoredScrollViewContentInsetTop;
// IMP 0x10042c82c | B16@0:8
- (BOOL)isCollectionViewAnimationBug;
// IMP 0x10042c83c | v20@0:8B16
- (void)setIsCollectionViewAnimationBug:(BOOL)arg0;
// IMP 0x10042c84c | d16@0:8
- (double)insetTDelta;
// IMP 0x10042c85c | v24@0:8d16
- (void)setInsetTDelta:(double)arg0;
// IMP 0x10042c86c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10042b544 | @24@0:8@?16
+ (id)headerWithRefreshingBlock:(id /* block */)arg0;
// IMP 0x10042b590 | @32@0:8@16:24
+ (id)headerWithRefreshingTarget:(id)arg0 refreshingAction:(SEL)arg1;
@end
