// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c816c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSwitchTableViewCell : UITableViewCell
// ivar _switchButton encoding=@"UISwitch" offset=8
// ivar _switchButtonHandleBlock encoding=@? offset=16
// property switchButton attributes=T@"UISwitch",&,N,V_switchButton
// property switchButtonHandleBlock attributes=T@?,C,N,V_switchButtonHandleBlock
// IMP 0x10039fe30 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1003a0174 | v16@0:8
- (void)prepareForReuse;
// IMP 0x1003a02d4 | v24@0:8@16
- (void)switchButtonHandle:(id)arg0;
// IMP 0x1003a03f8 | @16@0:8
- (id)switchButton;
// IMP 0x1003a0420 | v24@0:8@16
- (void)setSwitchButton:(id)arg0;
// IMP 0x1003a044c | @?16@0:8
- (id /* block */)switchButtonHandleBlock;
// IMP 0x1003a0474 | v24@0:8@?16
- (void)setSwitchButtonHandleBlock:(id /* block */)arg0;
// IMP 0x1003a04f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
