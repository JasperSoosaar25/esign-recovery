// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c851c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshFooter : MJRefreshComponent
// ivar _automaticallyHidden encoding=B offset=48
// ivar _ignoredScrollViewContentInsetBottom encoding=d offset=56
// property ignoredScrollViewContentInsetBottom attributes=Td,N,V_ignoredScrollViewContentInsetBottom
// property automaticallyHidden attributes=TB,N,GisAutomaticallyHidden,V_automaticallyHidden
// IMP 0x10042a8e4 | v16@0:8
- (void)prepare;
// IMP 0x10042a938 | @24@0:8@16
- (id)linkTo:(id)arg0;
// IMP 0x10042a964 | v16@0:8
- (void)endRefreshingWithNoMoreData;
// IMP 0x10042aa60 | v16@0:8
- (void)noticeNoMoreData;
// IMP 0x10042aa64 | v16@0:8
- (void)resetNoMoreData;
// IMP 0x10042ab60 | v20@0:8B16
- (void)setAutomaticallyHidden:(BOOL)arg0;
// IMP 0x10042ab70 | d16@0:8
- (double)ignoredScrollViewContentInsetBottom;
// IMP 0x10042ab80 | v24@0:8d16
- (void)setIgnoredScrollViewContentInsetBottom:(double)arg0;
// IMP 0x10042ab90 | B16@0:8
- (BOOL)isAutomaticallyHidden;
// IMP 0x10042a83c | @24@0:8@?16
+ (id)footerWithRefreshingBlock:(id /* block */)arg0;
// IMP 0x10042a888 | @32@0:8@16:24
+ (id)footerWithRefreshingTarget:(id)arg0 refreshingAction:(SEL)arg1;
@end
