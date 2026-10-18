// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a5d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUILogManagerViewController : QMUICommonTableViewController
// ivar _rowCountWhenShowSearchBar encoding=Q offset=16
// ivar _formatLogNameForSortingBlock encoding=@? offset=24
// ivar _formatCellTextBlock encoding=@? offset=32
// ivar _allNames encoding=@"NSDictionary" offset=40
// ivar _sortedLogNames encoding=@"NSArray" offset=48
// ivar _sectionIndexTitles encoding=@"NSArray" offset=56
// property allNames attributes=T@"NSDictionary",C,N,V_allNames
// property sortedLogNames attributes=T@"NSArray",C,N,V_sortedLogNames
// property sectionIndexTitles attributes=T@"NSArray",C,N,V_sectionIndexTitles
// property rowCountWhenShowSearchBar attributes=TQ,N,V_rowCountWhenShowSearchBar
// property formatLogNameForSortingBlock attributes=T@?,C,N,V_formatLogNameForSortingBlock
// property formatCellTextBlock attributes=T@?,C,N,V_formatCellTextBlock
// IMP 0x10049b5f8 | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x10049b644 | v16@0:8
- (void)initTableView;
// IMP 0x10049b68c | v16@0:8
- (void)initSearchController;
// IMP 0x10049b700 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10049b748 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x10049b828 | v16@0:8
- (void)setupDataSource;
// IMP 0x10049bd8c | v16@0:8
- (void)reloadData;
// IMP 0x10049bdd0 | v16@0:8
- (void)checkEmptyView;
// IMP 0x10049be44 | @16@0:8
- (id)sortedLogNameArray;
// IMP 0x10049beb4 | @24@0:8@16
- (id)formatLogNameForSorting:(id)arg0;
// IMP 0x10049bf50 | v24@0:8@16
- (void)handleSwitchEvent:(id)arg0;
// IMP 0x10049c108 | v16@0:8
- (void)handleMenuItemEvent;
// IMP 0x10049c748 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10049cb64 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
// IMP 0x10049cc0c | @24@0:8@16
- (id)sectionIndexTitlesForTableView:(id)arg0;
// IMP 0x10049cc98 | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x10049cf94 | v24@0:8@16
- (void)willDismissSearchController:(id)arg0;
// IMP 0x10049cf98 | Q16@0:8
- (unsigned long long)rowCountWhenShowSearchBar;
// IMP 0x10049cfa8 | v24@0:8Q16
- (void)setRowCountWhenShowSearchBar:(unsigned long long)arg0;
// IMP 0x10049cfb8 | @?16@0:8
- (id /* block */)formatLogNameForSortingBlock;
// IMP 0x10049cfc8 | v24@0:8@?16
- (void)setFormatLogNameForSortingBlock:(id /* block */)arg0;
// IMP 0x10049cfd4 | @?16@0:8
- (id /* block */)formatCellTextBlock;
// IMP 0x10049cfe4 | v24@0:8@?16
- (void)setFormatCellTextBlock:(id /* block */)arg0;
// IMP 0x10049cff0 | @16@0:8
- (id)allNames;
// IMP 0x10049d000 | v24@0:8@16
- (void)setAllNames:(id)arg0;
// IMP 0x10049d00c | @16@0:8
- (id)sortedLogNames;
// IMP 0x10049d01c | v24@0:8@16
- (void)setSortedLogNames:(id)arg0;
// IMP 0x10049d028 | @16@0:8
- (id)sectionIndexTitles;
// IMP 0x10049d038 | v24@0:8@16
- (void)setSectionIndexTitles:(id)arg0;
// IMP 0x10049d044 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
