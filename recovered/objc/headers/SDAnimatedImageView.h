// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f830
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDAnimatedImageView : UIImageView
// ivar _initFinished encoding=B offset=8
// ivar _runLoopMode encoding=@"NSString" offset=16
// ivar _maxBufferSize encoding=Q offset=24
// ivar _playbackRate encoding=d offset=32
// ivar _playbackMode encoding=Q offset=40
// ivar _shouldCustomLoopCount encoding=B offset=48
// ivar _shouldIncrementalLoad encoding=B offset=49
// ivar _clearBufferWhenStopped encoding=B offset=50
// ivar _resetFrameIndexWhenStopped encoding=B offset=51
// ivar _autoPlayAnimatedImage encoding=B offset=52
// ivar _shouldAnimate encoding=B offset=53
// ivar _isProgressive encoding=B offset=54
// ivar _player encoding=@"SDAnimatedImagePlayer" offset=56
// ivar _currentFrame encoding=@"UIImage" offset=64
// ivar _currentFrameIndex encoding=Q offset=72
// ivar _currentLoopCount encoding=Q offset=80
// ivar _imageViewLayer encoding=@"CALayer" offset=88
// property player attributes=T@"SDAnimatedImagePlayer",&,N,V_player
// property currentFrame attributes=T@"UIImage",&,N,V_currentFrame
// property currentFrameIndex attributes=TQ,N,V_currentFrameIndex
// property currentLoopCount attributes=TQ,N,V_currentLoopCount
// property shouldAnimate attributes=TB,N,V_shouldAnimate
// property isProgressive attributes=TB,N,V_isProgressive
// property imageViewLayer attributes=T@"CALayer",&,N,V_imageViewLayer
// property shouldCustomLoopCount attributes=TB,N,V_shouldCustomLoopCount
// property animationRepeatCount attributes=Tq,D,N
// property playbackRate attributes=Td,N
// property playbackMode attributes=TQ,N
// property maxBufferSize attributes=TQ,N
// property shouldIncrementalLoad attributes=TB,N,V_shouldIncrementalLoad
// property clearBufferWhenStopped attributes=TB,N,V_clearBufferWhenStopped
// property resetFrameIndexWhenStopped attributes=TB,N,V_resetFrameIndexWhenStopped
// property autoPlayAnimatedImage attributes=TB,N,V_autoPlayAnimatedImage
// property runLoopMode attributes=T@"NSString",C,N
// IMP 0x100537cec | v24@0:8@16
- (void)sd_setImageWithURL:(id)arg0;
// IMP 0x100537d00 | v32@0:8@16@24
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1;
// IMP 0x100537d10 | v40@0:8@16@24Q32
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(unsigned long long)arg2;
// IMP 0x100537d1c | v48@0:8@16@24Q32@40
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
// IMP 0x100537d28 | v32@0:8@16@?24
- (void)sd_setImageWithURL:(id)arg0 completed:(id /* block */)arg1;
// IMP 0x100537d3c | v40@0:8@16@24@?32
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 completed:(id /* block */)arg2;
// IMP 0x100537d4c | v48@0:8@16@24Q32@?40
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(unsigned long long)arg2 completed:(id /* block */)arg3;
// IMP 0x100537d58 | v56@0:8@16@24Q32@?40@?48
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completed:(id /* block */)arg4;
// IMP 0x100537d68 | v64@0:8@16@24Q32@40@?48@?56
- (void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 progress:(id /* block */)arg4 completed:(id /* block */)arg5;
// IMP 0x100536a5c | @24@0:8@16
- (id)initWithImage:(id)arg0;
// IMP 0x100536aac | @32@0:8@16@24
- (id)initWithImage:(id)arg0 highlightedImage:(id)arg1;
// IMP 0x100536afc | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100536b4c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100536b9c | v16@0:8
- (void)commonInit;
// IMP 0x100536bf4 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x10053714c | v24@0:8@16
- (void)setRunLoopMode:(id)arg0;
// IMP 0x1005371b8 | @16@0:8
- (id)runLoopMode;
// IMP 0x100537270 | v24@0:8Q16
- (void)setMaxBufferSize:(unsigned long long)arg0;
// IMP 0x1005372b4 | Q16@0:8
- (unsigned long long)maxBufferSize;
// IMP 0x1005372c4 | v24@0:8d16
- (void)setPlaybackRate:(double)arg0;
// IMP 0x100537310 | d16@0:8
- (double)playbackRate;
// IMP 0x100537338 | v24@0:8Q16
- (void)setPlaybackMode:(unsigned long long)arg0;
// IMP 0x10053737c | Q16@0:8
- (unsigned long long)playbackMode;
// IMP 0x1005373a4 | B16@0:8
- (BOOL)shouldIncrementalLoad;
// IMP 0x1005373ac | v16@0:8
- (void)didMoveToSuperview;
// IMP 0x1005373f4 | v16@0:8
- (void)didMoveToWindow;
// IMP 0x10053743c | v24@0:8d16
- (void)setAlpha:(double)arg0;
// IMP 0x100537484 | v20@0:8B16
- (void)setHidden:(BOOL)arg0;
// IMP 0x1005374cc | v24@0:8q16
- (void)setAnimationRepeatCount:(long long)arg0;
// IMP 0x100537540 | v16@0:8
- (void)startAnimating;
// IMP 0x1005375d8 | v16@0:8
- (void)stopAnimating;
// IMP 0x1005376b0 | B16@0:8
- (BOOL)isAnimating;
// IMP 0x100537734 | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x10053779c | v16@0:8
- (void)checkPlay;
// IMP 0x100537828 | v16@0:8
- (void)updateShouldAnimate;
// IMP 0x1005378e0 | v24@0:8@16
- (void)updateIsProgressiveWithImage:(id)arg0;
// IMP 0x1005379bc | @24@0:8@16
- (id)progressiveAnimatedCoderForImage:(id)arg0;
// IMP 0x100537a50 | v24@0:8@16
- (void)displayLayer:(id)arg0;
// IMP 0x100537b14 | @16@0:8
- (id)imageViewLayer;
// IMP 0x100537b18 | @16@0:8
- (id)player;
// IMP 0x100537b28 | v24@0:8@16
- (void)setPlayer:(id)arg0;
// IMP 0x100537b3c | @16@0:8
- (id)currentFrame;
// IMP 0x100537b4c | v24@0:8@16
- (void)setCurrentFrame:(id)arg0;
// IMP 0x100537b60 | Q16@0:8
- (unsigned long long)currentFrameIndex;
// IMP 0x100537b70 | v24@0:8Q16
- (void)setCurrentFrameIndex:(unsigned long long)arg0;
// IMP 0x100537b80 | Q16@0:8
- (unsigned long long)currentLoopCount;
// IMP 0x100537b90 | v24@0:8Q16
- (void)setCurrentLoopCount:(unsigned long long)arg0;
// IMP 0x100537ba0 | B16@0:8
- (BOOL)shouldCustomLoopCount;
// IMP 0x100537bb0 | v20@0:8B16
- (void)setShouldCustomLoopCount:(BOOL)arg0;
// IMP 0x100537bc0 | v20@0:8B16
- (void)setShouldIncrementalLoad:(BOOL)arg0;
// IMP 0x100537bd0 | B16@0:8
- (BOOL)clearBufferWhenStopped;
// IMP 0x100537be0 | v20@0:8B16
- (void)setClearBufferWhenStopped:(BOOL)arg0;
// IMP 0x100537bf0 | B16@0:8
- (BOOL)resetFrameIndexWhenStopped;
// IMP 0x100537c00 | v20@0:8B16
- (void)setResetFrameIndexWhenStopped:(BOOL)arg0;
// IMP 0x100537c10 | B16@0:8
- (BOOL)autoPlayAnimatedImage;
// IMP 0x100537c20 | v20@0:8B16
- (void)setAutoPlayAnimatedImage:(BOOL)arg0;
// IMP 0x100537c30 | B16@0:8
- (BOOL)shouldAnimate;
// IMP 0x100537c40 | v20@0:8B16
- (void)setShouldAnimate:(BOOL)arg0;
// IMP 0x100537c50 | B16@0:8
- (BOOL)isProgressive;
// IMP 0x100537c60 | v20@0:8B16
- (void)setIsProgressive:(BOOL)arg0;
// IMP 0x100537c70 | v24@0:8@16
- (void)setImageViewLayer:(id)arg0;
// IMP 0x100537c84 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10053720c | @16@0:8
+ (id)defaultRunLoopMode;
@end
