// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8fb50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageAWebPCoder : SDImageIOAnimatedCoder
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property animatedImageData attributes=T@"NSData",R,C,N
// property animatedImageFrameCount attributes=TQ,R,N
// property animatedImageLoopCount attributes=TQ,R,N
// IMP 0x10053bc0c | B24@0:8@16
- (BOOL)canDecodeFromData:(id)arg0;
// IMP 0x10053bc58 | B24@0:8@16
- (BOOL)canIncrementalDecodeFromData:(id)arg0;
// IMP 0x10053bc5c | B24@0:8q16
- (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x10053bb10 | v16@0:8
+ (void)initialize;
// IMP 0x10053bb9c | @16@0:8
+ (id)sharedCoder;
// IMP 0x10053bc84 | q16@0:8
+ (long long)imageFormat;
// IMP 0x10053bc8c | @16@0:8
+ (id)imageUTType;
// IMP 0x10053bc98 | @16@0:8
+ (id)dictionaryProperty;
// IMP 0x10053bca4 | @16@0:8
+ (id)unclampedDelayTimeProperty;
// IMP 0x10053bcb0 | @16@0:8
+ (id)delayTimeProperty;
// IMP 0x10053bcbc | @16@0:8
+ (id)loopCountProperty;
// IMP 0x10053bcc8 | Q16@0:8
+ (unsigned long long)defaultLoopCount;
@end
