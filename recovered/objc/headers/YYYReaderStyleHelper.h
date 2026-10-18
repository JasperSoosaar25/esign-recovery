// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d4a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYReaderStyleHelper : NSObject
// ivar _style encoding=Q offset=8
// ivar _brightness encoding=d offset=16
// ivar _fontSize encoding=d offset=24
// ivar _font encoding=@"UIFont" offset=32
// ivar _contentAttributes encoding=@"NSMutableDictionary" offset=40
// ivar _chapterTitleAttributes encoding=@"NSMutableDictionary" offset=48
// ivar _preferredStatusBarStyle encoding=q offset=56
// ivar _backgroundColor encoding=@"UIColor" offset=64
// ivar _textColor encoding=@"UIColor" offset=72
// ivar _toolViewBackgroundColor encoding=@"UIColor" offset=80
// ivar _toolViewTextColor encoding=@"UIColor" offset=88
// ivar _backButtonColor encoding=@"UIColor" offset=96
// ivar _sliderBackgroundColor encoding=@"UIColor" offset=104
// ivar _sliderTrackColor encoding=@"UIColor" offset=112
// ivar _sliderThumbColor encoding=@"UIColor" offset=120
// ivar _sliderImageColor encoding=@"UIColor" offset=128
// ivar _highlightedColor encoding=@"UIColor" offset=136
// property style attributes=TQ,N,V_style
// property brightness attributes=Td,N,V_brightness
// property fontSize attributes=Td,N,V_fontSize
// property font attributes=T@"UIFont",&,N,V_font
// property contentAttributes attributes=T@"NSMutableDictionary",&,N,V_contentAttributes
// property chapterTitleAttributes attributes=T@"NSMutableDictionary",&,N,V_chapterTitleAttributes
// property preferredStatusBarStyle attributes=Tq,N,V_preferredStatusBarStyle
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property textColor attributes=T@"UIColor",&,N,V_textColor
// property toolViewBackgroundColor attributes=T@"UIColor",&,N,V_toolViewBackgroundColor
// property toolViewTextColor attributes=T@"UIColor",&,N,V_toolViewTextColor
// property backButtonColor attributes=T@"UIColor",&,N,V_backButtonColor
// property sliderBackgroundColor attributes=T@"UIColor",&,N,V_sliderBackgroundColor
// property sliderTrackColor attributes=T@"UIColor",&,N,V_sliderTrackColor
// property sliderThumbColor attributes=T@"UIColor",&,N,V_sliderThumbColor
// property sliderImageColor attributes=T@"UIColor",&,N,V_sliderImageColor
// property highlightedColor attributes=T@"UIColor",&,N,V_highlightedColor
// IMP 0x10011ab58 | @16@0:8
- (id)init;
// IMP 0x10011ba58 | v24@0:8Q16
- (void)setStyle:(unsigned long long)arg0;
// IMP 0x10011d484 | v24@0:8d16
- (void)setFontSize:(double)arg0;
// IMP 0x10011dd18 | v24@0:8d16
- (void)setBrightness:(double)arg0;
// IMP 0x10011dfc8 | Q16@0:8
- (unsigned long long)style;
// IMP 0x10011dfe8 | d16@0:8
- (double)brightness;
// IMP 0x10011e008 | d16@0:8
- (double)fontSize;
// IMP 0x10011e028 | @16@0:8
- (id)font;
// IMP 0x10011e03c | v24@0:8@16
- (void)setFont:(id)arg0;
// IMP 0x10011e054 | @16@0:8
- (id)contentAttributes;
// IMP 0x10011e080 | v24@0:8@16
- (void)setContentAttributes:(id)arg0;
// IMP 0x10011e0e8 | @16@0:8
- (id)chapterTitleAttributes;
// IMP 0x10011e108 | v24@0:8@16
- (void)setChapterTitleAttributes:(id)arg0;
// IMP 0x10011e198 | q16@0:8
- (long long)preferredStatusBarStyle;
// IMP 0x10011e1c4 | v24@0:8q16
- (void)setPreferredStatusBarStyle:(long long)arg0;
// IMP 0x10011e1d8 | @16@0:8
- (id)backgroundColor;
// IMP 0x10011e1ec | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x10011e204 | @16@0:8
- (id)textColor;
// IMP 0x10011e224 | v24@0:8@16
- (void)setTextColor:(id)arg0;
// IMP 0x10011e288 | @16@0:8
- (id)toolViewBackgroundColor;
// IMP 0x10011e2a8 | v24@0:8@16
- (void)setToolViewBackgroundColor:(id)arg0;
// IMP 0x10011e32c | @16@0:8
- (id)toolViewTextColor;
// IMP 0x10011e35c | v24@0:8@16
- (void)setToolViewTextColor:(id)arg0;
// IMP 0x10011e3ac | @16@0:8
- (id)backButtonColor;
// IMP 0x10011e3c0 | v24@0:8@16
- (void)setBackButtonColor:(id)arg0;
// IMP 0x10011e450 | @16@0:8
- (id)sliderBackgroundColor;
// IMP 0x10011e458 | v24@0:8@16
- (void)setSliderBackgroundColor:(id)arg0;
// IMP 0x10011e4ec | @16@0:8
- (id)sliderTrackColor;
// IMP 0x10011e518 | v24@0:8@16
- (void)setSliderTrackColor:(id)arg0;
// IMP 0x10011e57c | @16@0:8
- (id)sliderThumbColor;
// IMP 0x10011e590 | v24@0:8@16
- (void)setSliderThumbColor:(id)arg0;
// IMP 0x10011e5f0 | @16@0:8
- (id)sliderImageColor;
// IMP 0x10011e610 | v24@0:8@16
- (void)setSliderImageColor:(id)arg0;
// IMP 0x10011e6a4 | @16@0:8
- (id)highlightedColor;
// IMP 0x10011e6d4 | v24@0:8@16
- (void)setHighlightedColor:(id)arg0;
// IMP 0x10011e730 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10011a97c | @16@0:8
+ (id)shared;
@end
