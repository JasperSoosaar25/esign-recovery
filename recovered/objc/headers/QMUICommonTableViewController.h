// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c884d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICommonTableViewController : QMUICommonViewController
// ivar _hasHideTableHeaderViewInitial encoding=B offset=16
// ivar _tableView encoding=@"QMUITableView" offset=24
// ivar _style encoding=q offset=32
// property shouldShowSearchBar attributes=TB,N
// property searchController attributes=T@"QMUISearchController",R,N
// property searchBar attributes=T@"UISearchBar",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property hasHideTableHeaderViewInitial attributes=TB,N,V_hasHideTableHeaderViewInitial
// property style attributes=Tq,R,N,V_style
// property tableView attributes=T@"QMUITableView",&,N,V_tableView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004c0a34 | v24@0:8@16
- (void)setSearchController:(id)arg0;
// IMP 0x1004c0a44 | @16@0:8
- (id)searchController;
// IMP 0x1004c0a50 | v24@0:8@16
- (void)setSearchBar:(id)arg0;
// IMP 0x1004c0a60 | @16@0:8
- (id)searchBar;
// IMP 0x1004c0eb8 | v20@0:8B16
- (void)setShouldShowSearchBar:(BOOL)arg0;
// IMP 0x1004c1058 | B16@0:8
- (BOOL)shouldShowSearchBar;
// IMP 0x1004c109c | v16@0:8
- (void)initSearchController;
// IMP 0x1004c128c | B16@0:8
- (BOOL)shouldHideSearchBarWhenEmptyViewShowing;
// IMP 0x1004c1294 | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x10045fa8c | v16@0:8
- (void)initTableView;
// IMP 0x10045fbac | v16@0:8
- (void)layoutTableView;
// IMP 0x10045fccc | B16@0:8
- (BOOL)shouldHideTableHeaderViewInitial;
// IMP 0x10045e99c | @24@0:8q16
- (id)initWithStyle:(long long)arg0;
// IMP 0x10045e9fc | @16@0:8
- (id)init;
// IMP 0x10045ea04 | @32@0:8@16@24
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
// IMP 0x10045ea08 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10045ea5c | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x10045ea70 | v16@0:8
- (void)dealloc;
// IMP 0x10045ead0 | @16@0:8
- (id)description;
// IMP 0x10045eb0c | v16@0:8
- (void)viewDidLoad;
// IMP 0x10045ebe0 | v16@0:8
- (void)initSubviews;
// IMP 0x10045ec28 | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x10045ed0c | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10045ed6c | @16@0:8
- (id)tableView;
// IMP 0x10045eda4 | v24@0:8@16
- (void)setTableView:(id)arg0;
// IMP 0x10045ef20 | v24@0:8B16B20
- (void)hideTableHeaderViewInitialIfCanWithAnimated:(BOOL)arg0 force:(BOOL)arg1;
// IMP 0x10045f0bc | v24@0:8@16
- (void)contentSizeCategoryDidChanged:(id)arg0;
// IMP 0x10045f128 | v16@0:8
- (void)handleTableViewContentInsetChangeEvent;
// IMP 0x10045f15c | v16@0:8
- (void)showEmptyView;
// IMP 0x10045f1c4 | B16@0:8
- (BOOL)layoutEmptyView;
// IMP 0x10045f414 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x10045f41c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10045f424 | @32@0:8@16q24
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
// IMP 0x10045f4e8 | @32@0:8@16q24
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
// IMP 0x10045f5ac | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x10045f724 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
// IMP 0x10045f89c | @32@0:8@16q24
- (id)tableView:(id)arg0 realTitleForHeaderInSection:(long long)arg1;
// IMP 0x10045f954 | @32@0:8@16q24
- (id)tableView:(id)arg0 realTitleForFooterInSection:(long long)arg1;
// IMP 0x10045fa0c | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10045fa2c | v24@0:8@16
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg0;
// IMP 0x10045fa48 | q16@0:8
- (long long)style;
// IMP 0x10045fa58 | B16@0:8
- (BOOL)hasHideTableHeaderViewInitial;
// IMP 0x10045fa68 | v20@0:8B16
- (void)setHasHideTableHeaderViewInitial:(BOOL)arg0;
// IMP 0x10045fa78 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004c0a6c | v16@0:8
+ (void)load;
@end
