// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88e58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmotionInputManager : NSObject
// ivar _boundTextField encoding=@"UITextField" offset=8
// ivar _boundTextView encoding=@"UITextView" offset=16
// ivar _emotionView encoding=@"QMUIEmotionView" offset=24
// ivar _selectedRangeForBoundTextInput encoding={_NSRange="location"Q"length"Q} offset=32
// property boundTextField attributes=T@"UITextField",W,N,V_boundTextField
// property boundTextView attributes=T@"UITextView",W,N,V_boundTextView
// property selectedRangeForBoundTextInput attributes=T{_NSRange=QQ},N,V_selectedRangeForBoundTextInput
// property emotionView attributes=T@"QMUIEmotionView",R,N,V_emotionView
// IMP 0x100478aa8 | @16@0:8
- (id)init;
// IMP 0x100478ed4 | @16@0:8
- (id)boundInputView;
// IMP 0x100478f50 | B20@0:8B16
- (BOOL)deleteEmotionDisplayNameAtCurrentSelectedRangeForce:(BOOL)arg0;
// IMP 0x1004793c8 | B40@0:8{_NSRange=QQ}16@32
- (BOOL)shouldTakeOverControlDeleteKeyWithChangeTextInRange:(struct _NSRange)arg0 replacementText:(id)arg1;
// IMP 0x100479480 | @16@0:8
- (id)boundTextField;
// IMP 0x100479498 | v24@0:8@16
- (void)setBoundTextField:(id)arg0;
// IMP 0x1004794a4 | @16@0:8
- (id)boundTextView;
// IMP 0x1004794bc | v24@0:8@16
- (void)setBoundTextView:(id)arg0;
// IMP 0x1004794c8 | {_NSRange=QQ}16@0:8
- (struct _NSRange)selectedRangeForBoundTextInput;
// IMP 0x1004794d4 | v32@0:8{_NSRange=QQ}16
- (void)setSelectedRangeForBoundTextInput:(struct _NSRange)arg0;
// IMP 0x1004794dc | @16@0:8
- (id)emotionView;
// IMP 0x1004794e4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
