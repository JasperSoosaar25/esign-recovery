// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88cf0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIDialogTextFieldViewController : QMUIDialogViewController
// ivar _shouldManageTextFieldsReturnEventAutomatically encoding=B offset=320
// ivar _enablesSubmitButtonAutomatically encoding=B offset=321
// ivar _textFieldLabelFont encoding=@"UIFont" offset=328
// ivar _textFieldLabelTextColor encoding=@"UIColor" offset=336
// ivar _textFieldFont encoding=@"UIFont" offset=344
// ivar _textFieldTextColor encoding=@"UIColor" offset=352
// ivar _textFieldSeparatorColor encoding=@"UIColor" offset=360
// ivar _textFieldHeight encoding=d offset=368
// ivar _shouldEnableSubmitButtonBlock encoding=@? offset=376
// ivar _scrollView encoding=@"UIScrollView" offset=384
// ivar _mutableTitleLabels encoding=@"NSMutableArray" offset=392
// ivar _mutableTextFields encoding=@"NSMutableArray" offset=400
// ivar _mutableSeparatorLayers encoding=@"NSMutableArray" offset=408
// ivar _textFieldLabelMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=416
// ivar _textFieldMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=448
// ivar _textFieldSeparatorInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=480
// property scrollView attributes=T@"UIScrollView",&,N,V_scrollView
// property mutableTitleLabels attributes=T@"NSMutableArray",&,N,V_mutableTitleLabels
// property mutableTextFields attributes=T@"NSMutableArray",&,N,V_mutableTextFields
// property mutableSeparatorLayers attributes=T@"NSMutableArray",&,N,V_mutableSeparatorLayers
// property textFieldLabelFont attributes=T@"UIFont",&,N,V_textFieldLabelFont
// property textFieldLabelTextColor attributes=T@"UIColor",&,N,V_textFieldLabelTextColor
// property textFieldFont attributes=T@"UIFont",&,N,V_textFieldFont
// property textFieldTextColor attributes=T@"UIColor",&,N,V_textFieldTextColor
// property textFieldSeparatorColor attributes=T@"UIColor",&,N,V_textFieldSeparatorColor
// property textFieldLabelMargins attributes=T{UIEdgeInsets=dddd},N,V_textFieldLabelMargins
// property textFieldMargins attributes=T{UIEdgeInsets=dddd},N,V_textFieldMargins
// property textFieldHeight attributes=Td,N,V_textFieldHeight
// property textFieldSeparatorInsets attributes=T{UIEdgeInsets=dddd},N,V_textFieldSeparatorInsets
// property textFieldTitleLabels attributes=T@"NSArray",R,C,N
// property textFields attributes=T@"NSArray",R,C,N
// property textFieldSeparatorLayers attributes=T@"NSArray",R,C,N
// property shouldManageTextFieldsReturnEventAutomatically attributes=TB,N,V_shouldManageTextFieldsReturnEventAutomatically
// property enablesSubmitButtonAutomatically attributes=TB,N,V_enablesSubmitButtonAutomatically
// property shouldEnableSubmitButtonBlock attributes=T@?,C,N,V_shouldEnableSubmitButtonBlock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004759fc | v16@0:8
- (void)didInitialize;
// IMP 0x100475bc8 | v32@0:8@16@?24
- (void)addTextFieldWithTitle:(id)arg0 configurationHandler:(id /* block */)arg1;
// IMP 0x100475d1c | @16@0:8
- (id)generateTextFieldTitleLabel;
// IMP 0x100475dcc | @16@0:8
- (id)generateTextField;
// IMP 0x100475ed4 | @16@0:8
- (id)generateTextFieldSeparatorLayer;
// IMP 0x100475f80 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x1004766e0 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x1004767bc | v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg0;
// IMP 0x100476820 | v24@0:8@16
- (void)setContentViewBackgroundColor:(id)arg0;
// IMP 0x1004768a8 | v24@0:8@16
- (void)setTextFieldLabelFont:(id)arg0;
// IMP 0x1004769bc | v24@0:8@16
- (void)setTextFieldLabelTextColor:(id)arg0;
// IMP 0x100476a88 | v24@0:8@16
- (void)setTextFieldFont:(id)arg0;
// IMP 0x100476b54 | v24@0:8@16
- (void)setTextFieldTextColor:(id)arg0;
// IMP 0x100476c20 | v24@0:8@16
- (void)setTextFieldSeparatorColor:(id)arg0;
// IMP 0x100476d2c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextFieldLabelMargins:(struct UIEdgeInsets)arg0;
// IMP 0x100476db4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextFieldMargins:(struct UIEdgeInsets)arg0;
// IMP 0x100476e3c | v24@0:8d16
- (void)setTextFieldHeight:(double)arg0;
// IMP 0x100476ebc | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextFieldSeparatorInsets:(struct UIEdgeInsets)arg0;
// IMP 0x100476f44 | @16@0:8
- (id)textFieldTitleLabels;
// IMP 0x100476f80 | @16@0:8
- (id)textFields;
// IMP 0x100476fbc | @16@0:8
- (id)textFieldSeparatorLayers;
// IMP 0x100476ff8 | v20@0:8B16
- (void)setEnablesSubmitButtonAutomatically:(BOOL)arg0;
// IMP 0x100477124 | v16@0:8
- (void)updateSubmitButtonEnables;
// IMP 0x100477168 | B16@0:8
- (BOOL)shouldEnabledSubmitButton;
// IMP 0x100477344 | v24@0:8@16
- (void)handleTextFieldTextDidChangeEvent:(id)arg0;
// IMP 0x1004773bc | v32@0:8@16@?24
- (void)addSubmitButtonWithText:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100477404 | {CGSize=dd}48@0:8@16d24{CGSize=dd}32
- (struct CGSize)preferredContentSizeInModalPresentationViewController:(id)arg0 keyboardHeight:(double)arg1 limitSize:(struct CGSize)arg2;
// IMP 0x100477780 | B24@0:8@16
- (BOOL)textFieldShouldReturn:(id)arg0;
// IMP 0x100477944 | @16@0:8
- (id)textFieldLabelFont;
// IMP 0x100477954 | @16@0:8
- (id)textFieldLabelTextColor;
// IMP 0x100477964 | @16@0:8
- (id)textFieldFont;
// IMP 0x100477974 | @16@0:8
- (id)textFieldTextColor;
// IMP 0x100477984 | @16@0:8
- (id)textFieldSeparatorColor;
// IMP 0x100477994 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textFieldLabelMargins;
// IMP 0x1004779ac | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textFieldMargins;
// IMP 0x1004779c4 | d16@0:8
- (double)textFieldHeight;
// IMP 0x1004779d4 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textFieldSeparatorInsets;
// IMP 0x1004779ec | B16@0:8
- (BOOL)shouldManageTextFieldsReturnEventAutomatically;
// IMP 0x1004779fc | v20@0:8B16
- (void)setShouldManageTextFieldsReturnEventAutomatically:(BOOL)arg0;
// IMP 0x100477a0c | B16@0:8
- (BOOL)enablesSubmitButtonAutomatically;
// IMP 0x100477a1c | @?16@0:8
- (id /* block */)shouldEnableSubmitButtonBlock;
// IMP 0x100477a2c | v24@0:8@?16
- (void)setShouldEnableSubmitButtonBlock:(id /* block */)arg0;
// IMP 0x100477a38 | @16@0:8
- (id)scrollView;
// IMP 0x100477a48 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x100477a5c | @16@0:8
- (id)mutableTitleLabels;
// IMP 0x100477a6c | v24@0:8@16
- (void)setMutableTitleLabels:(id)arg0;
// IMP 0x100477a80 | @16@0:8
- (id)mutableTextFields;
// IMP 0x100477a90 | v24@0:8@16
- (void)setMutableTextFields:(id)arg0;
// IMP 0x100477aa4 | @16@0:8
- (id)mutableSeparatorLayers;
// IMP 0x100477ab4 | v24@0:8@16
- (void)setMutableSeparatorLayers:(id)arg0;
// IMP 0x100477ac8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004757ac | @16@0:8
+ (id)appearance;
// IMP 0x1004757bc | v16@0:8
+ (void)initialize;
@end
