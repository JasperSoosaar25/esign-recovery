// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90578
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageIOAnimatedCoder : NSObject
// ivar _width encoding=Q offset=8
// ivar _height encoding=Q offset=16
// ivar _imageSource encoding=^{CGImageSource=} offset=24
// ivar _imageData encoding=@"NSData" offset=32
// ivar _scale encoding=d offset=40
// ivar _loopCount encoding=Q offset=48
// ivar _frameCount encoding=Q offset=56
// ivar _frames encoding=@"NSArray" offset=64
// ivar _finished encoding=B offset=72
// ivar _preserveAspectRatio encoding=B offset=73
// ivar _thumbnailSize encoding={CGSize="width"d"height"d} offset=80
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property animatedImageData attributes=T@"NSData",R,C,N
// property animatedImageFrameCount attributes=TQ,R,N
// property animatedImageLoopCount attributes=TQ,R,N
// IMP 0x100544a48 | v16@0:8
- (void)dealloc;
// IMP 0x100544ad0 | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x100545770 | B24@0:8@16
- (BOOL)canDecodeFromData:(id)arg0;
// IMP 0x1005457b0 | @32@0:8@16@24
- (id)decodedImageWithData:(id)arg0 options:(id)arg1;
// IMP 0x100545acc | B24@0:8@16
- (BOOL)canIncrementalDecodeFromData:(id)arg0;
// IMP 0x100545b0c | @24@0:8@16
- (id)initIncrementalWithOptions:(id)arg0;
// IMP 0x100545d10 | v28@0:8@16B24
- (void)updateIncrementalData:(id)arg0 finished:(BOOL)arg1;
// IMP 0x100545edc | @24@0:8@16
- (id)incrementalDecodedImageWithOptions:(id)arg0;
// IMP 0x100545fb0 | B24@0:8q16
- (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x100545fdc | @40@0:8@16q24@32
- (id)encodedDataWithImage:(id)arg0 format:(long long)arg1 options:(id)arg2;
// IMP 0x100546718 | @32@0:8@16@24
- (id)initWithAnimatedImageData:(id)arg0 options:(id)arg1;
// IMP 0x10054691c | B24@0:8^{CGImageSource=}16
- (BOOL)scanAndCheckFramesValidWithImageSource:(struct CGImageSource *)arg0;
// IMP 0x100546a1c | @16@0:8
- (id)animatedImageData;
// IMP 0x100546a24 | Q16@0:8
- (unsigned long long)animatedImageLoopCount;
// IMP 0x100546a2c | Q16@0:8
- (unsigned long long)animatedImageFrameCount;
// IMP 0x100546a34 | d24@0:8Q16
- (double)animatedImageDurationAtIndex:(unsigned long long)arg0;
// IMP 0x100546a90 | @24@0:8Q16
- (id)animatedImageFrameAtIndex:(unsigned long long)arg0;
// IMP 0x100546c0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100544b48 | q16@0:8
+ (long long)imageFormat;
// IMP 0x100544be8 | @16@0:8
+ (id)imageUTType;
// IMP 0x100544c88 | @16@0:8
+ (id)dictionaryProperty;
// IMP 0x100544d28 | @16@0:8
+ (id)unclampedDelayTimeProperty;
// IMP 0x100544dc8 | @16@0:8
+ (id)delayTimeProperty;
// IMP 0x100544e68 | @16@0:8
+ (id)loopCountProperty;
// IMP 0x100544f08 | Q16@0:8
+ (unsigned long long)defaultLoopCount;
// IMP 0x100544fa8 | B24@0:8q16
+ (BOOL)canDecodeFromFormat:(long long)arg0;
// IMP 0x100545058 | B24@0:8q16
+ (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x100545108 | Q24@0:8^{CGImageSource=}16
+ (unsigned long long)imageLoopCountWithSource:(struct CGImageSource *)arg0;
// IMP 0x1005451e8 | d32@0:8Q16^{CGImageSource=}24
+ (double)frameDurationAtIndex:(unsigned long long)arg0 source:(struct CGImageSource *)arg1;
// IMP 0x100545428 | @68@0:8Q16^{CGImageSource=}24d32B40{CGSize=dd}44@60
+ (id)createFrameAtIndex:(unsigned long long)arg0 source:(struct CGImageSource *)arg1 scale:(double)arg2 preserveAspectRatio:(BOOL)arg3 thumbnailSize:(struct CGSize)arg4 options:(id)arg5;
@end
