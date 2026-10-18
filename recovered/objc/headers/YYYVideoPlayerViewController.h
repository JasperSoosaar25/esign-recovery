// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82220
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYVideoPlayerViewController : QMUICommonViewController
// ivar _url encoding=@"NSURL" offset=16
// ivar _playerView encoding=@"YYYVideoPlayerView" offset=24
// property url attributes=T@"NSURL",&,N,V_url
// property playerView attributes=T@"YYYVideoPlayerView",&,N,V_playerView
// IMP 0x1004059fc | v16@0:8
- (void)viewDidLoad;
// IMP 0x100405ad8 | v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg0;
// IMP 0x100405d14 | B16@0:8
- (BOOL)shouldCustomizeNavigationBarTransitionIfHideable;
// IMP 0x100405d34 | B16@0:8
- (BOOL)preferredNavigationBarHidden;
// IMP 0x100405d60 | v16@0:8
- (void)backButtonHandle;
// IMP 0x100405e20 | v16@0:8
- (void)initSubviews;
// IMP 0x100407aac | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100407f08 | v16@0:8
- (void)changeRotate;
// IMP 0x100408130 | B16@0:8
- (BOOL)prefersHomeIndicatorAutoHidden;
// IMP 0x10040815c | @16@0:8
- (id)url;
// IMP 0x100408190 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1004081f4 | @16@0:8
- (id)playerView;
// IMP 0x100408228 | v24@0:8@16
- (void)setPlayerView:(id)arg0;
// IMP 0x1004082a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004059a4 | @24@0:8@16
+ (id)playerViewControllerWithUrl:(id)arg0;
@end
