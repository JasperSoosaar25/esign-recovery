// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8bf58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPieProgressLayer : CALayer
// ivar _shouldChangeProgressWithAnimation encoding=B offset=8
// ivar _progressAnimationDuration encoding=d offset=16
// property fillColor attributes=T@"UIColor",&,D,N
// property strokeColor attributes=T@"UIColor",&,D,N
// property progress attributes=Tf,D,N
// property progressAnimationDuration attributes=Td,N,V_progressAnimationDuration
// property shouldChangeProgressWithAnimation attributes=TB,N,V_shouldChangeProgressWithAnimation
// property borderInset attributes=Td,D,N
// property lineWidth attributes=Td,D,N
// property shape attributes=TQ,D,N
// IMP 0x1004b5654 | @16@0:8
- (id)init;
// IMP 0x1004b5720 | @24@0:8@16
- (id)actionForKey:(id)arg0;
// IMP 0x1004b5828 | v24@0:8^{CGContext=}16
- (void)drawInContext:(struct CGContext *)arg0;
// IMP 0x1004b5a94 | v16@0:8
- (void)layoutSublayers;
// IMP 0x1004b5af0 | d16@0:8
- (double)progressAnimationDuration;
// IMP 0x1004b5b00 | v24@0:8d16
- (void)setProgressAnimationDuration:(double)arg0;
// IMP 0x1004b5b10 | B16@0:8
- (BOOL)shouldChangeProgressWithAnimation;
// IMP 0x1004b5b20 | v20@0:8B16
- (void)setShouldChangeProgressWithAnimation:(BOOL)arg0;
// IMP 0x1004b56a8 | B24@0:8@16
+ (BOOL)needsDisplayForKey:(id)arg0;
@end
