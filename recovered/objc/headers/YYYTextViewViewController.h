// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b4e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTextViewViewController : QMUICommonViewController
// ivar _filePath encoding=@"NSString" offset=16
// ivar _textView encoding=@"UITextView" offset=24
// ivar _encoding encoding=Q offset=32
// ivar _keyboardManager encoding=@"QMUIKeyboardManager" offset=40
// ivar _toolView encoding=@"YYYTextViewEditorTool" offset=48
// property textView attributes=T@"UITextView",&,N,V_textView
// property encoding attributes=TQ,N,V_encoding
// property keyboardManager attributes=T@"QMUIKeyboardManager",&,N,V_keyboardManager
// property toolView attributes=T@"YYYTextViewEditorTool",&,N,V_toolView
// property filePath attributes=T@"NSString",&,N,V_filePath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10002c714 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10002d06c | v16@0:8
- (void)popViewController;
// IMP 0x10002d10c | v24@0:8@16
- (void)keyboardWillChangeFrameWithUserInfo:(id)arg0;
// IMP 0x10002d598 | v24@0:8@16
- (void)stepperValueChange:(id)arg0;
// IMP 0x10002dc70 | v16@0:8
- (void)initSubviews;
// IMP 0x10002e880 | v16@0:8
- (void)saveHandle;
// IMP 0x10002ee68 | v24@0:8@16
- (void)buttonHandle:(id)arg0;
// IMP 0x10002f0c4 | v24@0:8@16
- (void)textViewDidChange:(id)arg0;
// IMP 0x10002f188 | v24@0:8@16
- (void)textViewDidBeginEditing:(id)arg0;
// IMP 0x10002f248 | v24@0:8@16
- (void)textViewDidEndEditing:(id)arg0;
// IMP 0x10002f34c | @16@0:8
- (id)filePath;
// IMP 0x10002f368 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x10002f37c | @16@0:8
- (id)textView;
// IMP 0x10002f3b4 | v24@0:8@16
- (void)setTextView:(id)arg0;
// IMP 0x10002f440 | Q16@0:8
- (unsigned long long)encoding;
// IMP 0x10002f45c | v24@0:8Q16
- (void)setEncoding:(unsigned long long)arg0;
// IMP 0x10002f4a0 | @16@0:8
- (id)keyboardManager;
// IMP 0x10002f4c8 | v24@0:8@16
- (void)setKeyboardManager:(id)arg0;
// IMP 0x10002f52c | @16@0:8
- (id)toolView;
// IMP 0x10002f554 | v24@0:8@16
- (void)setToolView:(id)arg0;
// IMP 0x10002f5f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
