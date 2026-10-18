// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e930
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface _QMUINavigationInteractiveGestureDelegator : NSObject
// ivar _parentViewController encoding=@"UINavigationController" offset=8
// property parentViewController attributes=T@"UINavigationController",R,W,N,V_parentViewController
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100504bcc | @24@0:8@16
- (id)initWithParentViewController:(id)arg0;
// IMP 0x100504c38 | B32@0:8@16@24
- (BOOL)_gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1;
// IMP 0x100504d98 | B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
// IMP 0x100504f1c | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
// IMP 0x100505040 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
// IMP 0x100505168 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
// IMP 0x1005051e0 | @16@0:8
- (id)parentViewController;
// IMP 0x1005051f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
