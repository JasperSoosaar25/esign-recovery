// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7fc40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYProgressView : UIView
// ivar _finishValue encoding=d offset=8
// ivar _currentValue encoding=d offset=16
// property finishValue attributes=Td,N,V_finishValue
// property currentValue attributes=Td,N,V_currentValue
// IMP 0x10027a678 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10027a7dc | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg0;
// IMP 0x10027abdc | v24@0:8d16
- (void)setFinishValue:(double)arg0;
// IMP 0x10027ac3c | v24@0:8d16
- (void)setCurrentValue:(double)arg0;
// IMP 0x10027acec | d16@0:8
- (double)finishValue;
// IMP 0x10027ad20 | d16@0:8
- (double)currentValue;
@end
