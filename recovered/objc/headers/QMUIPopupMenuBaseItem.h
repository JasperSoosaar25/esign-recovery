// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8cac0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPopupMenuBaseItem : UIView
// ivar _title encoding=@"NSString" offset=8
// ivar _height encoding=d offset=16
// ivar _handler encoding=@? offset=24
// ivar _menuView encoding=@"QMUIPopupMenuView" offset=32
// property title attributes=T@"NSString",C,N,V_title
// property height attributes=Td,N,V_height
// property handler attributes=T@?,C,N,V_handler
// property menuView attributes=T@"QMUIPopupMenuView",W,N,V_menuView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004bb73c | @16@0:8
- (id)init;
// IMP 0x1004bb790 | v16@0:8
- (void)updateAppearance;
// IMP 0x1004bb794 | @16@0:8
- (id)title;
// IMP 0x1004bb7a4 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x1004bb7b0 | d16@0:8
- (double)height;
// IMP 0x1004bb7c0 | v24@0:8d16
- (void)setHeight:(double)arg0;
// IMP 0x1004bb7d0 | @?16@0:8
- (id /* block */)handler;
// IMP 0x1004bb7e0 | v24@0:8@?16
- (void)setHandler:(id /* block */)arg0;
// IMP 0x1004bb7ec | @16@0:8
- (id)menuView;
// IMP 0x1004bb80c | v24@0:8@16
- (void)setMenuView:(id)arg0;
// IMP 0x1004bb820 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
