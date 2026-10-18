// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f1b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDAnimatedImage : UIImage
// ivar _allFramesLoaded encoding=B offset=8
// ivar _animatedImageFormat encoding=q offset=16
// ivar _animatedCoder encoding=@"<SDAnimatedImageCoder>" offset=24
// ivar _loadedAnimatedImageFrames encoding=@"NSArray" offset=32
// property animatedCoder attributes=T@"<SDAnimatedImageCoder>",&,N,V_animatedCoder
// property animatedImageFormat attributes=Tq,N,V_animatedImageFormat
// property loadedAnimatedImageFrames attributes=T@"NSArray",C,V_loadedAnimatedImageFrames
// property allFramesLoaded attributes=TB,N,GisAllFramesLoaded,V_allFramesLoaded
// property animatedImageData attributes=T@"NSData",R,C,N
// property scale attributes=Td,R,D,N
// property animatedImageFrameCount attributes=TQ,R,N
// property animatedImageLoopCount attributes=TQ,R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005352f0 | @16@0:8
- (id)sd_imageData;
// IMP 0x100535338 | @24@0:8q16
- (id)sd_imageDataAsFormat:(long long)arg0;
// IMP 0x100535340 | @32@0:8q16d24
- (id)sd_imageDataAsFormat:(long long)arg0 compressionQuality:(double)arg1;
// IMP 0x100535348 | @36@0:8q16d24B32
- (id)sd_imageDataAsFormat:(long long)arg0 compressionQuality:(double)arg1 firstFrameOnly:(BOOL)arg2;
// IMP 0x1005351a0 | B16@0:8
- (BOOL)sd_isAnimated;
// IMP 0x1005351a8 | Q16@0:8
- (unsigned long long)sd_imageLoopCount;
// IMP 0x1005351ac | v24@0:8Q16
- (void)setSd_imageLoopCount:(unsigned long long)arg0;
// IMP 0x1005351b0 | Q16@0:8
- (unsigned long long)sd_imageFrameCount;
// IMP 0x1005351b4 | q16@0:8
- (long long)sd_imageFormat;
// IMP 0x1005351b8 | v24@0:8q16
- (void)setSd_imageFormat:(long long)arg0;
// IMP 0x1005351bc | B16@0:8
- (BOOL)sd_isVector;
// IMP 0x1005350e8 | Q16@0:8
- (unsigned long long)sd_memoryCost;
// IMP 0x1005342c4 | @24@0:8@16
- (id)initWithContentsOfFile:(id)arg0;
// IMP 0x100534488 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x100534490 | @32@0:8@16d24
- (id)initWithData:(id)arg0 scale:(double)arg1;
// IMP 0x100534498 | @40@0:8@16d24@32
- (id)initWithData:(id)arg0 scale:(double)arg1 options:(id)arg2;
// IMP 0x100534734 | @32@0:8@16d24
- (id)initWithAnimatedCoder:(id)arg0 scale:(double)arg1;
// IMP 0x100534890 | v16@0:8
- (void)preloadAllFrames;
// IMP 0x1005349ac | v16@0:8
- (void)unloadAllFrames;
// IMP 0x100534a00 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100534d04 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100534df8 | @16@0:8
- (id)animatedImageData;
// IMP 0x100534e3c | Q16@0:8
- (unsigned long long)animatedImageLoopCount;
// IMP 0x100534e78 | Q16@0:8
- (unsigned long long)animatedImageFrameCount;
// IMP 0x100534eb4 | @24@0:8Q16
- (id)animatedImageFrameAtIndex:(unsigned long long)arg0;
// IMP 0x100534f74 | d24@0:8Q16
- (double)animatedImageDurationAtIndex:(unsigned long long)arg0;
// IMP 0x100535028 | q16@0:8
- (long long)animatedImageFormat;
// IMP 0x100535038 | v24@0:8q16
- (void)setAnimatedImageFormat:(long long)arg0;
// IMP 0x100535048 | B16@0:8
- (BOOL)isAllFramesLoaded;
// IMP 0x100535058 | v20@0:8B16
- (void)setAllFramesLoaded:(BOOL)arg0;
// IMP 0x100535068 | @16@0:8
- (id)animatedCoder;
// IMP 0x100535078 | v24@0:8@16
- (void)setAnimatedCoder:(id)arg0;
// IMP 0x10053508c | @16@0:8
- (id)loadedAnimatedImageFrames;
// IMP 0x10053509c | v24@0:8@16
- (void)setLoadedAnimatedImageFrames:(id)arg0;
// IMP 0x1005350a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005351c4 | @24@0:8@16
+ (id)sd_imageWithData:(id)arg0;
// IMP 0x1005351cc | @32@0:8@16d24
+ (id)sd_imageWithData:(id)arg0 scale:(double)arg1;
// IMP 0x1005351d4 | @36@0:8@16d24B32
+ (id)sd_imageWithData:(id)arg0 scale:(double)arg1 firstFrameOnly:(BOOL)arg2;
// IMP 0x100533f30 | @24@0:8@16
+ (id)imageNamed:(id)arg0;
// IMP 0x100533f3c | @40@0:8@16@24@32
+ (id)imageNamed:(id)arg0 inBundle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
// IMP 0x100534014 | @40@0:8@16@24d32
+ (id)imageNamed:(id)arg0 inBundle:(id)arg1 scale:(double)arg2;
// IMP 0x1005341dc | @24@0:8@16
+ (id)imageWithContentsOfFile:(id)arg0;
// IMP 0x100534224 | @24@0:8@16
+ (id)imageWithData:(id)arg0;
// IMP 0x10053426c | @32@0:8@16d24
+ (id)imageWithData:(id)arg0 scale:(double)arg1;
// IMP 0x100534df0 | B16@0:8
+ (BOOL)supportsSecureCoding;
@end
