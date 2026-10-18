// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e310
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIZoomImageView : UIView
// ivar _isSeekingVideo encoding=B offset=8
// ivar _imageView encoding=@"UIImageView" offset=16
// ivar _livePhotoView encoding=@"PHLivePhotoView" offset=24
// ivar _videoPlayerLayer encoding=@"AVPlayerLayer" offset=32
// ivar _videoToolbar encoding=@"QMUIZoomImageViewVideoToolbar" offset=40
// ivar _videoCenteredPlayButton encoding=@"QMUIButton" offset=48
// ivar _cloudProgressView encoding=@"QMUIPieProgressView" offset=56
// ivar _cloudDownloadRetryButton encoding=@"QMUIButton" offset=64
// ivar _delegate encoding=@"<QMUIZoomImageViewDelegate>" offset=72
// ivar _scrollView encoding=@"UIScrollView" offset=80
// ivar _maximumZoomScale encoding=d offset=88
// ivar _reusedIdentifier encoding=@"NSObject<NSCopying>" offset=96
// ivar _image encoding=@"UIImage" offset=104
// ivar _livePhoto encoding=@"PHLivePhoto" offset=112
// ivar _videoPlayerItem encoding=@"AVPlayerItem" offset=120
// ivar _videoCenteredPlayButtonImage encoding=@"UIImage" offset=128
// ivar _cloudDownloadStatus encoding=Q offset=136
// ivar _emptyView encoding=@"QMUIEmptyView" offset=144
// ivar _videoPlayerView encoding=@"QMUIZoomImageVideoPlayerView" offset=152
// ivar _videoPlayer encoding=@"AVPlayer" offset=160
// ivar _videoTimeObserver encoding=@ offset=168
// ivar _videoSize encoding={CGSize="width"d"height"d} offset=176
// ivar _viewportRect encoding={CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} offset=192
// ivar _videoToolbarMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=224
// property videoPlayerView attributes=T@"QMUIZoomImageVideoPlayerView",&,N,V_videoPlayerView
// property videoPlayer attributes=T@"AVPlayer",&,N,V_videoPlayer
// property videoTimeObserver attributes=T@,&,N,V_videoTimeObserver
// property isSeekingVideo attributes=TB,N,V_isSeekingVideo
// property videoSize attributes=T{CGSize=dd},N,V_videoSize
// property delegate attributes=T@"<QMUIZoomImageViewDelegate>",W,N,V_delegate
// property scrollView attributes=T@"UIScrollView",R,N,V_scrollView
// property viewportRect attributes=T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_viewportRect
// property maximumZoomScale attributes=Td,N,V_maximumZoomScale
// property reusedIdentifier attributes=T@"NSObject<NSCopying>",C,N,V_reusedIdentifier
// property image attributes=T@"UIImage",W,N,V_image
// property imageView attributes=T@"UIImageView",R,N,V_imageView
// property livePhoto attributes=T@"PHLivePhoto",W,N,V_livePhoto
// property livePhotoView attributes=T@"PHLivePhotoView",R,N,V_livePhotoView
// property videoPlayerItem attributes=T@"AVPlayerItem",W,N,V_videoPlayerItem
// property videoPlayerLayer attributes=T@"AVPlayerLayer",R,W,N,V_videoPlayerLayer
// property videoToolbar attributes=T@"QMUIZoomImageViewVideoToolbar",R,N,V_videoToolbar
// property videoToolbarMargins attributes=T{UIEdgeInsets=dddd},N,V_videoToolbarMargins
// property videoCenteredPlayButton attributes=T@"QMUIButton",R,N,V_videoCenteredPlayButton
// property videoCenteredPlayButtonImage attributes=T@"UIImage",&,N,V_videoCenteredPlayButtonImage
// property cloudProgressView attributes=T@"QMUIPieProgressView",&,N,V_cloudProgressView
// property cloudDownloadRetryButton attributes=T@"QMUIButton",&,N,V_cloudDownloadRetryButton
// property cloudDownloadStatus attributes=TQ,N,V_cloudDownloadStatus
// property contentView attributes=T@"UIView",R,W,N
// property emptyView attributes=T@"QMUIEmptyView",R,N,V_emptyView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004dbaa0 | v16@0:8
- (void)didMoveToWindow;
// IMP 0x1004dbb04 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004dbeb4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004dc49c | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setFrame:(struct CGRect)arg0;
// IMP 0x1004dc534 | v16@0:8
- (void)dealloc;
// IMP 0x1004dc59c | @16@0:8
- (id)imageView;
// IMP 0x1004dc5c8 | v16@0:8
- (void)initImageViewIfNeeded;
// IMP 0x1004dc64c | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x1004dc77c | @16@0:8
- (id)livePhotoView;
// IMP 0x1004dc7a8 | v24@0:8@16
- (void)setLivePhoto:(id)arg0;
// IMP 0x1004dc888 | v16@0:8
- (void)initLivePhotoViewIfNeeded;
// IMP 0x1004dc90c | v24@0:8q16
- (void)setContentMode:(long long)arg0;
// IMP 0x1004dc974 | v24@0:8d16
- (void)setMaximumZoomScale:(double)arg0;
// IMP 0x1004dc9c0 | d16@0:8
- (double)minimumZoomScale;
// IMP 0x1004dcb88 | v16@0:8
- (void)revertZooming;
// IMP 0x1004dcf78 | v28@0:8d16B24
- (void)setZoomScale:(double)arg0 animated:(BOOL)arg1;
// IMP 0x1004dd074 | v52@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48
- (void)zoomToRect:(struct CGRect)arg0 animated:(BOOL)arg1;
// IMP 0x1004dd19c | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)contentViewRectInZoomImageView;
// IMP 0x1004dd26c | v16@0:8
- (void)handleDidEndZooming;
// IMP 0x1004dd600 | B16@0:8
- (BOOL)enabledZoomImageView;
// IMP 0x1004dd6d4 | v24@0:8@16
- (void)setVideoPlayerItem:(id)arg0;
// IMP 0x1004ddaf8 | v24@0:8@16
- (void)handlePlayButton:(id)arg0;
// IMP 0x1004ddc90 | v16@0:8
- (void)handlePauseButton;
// IMP 0x1004ddd44 | v16@0:8
- (void)handleVideoPlayToEndEvent;
// IMP 0x1004dde40 | v24@0:8@16
- (void)handleStartDragVideoSlider:(id)arg0;
// IMP 0x1004dde7c | v24@0:8@16
- (void)handleDraggingVideoSlider:(id)arg0;
// IMP 0x1004ddfe0 | v24@0:8@16
- (void)handleFinishDragVideoSlider:(id)arg0;
// IMP 0x1004de0c0 | v16@0:8
- (void)syncVideoProgressSlider;
// IMP 0x1004de178 | v16@0:8
- (void)configVideoProgressSlider;
// IMP 0x1004de454 | v16@0:8
- (void)addPlayerTimeObserver;
// IMP 0x1004de5ac | v16@0:8
- (void)removePlayerTimeObserver;
// IMP 0x1004de644 | v16@0:8
- (void)updateVideoSliderLeftLabel;
// IMP 0x1004de714 | @24@0:8Q16
- (id)timeStringFromSeconds:(unsigned long long)arg0;
// IMP 0x1004de76c | v16@0:8
- (void)pauseVideo;
// IMP 0x1004de7b8 | v16@0:8
- (void)endPlayingVideo;
// IMP 0x1004de884 | @16@0:8
- (id)videoPlayerLayer;
// IMP 0x1004de8b4 | @16@0:8
- (id)videoToolbar;
// IMP 0x1004de8e0 | @16@0:8
- (id)videoCenteredPlayButton;
// IMP 0x1004de90c | v16@0:8
- (void)initVideoPlayerLayerIfNeeded;
// IMP 0x1004dea2c | v16@0:8
- (void)initVideoToolbarIfNeeded;
// IMP 0x1004deb20 | v16@0:8
- (void)initVideoCenteredPlayButtonIfNeeded;
// IMP 0x1004dec20 | v16@0:8
- (void)initVideoRelatedViewsIfNeeded;
// IMP 0x1004dec54 | v16@0:8
- (void)destroyVideoRelatedObjectsIfNeeded;
// IMP 0x1004dedac | v48@0:8{UIEdgeInsets=dddd}16
- (void)setVideoToolbarMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004dedc4 | v24@0:8@16
- (void)setVideoCenteredPlayButtonImage:(id)arg0;
// IMP 0x1004dee5c | v16@0:8
- (void)applicationDidEnterBackground;
// IMP 0x1004dee60 | @16@0:8
- (id)cloudProgressView;
// IMP 0x1004dee8c | @16@0:8
- (id)cloudDownloadRetryButton;
// IMP 0x1004deeb8 | v16@0:8
- (void)initCloudRelatedViewsIfNeeded;
// IMP 0x1004deedc | v16@0:8
- (void)initCloudProgressViewIfNeeded;
// IMP 0x1004defb8 | v16@0:8
- (void)initCloudDownloadRetryButtonIfNeeded;
// IMP 0x1004df114 | v24@0:8Q16
- (void)setCloudDownloadStatus:(unsigned long long)arg0;
// IMP 0x1004df2f8 | v24@0:8@16
- (void)handleICloudDownloadRetryEvent:(id)arg0;
// IMP 0x1004df378 | v24@0:8@16
- (void)handleSingleTapGestureWithPoint:(id)arg0;
// IMP 0x1004df530 | v24@0:8@16
- (void)handleDoubleTapGestureWithPoint:(id)arg0;
// IMP 0x1004df7a4 | v24@0:8@16
- (void)handleLongPressGesture:(id)arg0;
// IMP 0x1004df848 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
// IMP 0x1004df89c | v16@0:8
- (void)showLoading;
// IMP 0x1004df9c0 | v24@0:8@16
- (void)showEmptyViewWithText:(id)arg0;
// IMP 0x1004dfafc | v56@0:8@16@24@32@40:48
- (void)showEmptyViewWithText:(id)arg0 detailText:(id)arg1 buttonTitle:(id)arg2 buttonTarget:(id)arg3 buttonAction:(SEL)arg4;
// IMP 0x1004dfd40 | v16@0:8
- (void)hideEmptyView;
// IMP 0x1004dfd80 | @24@0:8@16
- (id)viewForZoomingInScrollView:(id)arg0;
// IMP 0x1004dfd84 | v24@0:8@16
- (void)scrollViewDidZoom:(id)arg0;
// IMP 0x1004dfd88 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)finalViewportRect;
// IMP 0x1004dfe78 | v16@0:8
- (void)hideViews;
// IMP 0x1004dff60 | @16@0:8
- (id)contentView;
// IMP 0x1004dffdc | v24@0:8@16
- (void)setCloudProgressView:(id)arg0;
// IMP 0x1004dfff0 | v24@0:8@16
- (void)setCloudDownloadRetryButton:(id)arg0;
// IMP 0x1004e0004 | @16@0:8
- (id)delegate;
// IMP 0x1004e0024 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1004e0038 | @16@0:8
- (id)scrollView;
// IMP 0x1004e0048 | {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)viewportRect;
// IMP 0x1004e0060 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setViewportRect:(struct CGRect)arg0;
// IMP 0x1004e0078 | d16@0:8
- (double)maximumZoomScale;
// IMP 0x1004e0088 | @16@0:8
- (id)reusedIdentifier;
// IMP 0x1004e0098 | v24@0:8@16
- (void)setReusedIdentifier:(id)arg0;
// IMP 0x1004e00a4 | @16@0:8
- (id)image;
// IMP 0x1004e00c4 | @16@0:8
- (id)livePhoto;
// IMP 0x1004e00e4 | @16@0:8
- (id)videoPlayerItem;
// IMP 0x1004e0104 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)videoToolbarMargins;
// IMP 0x1004e011c | @16@0:8
- (id)videoCenteredPlayButtonImage;
// IMP 0x1004e012c | Q16@0:8
- (unsigned long long)cloudDownloadStatus;
// IMP 0x1004e013c | @16@0:8
- (id)emptyView;
// IMP 0x1004e014c | @16@0:8
- (id)videoPlayerView;
// IMP 0x1004e015c | v24@0:8@16
- (void)setVideoPlayerView:(id)arg0;
// IMP 0x1004e0170 | @16@0:8
- (id)videoPlayer;
// IMP 0x1004e0180 | v24@0:8@16
- (void)setVideoPlayer:(id)arg0;
// IMP 0x1004e0194 | @16@0:8
- (id)videoTimeObserver;
// IMP 0x1004e01a4 | v24@0:8@16
- (void)setVideoTimeObserver:(id)arg0;
// IMP 0x1004e01b8 | B16@0:8
- (BOOL)isSeekingVideo;
// IMP 0x1004e01c8 | v20@0:8B16
- (void)setIsSeekingVideo:(BOOL)arg0;
// IMP 0x1004e01d8 | {CGSize=dd}16@0:8
- (struct CGSize)videoSize;
// IMP 0x1004e01ec | v32@0:8{CGSize=dd}16
- (void)setVideoSize:(struct CGSize)arg0;
// IMP 0x1004e0200 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004e036c | v16@0:8
+ (void)initialize;
// IMP 0x1004e03e0 | v16@0:8
+ (void)setDefaultAppearance;
@end
