// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81fa0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignFileNameRuleTableViewCell : UITableViewCell
// ivar _rule encoding=Q offset=8
// ivar _label encoding=@"UILabel" offset=16
// ivar _buttonView encoding=@"QMUIFloatLayoutView" offset=24
// ivar _ruleChangeHandle encoding=@? offset=32
// property rule attributes=TQ,N,V_rule
// property label attributes=T@"UILabel",&,N,V_label
// property buttonView attributes=T@"QMUIFloatLayoutView",&,N,V_buttonView
// property ruleChangeHandle attributes=T@?,C,N,V_ruleChangeHandle
// IMP 0x1003f7c64 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1003f7de4 | v16@0:8
- (void)loadSubviews;
// IMP 0x1003f88f8 | v24@0:8@16
- (void)buttonHandle:(id)arg0;
// IMP 0x1003f8e30 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1003f908c | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1003f91bc | v16@0:8
- (void)reloadButtonState;
// IMP 0x1003f98bc | v24@0:8Q16
- (void)setRule:(unsigned long long)arg0;
// IMP 0x1003fa148 | Q16@0:8
- (unsigned long long)rule;
// IMP 0x1003fa17c | @16@0:8
- (id)label;
// IMP 0x1003fa198 | v24@0:8@16
- (void)setLabel:(id)arg0;
// IMP 0x1003fa210 | @16@0:8
- (id)buttonView;
// IMP 0x1003fa238 | v24@0:8@16
- (void)setButtonView:(id)arg0;
// IMP 0x1003fa258 | @?16@0:8
- (id /* block */)ruleChangeHandle;
// IMP 0x1003fa290 | v24@0:8@?16
- (void)setRuleChangeHandle:(id /* block */)arg0;
// IMP 0x1003fa31c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
