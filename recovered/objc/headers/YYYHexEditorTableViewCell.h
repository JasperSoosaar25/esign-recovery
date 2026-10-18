// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81210
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYHexEditorTableViewCell : UITableViewCell
// ivar _addressButton encoding=@"UIButton" offset=8
// ivar _stackView encoding=@"UIStackView" offset=16
// ivar _byteArray encoding=@"NSMutableArray" offset=24
// ivar _stringArray encoding=@"NSMutableArray" offset=32
// ivar _info encoding=@"NSMutableDictionary" offset=40
// ivar _adddressButtonHandleBlock encoding=@? offset=48
// property addressButton attributes=T@"UIButton",&,N,V_addressButton
// property stackView attributes=T@"UIStackView",&,N,V_stackView
// property byteArray attributes=T@"NSMutableArray",&,N,V_byteArray
// property stringArray attributes=T@"NSMutableArray",&,N,V_stringArray
// property info attributes=T@"NSMutableDictionary",&,N,V_info
// property adddressButtonHandleBlock attributes=T@?,C,N,V_adddressButtonHandleBlock
// IMP 0x1003547fc | v16@0:8
- (void)awakeFromNib;
// IMP 0x10035488c | v24@0:8B16B20
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
// IMP 0x10035493c | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x100354f30 | v16@0:8
- (void)prepareForReuse;
// IMP 0x100354ff4 | v16@0:8
- (void)clearSelect;
// IMP 0x100355390 | @16@0:8
- (id)selectBtnBackgroundColor;
// IMP 0x100355584 | v24@0:8@16
- (void)setupInfo:(id)arg0;
// IMP 0x10035649c | v24@0:8@16
- (void)byteButtonHandle:(id)arg0;
// IMP 0x100356dfc | v24@0:8@16
- (void)stringButtonHandle:(id)arg0;
// IMP 0x100357744 | v16@0:8
- (void)addressButtonHandle;
// IMP 0x100357a38 | v16@0:8
- (void)loadSubviews;
// IMP 0x10035865c | v16@0:8
- (void)layoutSubviews;
// IMP 0x100358984 | @16@0:8
- (id)addressButton;
// IMP 0x1003589b8 | v24@0:8@16
- (void)setAddressButton:(id)arg0;
// IMP 0x100358a1c | @16@0:8
- (id)stackView;
// IMP 0x100358a50 | v24@0:8@16
- (void)setStackView:(id)arg0;
// IMP 0x100358ac0 | @16@0:8
- (id)byteArray;
// IMP 0x100358adc | v24@0:8@16
- (void)setByteArray:(id)arg0;
// IMP 0x100358b78 | @16@0:8
- (id)stringArray;
// IMP 0x100358ba0 | v24@0:8@16
- (void)setStringArray:(id)arg0;
// IMP 0x100358c1c | @16@0:8
- (id)info;
// IMP 0x100358c44 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x100358c7c | @?16@0:8
- (id /* block */)adddressButtonHandleBlock;
// IMP 0x100358cb4 | v24@0:8@?16
- (void)setAdddressButtonHandleBlock:(id /* block */)arg0;
// IMP 0x100358d28 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
