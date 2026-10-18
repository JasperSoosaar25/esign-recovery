// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d420
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIStaticTableViewCellData : NSObject
// ivar _identifier encoding=q offset=8
// ivar _indexPath encoding=@"NSIndexPath" offset=16
// ivar _cellClass encoding=# offset=24
// ivar _style encoding=q offset=32
// ivar _height encoding=d offset=40
// ivar _image encoding=@"UIImage" offset=48
// ivar _text encoding=@"NSString" offset=56
// ivar _detailText encoding=@"NSString" offset=64
// ivar _cellForRowBlock encoding=@? offset=72
// ivar _didSelectBlock encoding=@? offset=80
// ivar _didSelectTarget encoding=@ offset=88
// ivar _didSelectAction encoding=: offset=96
// ivar _accessoryType encoding=q offset=104
// ivar _accessoryValueObject encoding=@"NSObject" offset=112
// ivar _accessoryBlock encoding=@? offset=120
// ivar _accessorySwitchBlock encoding=@? offset=128
// ivar _accessoryTarget encoding=@ offset=136
// ivar _accessoryAction encoding=: offset=144
// property identifier attributes=Tq,N,V_identifier
// property indexPath attributes=T@"NSIndexPath",R,N,V_indexPath
// property cellClass attributes=T#,N,V_cellClass
// property style attributes=Tq,N,V_style
// property height attributes=Td,N,V_height
// property image attributes=T@"UIImage",&,N,V_image
// property text attributes=T@"NSString",C,N,V_text
// property detailText attributes=T@"NSString",C,N,V_detailText
// property cellForRowBlock attributes=T@?,C,N,V_cellForRowBlock
// property didSelectBlock attributes=T@?,C,N,V_didSelectBlock
// property didSelectTarget attributes=T@,N,V_didSelectTarget
// property didSelectAction attributes=T:,N,V_didSelectAction
// property accessoryType attributes=Tq,N,V_accessoryType
// property accessoryValueObject attributes=T@"NSObject",&,N,V_accessoryValueObject
// property accessoryBlock attributes=T@?,C,N,V_accessoryBlock
// property accessorySwitchBlock attributes=T@?,C,N,V_accessorySwitchBlock
// property accessoryTarget attributes=T@,N,V_accessoryTarget
// property accessoryAction attributes=T:,N,V_accessoryAction
// IMP 0x1004c1d8c | v24@0:8@16
- (void)setIndexPath:(id)arg0;
// IMP 0x1004c208c | @16@0:8
- (id)init;
// IMP 0x1004c2140 | v24@0:8#16
- (void)setCellClass:(Class)arg0;
// IMP 0x1004c22e8 | q16@0:8
- (long long)identifier;
// IMP 0x1004c22f0 | v24@0:8q16
- (void)setIdentifier:(long long)arg0;
// IMP 0x1004c22f8 | @16@0:8
- (id)indexPath;
// IMP 0x1004c2300 | #16@0:8
- (Class)cellClass;
// IMP 0x1004c2308 | q16@0:8
- (long long)style;
// IMP 0x1004c2310 | v24@0:8q16
- (void)setStyle:(long long)arg0;
// IMP 0x1004c2318 | d16@0:8
- (double)height;
// IMP 0x1004c2320 | v24@0:8d16
- (void)setHeight:(double)arg0;
// IMP 0x1004c2328 | @16@0:8
- (id)image;
// IMP 0x1004c2330 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x1004c233c | @16@0:8
- (id)text;
// IMP 0x1004c2344 | v24@0:8@16
- (void)setText:(id)arg0;
// IMP 0x1004c234c | @16@0:8
- (id)detailText;
// IMP 0x1004c2354 | v24@0:8@16
- (void)setDetailText:(id)arg0;
// IMP 0x1004c235c | @?16@0:8
- (id /* block */)cellForRowBlock;
// IMP 0x1004c2364 | v24@0:8@?16
- (void)setCellForRowBlock:(id /* block */)arg0;
// IMP 0x1004c236c | @?16@0:8
- (id /* block */)didSelectBlock;
// IMP 0x1004c2374 | v24@0:8@?16
- (void)setDidSelectBlock:(id /* block */)arg0;
// IMP 0x1004c237c | @16@0:8
- (id)didSelectTarget;
// IMP 0x1004c2384 | v24@0:8@16
- (void)setDidSelectTarget:(id)arg0;
// IMP 0x1004c238c | :16@0:8
- (SEL)didSelectAction;
// IMP 0x1004c2394 | v24@0:8:16
- (void)setDidSelectAction:(SEL)arg0;
// IMP 0x1004c239c | q16@0:8
- (long long)accessoryType;
// IMP 0x1004c23a4 | v24@0:8q16
- (void)setAccessoryType:(long long)arg0;
// IMP 0x1004c23ac | @16@0:8
- (id)accessoryValueObject;
// IMP 0x1004c23b4 | v24@0:8@16
- (void)setAccessoryValueObject:(id)arg0;
// IMP 0x1004c23c0 | @?16@0:8
- (id /* block */)accessoryBlock;
// IMP 0x1004c23c8 | v24@0:8@?16
- (void)setAccessoryBlock:(id /* block */)arg0;
// IMP 0x1004c23d0 | @?16@0:8
- (id /* block */)accessorySwitchBlock;
// IMP 0x1004c23d8 | v24@0:8@?16
- (void)setAccessorySwitchBlock:(id /* block */)arg0;
// IMP 0x1004c23e0 | @16@0:8
- (id)accessoryTarget;
// IMP 0x1004c23e8 | v24@0:8@16
- (void)setAccessoryTarget:(id)arg0;
// IMP 0x1004c23f0 | :16@0:8
- (SEL)accessoryAction;
// IMP 0x1004c23f8 | v24@0:8:16
- (void)setAccessoryAction:(SEL)arg0;
// IMP 0x1004c2400 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004c1d98 | @72@0:8q16@24@32@40@48:56q64
+ (id)staticTableViewCellDataWithIdentifier:(long long)arg0 image:(id)arg1 text:(id)arg2 detailText:(id)arg3 didSelectTarget:(id)arg4 didSelectAction:(SEL)arg5 accessoryType:(long long)arg6;
// IMP 0x1004c1edc | @120@0:8q16#24q32d40@48@56@64@72:80q88@96@104:112
+ (id)staticTableViewCellDataWithIdentifier:(long long)arg0 cellClass:(Class)arg1 style:(long long)arg2 height:(double)arg3 image:(id)arg4 text:(id)arg5 detailText:(id)arg6 didSelectTarget:(id)arg7 didSelectAction:(SEL)arg8 accessoryType:(long long)arg9 accessoryValueObject:(id)arg10 accessoryTarget:(id)arg11 accessoryAction:(SEL)arg12;
// IMP 0x1004c22d8 | q24@0:8q16
+ (long long)tableViewCellAccessoryTypeWithStaticAccessoryType:(long long)arg0;
@end
