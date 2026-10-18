// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8eba0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface _QMUIUpdatesIndicatorView : UIView
// ivar _offset encoding={CGPoint="x"d"y"d} offset=8
// ivar _offsetLandscape encoding={CGPoint="x"d"y"d} offset=24
// ivar _centerOffset encoding={CGPoint="x"d"y"d} offset=40
// ivar _centerOffsetLandscape encoding={CGPoint="x"d"y"d} offset=56
// property offset attributes=T{CGPoint=dd},N,V_offset
// property offsetLandscape attributes=T{CGPoint=dd},N,V_offsetLandscape
// property centerOffset attributes=T{CGPoint=dd},N,V_centerOffset
// property centerOffsetLandscape attributes=T{CGPoint=dd},N,V_centerOffsetLandscape
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10052972c | v32@0:8{CGPoint=dd}16
- (void)setOffset:(struct CGPoint)arg0;
// IMP 0x1005297bc | v32@0:8{CGPoint=dd}16
- (void)setOffsetLandscape:(struct CGPoint)arg0;
// IMP 0x10052984c | v32@0:8{CGPoint=dd}16
- (void)setCenterOffset:(struct CGPoint)arg0;
// IMP 0x1005298dc | v32@0:8{CGPoint=dd}16
- (void)setCenterOffsetLandscape:(struct CGPoint)arg0;
// IMP 0x10052996c | {CGPoint=dd}16@0:8
- (struct CGPoint)offset;
// IMP 0x100529980 | {CGPoint=dd}16@0:8
- (struct CGPoint)offsetLandscape;
// IMP 0x100529994 | {CGPoint=dd}16@0:8
- (struct CGPoint)centerOffset;
// IMP 0x1005299a8 | {CGPoint=dd}16@0:8
- (struct CGPoint)centerOffsetLandscape;
@end
