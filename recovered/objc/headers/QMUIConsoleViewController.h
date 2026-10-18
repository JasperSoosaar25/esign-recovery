// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88b58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIConsoleViewController : QMUICommonViewController
// ivar _popoverAnimating encoding=B offset=16
// ivar _tableView encoding=@"QMUITableView" offset=24
// ivar _toolbar encoding=@"QMUIConsoleToolbar" offset=32
// ivar _popoverButton encoding=@"QMUIButton" offset=40
// ivar _dateFormatter encoding=@"NSDateFormatter" offset=48
// ivar _backgroundColor encoding=@"UIColor" offset=56
// ivar _containerView encoding=@"UIView" offset=64
// ivar _levelMenu encoding=@"QMUIPopupMenuView" offset=72
// ivar _nameMenu encoding=@"QMUIPopupMenuView" offset=80
// ivar _logItems encoding=@"NSMutableArray" offset=88
// ivar _showingLogItems encoding=@"NSArray" offset=96
// ivar _selectedLevels encoding=@"NSMutableArray" offset=104
// ivar _selectedNames encoding=@"NSMutableArray" offset=112
// ivar _searchRegularExpression encoding=@"NSRegularExpression" offset=120
// ivar _searchResultsTotalCount encoding=q offset=128
// ivar _currentHighlightedResultIndex encoding=q offset=136
// ivar _lastHighlightedItem encoding=@"QMUIConsoleLogItem" offset=144
// ivar _popoverPanGesture encoding=@"UIPanGestureRecognizer" offset=152
// ivar _popoverLongPressGesture encoding=@"UILongPressGestureRecognizer" offset=160
// property containerView attributes=T@"UIView",&,N,V_containerView
// property levelMenu attributes=T@"QMUIPopupMenuView",&,N,V_levelMenu
// property nameMenu attributes=T@"QMUIPopupMenuView",&,N,V_nameMenu
// property logItems attributes=T@"NSMutableArray",&,N,V_logItems
// property showingLogItems attributes=T@"NSArray",&,N,V_showingLogItems
// property selectedLevels attributes=T@"NSMutableArray",&,N,V_selectedLevels
// property selectedNames attributes=T@"NSMutableArray",&,N,V_selectedNames
// property searchRegularExpression attributes=T@"NSRegularExpression",&,N,V_searchRegularExpression
// property searchResultsTotalCount attributes=Tq,N,V_searchResultsTotalCount
// property currentHighlightedResultIndex attributes=Tq,N,V_currentHighlightedResultIndex
// property lastHighlightedItem attributes=T@"QMUIConsoleLogItem",W,N,V_lastHighlightedItem
// property popoverPanGesture attributes=T@"UIPanGestureRecognizer",&,N,V_popoverPanGesture
// property popoverLongPressGesture attributes=T@"UILongPressGestureRecognizer",&,N,V_popoverLongPressGesture
// property popoverAnimating attributes=TB,N,V_popoverAnimating
// property popoverButton attributes=T@"QMUIButton",R,N,V_popoverButton
// property tableView attributes=T@"QMUITableView",R,N,V_tableView
// property toolbar attributes=T@"QMUIConsoleToolbar",R,N,V_toolbar
// property dateFormatter attributes=T@"NSDateFormatter",R,N,V_dateFormatter
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10046c6e8 | v16@0:8
- (void)didInitialize;
// IMP 0x10046c834 | @16@0:8
- (id)containerView;
// IMP 0x10046c8c0 | @16@0:8
- (id)tableView;
// IMP 0x10046c9b4 | @16@0:8
- (id)toolbar;
// IMP 0x10046cc40 | @16@0:8
- (id)popoverButton;
// IMP 0x10046ceec | v16@0:8
- (void)initSubviews;
// IMP 0x10046d3cc | v16@0:8
- (void)viewDidLoad;
// IMP 0x10046d708 | {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (struct CGRect)safetyPopoverButtonFrame:(struct CGRect)arg0;
// IMP 0x10046d9b0 | v16@0:8
- (void)layoutPopoverButton;
// IMP 0x10046dd30 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10046e220 | B16@0:8
- (BOOL)shouldAutorotate;
// IMP 0x10046e264 | Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// IMP 0x10046e2a8 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x10046e324 | v40@0:8@16@24@32
- (void)logWithLevel:(id)arg0 name:(id)arg1 logString:(id)arg2;
// IMP 0x10046e4b8 | v24@0:8@16
- (void)log:(id)arg0;
// IMP 0x10046e4c8 | v16@0:8
- (void)printLog;
// IMP 0x10046ea98 | v16@0:8
- (void)clear;
// IMP 0x10046ec0c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x10046ec48 | @32@0:8@16@24
- (id)qmui_tableView:(id)arg0 cacheKeyForRowAtIndexPath:(id)arg1;
// IMP 0x10046ecf4 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10046edfc | v24@0:8@16
- (void)handlePopoverTouchEvent:(id)arg0;
// IMP 0x10046f84c | v24@0:8@16
- (void)handlePopoverPanGestureRecognizer:(id)arg0;
// IMP 0x10046fbe8 | v24@0:8@16
- (void)handlePopverLongPressGestureRecognizer:(id)arg0;
// IMP 0x10046ffbc | v16@0:8
- (void)updateToolbarButtonState;
// IMP 0x1004700a8 | @16@0:8
- (id)generatePopupMenuView;
// IMP 0x100470434 | @32@0:8@?16@24
- (id)popupMenuItemsByTitleBlock:(id /* block */)arg0 selectedArray:(id)arg1;
// IMP 0x100470968 | v24@0:8@16
- (void)handleLevelButtonEvent:(id)arg0;
// IMP 0x100470a44 | v24@0:8@16
- (void)handleNameButtonEvent:(id)arg0;
// IMP 0x100470b20 | v24@0:8@16
- (void)handleClearButtonEvent:(id)arg0;
// IMP 0x100470b24 | v24@0:8@16
- (void)searchInLogItem:(id)arg0;
// IMP 0x100470cd4 | v24@0:8@16
- (void)handleSearchTextFieldChanged:(id)arg0;
// IMP 0x100470e68 | v24@0:8@16
- (void)handleSearchResultPreviousButtonEvent:(id)arg0;
// IMP 0x100470ea8 | v24@0:8@16
- (void)handleSearchResultNextButtonEvent:(id)arg0;
// IMP 0x100470ef8 | v24@0:8q16
- (void)setCurrentHighlightedResultIndex:(long long)arg0;
// IMP 0x1004713a8 | v24@0:8@16
- (void)handleKeyboardWillChangeFrame:(id)arg0;
// IMP 0x10047156c | B24@0:8@16
- (BOOL)textFieldShouldReturn:(id)arg0;
// IMP 0x100471574 | @16@0:8
- (id)dateFormatter;
// IMP 0x100471584 | @16@0:8
- (id)backgroundColor;
// IMP 0x100471594 | v24@0:8@16
- (void)setContainerView:(id)arg0;
// IMP 0x1004715a8 | @16@0:8
- (id)levelMenu;
// IMP 0x1004715b8 | v24@0:8@16
- (void)setLevelMenu:(id)arg0;
// IMP 0x1004715cc | @16@0:8
- (id)nameMenu;
// IMP 0x1004715dc | v24@0:8@16
- (void)setNameMenu:(id)arg0;
// IMP 0x1004715f0 | @16@0:8
- (id)logItems;
// IMP 0x100471600 | v24@0:8@16
- (void)setLogItems:(id)arg0;
// IMP 0x100471614 | @16@0:8
- (id)showingLogItems;
// IMP 0x100471624 | v24@0:8@16
- (void)setShowingLogItems:(id)arg0;
// IMP 0x100471638 | @16@0:8
- (id)selectedLevels;
// IMP 0x100471648 | v24@0:8@16
- (void)setSelectedLevels:(id)arg0;
// IMP 0x10047165c | @16@0:8
- (id)selectedNames;
// IMP 0x10047166c | v24@0:8@16
- (void)setSelectedNames:(id)arg0;
// IMP 0x100471680 | @16@0:8
- (id)searchRegularExpression;
// IMP 0x100471690 | v24@0:8@16
- (void)setSearchRegularExpression:(id)arg0;
// IMP 0x1004716a4 | q16@0:8
- (long long)searchResultsTotalCount;
// IMP 0x1004716b4 | v24@0:8q16
- (void)setSearchResultsTotalCount:(long long)arg0;
// IMP 0x1004716c4 | q16@0:8
- (long long)currentHighlightedResultIndex;
// IMP 0x1004716d4 | @16@0:8
- (id)lastHighlightedItem;
// IMP 0x1004716f4 | v24@0:8@16
- (void)setLastHighlightedItem:(id)arg0;
// IMP 0x100471708 | @16@0:8
- (id)popoverPanGesture;
// IMP 0x100471718 | v24@0:8@16
- (void)setPopoverPanGesture:(id)arg0;
// IMP 0x10047172c | @16@0:8
- (id)popoverLongPressGesture;
// IMP 0x10047173c | v24@0:8@16
- (void)setPopoverLongPressGesture:(id)arg0;
// IMP 0x100471750 | B16@0:8
- (BOOL)popoverAnimating;
// IMP 0x100471760 | v20@0:8B16
- (void)setPopoverAnimating:(BOOL)arg0;
// IMP 0x100471770 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
