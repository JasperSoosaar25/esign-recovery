// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8ca20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPopContainerMaskControl : UIControl
// ivar _popupContainerView encoding=@"QMUIPopupContainerView" offset=8
// property popupContainerView attributes=T@"QMUIPopupContainerView",W,N,V_popupContainerView
// IMP 0x1004bb3d4 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004bb434 | @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(struct CGPoint)arg0 withEvent:(id)arg1;
// IMP 0x1004bb4d8 | v24@0:8@16
- (void)handleMaskEvent:(id)arg0;
// IMP 0x1004bb574 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004bb5d4 | @16@0:8
- (id)popupContainerView;
// IMP 0x1004bb5f4 | v24@0:8@16
- (void)setPopupContainerView:(id)arg0;
// IMP 0x1004bb608 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
