// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b688
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIMoreOperationItemView : QMUIButton
// ivar _tag encoding=q offset=8
// ivar _moreOperationController encoding=@"QMUIMoreOperationController" offset=16
// ivar _handler encoding=@? offset=24
// property moreOperationController attributes=T@"QMUIMoreOperationController",W,N,V_moreOperationController
// property handler attributes=T@?,C,N,V_handler
// property indexPath attributes=T@"NSIndexPath",R,N
// property tag attributes=Tq,D,N
// IMP 0x1004a7bec | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1004a7cc4 | v20@0:8B16
- (void)setHighlighted:(BOOL)arg0;
// IMP 0x1004a7d94 | v24@0:8@16
- (void)formatItemViewStyleWithMoreOperationController:(id)arg0;
// IMP 0x1004a7ed4 | v24@0:8q16
- (void)setTag:(long long)arg0;
// IMP 0x1004a7ee8 | q16@0:8
- (long long)tag;
// IMP 0x1004a7f08 | @16@0:8
- (id)indexPath;
// IMP 0x1004a7f78 | @16@0:8
- (id)description;
// IMP 0x1004a8298 | @16@0:8
- (id)moreOperationController;
// IMP 0x1004a82b8 | v24@0:8@16
- (void)setMoreOperationController:(id)arg0;
// IMP 0x1004a82cc | @?16@0:8
- (id /* block */)handler;
// IMP 0x1004a82dc | v24@0:8@?16
- (void)setHandler:(id /* block */)arg0;
// IMP 0x1004a82e8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004a7a30 | @56@0:8@16@24@32@40@?48
+ (id)itemViewWithImage:(id)arg0 selectedImage:(id)arg1 title:(id)arg2 selectedTitle:(id)arg3 handler:(id /* block */)arg4;
// IMP 0x1004a7b60 | @40@0:8@16@24@?32
+ (id)itemViewWithImage:(id)arg0 title:(id)arg1 handler:(id /* block */)arg2;
// IMP 0x1004a7b74 | @48@0:8@16@24q32@?40
+ (id)itemViewWithImage:(id)arg0 title:(id)arg1 tag:(long long)arg2 handler:(id /* block */)arg3;
// IMP 0x1004a7bb0 | @64@0:8@16@24@32@40q48@?56
+ (id)itemViewWithImage:(id)arg0 selectedImage:(id)arg1 title:(id)arg2 selectedTitle:(id)arg3 tag:(long long)arg4 handler:(id /* block */)arg5;
@end
