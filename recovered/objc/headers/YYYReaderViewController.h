// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e9c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYReaderViewController : QMUICommonViewController
// ivar _showTool encoding=B offset=16
// ivar _filePath encoding=@"NSString" offset=24
// ivar _pageViewController encoding=@"UIPageViewController" offset=32
// ivar _book encoding=@"YYYBookModel" offset=40
// ivar _topView encoding=@"YYYReaderTopView" offset=48
// ivar _bottomView encoding=@"YYYReaderBottomView" offset=56
// ivar _brightnessView encoding=@"UIView" offset=64
// ivar _catalogView encoding=@"YYYCatalogView" offset=72
// ivar _tap encoding=@"UITapGestureRecognizer" offset=80
// ivar _currentChapter encoding=@"YYYChapterModel" offset=88
// ivar _contentSize encoding={CGSize="width"d"height"d} offset=96
// property pageViewController attributes=T@"UIPageViewController",&,N,V_pageViewController
// property contentSize attributes=T{CGSize=dd},N,V_contentSize
// property book attributes=T@"YYYBookModel",&,N,V_book
// property showTool attributes=TB,N,V_showTool
// property topView attributes=T@"YYYReaderTopView",&,N,V_topView
// property bottomView attributes=T@"YYYReaderBottomView",&,N,V_bottomView
// property brightnessView attributes=T@"UIView",&,N,V_brightnessView
// property catalogView attributes=T@"YYYCatalogView",&,N,V_catalogView
// property tap attributes=T@"UITapGestureRecognizer",&,N,V_tap
// property currentChapter attributes=T@"YYYChapterModel",R,N,V_currentChapter
// property currentDivisionModel attributes=T@"YYYBookReaderDivision",R,N
// property filePath attributes=T@"NSString",&,N,V_filePath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100212ffc | v16@0:8
- (void)viewDidLoad;
// IMP 0x100214340 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
// IMP 0x1002145d4 | v16@0:8
- (void)styleChange;
// IMP 0x100214654 | v16@0:8
- (void)fontChange;
// IMP 0x100214c98 | v24@0:8@16
- (void)scrollToChapter:(id)arg0;
// IMP 0x100214e98 | v24@0:8@16
- (void)tap:(id)arg0;
// IMP 0x10021510c | v16@0:8
- (void)scrollToNextPage;
// IMP 0x100215424 | v16@0:8
- (void)showCatalog;
// IMP 0x100215760 | v16@0:8
- (void)hiddenCatalog;
// IMP 0x10021578c | v16@0:8
- (void)popViewController;
// IMP 0x100215824 | v16@0:8
- (void)saveIfNeed;
// IMP 0x1002158ac | v16@0:8
- (void)saveCurrentChapter;
// IMP 0x100215c44 | @32@0:8@16@24
- (id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1;
// IMP 0x100215e20 | @32@0:8@16@24
- (id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1;
// IMP 0x10021603c | v32@0:8@16@24
- (void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1;
// IMP 0x100216100 | v40@0:8@16B24@28B36
- (void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3;
// IMP 0x100216198 | @36@0:8q16q24B32
- (id)viewControllerAtChapterIndex:(long long)arg0 pageIndex:(long long)arg1 snapshop:(BOOL)arg2;
// IMP 0x1002167dc | v16@0:8
- (void)initSubviews;
// IMP 0x1002177ec | v16@0:8
- (void)dealloc;
// IMP 0x100217a30 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100217f50 | B16@0:8
- (BOOL)shouldCustomizeNavigationBarTransitionIfHideable;
// IMP 0x100217f7c | B16@0:8
- (BOOL)preferredNavigationBarHidden;
// IMP 0x100217f90 | q16@0:8
- (long long)preferredStatusBarStyle;
// IMP 0x100218028 | B16@0:8
- (BOOL)prefersStatusBarHidden;
// IMP 0x100218088 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x100218280 | @16@0:8
- (id)catalogView;
// IMP 0x100218914 | @16@0:8
- (id)currentDivisionModel;
// IMP 0x1002189c4 | v20@0:8B16
- (void)setShowTool:(BOOL)arg0;
// IMP 0x100218d7c | @16@0:8
- (id)filePath;
// IMP 0x100218d8c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x100218dfc | @16@0:8
- (id)pageViewController;
// IMP 0x100218e24 | v24@0:8@16
- (void)setPageViewController:(id)arg0;
// IMP 0x100218ebc | {CGSize=dd}16@0:8
- (struct CGSize)contentSize;
// IMP 0x100218ef4 | v32@0:8{CGSize=dd}16
- (void)setContentSize:(struct CGSize)arg0;
// IMP 0x100218f48 | @16@0:8
- (id)book;
// IMP 0x100218f80 | v24@0:8@16
- (void)setBook:(id)arg0;
// IMP 0x100218fb8 | B16@0:8
- (BOOL)showTool;
// IMP 0x100218fdc | @16@0:8
- (id)topView;
// IMP 0x100219010 | v24@0:8@16
- (void)setTopView:(id)arg0;
// IMP 0x10021907c | @16@0:8
- (id)bottomView;
// IMP 0x1002190a4 | v24@0:8@16
- (void)setBottomView:(id)arg0;
// IMP 0x1002190b8 | @16@0:8
- (id)brightnessView;
// IMP 0x1002190e0 | v24@0:8@16
- (void)setBrightnessView:(id)arg0;
// IMP 0x100219178 | v24@0:8@16
- (void)setCatalogView:(id)arg0;
// IMP 0x1002191a4 | @16@0:8
- (id)tap;
// IMP 0x1002191cc | v24@0:8@16
- (void)setTap:(id)arg0;
// IMP 0x1002191ec | @16@0:8
- (id)currentChapter;
// IMP 0x100219220 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
