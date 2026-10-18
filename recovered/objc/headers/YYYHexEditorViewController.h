// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7f9c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYHexEditorViewController : QMUICommonTableViewController
// ivar _filePath encoding=@"NSString" offset=16
// ivar _dataSource encoding=@"NSMutableDictionary" offset=24
// ivar _data encoding=@"NSMutableData" offset=32
// ivar _fileHandle encoding=@"NSFileHandle" offset=40
// ivar _count encoding=Q offset=48
// ivar _limit encoding=Q offset=56
// ivar _fileSize encoding=Q offset=64
// ivar _selectInfo encoding=@"NSMutableDictionary" offset=72
// ivar _searchBar encoding=@"UISearchBar" offset=80
// ivar _searchFromLocation encoding=Q offset=88
// property dataSource attributes=T@"NSMutableDictionary",&,N,V_dataSource
// property data attributes=T@"NSMutableData",&,N,V_data
// property fileHandle attributes=T@"NSFileHandle",&,N,V_fileHandle
// property count attributes=TQ,N,V_count
// property limit attributes=TQ,N,V_limit
// property fileSize attributes=TQ,N,V_fileSize
// property selectInfo attributes=T@"NSMutableDictionary",W,N,V_selectInfo
// property searchBar attributes=T@"UISearchBar",&,N,V_searchBar
// property searchFromLocation attributes=TQ,N,V_searchFromLocation
// property filePath attributes=T@"NSString",C,N,V_filePath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10024ca24 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10024d158 | v16@0:8
- (void)dealloc;
// IMP 0x10024d1b4 | v16@0:8
- (void)initSubviews;
// IMP 0x10024d6ec | v16@0:8
- (void)initTableView;
// IMP 0x10024dab0 | v24@0:8@16
- (void)searchBarTextDidBeginEditing:(id)arg0;
// IMP 0x10024dabc | v24@0:8@16
- (void)searchBarTextDidEndEditing:(id)arg0;
// IMP 0x10024db20 | v24@0:8@16
- (void)searchBarCancelButtonClicked:(id)arg0;
// IMP 0x10024dba0 | v32@0:8@16@24
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
// IMP 0x10024dbf8 | v24@0:8@16
- (void)searchBarSearchButtonClicked:(id)arg0;
// IMP 0x10024e3e0 | v36@0:8@16q24B32
- (void)searhData:(id)arg0 fromLocation:(long long)arg1 isByte:(BOOL)arg2;
// IMP 0x10024f2f0 | v24@0:8@16
- (void)selectHexInfo:(id)arg0;
// IMP 0x100250630 | v16@0:8
- (void)showJumpToAddress;
// IMP 0x10025104c | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1002510e8 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x10025144c | v40@0:8@16@24@32
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
// IMP 0x100251704 | @24@0:8@16
- (id)getInfoAtIndexPath:(id)arg0;
// IMP 0x100252340 | v24@0:8@16
- (void)scrollViewDidScroll:(id)arg0;
// IMP 0x1002524f8 | @16@0:8
- (id)filePath;
// IMP 0x100252520 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1002525a0 | @16@0:8
- (id)dataSource;
// IMP 0x1002525d4 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x100252660 | @16@0:8
- (id)data;
// IMP 0x100252688 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x1002526ec | @16@0:8
- (id)fileHandle;
// IMP 0x100252720 | v24@0:8@16
- (void)setFileHandle:(id)arg0;
// IMP 0x1002527c4 | Q16@0:8
- (unsigned long long)count;
// IMP 0x1002527fc | v24@0:8Q16
- (void)setCount:(unsigned long long)arg0;
// IMP 0x10025284c | Q16@0:8
- (unsigned long long)limit;
// IMP 0x100252874 | v24@0:8Q16
- (void)setLimit:(unsigned long long)arg0;
// IMP 0x1002528c4 | Q16@0:8
- (unsigned long long)fileSize;
// IMP 0x1002528f8 | v24@0:8Q16
- (void)setFileSize:(unsigned long long)arg0;
// IMP 0x10025293c | @16@0:8
- (id)selectInfo;
// IMP 0x100252994 | v24@0:8@16
- (void)setSelectInfo:(id)arg0;
// IMP 0x1002529ec | @16@0:8
- (id)searchBar;
// IMP 0x1002529fc | v24@0:8@16
- (void)setSearchBar:(id)arg0;
// IMP 0x100252a28 | Q16@0:8
- (unsigned long long)searchFromLocation;
// IMP 0x100252a5c | v24@0:8Q16
- (void)setSearchFromLocation:(unsigned long long)arg0;
// IMP 0x100252a78 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
