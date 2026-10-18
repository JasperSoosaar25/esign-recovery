// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d458
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMapSearchView : UIView
// ivar _isShowAll encoding=B offset=8
// ivar _effectView encoding=@"UIVisualEffectView" offset=16
// ivar _searchBar encoding=@"UISearchBar" offset=24
// ivar _tableView encoding=@"UITableView" offset=32
// ivar _datasource encoding=@"NSMutableArray" offset=40
// ivar _cancelButton encoding=@"UIButton" offset=48
// ivar _history encoding=@"NSMutableArray" offset=56
// ivar _selectedMapItemHandle encoding=@? offset=64
// property effectView attributes=T@"UIVisualEffectView",&,N,V_effectView
// property isShowAll attributes=TB,N,V_isShowAll
// property searchBar attributes=T@"UISearchBar",&,N,V_searchBar
// property tableView attributes=T@"UITableView",&,N,V_tableView
// property datasource attributes=T@"NSMutableArray",&,N,V_datasource
// property cancelButton attributes=T@"UIButton",&,N,V_cancelButton
// property history attributes=T@"NSMutableArray",&,N,V_history
// property isShowHistory attributes=TB,R,N
// property selectedMapItemHandle attributes=T@?,C,N,V_selectedMapItemHandle
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100107ad4 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100107e94 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100107ea8 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100108084 | v32@0:8@16@24
- (void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1;
// IMP 0x1001087e4 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100108e38 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10010918c | B32@0:8@16@24
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
// IMP 0x100109208 | q32@0:8@16@24
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
// IMP 0x10010921c | @32@0:8@16@24
- (id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
// IMP 0x1001093e8 | v40@0:8@16q24@32
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100109588 | v24@0:8@16
- (void)addHistoryLocation:(id)arg0;
// IMP 0x100109b18 | v16@0:8
- (void)layoutSubviews;
// IMP 0x10010a11c | v16@0:8
- (void)loadSubviews;
// IMP 0x10010aa50 | v20@0:8B16
- (void)setIsShowAll:(BOOL)arg0;
// IMP 0x10010ae40 | B16@0:8
- (BOOL)isShowHistory;
// IMP 0x10010aed0 | @16@0:8
- (id)effectView;
// IMP 0x10010aef8 | v24@0:8@16
- (void)setEffectView:(id)arg0;
// IMP 0x10010af74 | B16@0:8
- (BOOL)isShowAll;
// IMP 0x10010af9c | @16@0:8
- (id)searchBar;
// IMP 0x10010afac | v24@0:8@16
- (void)setSearchBar:(id)arg0;
// IMP 0x10010afcc | @16@0:8
- (id)tableView;
// IMP 0x10010aff4 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x10010b014 | @16@0:8
- (id)datasource;
// IMP 0x10010b030 | v24@0:8@16
- (void)setDatasource:(id)arg0;
// IMP 0x10010b0ac | @16@0:8
- (id)cancelButton;
// IMP 0x10010b0d4 | v24@0:8@16
- (void)setCancelButton:(id)arg0;
// IMP 0x10010b148 | @16@0:8
- (id)history;
// IMP 0x10010b164 | v24@0:8@16
- (void)setHistory:(id)arg0;
// IMP 0x10010b1cc | @?16@0:8
- (id /* block */)selectedMapItemHandle;
// IMP 0x10010b1e8 | v24@0:8@?16
- (void)setSelectedMapItemHandle:(id /* block */)arg0;
// IMP 0x10010b268 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
