// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e360
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIZoomImageViewVideoToolbar : UIView
// ivar _playButton encoding=@"QMUIButton" offset=8
// ivar _pauseButton encoding=@"QMUIButton" offset=16
// ivar _slider encoding=@"UISlider" offset=24
// ivar _sliderLeftLabel encoding=@"UILabel" offset=32
// ivar _sliderRightLabel encoding=@"UILabel" offset=40
// ivar _playButtonImage encoding=@"UIImage" offset=48
// ivar _pauseButtonImage encoding=@"UIImage" offset=56
// ivar _paddings encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=64
// property playButton attributes=T@"QMUIButton",R,N,V_playButton
// property pauseButton attributes=T@"QMUIButton",R,N,V_pauseButton
// property slider attributes=T@"UISlider",R,N,V_slider
// property sliderLeftLabel attributes=T@"UILabel",R,N,V_sliderLeftLabel
// property sliderRightLabel attributes=T@"UILabel",R,N,V_sliderRightLabel
// property paddings attributes=T{UIEdgeInsets=dddd},N,V_paddings
// property playButtonImage attributes=T@"UIImage",&,N,V_playButtonImage
// property pauseButtonImage attributes=T@"UIImage",&,N,V_pauseButtonImage
// IMP 0x1004e0958 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004e0f4c | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004e1720 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004e187c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPaddings:(struct UIEdgeInsets)arg0;
// IMP 0x1004e1894 | v24@0:8@16
- (void)setPlayButtonImage:(id)arg0;
// IMP 0x1004e1910 | v24@0:8@16
- (void)setPauseButtonImage:(id)arg0;
// IMP 0x1004e198c | d24@0:8@16
- (double)maxHeightAmongViews:(id)arg0;
// IMP 0x1004e1a90 | @16@0:8
- (id)playButton;
// IMP 0x1004e1aa0 | @16@0:8
- (id)pauseButton;
// IMP 0x1004e1ab0 | @16@0:8
- (id)slider;
// IMP 0x1004e1ac0 | @16@0:8
- (id)sliderLeftLabel;
// IMP 0x1004e1ad0 | @16@0:8
- (id)sliderRightLabel;
// IMP 0x1004e1ae0 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)paddings;
// IMP 0x1004e1af8 | @16@0:8
- (id)playButtonImage;
// IMP 0x1004e1b08 | @16@0:8
- (id)pauseButtonImage;
// IMP 0x1004e1b18 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004e1bbc | v16@0:8
+ (void)initialize;
// IMP 0x1004e1c30 | v16@0:8
+ (void)setDefaultAppearance;
@end
