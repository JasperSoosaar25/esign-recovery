// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d220
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIScrollAnimator : NSObject
// ivar _enabled encoding=B offset=8
// ivar _scrollViewMultipleDelegatesEnabledBeforeSet encoding=B offset=9
// ivar _scrollView encoding=@"UIScrollView" offset=16
// ivar _didScrollBlock encoding=@? offset=24
// ivar _scrollViewDelegateBeforeSet encoding=@"<UIScrollViewDelegate>" offset=32
// property scrollViewMultipleDelegatesEnabledBeforeSet attributes=TB,N,V_scrollViewMultipleDelegatesEnabledBeforeSet
// property scrollViewDelegateBeforeSet attributes=T@"<UIScrollViewDelegate>",W,N,V_scrollViewDelegateBeforeSet
// property scrollView attributes=T@"UIScrollView",W,N,V_scrollView
// property didScrollBlock attributes=T@?,C,N,V_didScrollBlock
// property enabled attributes=TB,N,V_enabled
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004bea30 | @16@0:8
- (id)init;
// IMP 0x1004bea84 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x1004bebe4 | v16@0:8
- (void)updateScroll;
// IMP 0x1004bec20 | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x1004bece4 | @16@0:8
- (id)scrollView;
// IMP 0x1004becfc | @?16@0:8
- (id /* block */)didScrollBlock;
// IMP 0x1004bed04 | v24@0:8@?16
- (void)setDidScrollBlock:(id /* block */)arg0;
// IMP 0x1004bed0c | B16@0:8
- (BOOL)enabled;
// IMP 0x1004bed14 | v20@0:8B16
- (void)setEnabled:(BOOL)arg0;
// IMP 0x1004bed1c | B16@0:8
- (BOOL)scrollViewMultipleDelegatesEnabledBeforeSet;
// IMP 0x1004bed24 | v20@0:8B16
- (void)setScrollViewMultipleDelegatesEnabledBeforeSet:(BOOL)arg0;
// IMP 0x1004bed2c | @16@0:8
- (id)scrollViewDelegateBeforeSet;
// IMP 0x1004bed44 | v24@0:8@16
- (void)setScrollViewDelegateBeforeSet:(id)arg0;
// IMP 0x1004bed50 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
