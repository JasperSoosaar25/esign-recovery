// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c904d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageHEICCoder : SDImageIOAnimatedCoder
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property animatedImageData attributes=T@"NSData",R,C,N
// property animatedImageFrameCount attributes=TQ,R,N
// property animatedImageLoopCount attributes=TQ,R,N
// IMP 0x10054493c | B24@0:8@16
- (BOOL)canDecodeFromData:(id)arg0;
// IMP 0x100544994 | B24@0:8@16
- (BOOL)canIncrementalDecodeFromData:(id)arg0;
// IMP 0x100544998 | B24@0:8q16
- (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x100544840 | v16@0:8
+ (void)initialize;
// IMP 0x1005448cc | @16@0:8
+ (id)sharedCoder;
// IMP 0x1005449dc | q16@0:8
+ (long long)imageFormat;
// IMP 0x1005449e4 | @16@0:8
+ (id)imageUTType;
// IMP 0x1005449f0 | @16@0:8
+ (id)dictionaryProperty;
// IMP 0x1005449fc | @16@0:8
+ (id)unclampedDelayTimeProperty;
// IMP 0x100544a08 | @16@0:8
+ (id)delayTimeProperty;
// IMP 0x100544a14 | @16@0:8
+ (id)loopCountProperty;
// IMP 0x100544a20 | Q16@0:8
+ (unsigned long long)defaultLoopCount;
@end
