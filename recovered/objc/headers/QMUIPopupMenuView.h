// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d180
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPopupMenuView : QMUIPopupContainerView
// ivar _shouldShowItemSeparator encoding=B offset=40
// ivar _shouldShowSectionSeparator encoding=B offset=41
// ivar _itemSeparatorColor encoding=@"UIColor" offset=48
// ivar _sectionSeparatorColor encoding=@"UIColor" offset=56
// ivar _sectionSpacing encoding=d offset=64
// ivar _itemTitleFont encoding=@"UIFont" offset=72
// ivar _itemTitleColor encoding=@"UIColor" offset=80
// ivar _itemHeight encoding=d offset=88
// ivar _itemConfigurationHandler encoding=@? offset=96
// ivar _willHandleButtonItemEventBlock encoding=@? offset=104
// ivar _items encoding=@"NSArray" offset=112
// ivar _itemSections encoding=@"NSArray" offset=120
// ivar _scrollView encoding=@"UIScrollView" offset=128
// ivar _itemSeparatorLayers encoding=@"NSMutableArray" offset=136
// ivar _sectionSeparatorLayers encoding=@"NSMutableArray" offset=144
// ivar _itemSeparatorInset encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=152
// ivar _sectionSeparatorInset encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=184
// ivar _padding encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=216
// property scrollView attributes=T@"UIScrollView",&,N,V_scrollView
// property itemSeparatorLayers attributes=T@"NSMutableArray",&,N,V_itemSeparatorLayers
// property sectionSeparatorLayers attributes=T@"NSMutableArray",&,N,V_sectionSeparatorLayers
// property shouldShowItemSeparator attributes=TB,N,V_shouldShowItemSeparator
// property itemSeparatorColor attributes=T@"UIColor",&,N,V_itemSeparatorColor
// property itemSeparatorInset attributes=T{UIEdgeInsets=dddd},N,V_itemSeparatorInset
// property shouldShowSectionSeparator attributes=TB,N,V_shouldShowSectionSeparator
// property sectionSeparatorColor attributes=T@"UIColor",&,N,V_sectionSeparatorColor
// property sectionSeparatorInset attributes=T{UIEdgeInsets=dddd},N,V_sectionSeparatorInset
// property sectionSpacing attributes=Td,N,V_sectionSpacing
// property itemTitleFont attributes=T@"UIFont",&,N,V_itemTitleFont
// property itemTitleColor attributes=T@"UIColor",&,N,V_itemTitleColor
// property padding attributes=T{UIEdgeInsets=dddd},N,V_padding
// property itemHeight attributes=Td,N,V_itemHeight
// property itemConfigurationHandler attributes=T@?,C,N,V_itemConfigurationHandler
// property willHandleButtonItemEventBlock attributes=T@?,C,N,V_willHandleButtonItemEventBlock
// property items attributes=T@"NSArray",C,N,V_items
// property itemSections attributes=T@"NSArray",C,N,V_itemSections
// IMP 0x1004bdd4c | v16@0:8
- (void)updateAppearanceForPopupMenuView;
// IMP 0x1004bc3e8 | v24@0:8@16
- (void)setItems:(id)arg0;
// IMP 0x1004bc4dc | v24@0:8@16
- (void)setItemSections:(id)arg0;
// IMP 0x1004bc540 | v24@0:8@?16
- (void)setItemConfigurationHandler:(id /* block */)arg0;
// IMP 0x1004bc698 | v16@0:8
- (void)configureItems;
// IMP 0x1004bcbac | v48@0:8{UIEdgeInsets=dddd}16
- (void)setItemSeparatorInset:(struct UIEdgeInsets)arg0;
// IMP 0x1004bcbc4 | v24@0:8@16
- (void)setItemSeparatorColor:(id)arg0;
// IMP 0x1004bccd0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setSectionSeparatorInset:(struct UIEdgeInsets)arg0;
// IMP 0x1004bcce8 | v24@0:8d16
- (void)setSectionSpacing:(double)arg0;
// IMP 0x1004bccf8 | v24@0:8@16
- (void)setSectionSeparatorColor:(id)arg0;
// IMP 0x1004bce04 | v24@0:8@16
- (void)setItemTitleFont:(id)arg0;
// IMP 0x1004bce48 | v24@0:8@16
- (void)setItemTitleColor:(id)arg0;
// IMP 0x1004bce8c | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPadding:(struct UIEdgeInsets)arg0;
// IMP 0x1004bceb4 | v24@0:8@?16
- (void)enumerateItemsWithBlock:(id /* block */)arg0;
// IMP 0x1004bcfd4 | v16@0:8
- (void)didInitialize;
// IMP 0x1004bd184 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFitsInContentView:(struct CGSize)arg0;
// IMP 0x1004bd3c0 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004bd7cc | B16@0:8
- (BOOL)shouldShowItemSeparator;
// IMP 0x1004bd7dc | v20@0:8B16
- (void)setShouldShowItemSeparator:(BOOL)arg0;
// IMP 0x1004bd7ec | @16@0:8
- (id)itemSeparatorColor;
// IMP 0x1004bd7fc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)itemSeparatorInset;
// IMP 0x1004bd814 | B16@0:8
- (BOOL)shouldShowSectionSeparator;
// IMP 0x1004bd824 | v20@0:8B16
- (void)setShouldShowSectionSeparator:(BOOL)arg0;
// IMP 0x1004bd834 | @16@0:8
- (id)sectionSeparatorColor;
// IMP 0x1004bd844 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)sectionSeparatorInset;
// IMP 0x1004bd85c | d16@0:8
- (double)sectionSpacing;
// IMP 0x1004bd86c | @16@0:8
- (id)itemTitleFont;
// IMP 0x1004bd87c | @16@0:8
- (id)itemTitleColor;
// IMP 0x1004bd88c | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)padding;
// IMP 0x1004bd8a4 | d16@0:8
- (double)itemHeight;
// IMP 0x1004bd8b4 | v24@0:8d16
- (void)setItemHeight:(double)arg0;
// IMP 0x1004bd8c4 | @?16@0:8
- (id /* block */)itemConfigurationHandler;
// IMP 0x1004bd8d4 | @?16@0:8
- (id /* block */)willHandleButtonItemEventBlock;
// IMP 0x1004bd8e4 | v24@0:8@?16
- (void)setWillHandleButtonItemEventBlock:(id /* block */)arg0;
// IMP 0x1004bd8f0 | @16@0:8
- (id)items;
// IMP 0x1004bd900 | @16@0:8
- (id)itemSections;
// IMP 0x1004bd910 | @16@0:8
- (id)scrollView;
// IMP 0x1004bd920 | v24@0:8@16
- (void)setScrollView:(id)arg0;
// IMP 0x1004bd934 | @16@0:8
- (id)itemSeparatorLayers;
// IMP 0x1004bd944 | v24@0:8@16
- (void)setItemSeparatorLayers:(id)arg0;
// IMP 0x1004bd958 | @16@0:8
- (id)sectionSeparatorLayers;
// IMP 0x1004bd968 | v24@0:8@16
- (void)setSectionSeparatorLayers:(id)arg0;
// IMP 0x1004bd97c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004bda70 | v16@0:8
+ (void)initialize;
// IMP 0x1004bdae4 | v16@0:8
+ (void)setDefaultAppearanceForPopupMenuView;
@end
