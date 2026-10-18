// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8dd50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITextField : UITextField
// ivar _shouldResponseToProgrammaticallyTextChanges encoding=B offset=8
// ivar _shouldCountingNonASCIICharacterAsTwo encoding=B offset=9
// ivar _placeholderColor encoding=@"UIColor" offset=16
// ivar _maximumTextLength encoding=Q offset=24
// ivar _canPerformPasteActionBlock encoding=@? offset=32
// ivar _pasteBlock encoding=@? offset=40
// ivar _delegator encoding=@"_QMUITextFieldDelegator" offset=48
// ivar _clearButtonPositionAdjustment encoding={UIOffset="horizontal"d"vertical"d} offset=56
// ivar _textInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=72
// property delegator attributes=T@"_QMUITextFieldDelegator",&,N,V_delegator
// property delegate attributes=T@"<QMUITextFieldDelegate>",W,D,N
// property placeholderColor attributes=T@"UIColor",&,N,V_placeholderColor
// property textInsets attributes=T{UIEdgeInsets=dddd},N,V_textInsets
// property clearButtonPositionAdjustment attributes=T{UIOffset=dd},N,V_clearButtonPositionAdjustment
// property shouldResponseToProgrammaticallyTextChanges attributes=TB,N,V_shouldResponseToProgrammaticallyTextChanges
// property maximumTextLength attributes=TQ,N,V_maximumTextLength
// property shouldCountingNonASCIICharacterAsTwo attributes=TB,N,V_shouldCountingNonASCIICharacterAsTwo
// property canPerformPasteActionBlock attributes=T@?,C,N,V_canPerformPasteActionBlock
// property pasteBlock attributes=T@?,C,N,V_pasteBlock
// IMP 0x1004ca9c0 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004cab28 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004cab78 | v16@0:8
- (void)didInitialize;
// IMP 0x1004cad64 | v16@0:8
- (void)dealloc;
// IMP 0x1004cadac | v24@0:8@16
- (void)setPlaceholderColor:(id)arg0;
// IMP 0x1004cae08 | v24@0:8@16
- (void)setPlaceholder:(id)arg0;
// IMP 0x1004cae6c | v16@0:8
- (void)updateAttributedPlaceholderIfNeeded;
// IMP 0x1004caf7c | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004cb058 | v24@0:8@16
- (void)setText:(id)arg0;
// IMP 0x1004cb0fc | v24@0:8@16
- (void)setAttributedText:(id)arg0;
// IMP 0x1004cb1a0 | v24@0:8@16
- (void)fireTextDidChangeEventForTextField:(id)arg0;
// IMP 0x1004cb204 | Q24@0:8@16
- (unsigned long long)lengthWithString:(id)arg0;
// IMP 0x1004cb25c | {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (struct CGRect)textRectForBounds:(struct CGRect)arg0;
// IMP 0x1004cb2e4 | {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (struct CGRect)editingRectForBounds:(struct CGRect)arg0;
// IMP 0x1004cb36c | {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg0;
// IMP 0x1004cb404 | B32@0:8:16@24
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
// IMP 0x1004cb4d0 | v24@0:8@16
- (void)paste:(id)arg0;
// IMP 0x1004cb57c | @16@0:8
- (id)placeholderColor;
// IMP 0x1004cb58c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)textInsets;
// IMP 0x1004cb5a4 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004cb5bc | {UIOffset=dd}16@0:8
- (struct UIOffset)clearButtonPositionAdjustment;
// IMP 0x1004cb5d0 | v32@0:8{UIOffset=dd}16
- (void)setClearButtonPositionAdjustment:(struct UIOffset)arg0;
// IMP 0x1004cb5e4 | B16@0:8
- (BOOL)shouldResponseToProgrammaticallyTextChanges;
// IMP 0x1004cb5f4 | v20@0:8B16
- (void)setShouldResponseToProgrammaticallyTextChanges:(BOOL)arg0;
// IMP 0x1004cb604 | Q16@0:8
- (unsigned long long)maximumTextLength;
// IMP 0x1004cb614 | v24@0:8Q16
- (void)setMaximumTextLength:(unsigned long long)arg0;
// IMP 0x1004cb624 | B16@0:8
- (BOOL)shouldCountingNonASCIICharacterAsTwo;
// IMP 0x1004cb634 | v20@0:8B16
- (void)setShouldCountingNonASCIICharacterAsTwo:(BOOL)arg0;
// IMP 0x1004cb644 | @?16@0:8
- (id /* block */)canPerformPasteActionBlock;
// IMP 0x1004cb654 | v24@0:8@?16
- (void)setCanPerformPasteActionBlock:(id /* block */)arg0;
// IMP 0x1004cb660 | @?16@0:8
- (id /* block */)pasteBlock;
// IMP 0x1004cb670 | v24@0:8@?16
- (void)setPasteBlock:(id /* block */)arg0;
// IMP 0x1004cb67c | @16@0:8
- (id)delegator;
// IMP 0x1004cb68c | v24@0:8@16
- (void)setDelegator:(id)arg0;
// IMP 0x1004cb6a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
