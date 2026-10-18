// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7bf88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYVideoPlayer : NSObject
// ivar _buffering encoding=B offset=8
// ivar _pauseByUser encoding=B offset=9
// ivar _rate encoding=f offset=12
// ivar _player encoding=@"AVPlayer" offset=16
// ivar _playerItem encoding=@"AVPlayerItem" offset=24
// ivar _playerLayer encoding=@"AVPlayerLayer" offset=32
// ivar _state encoding=q offset=40
// ivar _duration encoding=d offset=48
// ivar _current encoding=d offset=56
// ivar _loadedProgress encoding=d offset=64
// ivar _url encoding=@"NSURL" offset=72
// ivar _resouerLoader encoding=@"VIResourceLoaderManager" offset=80
// ivar _playbackTimeObserver encoding=@ offset=88
// property url attributes=T@"NSURL",&,N,V_url
// property resouerLoader attributes=T@"VIResourceLoaderManager",&,N,V_resouerLoader
// property state attributes=Tq,N,V_state
// property loadedProgress attributes=Td,N,V_loadedProgress
// property duration attributes=Td,N,V_duration
// property current attributes=Td,N,V_current
// property playbackTimeObserver attributes=T@,&,N,V_playbackTimeObserver
// property buffering attributes=TB,N,GisBuffering,V_buffering
// property pauseByUser attributes=TB,N,GisPauseByUser,V_pauseByUser
// property player attributes=T@"AVPlayer",&,N,V_player
// property playerItem attributes=T@"AVPlayerItem",&,N,V_playerItem
// property playerLayer attributes=T@"AVPlayerLayer",&,N,V_playerLayer
// property rate attributes=Tf,N,V_rate
// IMP 0x100065164 | v16@0:8
- (void)dealloc;
// IMP 0x100065aec | @24@0:8@16
- (id)initWithUrlString:(id)arg0;
// IMP 0x100065e88 | @24@0:8@16
- (id)initWithUrl:(id)arg0;
// IMP 0x1000662d4 | @16@0:8
- (id)init;
// IMP 0x10006642c | v16@0:8
- (void)resume;
// IMP 0x1000664fc | v16@0:8
- (void)play;
// IMP 0x1000665a4 | v16@0:8
- (void)pause;
// IMP 0x100066778 | v16@0:8
- (void)stop;
// IMP 0x1000669f8 | v32@0:8d16@?24
- (void)seekToTime:(double)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1000671ec | v24@0:8d16
- (void)seekToTime:(double)arg0;
// IMP 0x100067264 | v16@0:8
- (void)playerItemAddKVO;
// IMP 0x100067ac0 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1000685d0 | v24@0:8@16
- (void)monitoringPlayback:(id)arg0;
// IMP 0x100068cd8 | v24@0:8@16
- (void)calculateDownloadProgress:(id)arg0;
// IMP 0x100068fe0 | v16@0:8
- (void)bufferingSomeSecond;
// IMP 0x100069438 | v16@0:8
- (void)addNotification;
// IMP 0x100069588 | v16@0:8
- (void)appDidEnterBackground;
// IMP 0x100069658 | v16@0:8
- (void)appDidEnterPlayGround;
// IMP 0x100069718 | v24@0:8@16
- (void)playerItemDidPlayToEnd:(id)arg0;
// IMP 0x10006977c | v20@0:8f16
- (void)setRate:(float)arg0;
// IMP 0x100069888 | v24@0:8q16
- (void)setState:(long long)arg0;
// IMP 0x100069a4c | v24@0:8d16
- (void)setCurrent:(double)arg0;
// IMP 0x100069c30 | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x10006a304 | @16@0:8
- (id)player;
// IMP 0x10006a330 | v24@0:8@16
- (void)setPlayer:(id)arg0;
// IMP 0x10006a394 | @16@0:8
- (id)playerItem;
// IMP 0x10006a3b4 | v24@0:8@16
- (void)setPlayerItem:(id)arg0;
// IMP 0x10006a410 | @16@0:8
- (id)playerLayer;
// IMP 0x10006a43c | v24@0:8@16
- (void)setPlayerLayer:(id)arg0;
// IMP 0x10006a4a0 | q16@0:8
- (long long)state;
// IMP 0x10006a4b4 | d16@0:8
- (double)duration;
// IMP 0x10006a4e0 | d16@0:8
- (double)current;
// IMP 0x10006a500 | d16@0:8
- (double)loadedProgress;
// IMP 0x10006a514 | v24@0:8d16
- (void)setLoadedProgress:(double)arg0;
// IMP 0x10006a534 | f16@0:8
- (float)rate;
// IMP 0x10006a554 | @16@0:8
- (id)url;
// IMP 0x10006a574 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x10006a608 | @16@0:8
- (id)resouerLoader;
// IMP 0x10006a628 | v24@0:8@16
- (void)setResouerLoader:(id)arg0;
// IMP 0x10006a68c | @16@0:8
- (id)playbackTimeObserver;
// IMP 0x10006a6ac | v24@0:8@16
- (void)setPlaybackTimeObserver:(id)arg0;
// IMP 0x10006a708 | B16@0:8
- (BOOL)isBuffering;
// IMP 0x10006a728 | v20@0:8B16
- (void)setBuffering:(BOOL)arg0;
// IMP 0x10006a764 | B16@0:8
- (BOOL)isPauseByUser;
// IMP 0x10006a778 | v20@0:8B16
- (void)setPauseByUser:(BOOL)arg0;
// IMP 0x10006a78c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000659b8 | @24@0:8@16
+ (id)playerWithUrlString:(id)arg0;
// IMP 0x100065a84 | @24@0:8@16
+ (id)playerWithUrl:(id)arg0;
// IMP 0x100069e98 | B24@0:8@16
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg0;
@end
