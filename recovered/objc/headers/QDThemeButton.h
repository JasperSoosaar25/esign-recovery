// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d980
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QDThemeButton : QMUIButton
// ivar _themeColor encoding=@"UIColor" offset=8
// ivar _themeName encoding=@"NSString" offset=16
// property themeColor attributes=T@"UIColor",&,N,V_themeColor
// property themeName attributes=T@"NSString",C,N,V_themeName
// IMP 0x10016e168 | v16@0:8
- (void)updateStyle;
// IMP 0x10016e830 | v24@0:8@16
- (void)setThemeColor:(id)arg0;
// IMP 0x10016e89c | v24@0:8@16
- (void)setThemeName:(id)arg0;
// IMP 0x10016e938 | v20@0:8B16
- (void)setSelected:(BOOL)arg0;
// IMP 0x10016e9e0 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x10016ea44 | @16@0:8
- (id)themeColor;
// IMP 0x10016ea7c | @16@0:8
- (id)themeName;
// IMP 0x10016eaa4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
