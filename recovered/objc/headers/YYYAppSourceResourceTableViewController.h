// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7be98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppSourceResourceTableViewController : QMUICommonTableViewController
// ivar _needRefresh encoding=B offset=16
// ivar _source encoding=@"YYYAppStoreSource" offset=24
// ivar _dataSource encoding=@"NSMutableArray" offset=32
// ivar _searchResults encoding=@"NSMutableArray" offset=40
// ivar _refreshHeader encoding=@"MJRefreshStateHeader" offset=48
// ivar _unsignAppIdf encoding=@"NSMutableArray" offset=56
// ivar _filterView encoding=@"YYYAppStoreFilterView" offset=64
// ivar _type encoding=Q offset=72
// ivar _freeType encoding=q offset=80
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property searchResults attributes=T@"NSMutableArray",&,N,V_searchResults
// property refreshHeader attributes=T@"MJRefreshStateHeader",&,N,V_refreshHeader
// property needRefresh attributes=TB,N,V_needRefresh
// property unsignAppIdf attributes=T@"NSMutableArray",&,N,V_unsignAppIdf
// property filterView attributes=T@"YYYAppStoreFilterView",&,N,V_filterView
// property type attributes=TQ,N,V_type
// property freeType attributes=Tq,N,V_freeType
// property source attributes=T@"YYYAppStoreSource",&,N,V_source
// IMP 0x100052858 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100052fcc | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100053314 | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x10005336c | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x10005346c | v24@0:8@16
- (void)downLoadIPA:(id)arg0;
// IMP 0x1000543b4 | v16@0:8
- (void)filterHandle;
// IMP 0x100054568 | v16@0:8
- (void)refreshData;
// IMP 0x100054cbc | v16@0:8
- (void)loadData;
// IMP 0x100055720 | v24@0:8@16
- (void)didDismissSearchController:(id)arg0;
// IMP 0x1000557f8 | v24@0:8@16
- (void)willPresentSearchController:(id)arg0;
// IMP 0x100055960 | v24@0:8@16
- (void)didPresentSearchController:(id)arg0;
// IMP 0x1000559bc | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x1000562e0 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100056450 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1000564a8 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1000567a0 | d32@0:8@16q24
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
// IMP 0x1000567fc | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100056c68 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1000571a4 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10005725c | @16@0:8
- (id)filterView;
// IMP 0x10005766c | @16@0:8
- (id)source;
// IMP 0x100057694 | v24@0:8@16
- (void)setSource:(id)arg0;
// IMP 0x100057704 | @16@0:8
- (id)dataSource;
// IMP 0x10005772c | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1000577b8 | @16@0:8
- (id)searchResults;
// IMP 0x1000577ec | v24@0:8@16
- (void)setSearchResults:(id)arg0;
// IMP 0x100057884 | @16@0:8
- (id)refreshHeader;
// IMP 0x1000578ac | v24@0:8@16
- (void)setRefreshHeader:(id)arg0;
// IMP 0x100057924 | B16@0:8
- (BOOL)needRefresh;
// IMP 0x100057958 | v20@0:8B16
- (void)setNeedRefresh:(BOOL)arg0;
// IMP 0x100057980 | @16@0:8
- (id)unsignAppIdf;
// IMP 0x1000579a8 | v24@0:8@16
- (void)setUnsignAppIdf:(id)arg0;
// IMP 0x100057a4c | v24@0:8@16
- (void)setFilterView:(id)arg0;
// IMP 0x100057a60 | Q16@0:8
- (unsigned long long)type;
// IMP 0x100057a88 | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x100057acc | q16@0:8
- (long long)freeType;
// IMP 0x100057ae8 | v24@0:8q16
- (void)setFreeType:(long long)arg0;
// IMP 0x100057b2c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
