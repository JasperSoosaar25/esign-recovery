// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a4e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUILabel : UILabel
// ivar _canPerformCopyAction encoding=B offset=8
// ivar _truncatingTailView encoding=@"UIView" offset=16
// ivar _menuItemTitleForCopyAction encoding=@"NSString" offset=24
// ivar _highlightedBackgroundColor encoding=@"UIColor" offset=32
// ivar _didCopyBlock encoding=@? offset=40
// ivar _originalBackgroundColor encoding=@"UIColor" offset=48
// ivar _longGestureRecognizer encoding=@"UILongPressGestureRecognizer" offset=56
// ivar _contentEdgeInsets encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=64
// property originalBackgroundColor attributes=T@"UIColor",&,N,V_originalBackgroundColor
// property longGestureRecognizer attributes=T@"UILongPressGestureRecognizer",&,N,V_longGestureRecognizer
// property contentEdgeInsets attributes=T{UIEdgeInsets=dddd},N,V_contentEdgeInsets
// property truncatingTailView attributes=T@"UIView",&,N,V_truncatingTailView
// property canPerformCopyAction attributes=TB,N,V_canPerformCopyAction
// property menuItemTitleForCopyAction attributes=T@"NSString",C,N,V_menuItemTitleForCopyAction
// property highlightedBackgroundColor attributes=T@"UIColor",&,N,V_highlightedBackgroundColor
// property didCopyBlock attributes=T@?,C,N,V_didCopyBlock
// IMP 0x1004994cc | v16@0:8
- (void)dealloc;
// IMP 0x100499534 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg0;
// IMP 0x10049954c | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x1004995e8 | {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// IMP 0x10049961c | v16@0:8
- (void)layoutSubviews;
// IMP 0x100499934 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawTextInRect:(struct CGRect)arg0;
// IMP 0x100499a6c | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x100499b20 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x100499bb4 | @16@0:8
- (id)backgroundColor;
// IMP 0x100499bb8 | v24@0:8@16
- (void)setTruncatingTailView:(id)arg0;
// IMP 0x100499c38 | v20@0:8B16
- (void)setCanPerformCopyAction:(BOOL)arg0;
// IMP 0x100499dc4 | B16@0:8
- (BOOL)canBecomeFirstResponder;
// IMP 0x100499dc8 | B32@0:8:16@24
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
// IMP 0x100499dfc | v24@0:8@16
- (void)copyString:(id)arg0;
// IMP 0x100499ec8 | v24@0:8@16
- (void)handleLongPressGestureRecognizer:(id)arg0;
// IMP 0x10049a0c4 | v24@0:8@16
- (void)handleMenuWillHideNotification:(id)arg0;
// IMP 0x10049a0fc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)contentEdgeInsets;
// IMP 0x10049a114 | @16@0:8
- (id)truncatingTailView;
// IMP 0x10049a124 | B16@0:8
- (BOOL)canPerformCopyAction;
// IMP 0x10049a134 | @16@0:8
- (id)menuItemTitleForCopyAction;
// IMP 0x10049a144 | v24@0:8@16
- (void)setMenuItemTitleForCopyAction:(id)arg0;
// IMP 0x10049a150 | @16@0:8
- (id)highlightedBackgroundColor;
// IMP 0x10049a160 | v24@0:8@16
- (void)setHighlightedBackgroundColor:(id)arg0;
// IMP 0x10049a174 | @?16@0:8
- (id /* block */)didCopyBlock;
// IMP 0x10049a184 | v24@0:8@?16
- (void)setDidCopyBlock:(id /* block */)arg0;
// IMP 0x10049a190 | @16@0:8
- (id)originalBackgroundColor;
// IMP 0x10049a1a0 | v24@0:8@16
- (void)setOriginalBackgroundColor:(id)arg0;
// IMP 0x10049a1b4 | @16@0:8
- (id)longGestureRecognizer;
// IMP 0x10049a1c4 | v24@0:8@16
- (void)setLongGestureRecognizer:(id)arg0;
// IMP 0x10049a1d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
