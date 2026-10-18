// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f208
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDAnimatedImagePlayer : NSObject
// ivar _lock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _runLoopMode encoding=@"NSString" offset=16
// ivar _bufferMiss encoding=B offset=24
// ivar _needsDisplayWhenImageBecomesAvailable encoding=B offset=25
// ivar _shouldReverse encoding=B offset=26
// ivar _currentFrame encoding=@"UIImage" offset=32
// ivar _currentFrameIndex encoding=Q offset=40
// ivar _currentLoopCount encoding=Q offset=48
// ivar _totalFrameCount encoding=Q offset=56
// ivar _totalLoopCount encoding=Q offset=64
// ivar _playbackRate encoding=d offset=72
// ivar _playbackMode encoding=Q offset=80
// ivar _maxBufferSize encoding=Q offset=88
// ivar _animationFrameHandler encoding=@? offset=96
// ivar _animationLoopHandler encoding=@? offset=104
// ivar _animatedProvider encoding=@"<SDAnimatedImageProvider>" offset=112
// ivar _frameBuffer encoding=@"NSMutableDictionary" offset=120
// ivar _currentTime encoding=d offset=128
// ivar _maxBufferCount encoding=Q offset=136
// ivar _fetchQueue encoding=@"NSOperationQueue" offset=144
// ivar _displayLink encoding=@"SDDisplayLink" offset=152
// property currentFrame attributes=T@"UIImage",&,N,V_currentFrame
// property currentFrameIndex attributes=TQ,N,V_currentFrameIndex
// property currentLoopCount attributes=TQ,N,V_currentLoopCount
// property animatedProvider attributes=T@"<SDAnimatedImageProvider>",&,N,V_animatedProvider
// property frameBuffer attributes=T@"NSMutableDictionary",&,N,V_frameBuffer
// property currentTime attributes=Td,N,V_currentTime
// property bufferMiss attributes=TB,N,V_bufferMiss
// property needsDisplayWhenImageBecomesAvailable attributes=TB,N,V_needsDisplayWhenImageBecomesAvailable
// property shouldReverse attributes=TB,N,V_shouldReverse
// property maxBufferCount attributes=TQ,N,V_maxBufferCount
// property fetchQueue attributes=T@"NSOperationQueue",&,N,V_fetchQueue
// property displayLink attributes=T@"SDDisplayLink",&,N,V_displayLink
// property totalFrameCount attributes=TQ,N,V_totalFrameCount
// property totalLoopCount attributes=TQ,N,V_totalLoopCount
// property playbackRate attributes=Td,N,V_playbackRate
// property playbackMode attributes=TQ,N,V_playbackMode
// property maxBufferSize attributes=TQ,N,V_maxBufferSize
// property runLoopMode attributes=T@"NSString",C,N
// property animationFrameHandler attributes=T@?,C,N,V_animationFrameHandler
// property animationLoopHandler attributes=T@?,C,N,V_animationLoopHandler
// property isPlaying attributes=TB,R,N
// IMP 0x100535568 | @24@0:8@16
- (id)initWithProvider:(id)arg0;
// IMP 0x1005356c4 | v16@0:8
- (void)dealloc;
// IMP 0x10053573c | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x100535950 | @16@0:8
- (id)fetchQueue;
// IMP 0x1005359a4 | @16@0:8
- (id)frameBuffer;
// IMP 0x1005359f0 | @16@0:8
- (id)displayLink;
// IMP 0x100535aa8 | v24@0:8@16
- (void)setRunLoopMode:(id)arg0;
// IMP 0x100535b88 | @16@0:8
- (id)runLoopMode;
// IMP 0x100535bd4 | v16@0:8
- (void)setupCurrentFrame;
// IMP 0x100535dd0 | v16@0:8
- (void)resetCurrentFrameStatus;
// IMP 0x100535e04 | v16@0:8
- (void)clearFrameBuffer;
// IMP 0x100535e38 | v16@0:8
- (void)startPlaying;
// IMP 0x100535e7c | v16@0:8
- (void)stopPlaying;
// IMP 0x100535eac | v16@0:8
- (void)pausePlaying;
// IMP 0x100535ed4 | B16@0:8
- (BOOL)isPlaying;
// IMP 0x100535edc | v32@0:8Q16Q24
- (void)seekToFrameAtIndex:(unsigned long long)arg0 loopCount:(unsigned long long)arg1;
// IMP 0x100535f84 | v24@0:8@16
- (void)displayDidRefresh:(id)arg0;
// IMP 0x100536648 | v16@0:8
- (void)handleFrameChange;
// IMP 0x1005366e8 | v16@0:8
- (void)handleLoopChange;
// IMP 0x100536758 | v16@0:8
- (void)calculateMaxBufferCount;
// IMP 0x1005368b8 | @16@0:8
- (id)currentFrame;
// IMP 0x1005368c0 | v24@0:8@16
- (void)setCurrentFrame:(id)arg0;
// IMP 0x1005368cc | Q16@0:8
- (unsigned long long)currentFrameIndex;
// IMP 0x1005368d4 | v24@0:8Q16
- (void)setCurrentFrameIndex:(unsigned long long)arg0;
// IMP 0x1005368dc | Q16@0:8
- (unsigned long long)currentLoopCount;
// IMP 0x1005368e4 | v24@0:8Q16
- (void)setCurrentLoopCount:(unsigned long long)arg0;
// IMP 0x1005368ec | Q16@0:8
- (unsigned long long)totalFrameCount;
// IMP 0x1005368f4 | v24@0:8Q16
- (void)setTotalFrameCount:(unsigned long long)arg0;
// IMP 0x1005368fc | Q16@0:8
- (unsigned long long)totalLoopCount;
// IMP 0x100536904 | v24@0:8Q16
- (void)setTotalLoopCount:(unsigned long long)arg0;
// IMP 0x10053690c | d16@0:8
- (double)playbackRate;
// IMP 0x100536914 | v24@0:8d16
- (void)setPlaybackRate:(double)arg0;
// IMP 0x10053691c | Q16@0:8
- (unsigned long long)playbackMode;
// IMP 0x100536924 | v24@0:8Q16
- (void)setPlaybackMode:(unsigned long long)arg0;
// IMP 0x10053692c | Q16@0:8
- (unsigned long long)maxBufferSize;
// IMP 0x100536934 | v24@0:8Q16
- (void)setMaxBufferSize:(unsigned long long)arg0;
// IMP 0x10053693c | @?16@0:8
- (id /* block */)animationFrameHandler;
// IMP 0x100536944 | v24@0:8@?16
- (void)setAnimationFrameHandler:(id /* block */)arg0;
// IMP 0x10053694c | @?16@0:8
- (id /* block */)animationLoopHandler;
// IMP 0x100536954 | v24@0:8@?16
- (void)setAnimationLoopHandler:(id /* block */)arg0;
// IMP 0x10053695c | @16@0:8
- (id)animatedProvider;
// IMP 0x100536964 | v24@0:8@16
- (void)setAnimatedProvider:(id)arg0;
// IMP 0x100536970 | v24@0:8@16
- (void)setFrameBuffer:(id)arg0;
// IMP 0x10053697c | d16@0:8
- (double)currentTime;
// IMP 0x100536984 | v24@0:8d16
- (void)setCurrentTime:(double)arg0;
// IMP 0x10053698c | B16@0:8
- (BOOL)bufferMiss;
// IMP 0x100536994 | v20@0:8B16
- (void)setBufferMiss:(BOOL)arg0;
// IMP 0x10053699c | B16@0:8
- (BOOL)needsDisplayWhenImageBecomesAvailable;
// IMP 0x1005369a4 | v20@0:8B16
- (void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)arg0;
// IMP 0x1005369ac | B16@0:8
- (BOOL)shouldReverse;
// IMP 0x1005369b4 | v20@0:8B16
- (void)setShouldReverse:(BOOL)arg0;
// IMP 0x1005369bc | Q16@0:8
- (unsigned long long)maxBufferCount;
// IMP 0x1005369c4 | v24@0:8Q16
- (void)setMaxBufferCount:(unsigned long long)arg0;
// IMP 0x1005369cc | v24@0:8@16
- (void)setFetchQueue:(id)arg0;
// IMP 0x1005369d8 | v24@0:8@16
- (void)setDisplayLink:(id)arg0;
// IMP 0x1005369e4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100535678 | @24@0:8@16
+ (id)playerWithProvider:(id)arg0;
// IMP 0x100536854 | @16@0:8
+ (id)defaultRunLoopMode;
@end
