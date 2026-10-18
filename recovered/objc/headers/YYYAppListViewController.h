// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d4f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppListViewController : QMUICommonTableViewController
// ivar _beginSelected encoding=B offset=16
// ivar _dataSource encoding=@"NSMutableArray" offset=24
// ivar _segmentedControl encoding=@"QMUISegmentedControl" offset=32
// ivar _pan encoding=@"UIPanGestureRecognizer" offset=40
// ivar _selectAllItem encoding=@"UIBarButtonItem" offset=48
// ivar _deleteItem encoding=@"UIBarButtonItem" offset=56
// ivar _editItem encoding=@"UIBarButtonItem" offset=64
// ivar _batchSignItem encoding=@"UIBarButtonItem" offset=72
// ivar _finishItem encoding=@"UIBarButtonItem" offset=80
// ivar _toolBar encoding=@"UIToolbar" offset=88
// ivar _filterItem encoding=@"UIBarButtonItem" offset=96
// ivar _tableHelper encoding=@"YYYTableViewHelper" offset=104
// ivar _searchResults encoding=@"NSMutableArray" offset=112
// ivar _searchTableHelper encoding=@"YYYTableViewHelper" offset=120
// ivar _filterType encoding=q offset=128
// ivar _startPoint encoding={CGPoint="x"d"y"d} offset=136
// property dataSource attributes=T@"NSMutableArray",&,N,V_dataSource
// property segmentedControl attributes=T@"QMUISegmentedControl",&,N,V_segmentedControl
// property pan attributes=T@"UIPanGestureRecognizer",&,N,V_pan
// property startPoint attributes=T{CGPoint=dd},N,V_startPoint
// property beginSelected attributes=TB,N,V_beginSelected
// property selectAllItem attributes=T@"UIBarButtonItem",&,N,V_selectAllItem
// property deleteItem attributes=T@"UIBarButtonItem",&,N,V_deleteItem
// property editItem attributes=T@"UIBarButtonItem",&,N,V_editItem
// property batchSignItem attributes=T@"UIBarButtonItem",&,N,V_batchSignItem
// property finishItem attributes=T@"UIBarButtonItem",&,N,V_finishItem
// property toolBar attributes=T@"UIToolbar",&,N,V_toolBar
// property filterItem attributes=T@"UIBarButtonItem",&,N,V_filterItem
// property tableHelper attributes=T@"YYYTableViewHelper",&,N,V_tableHelper
// property searchResults attributes=T@"NSMutableArray",&,N,V_searchResults
// property searchTableHelper attributes=T@"YYYTableViewHelper",&,N,V_searchTableHelper
// property filterType attributes=Tq,N,V_filterType
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10011ea34 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10011ee44 | v16@0:8
- (void)selectSignedList;
// IMP 0x10011ef2c | v20@0:8B16
- (void)viewWillAppear:(BOOL)arg0;
// IMP 0x10011f1f4 | v16@0:8
- (void)editItemHandle;
// IMP 0x100120038 | v16@0:8
- (void)filterHandle;
// IMP 0x100120d18 | v16@0:8
- (void)selectAllItemHandle;
// IMP 0x100121514 | v16@0:8
- (void)deleteItemHandle;
// IMP 0x1001222ac | v16@0:8
- (void)batchSignHandle;
// IMP 0x100123da0 | v16@0:8
- (void)signedApp;
// IMP 0x10012400c | v16@0:8
- (void)importSource;
// IMP 0x100124204 | B16@0:8
- (BOOL)isSignedList;
// IMP 0x100124284 | v16@0:8
- (void)refreshInstallApp;
// IMP 0x100124f74 | v24@0:8@16
- (void)segmentedControlValueChange:(id)arg0;
// IMP 0x1001255f4 | v24@0:8@16
- (void)signApps:(id)arg0;
// IMP 0x1001260f4 | v24@0:8@16
- (void)signApp:(id)arg0;
// IMP 0x10012739c | v32@0:8@16@24
- (void)shareAppWithPath:(id)arg0 inView:(id)arg1;
// IMP 0x100127944 | v24@0:8@16
- (void)uploadFileToLanZouWithFilePath:(id)arg0;
// IMP 0x100128044 | v24@0:8@16
- (void)showModifyTypeWithApp:(id)arg0;
// IMP 0x100129e18 | v24@0:8@16
- (void)modifyInstallAppNoti:(id)arg0;
// IMP 0x10012a9a0 | v28@0:8@16B24
- (void)clearAppData:(id)arg0 cleanAppGroup:(BOOL)arg1;
// IMP 0x10012e834 | v24@0:8@16
- (void)showCleanAppDataWithApp:(id)arg0;
// IMP 0x10012f5c0 | B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
// IMP 0x10012f6e4 | v24@0:8@16
- (void)panGestureRecognizerHandle:(id)arg0;
// IMP 0x100130094 | v32@0:8@16@24
- (void)showAlertWithTtrollApp:(id)arg0 tableView:(id)arg1;
// IMP 0x100136754 | v40@0:8@16@24@32
- (void)tableView:(id)arg0 didSelectCell:(id)arg1 indexPath:(id)arg2;
// IMP 0x10013a214 | v16@0:8
- (void)setupTable;
// IMP 0x10013be64 | v16@0:8
- (void)refreshItemState;
// IMP 0x10013c69c | v16@0:8
- (void)initSubviews;
// IMP 0x10013e120 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10013e680 | v24@0:8@16
- (void)willPresentSearchController:(id)arg0;
// IMP 0x10013f2d4 | v24@0:8@16
- (void)didDismissSearchController:(id)arg0;
// IMP 0x10013f35c | v32@0:8@16@24
- (void)searchController:(id)arg0 updateResultsForSearchString:(id)arg1;
// IMP 0x10013ff90 | v16@0:8
- (void)dealloc;
// IMP 0x100140078 | @16@0:8
- (id)filterItem;
// IMP 0x1001402a0 | @16@0:8
- (id)dataSource;
// IMP 0x1001402c8 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1001402f4 | @16@0:8
- (id)segmentedControl;
// IMP 0x100140310 | v24@0:8@16
- (void)setSegmentedControl:(id)arg0;
// IMP 0x100140380 | @16@0:8
- (id)pan;
// IMP 0x1001403a8 | v24@0:8@16
- (void)setPan:(id)arg0;
// IMP 0x10014040c | {CGPoint=dd}16@0:8
- (struct CGPoint)startPoint;
// IMP 0x100140438 | v32@0:8{CGPoint=dd}16
- (void)setStartPoint:(struct CGPoint)arg0;
// IMP 0x10014048c | B16@0:8
- (BOOL)beginSelected;
// IMP 0x1001404c0 | v20@0:8B16
- (void)setBeginSelected:(BOOL)arg0;
// IMP 0x1001404e8 | @16@0:8
- (id)selectAllItem;
// IMP 0x10014051c | v24@0:8@16
- (void)setSelectAllItem:(id)arg0;
// IMP 0x1001405a8 | @16@0:8
- (id)deleteItem;
// IMP 0x1001405dc | v24@0:8@16
- (void)setDeleteItem:(id)arg0;
// IMP 0x100140674 | @16@0:8
- (id)editItem;
// IMP 0x100140690 | v24@0:8@16
- (void)setEditItem:(id)arg0;
// IMP 0x10014072c | @16@0:8
- (id)batchSignItem;
// IMP 0x100140760 | v24@0:8@16
- (void)setBatchSignItem:(id)arg0;
// IMP 0x1001407d0 | @16@0:8
- (id)finishItem;
// IMP 0x1001407ec | v24@0:8@16
- (void)setFinishItem:(id)arg0;
// IMP 0x100140890 | @16@0:8
- (id)toolBar;
// IMP 0x1001408ac | v24@0:8@16
- (void)setToolBar:(id)arg0;
// IMP 0x100140958 | v24@0:8@16
- (void)setFilterItem:(id)arg0;
// IMP 0x1001409fc | @16@0:8
- (id)tableHelper;
// IMP 0x100140a24 | v24@0:8@16
- (void)setTableHelper:(id)arg0;
// IMP 0x100140a94 | @16@0:8
- (id)searchResults;
// IMP 0x100140abc | v24@0:8@16
- (void)setSearchResults:(id)arg0;
// IMP 0x100140b20 | @16@0:8
- (id)searchTableHelper;
// IMP 0x100140b54 | v24@0:8@16
- (void)setSearchTableHelper:(id)arg0;
// IMP 0x100140bb0 | q16@0:8
- (long long)filterType;
// IMP 0x100140be4 | v24@0:8q16
- (void)setFilterType:(long long)arg0;
// IMP 0x100140c34 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
