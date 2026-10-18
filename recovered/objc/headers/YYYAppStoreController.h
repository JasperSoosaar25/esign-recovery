// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7fce0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppStoreController : QMUICommonTableViewController
// ivar _needRefresh encoding=B offset=16
// ivar _isLoading encoding=B offset=17
// ivar _dataSource encoding=@"NSMutableArray" offset=24
// ivar _searchResults encoding=@"NSMutableArray" offset=32
// ivar _finishCount encoding=q offset=40
// ivar _refreshHeader encoding=@"MJRefreshStateHeader" offset=48
// ivar _unsignAppIdf encoding=@"NSMutableArray" offset=56
// ivar _filterView encoding=@"YYYAppStoreFilterView" offset=64
// ivar _type encoding=Q offset=72
// ivar _freeType encoding=q offset=80
// ivar _limit encoding=q offset=88
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property searchResults attributes=T@"NSMutableArray",&,N,V_searchResults
// property finishCount attributes=Tq,N,V_finishCount
// property refreshHeader attributes=T@"MJRefreshStateHeader",&,N,V_refreshHeader
// property needRefresh attributes=TB,N,V_needRefresh
// property unsignAppIdf attributes=T@"NSMutableArray",&,N,V_unsignAppIdf
// property filterView attributes=T@"YYYAppStoreFilterView",&,N,V_filterView
// property type attributes=TQ,N,V_type
// property freeType attributes=Tq,N,V_freeType
// property isLoading attributes=TB,N,V_isLoading
// property limit attributes=Tq,N,V_limit
// IMP 0x10027de70 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10027e5f8 | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x10027ebe8 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x10027ece8 | v16@0:8
- (void)filterHandle;
// IMP 0x10027eed8 | v16@0:8
- (void)importAppStoreSource;
// IMP 0x10027ef34 | v16@0:8
- (void)handleRefresh;
// IMP 0x10027ef90 | v24@0:8@16
- (void)downLoadIPA:(id)arg0;
// IMP 0x10027fc10 | v16@0:8
- (void)refreshData;
// IMP 0x100280968 | v16@0:8
- (void)sourceHandle;
// IMP 0x100280a58 | v16@0:8
- (void)loadData;
// IMP 0x100281c5c | v24@0:8@16
- (void)didDismissSearchController:(id)arg0;
// IMP 0x100281d9c | v24@0:8@16
- (void)willPresentSearchController:(id)arg0;
// IMP 0x100281fe4 | v24@0:8@16
- (void)didPresentSearchController:(id)arg0;
// IMP 0x1002821f8 | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x1002829e0 | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x100282c50 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x100282da4 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x100282dc4 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x100282e44 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100283188 | d32@0:8@16@24
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
// IMP 0x1002833f0 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x10028341c | v24@0:8q16
- (void)didInitializeWithStyle:(long long)arg0;
// IMP 0x1002834b4 | @16@0:8
- (id)filterView;
// IMP 0x1002838b4 | @16@0:8
- (id)dataSource;
// IMP 0x1002838dc | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100283948 | @16@0:8
- (id)searchResults;
// IMP 0x100283964 | v24@0:8@16
- (void)setSearchResults:(id)arg0;
// IMP 0x1002839d4 | q16@0:8
- (long long)finishCount;
// IMP 0x100283a08 | v24@0:8q16
- (void)setFinishCount:(long long)arg0;
// IMP 0x100283a4c | @16@0:8
- (id)refreshHeader;
// IMP 0x100283a74 | v24@0:8@16
- (void)setRefreshHeader:(id)arg0;
// IMP 0x100283ae4 | B16@0:8
- (BOOL)needRefresh;
// IMP 0x100283b18 | v20@0:8B16
- (void)setNeedRefresh:(BOOL)arg0;
// IMP 0x100283b60 | @16@0:8
- (id)unsignAppIdf;
// IMP 0x100283b88 | v24@0:8@16
- (void)setUnsignAppIdf:(id)arg0;
// IMP 0x100283bf8 | v24@0:8@16
- (void)setFilterView:(id)arg0;
// IMP 0x100283c74 | Q16@0:8
- (unsigned long long)type;
// IMP 0x100283c9c | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x100283cb8 | q16@0:8
- (long long)freeType;
// IMP 0x100283cec | v24@0:8q16
- (void)setFreeType:(long long)arg0;
// IMP 0x100283d08 | B16@0:8
- (BOOL)isLoading;
// IMP 0x100283d3c | v20@0:8B16
- (void)setIsLoading:(BOOL)arg0;
// IMP 0x100283d80 | q16@0:8
- (long long)limit;
// IMP 0x100283d9c | v24@0:8q16
- (void)setLimit:(long long)arg0;
// IMP 0x100283db8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
