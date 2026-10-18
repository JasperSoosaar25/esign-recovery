// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7f970
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppDetailView : UIView
// ivar _contentView encoding=@"UIView" offset=8
// ivar _logoImage encoding=@"UIImageView" offset=16
// ivar _tableView encoding=@"QMUITableView" offset=24
// ivar _nameLabel encoding=@"UILabel" offset=32
// ivar _closeButton encoding=@"UIButton" offset=40
// ivar _keys encoding=@"NSArray" offset=48
// ivar _info encoding=@"NSDictionary" offset=56
// ivar _tableViewHeight encoding=d offset=64
// property contentView attributes=T@"UIView",&,N,V_contentView
// property logoImage attributes=T@"UIImageView",&,N,V_logoImage
// property tableView attributes=T@"QMUITableView",&,N,V_tableView
// property nameLabel attributes=T@"UILabel",&,N,V_nameLabel
// property closeButton attributes=T@"UIButton",&,N,V_closeButton
// property keys attributes=T@"NSArray",&,N,V_keys
// property info attributes=T@"NSDictionary",&,N,V_info
// property tableViewHeight attributes=Td,N,V_tableViewHeight
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100248b74 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x1002491a0 | B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
// IMP 0x1002492e0 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100249374 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1002493d0 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1002499ac | @32@0:8@16q24
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
// IMP 0x100249f78 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x10024a138 | v16@0:8
- (void)closeHandle;
// IMP 0x10024a2f4 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10024a6bc | v16@0:8
- (void)loadSubviews;
// IMP 0x10024b320 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x10024c358 | @16@0:8
- (id)contentView;
// IMP 0x10024c380 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x10024c3f0 | @16@0:8
- (id)logoImage;
// IMP 0x10024c418 | v24@0:8@16
- (void)setLogoImage:(id)arg0;
// IMP 0x10024c488 | @16@0:8
- (id)tableView;
// IMP 0x10024c4b0 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x10024c514 | @16@0:8
- (id)nameLabel;
// IMP 0x10024c530 | v24@0:8@16
- (void)setNameLabel:(id)arg0;
// IMP 0x10024c55c | @16@0:8
- (id)closeButton;
// IMP 0x10024c590 | v24@0:8@16
- (void)setCloseButton:(id)arg0;
// IMP 0x10024c5fc | @16@0:8
- (id)keys;
// IMP 0x10024c630 | v24@0:8@16
- (void)setKeys:(id)arg0;
// IMP 0x10024c6c8 | @16@0:8
- (id)info;
// IMP 0x10024c6f0 | d16@0:8
- (double)tableViewHeight;
// IMP 0x10024c724 | v24@0:8d16
- (void)setTableViewHeight:(double)arg0;
// IMP 0x10024c774 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10024b30c | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
