// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d308
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUISearchController : QMUICommonViewController
// ivar _searchResultsDelegate encoding=@"<QMUISearchControllerDelegate>" offset=16
// ivar _searchBar encoding=@"UISearchBar" offset=24
// ivar _launchView encoding=@"UIView" offset=32
// ivar _dimmingColor encoding=@"UIColor" offset=40
// ivar _searchController encoding=@"QMUICustomSearchController" offset=48
// property searchController attributes=T@"QMUICustomSearchController",&,N,V_searchController
// property searchResultsDelegate attributes=T@"<QMUISearchControllerDelegate>",W,N,V_searchResultsDelegate
// property searchBar attributes=T@"UISearchBar",R,N,V_searchBar
// property tableView attributes=T@"QMUITableView",R,N
// property launchView attributes=T@"UIView",&,N,V_launchView
// property dimmingColor attributes=T@"UIColor",&,N,V_dimmingColor
// property active attributes=TB,N,GisActive
// property hidesNavigationBarDuringPresentation attributes=TB,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004bf588 | @32@0:8@16q24
- (id)initWithContentsViewController:(id)arg0 resultsTableViewStyle:(long long)arg1;
// IMP 0x1004bf748 | @24@0:8@16
- (id)initWithContentsViewController:(id)arg0;
// IMP 0x1004bf750 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1004bf7b0 | v24@0:8@16
- (void)setSearchResultsDelegate:(id)arg0;
// IMP 0x1004bf868 | v24@0:8@16
- (void)setDimmingColor:(id)arg0;
// IMP 0x1004bfe38 | B16@0:8
- (BOOL)isActive;
// IMP 0x1004bfe74 | v20@0:8B16
- (void)setActive:(BOOL)arg0;
// IMP 0x1004bfe7c | v24@0:8B16B20
- (void)setActive:(BOOL)arg0 animated:(BOOL)arg1;
// IMP 0x1004bfeb4 | @16@0:8
- (id)tableView;
// IMP 0x1004bff20 | v24@0:8@16
- (void)setLaunchView:(id)arg0;
// IMP 0x1004bff98 | B16@0:8
- (BOOL)hidesNavigationBarDuringPresentation;
// IMP 0x1004bffd4 | v20@0:8B16
- (void)setHidesNavigationBarDuringPresentation:(BOOL)arg0;
// IMP 0x1004c000c | v24@0:8@?16
- (void)setQmui_prefersStatusBarHiddenBlock:(id /* block */)arg0;
// IMP 0x1004c0094 | v24@0:8@?16
- (void)setQmui_preferredStatusBarStyleBlock:(id /* block */)arg0;
// IMP 0x1004c011c | v16@0:8
- (void)showEmptyView;
// IMP 0x1004c04a8 | v24@0:8@16
- (void)didLoadTableViewInSearchResultsTableViewController:(id)arg0;
// IMP 0x1004c0554 | v24@0:8@16
- (void)updateSearchResultsForSearchController:(id)arg0;
// IMP 0x1004c0620 | v24@0:8@16
- (void)willPresentSearchController:(id)arg0;
// IMP 0x1004c0730 | v24@0:8@16
- (void)didPresentSearchController:(id)arg0;
// IMP 0x1004c07b0 | v24@0:8@16
- (void)willDismissSearchController:(id)arg0;
// IMP 0x1004c08c0 | v24@0:8@16
- (void)didDismissSearchController:(id)arg0;
// IMP 0x1004c0948 | @16@0:8
- (id)searchResultsDelegate;
// IMP 0x1004c0968 | @16@0:8
- (id)searchBar;
// IMP 0x1004c0978 | @16@0:8
- (id)launchView;
// IMP 0x1004c0988 | @16@0:8
- (id)dimmingColor;
// IMP 0x1004c0998 | @16@0:8
- (id)searchController;
// IMP 0x1004c09a8 | v24@0:8@16
- (void)setSearchController:(id)arg0;
// IMP 0x1004c09bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
