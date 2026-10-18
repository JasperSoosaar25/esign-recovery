// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a3a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIKeyboardViewFrameObserver : NSObject
// ivar _keyboardView encoding=@"UIView" offset=8
// ivar _delegate encoding=@"<QMUIKeyboardViewFrameObserverDelegate>" offset=16
// property delegate attributes=T@"<QMUIKeyboardViewFrameObserverDelegate>",W,N,V_delegate
// IMP 0x1004946e8 | v24@0:8@16
- (void)addToKeyboardView:(id)arg0;
// IMP 0x10049476c | v16@0:8
- (void)addFrameObserver;
// IMP 0x100494804 | v16@0:8
- (void)removeFrameObserver;
// IMP 0x100494874 | v16@0:8
- (void)dealloc;
// IMP 0x1004948ec | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100494a94 | @16@0:8
- (id)delegate;
// IMP 0x100494aac | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100494ab8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004948b8 | @24@0:8@16
+ (id)observerForView:(id)arg0;
@end
