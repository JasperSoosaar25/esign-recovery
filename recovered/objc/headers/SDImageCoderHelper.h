// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c903c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCoderHelper : NSObject
// IMP 0x1005427ec | @24@0:8@16
+ (id)animatedImageWithFrames:(id)arg0;
// IMP 0x100542ab0 | @24@0:8@16
+ (id)framesFromAnimatedImage:(id)arg0;
// IMP 0x100542dbc | ^{CGColorSpace=}16@0:8
+ (struct CGColorSpace *)colorSpaceGetDeviceRGB;
// IMP 0x100542e24 | B24@0:8^{CGImage=}16
+ (BOOL)CGImageContainsAlpha:(struct CGImage *)arg0;
// IMP 0x100542e60 | ^{CGImage=}24@0:8^{CGImage=}16
+ (struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0;
// IMP 0x100542e68 | ^{CGImage=}28@0:8^{CGImage=}16I24
+ (struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0 orientation:(unsigned int)arg1;
// IMP 0x100543148 | ^{CGImage=}40@0:8^{CGImage=}16{CGSize=dd}24
+ (struct CGImage *)CGImageCreateScaled:(struct CGImage *)arg0 size:(struct CGSize)arg1;
// IMP 0x1005433fc | {CGSize=dd}56@0:8{CGSize=dd}16{CGSize=dd}32B48B52
+ (struct CGSize)scaledSizeWithImageSize:(struct CGSize)arg0 scaleSize:(struct CGSize)arg1 preserveAspectRatio:(BOOL)arg2 shouldScaleUp:(BOOL)arg3;
// IMP 0x100543464 | @24@0:8@16
+ (id)decodedImageWithImage:(id)arg0;
// IMP 0x1005436e8 | @32@0:8@16Q24
+ (id)decodedAndScaledDownImageWithImage:(id)arg0 limitBytes:(unsigned long long)arg1;
// IMP 0x100543ba8 | Q16@0:8
+ (unsigned long long)defaultDecodeSolution;
// IMP 0x100543bb4 | v24@0:8Q16
+ (void)setDefaultDecodeSolution:(unsigned long long)arg0;
// IMP 0x100543bc0 | Q16@0:8
+ (unsigned long long)defaultScaleDownLimitBytes;
// IMP 0x100543bd0 | v24@0:8Q16
+ (void)setDefaultScaleDownLimitBytes:(unsigned long long)arg0;
// IMP 0x100543be8 | q20@0:8I16
+ (long long)imageOrientationFromEXIFOrientation:(unsigned int)arg0;
// IMP 0x100543c0c | I24@0:8q16
+ (unsigned int)exifOrientationFromImageOrientation:(long long)arg0;
// IMP 0x100543c30 | B24@0:8@16
+ (BOOL)shouldDecodeImage:(id)arg0;
// IMP 0x100543c90 | B40@0:8{CGSize=dd}16Q32
+ (BOOL)shouldScaleDownImagePixelSize:(struct CGSize)arg0 limitBytes:(unsigned long long)arg1;
@end
