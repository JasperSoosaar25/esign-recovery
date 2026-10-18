// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81710
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYVideoPlayerView : UIView
// ivar _toolView encoding=@"YYYVideoToolView" offset=8
// ivar _player encoding=@"YYYVideoPlayer" offset=16
// ivar _current encoding=d offset=24
// ivar _playBackgroundView encoding=@"UIView" offset=32
// ivar _rateSelectMenuView encoding=@"QMUIPopupMenuView" offset=40
// ivar _playerUrl encoding=@"NSURL" offset=48
// ivar _seekTime encoding=d offset=56
// property player attributes=T@"YYYVideoPlayer",&,N,V_player
// property playBackgroundView attributes=T@"UIView",&,N,V_playBackgroundView
// property rateSelectMenuView attributes=T@"QMUIPopupMenuView",&,N,V_rateSelectMenuView
// property playerUrl attributes=T@"NSURL",&,N,V_playerUrl
// property seekTime attributes=Td,N,V_seekTime
// property toolView attributes=T@"YYYVideoToolView",&,N,V_toolView
// property current attributes=Td,N,V_current
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1003a05b8 | v16@0:8
- (void)dealloc;
// IMP 0x1003a0664 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1003a07c8 | v16@0:8
- (void)resetStatus;
// IMP 0x1003a0998 | v16@0:8
- (void)stop;
// IMP 0x1003a09f4 | v24@0:8@16
- (void)playUrl:(id)arg0;
// IMP 0x1003a0f6c | v32@0:8@16d24
- (void)playUrl:(id)arg0 seekToTime:(double)arg1;
// IMP 0x1003a1004 | v16@0:8
- (void)fullButtonHandle;
// IMP 0x1003a102c | v16@0:8
- (void)replayButtonHandle;
// IMP 0x1003a1048 | v16@0:8
- (void)resumeOrPause;
// IMP 0x1003a1200 | v24@0:8@16
- (void)playerItemDidPlayToEnd:(id)arg0;
// IMP 0x1003a127c | v24@0:8@16
- (void)addObserverWithPlayer:(id)arg0;
// IMP 0x1003a182c | v24@0:8@16
- (void)removeObserverWithPlayer:(id)arg0;
// IMP 0x1003a1bfc | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1003a28cc | v16@0:8
- (void)readyToPlay;
// IMP 0x1003a2b88 | v24@0:8d16
- (void)updateDuration:(double)arg0;
// IMP 0x1003a2c80 | v24@0:8d16
- (void)updateCurrent:(double)arg0;
// IMP 0x1003a2d7c | v24@0:8d16
- (void)updateLoadedProgress:(double)arg0;
// IMP 0x1003a2e54 | v24@0:8@16
- (void)playSliderChangeEnd:(id)arg0;
// IMP 0x1003a3158 | v24@0:8@16
- (void)playSliderChange:(id)arg0;
// IMP 0x1003a33fc | v16@0:8
- (void)speedNextHandle;
// IMP 0x1003a345c | v16@0:8
- (void)rewindHandle;
// IMP 0x1003a3534 | v16@0:8
- (void)rateButtonHandle;
// IMP 0x1003a35a8 | v16@0:8
- (void)loadSubviews;
// IMP 0x1003a39c8 | v16@0:8
- (void)doubleTapHandle;
// IMP 0x1003a39d8 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1003a3c18 | @24@0:8d16
- (id)timeStringWithTime:(double)arg0;
// IMP 0x1003a40f8 | v24@0:8d16
- (void)changeRate:(double)arg0;
// IMP 0x1003a472c | @16@0:8
- (id)rateSelectMenuView;
// IMP 0x1003a5454 | @16@0:8
- (id)toolView;
// IMP 0x1003a5488 | v24@0:8@16
- (void)setToolView:(id)arg0;
// IMP 0x1003a5524 | @16@0:8
- (id)player;
// IMP 0x1003a554c | v24@0:8@16
- (void)setPlayer:(id)arg0;
// IMP 0x1003a55f0 | d16@0:8
- (double)current;
// IMP 0x1003a5618 | v24@0:8d16
- (void)setCurrent:(double)arg0;
// IMP 0x1003a5650 | @16@0:8
- (id)playBackgroundView;
// IMP 0x1003a566c | v24@0:8@16
- (void)setPlayBackgroundView:(id)arg0;
// IMP 0x1003a56e8 | v24@0:8@16
- (void)setRateSelectMenuView:(id)arg0;
// IMP 0x1003a5758 | @16@0:8
- (id)playerUrl;
// IMP 0x1003a5774 | v24@0:8@16
- (void)setPlayerUrl:(id)arg0;
// IMP 0x1003a5804 | d16@0:8
- (double)seekTime;
// IMP 0x1003a5838 | v24@0:8d16
- (void)setSeekTime:(double)arg0;
// IMP 0x1003a587c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
