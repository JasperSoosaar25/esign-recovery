// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8bfa8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPieProgressView : UIControl
// ivar _progress encoding=f offset=8
// ivar _progressAnimationDuration encoding=d offset=16
// ivar _borderWidth encoding=d offset=24
// ivar _borderInset encoding=d offset=32
// ivar _lineWidth encoding=d offset=40
// ivar _shape encoding=Q offset=48
// property progressAnimationDuration attributes=Td,N,V_progressAnimationDuration
// property progress attributes=Tf,N,V_progress
// property borderWidth attributes=Td,N,V_borderWidth
// property borderInset attributes=Td,N,V_borderInset
// property lineWidth attributes=Td,N,V_lineWidth
// property shape attributes=TQ,N,V_shape
// IMP 0x1004b5b3c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004b5c70 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004b5cc8 | v16@0:8
- (void)didInitialize;
// IMP 0x1004b5d70 | v20@0:8f16
- (void)setProgress:(float)arg0;
// IMP 0x1004b5d78 | v24@0:8f16B20
- (void)setProgress:(float)arg0 animated:(BOOL)arg1;
// IMP 0x1004b5e1c | v24@0:8d16
- (void)setProgressAnimationDuration:(double)arg0;
// IMP 0x1004b5e68 | v24@0:8d16
- (void)setBorderWidth:(double)arg0;
// IMP 0x1004b5eb4 | v24@0:8d16
- (void)setBorderInset:(double)arg0;
// IMP 0x1004b5f00 | v24@0:8d16
- (void)setLineWidth:(double)arg0;
// IMP 0x1004b5f4c | v16@0:8
- (void)tintColorDidChange;
// IMP 0x1004b6060 | v24@0:8Q16
- (void)setShape:(unsigned long long)arg0;
// IMP 0x1004b60c4 | @16@0:8
- (id)progressLayer;
// IMP 0x1004b60c8 | d16@0:8
- (double)progressAnimationDuration;
// IMP 0x1004b60d8 | f16@0:8
- (float)progress;
// IMP 0x1004b60e8 | d16@0:8
- (double)borderWidth;
// IMP 0x1004b60f8 | d16@0:8
- (double)borderInset;
// IMP 0x1004b6108 | d16@0:8
- (double)lineWidth;
// IMP 0x1004b6118 | Q16@0:8
- (unsigned long long)shape;
// IMP 0x1004b5b30 | #16@0:8
+ (Class)layerClass;
@end
