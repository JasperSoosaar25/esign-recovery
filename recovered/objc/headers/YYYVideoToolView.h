// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e880
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYVideoToolView : UIView
// ivar _playing encoding=B offset=8
// ivar _show encoding=B offset=9
// ivar _lock encoding=B offset=10
// ivar _tapGesture encoding=@"UITapGestureRecognizer" offset=16
// ivar _doubleGesture encoding=@"UITapGestureRecognizer" offset=24
// ivar _contentView encoding=@"UIView" offset=32
// ivar _topView encoding=@"UIView" offset=40
// ivar _backButton encoding=@"UIButton" offset=48
// ivar _titleLabel encoding=@"UILabel" offset=56
// ivar _lockButton encoding=@"UIButton" offset=64
// ivar _bottomView encoding=@"UIView" offset=72
// ivar _playButton encoding=@"UIButton" offset=80
// ivar _speedButton encoding=@"UIButton" offset=88
// ivar _rewindButton encoding=@"UIButton" offset=96
// ivar _rateButton encoding=@"UIButton" offset=104
// ivar _currentTimeLabel encoding=@"UILabel" offset=112
// ivar _totalTimeLabel encoding=@"UILabel" offset=120
// ivar _sliderView encoding=@"YYYCacheSliderView" offset=128
// ivar _loadingView encoding=@"UIActivityIndicatorView" offset=136
// ivar _topViewTopConstraint encoding=@"MASConstraint" offset=144
// ivar _bottomViewBottomConstraint encoding=@"MASConstraint" offset=152
// ivar _timeLabelWidthViewTopConstraint encoding=@"MASConstraint" offset=160
// ivar _topMaskView encoding=@"YYYGradientLayerView" offset=168
// ivar _bottomMaskView encoding=@"YYYGradientLayerView" offset=176
// ivar _playImage encoding=@"UIImage" offset=184
// ivar _pauseImage encoding=@"UIImage" offset=192
// ivar _volumeView encoding=@"MPVolumeView" offset=200
// ivar _volumeSlider encoding=@"UISlider" offset=208
// ivar _beginValue encoding=d offset=216
// ivar _defaultBrightness encoding=d offset=224
// ivar _beginPoint encoding={CGPoint="x"d"y"d} offset=232
// property topViewTopConstraint attributes=T@"MASConstraint",&,N,V_topViewTopConstraint
// property bottomViewBottomConstraint attributes=T@"MASConstraint",&,N,V_bottomViewBottomConstraint
// property timeLabelWidthViewTopConstraint attributes=T@"MASConstraint",&,N,V_timeLabelWidthViewTopConstraint
// property topMaskView attributes=T@"YYYGradientLayerView",&,N,V_topMaskView
// property bottomMaskView attributes=T@"YYYGradientLayerView",&,N,V_bottomMaskView
// property playImage attributes=T@"UIImage",&,N,V_playImage
// property pauseImage attributes=T@"UIImage",&,N,V_pauseImage
// property beginPoint attributes=T{CGPoint=dd},N,V_beginPoint
// property volumeView attributes=T@"MPVolumeView",&,N,V_volumeView
// property volumeSlider attributes=T@"UISlider",&,N,V_volumeSlider
// property beginValue attributes=Td,N,V_beginValue
// property defaultBrightness attributes=Td,N,V_defaultBrightness
// property tapGesture attributes=T@"UITapGestureRecognizer",&,N,V_tapGesture
// property doubleGesture attributes=T@"UITapGestureRecognizer",&,N,V_doubleGesture
// property contentView attributes=T@"UIView",&,N,V_contentView
// property topView attributes=T@"UIView",&,N,V_topView
// property backButton attributes=T@"UIButton",&,N,V_backButton
// property titleLabel attributes=T@"UILabel",&,N,V_titleLabel
// property lockButton attributes=T@"UIButton",&,N,V_lockButton
// property bottomView attributes=T@"UIView",&,N,V_bottomView
// property playButton attributes=T@"UIButton",&,N,V_playButton
// property speedButton attributes=T@"UIButton",&,N,V_speedButton
// property rewindButton attributes=T@"UIButton",&,N,V_rewindButton
// property rateButton attributes=T@"UIButton",&,N,V_rateButton
// property currentTimeLabel attributes=T@"UILabel",&,N,V_currentTimeLabel
// property totalTimeLabel attributes=T@"UILabel",&,N,V_totalTimeLabel
// property sliderView attributes=T@"YYYCacheSliderView",&,N,V_sliderView
// property loadingView attributes=T@"UIActivityIndicatorView",&,N,V_loadingView
// property playing attributes=TB,N,V_playing
// property show attributes=TB,N,V_show
// property lock attributes=TB,N,V_lock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1001ea1e8 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1001ea610 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
// IMP 0x1001ea70c | v24@0:8@16
- (void)gestureHandle:(id)arg0;
// IMP 0x1001eabf8 | v16@0:8
- (void)doubleGestureHandle;
// IMP 0x1001eac08 | v16@0:8
- (void)tapHandle;
// IMP 0x1001eac74 | v16@0:8
- (void)hiddenTool;
// IMP 0x1001eac8c | v16@0:8
- (void)cancelAutoHidden;
// IMP 0x1001eacfc | v16@0:8
- (void)autoHidden;
// IMP 0x1001eadac | v24@0:8B16B20
- (void)setShow:(BOOL)arg0 animation:(BOOL)arg1;
// IMP 0x1001eb16c | v16@0:8
- (void)changeTopAndBottomViewConstraint;
// IMP 0x1001eb3e8 | v20@0:8B16
- (void)setLock:(BOOL)arg0;
// IMP 0x1001eb8b0 | v20@0:8B16
- (void)setPlaying:(BOOL)arg0;
// IMP 0x1001ebb70 | @16@0:8
- (id)playImage;
// IMP 0x1001ebda0 | @16@0:8
- (id)pauseImage;
// IMP 0x1001ebff4 | v16@0:8
- (void)changeLockState;
// IMP 0x1001ec068 | v16@0:8
- (void)loadSubviews;
// IMP 0x1001ed87c | v16@0:8
- (void)safeAreaInsetsDidChange;
// IMP 0x1001ef47c | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1001f4524 | @24@0:8@16
- (id)buttonWithImageName:(id)arg0;
// IMP 0x1001f45c8 | @16@0:8
- (id)volumeSlider;
// IMP 0x1001f4c0c | @16@0:8
- (id)tapGesture;
// IMP 0x1001f4c28 | v24@0:8@16
- (void)setTapGesture:(id)arg0;
// IMP 0x1001f4ccc | @16@0:8
- (id)doubleGesture;
// IMP 0x1001f4ce8 | v24@0:8@16
- (void)setDoubleGesture:(id)arg0;
// IMP 0x1001f4d74 | @16@0:8
- (id)contentView;
// IMP 0x1001f4dac | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x1001f4e18 | @16@0:8
- (id)topView;
// IMP 0x1001f4e40 | v24@0:8@16
- (void)setTopView:(id)arg0;
// IMP 0x1001f4e84 | @16@0:8
- (id)backButton;
// IMP 0x1001f4eb8 | v24@0:8@16
- (void)setBackButton:(id)arg0;
// IMP 0x1001f4ed8 | @16@0:8
- (id)titleLabel;
// IMP 0x1001f4ee8 | v24@0:8@16
- (void)setTitleLabel:(id)arg0;
// IMP 0x1001f4f60 | @16@0:8
- (id)lockButton;
// IMP 0x1001f4f94 | v24@0:8@16
- (void)setLockButton:(id)arg0;
// IMP 0x1001f5000 | @16@0:8
- (id)bottomView;
// IMP 0x1001f5034 | v24@0:8@16
- (void)setBottomView:(id)arg0;
// IMP 0x1001f5054 | @16@0:8
- (id)playButton;
// IMP 0x1001f5088 | v24@0:8@16
- (void)setPlayButton:(id)arg0;
// IMP 0x1001f50ec | @16@0:8
- (id)speedButton;
// IMP 0x1001f5108 | v24@0:8@16
- (void)setSpeedButton:(id)arg0;
// IMP 0x1001f5174 | @16@0:8
- (id)rewindButton;
// IMP 0x1001f519c | v24@0:8@16
- (void)setRewindButton:(id)arg0;
// IMP 0x1001f51e0 | @16@0:8
- (id)rateButton;
// IMP 0x1001f5208 | v24@0:8@16
- (void)setRateButton:(id)arg0;
// IMP 0x1001f52a4 | @16@0:8
- (id)currentTimeLabel;
// IMP 0x1001f52cc | v24@0:8@16
- (void)setCurrentTimeLabel:(id)arg0;
// IMP 0x1001f533c | @16@0:8
- (id)totalTimeLabel;
// IMP 0x1001f5370 | v24@0:8@16
- (void)setTotalTimeLabel:(id)arg0;
// IMP 0x1001f53d4 | @16@0:8
- (id)sliderView;
// IMP 0x1001f53f0 | v24@0:8@16
- (void)setSliderView:(id)arg0;
// IMP 0x1001f5468 | @16@0:8
- (id)loadingView;
// IMP 0x1001f5490 | v24@0:8@16
- (void)setLoadingView:(id)arg0;
// IMP 0x1001f54f4 | B16@0:8
- (BOOL)playing;
// IMP 0x1001f551c | B16@0:8
- (BOOL)show;
// IMP 0x1001f5540 | v20@0:8B16
- (void)setShow:(BOOL)arg0;
// IMP 0x1001f5588 | B16@0:8
- (BOOL)lock;
// IMP 0x1001f55b0 | @16@0:8
- (id)topViewTopConstraint;
// IMP 0x1001f55d8 | v24@0:8@16
- (void)setTopViewTopConstraint:(id)arg0;
// IMP 0x1001f5644 | @16@0:8
- (id)bottomViewBottomConstraint;
// IMP 0x1001f566c | v24@0:8@16
- (void)setBottomViewBottomConstraint:(id)arg0;
// IMP 0x1001f56e4 | @16@0:8
- (id)timeLabelWidthViewTopConstraint;
// IMP 0x1001f570c | v24@0:8@16
- (void)setTimeLabelWidthViewTopConstraint:(id)arg0;
// IMP 0x1001f5738 | @16@0:8
- (id)topMaskView;
// IMP 0x1001f5760 | v24@0:8@16
- (void)setTopMaskView:(id)arg0;
// IMP 0x1001f578c | @16@0:8
- (id)bottomMaskView;
// IMP 0x1001f57a8 | v24@0:8@16
- (void)setBottomMaskView:(id)arg0;
// IMP 0x1001f5818 | v24@0:8@16
- (void)setPlayImage:(id)arg0;
// IMP 0x1001f585c | v24@0:8@16
- (void)setPauseImage:(id)arg0;
// IMP 0x1001f58e8 | {CGPoint=dd}16@0:8
- (struct CGPoint)beginPoint;
// IMP 0x1001f5920 | v32@0:8{CGPoint=dd}16
- (void)setBeginPoint:(struct CGPoint)arg0;
// IMP 0x1001f596c | @16@0:8
- (id)volumeView;
// IMP 0x1001f5988 | v24@0:8@16
- (void)setVolumeView:(id)arg0;
// IMP 0x1001f59fc | v24@0:8@16
- (void)setVolumeSlider:(id)arg0;
// IMP 0x1001f5a28 | d16@0:8
- (double)beginValue;
// IMP 0x1001f5a50 | v24@0:8d16
- (void)setBeginValue:(double)arg0;
// IMP 0x1001f5a60 | d16@0:8
- (double)defaultBrightness;
// IMP 0x1001f5a88 | v24@0:8d16
- (void)setDefaultBrightness:(double)arg0;
// IMP 0x1001f5ac0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001f45c0 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
