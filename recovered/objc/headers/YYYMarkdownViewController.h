// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d868
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMarkdownViewController : QMUICommonViewController
// ivar _filePath encoding=@"NSString" offset=16
// ivar _textView encoding=@"UITextView" offset=24
// property textView attributes=T@"UITextView",&,N,V_textView
// property filePath attributes=T@"NSString",C,N,V_filePath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10015f9cc | v16@0:8
- (void)viewDidLoad;
// IMP 0x100161c1c | B56@0:8@16@24{_NSRange=QQ}32q48
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange)arg2 interaction:(long long)arg3;
// IMP 0x1001622dc | v16@0:8
- (void)viewSafeAreaInsetsDidChange;
// IMP 0x10016253c | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1001628a4 | v16@0:8
- (void)initSubviews;
// IMP 0x100162a70 | @16@0:8
- (id)filePath;
// IMP 0x100162a8c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x100162ab0 | @16@0:8
- (id)textView;
// IMP 0x100162ae4 | v24@0:8@16
- (void)setTextView:(id)arg0;
// IMP 0x100162b3c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10015e4d0 | v16@0:8
+ (void)load;
@end
