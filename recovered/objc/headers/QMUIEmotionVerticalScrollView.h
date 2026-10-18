// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88f80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmotionVerticalScrollView : UIScrollView
// ivar _pageView encoding=@"QMUIEmotionPageView" offset=8
// property pageView attributes=T@"QMUIEmotionPageView",&,N,V_pageView
// IMP 0x10047adbc | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10047ae98 | v120@0:8@16{CGSize=dd}24d40d48{UIEdgeInsets=dddd}56{UIEdgeInsets=dddd}88
- (void)setEmotions:(id)arg0 emotionSize:(struct CGSize)arg1 minimumEmotionHorizontalSpacing:(double)arg2 emotionVerticalSpacing:(double)arg3 emotionSelectedBackgroundExtension:(struct UIEdgeInsets)arg4 paddingInPage:(struct UIEdgeInsets)arg5;
// IMP 0x10047b03c | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)adjustEmotionsAlphaWithFloatingRect:(struct CGRect)arg0;
// IMP 0x10047b5fc | @16@0:8
- (id)pageView;
// IMP 0x10047b60c | v24@0:8@16
- (void)setPageView:(id)arg0;
// IMP 0x10047b620 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
