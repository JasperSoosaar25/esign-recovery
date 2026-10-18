// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8ddf0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITextView : UITextView
// ivar _shouldResponseToProgrammaticallyTextChanges encoding=B offset=8
// ivar _shouldCountingNonASCIICharacterAsTwo encoding=B offset=9
// ivar _debug encoding=B offset=10
// ivar _postInitializationMethodCalled encoding=B offset=11
// ivar _isSettingTextByShouldChange encoding=B offset=12
// ivar _shouldRejectSystemScroll encoding=B offset=13
// ivar _maximumTextLength encoding=Q offset=16
// ivar _placeholder encoding=@"NSString" offset=24
// ivar _placeholderColor encoding=@"UIColor" offset=32
// ivar _maximumHeight encoding=d offset=40
// ivar _canPerformPasteActionBlock encoding=@? offset=48
// ivar _pasteBlock encoding=@? offset=56
// ivar _delegator encoding=@"_QMUITextViewDelegator" offset=64
// ivar _placeholderLabel encoding=@"UILabel" offset=72
// ivar _placeholderMargins encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=80
// property debug attributes=TB,N,V_debug
// property postInitializationMethodCalled attributes=TB,N,V_postInitializationMethodCalled
// property delegator attributes=T@"_QMUITextViewDelegator",&,N,V_delegator
// property isSettingTextByShouldChange attributes=TB,N,V_isSettingTextByShouldChange
// property shouldRejectSystemScroll attributes=TB,N,V_shouldRejectSystemScroll
// property placeholderLabel attributes=T@"UILabel",&,N,V_placeholderLabel
// property delegate attributes=T@"<QMUITextViewDelegate>",W,D,N
// property shouldResponseToProgrammaticallyTextChanges attributes=TB,N,V_shouldResponseToProgrammaticallyTextChanges
// property maximumTextLength attributes=TQ,N,V_maximumTextLength
// property shouldCountingNonASCIICharacterAsTwo attributes=TB,N,V_shouldCountingNonASCIICharacterAsTwo
// property placeholder attributes=T@"NSString",C,N,V_placeholder
// property placeholderColor attributes=T@"UIColor",&,N,V_placeholderColor
// property placeholderMargins attributes=T{UIEdgeInsets=dddd},N,V_placeholderMargins
// property maximumHeight attributes=Td,N,V_maximumHeight
// property canPerformPasteActionBlock attributes=T@?,C,N,V_canPerformPasteActionBlock
// property pasteBlock attributes=T@?,C,N,V_pasteBlock
// IMP 0x1004cbf8c | @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(struct CGRect)arg0 textContainer:(id)arg1;
// IMP 0x1004cc0f4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004cc144 | v16@0:8
- (void)didInitialize;
// IMP 0x1004cc45c | v16@0:8
- (void)dealloc;
// IMP 0x1004cc4d0 | @16@0:8
- (id)description;
// IMP 0x1004cc61c | B24@0:8@16
- (BOOL)isCurrentTextDifferentOfText:(id)arg0;
// IMP 0x1004cc6a0 | v24@0:8@16
- (void)_qmui_setTextForShouldChange:(id)arg0;
// IMP 0x1004cc758 | v24@0:8@16
- (void)setAttributedText:(id)arg0;
// IMP 0x1004cc974 | v24@0:8@16
- (void)setTypingAttributes:(id)arg0;
// IMP 0x1004cc9bc | v24@0:8@16
- (void)setFont:(id)arg0;
// IMP 0x1004cca04 | v24@0:8@16
- (void)setTextColor:(id)arg0;
// IMP 0x1004cca4c | v24@0:8q16
- (void)setTextAlignment:(long long)arg0;
// IMP 0x1004cca94 | v24@0:8@16
- (void)setPlaceholder:(id)arg0;
// IMP 0x1004ccc00 | v24@0:8@16
- (void)setPlaceholderColor:(id)arg0;
// IMP 0x1004ccc78 | v16@0:8
- (void)updatePlaceholderStyle;
// IMP 0x1004cccb4 | v16@0:8
- (void)updatePlaceholderLabelHidden;
// IMP 0x1004ccd64 | {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{CGSize=dd}16
- (struct CGRect)preferredPlaceholderFrameWithSize:(struct CGSize)arg0;
// IMP 0x1004ccf84 | v24@0:8@16
- (void)handleTextChanged:(id)arg0;
// IMP 0x1004cd530 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004cd68c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)allInsets;
// IMP 0x1004cd714 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setFrame:(struct CGRect)arg0;
// IMP 0x1004cd9b0 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setBounds:(struct CGRect)arg0;
// IMP 0x1004cd9f4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004cdacc | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg0;
// IMP 0x1004cdb14 | Q24@0:8@16
- (unsigned long long)lengthWithString:(id)arg0;
// IMP 0x1004cdb6c | v36@0:8{CGPoint=dd}16B32
- (void)setContentOffset:(struct CGPoint)arg0 animated:(BOOL)arg1;
// IMP 0x1004cdd7c | v32@0:8{CGPoint=dd}16
- (void)setContentOffset:(struct CGPoint)arg0;
// IMP 0x1004cdf84 | B32@0:8:16@24
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
// IMP 0x1004ce050 | v24@0:8@16
- (void)paste:(id)arg0;
// IMP 0x1004ce0fc | B16@0:8
- (BOOL)shouldResponseToProgrammaticallyTextChanges;
// IMP 0x1004ce10c | v20@0:8B16
- (void)setShouldResponseToProgrammaticallyTextChanges:(BOOL)arg0;
// IMP 0x1004ce11c | Q16@0:8
- (unsigned long long)maximumTextLength;
// IMP 0x1004ce12c | v24@0:8Q16
- (void)setMaximumTextLength:(unsigned long long)arg0;
// IMP 0x1004ce13c | B16@0:8
- (BOOL)shouldCountingNonASCIICharacterAsTwo;
// IMP 0x1004ce14c | v20@0:8B16
- (void)setShouldCountingNonASCIICharacterAsTwo:(BOOL)arg0;
// IMP 0x1004ce15c | @16@0:8
- (id)placeholder;
// IMP 0x1004ce16c | @16@0:8
- (id)placeholderColor;
// IMP 0x1004ce17c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)placeholderMargins;
// IMP 0x1004ce194 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPlaceholderMargins:(struct UIEdgeInsets)arg0;
// IMP 0x1004ce1ac | d16@0:8
- (double)maximumHeight;
// IMP 0x1004ce1bc | v24@0:8d16
- (void)setMaximumHeight:(double)arg0;
// IMP 0x1004ce1cc | @?16@0:8
- (id /* block */)canPerformPasteActionBlock;
// IMP 0x1004ce1dc | v24@0:8@?16
- (void)setCanPerformPasteActionBlock:(id /* block */)arg0;
// IMP 0x1004ce1e8 | @?16@0:8
- (id /* block */)pasteBlock;
// IMP 0x1004ce1f8 | v24@0:8@?16
- (void)setPasteBlock:(id /* block */)arg0;
// IMP 0x1004ce204 | B16@0:8
- (BOOL)debug;
// IMP 0x1004ce214 | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x1004ce224 | B16@0:8
- (BOOL)postInitializationMethodCalled;
// IMP 0x1004ce234 | v20@0:8B16
- (void)setPostInitializationMethodCalled:(BOOL)arg0;
// IMP 0x1004ce244 | @16@0:8
- (id)delegator;
// IMP 0x1004ce254 | v24@0:8@16
- (void)setDelegator:(id)arg0;
// IMP 0x1004ce268 | B16@0:8
- (BOOL)isSettingTextByShouldChange;
// IMP 0x1004ce278 | v20@0:8B16
- (void)setIsSettingTextByShouldChange:(BOOL)arg0;
// IMP 0x1004ce288 | B16@0:8
- (BOOL)shouldRejectSystemScroll;
// IMP 0x1004ce298 | v20@0:8B16
- (void)setShouldRejectSystemScroll:(BOOL)arg0;
// IMP 0x1004ce2a8 | @16@0:8
- (id)placeholderLabel;
// IMP 0x1004ce2b8 | v24@0:8@16
- (void)setPlaceholderLabel:(id)arg0;
// IMP 0x1004ce2cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
