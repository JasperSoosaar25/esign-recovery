// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8dd78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface _QMUITextFieldDelegator : NSObject
// ivar _textField encoding=@"QMUITextField" offset=8
// property textField attributes=T@"QMUITextField",W,N,V_textField
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004cb708 | B48@0:8@16{_NSRange=QQ}24@40
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
// IMP 0x1004cbc0c | v24@0:8@16
- (void)handleTextChangeEvent:(id)arg0;
// IMP 0x1004cbdcc | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x1004cbf60 | @16@0:8
- (id)textField;
// IMP 0x1004cbf78 | v24@0:8@16
- (void)setTextField:(id)arg0;
// IMP 0x1004cbf84 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
