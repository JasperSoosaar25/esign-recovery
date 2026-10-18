// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e1a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDownloadDataSource : NSObject
// ivar _autoImport encoding=B offset=8
// ivar _autoDelete encoding=B offset=9
// ivar _count encoding=q offset=16
// ivar _dataSource encoding=@"NSMutableOrderedSet" offset=24
// ivar _dataDic encoding=@"NSMutableDictionary" offset=32
// property dataDic attributes=T@"NSMutableDictionary",&,N,V_dataDic
// property count attributes=Tq,N,V_count
// property dataSource attributes=T@"NSMutableOrderedSet",&,N,V_dataSource
// property autoImport attributes=TB,N,V_autoImport
// property autoDelete attributes=TB,N,V_autoDelete
// IMP 0x1001c3ebc | @16@0:8
- (id)init;
// IMP 0x1001c496c | v24@0:8@16
- (void)downLoadIPA:(id)arg0;
// IMP 0x1001c641c | v16@0:8
- (void)startAll;
// IMP 0x1001c67ac | q16@0:8
- (long long)count;
// IMP 0x1001c6844 | v24@0:8@16
- (void)addItem:(id)arg0;
// IMP 0x1001c6c28 | v16@0:8
- (void)save;
// IMP 0x1001c6f70 | v24@0:8@16
- (void)removeItem:(id)arg0;
// IMP 0x1001c7324 | @24@0:8@16
- (id)itemAtIndexPath:(id)arg0;
// IMP 0x1001c74e8 | @24@0:8@16
- (id)itemWithIdf:(id)arg0;
// IMP 0x1001c7618 | @16@0:8
- (id)dataSource;
// IMP 0x1001c7e34 | v20@0:8B16
- (void)setAutoDelete:(BOOL)arg0;
// IMP 0x1001c81f4 | v20@0:8B16
- (void)setAutoImport:(BOOL)arg0;
// IMP 0x1001c85d4 | v24@0:8q16
- (void)setCount:(long long)arg0;
// IMP 0x1001c85e8 | v24@0:8@16
- (void)setDataSource:(id)arg0;
// IMP 0x1001c8678 | B16@0:8
- (BOOL)autoImport;
// IMP 0x1001c86a4 | B16@0:8
- (BOOL)autoDelete;
// IMP 0x1001c86c0 | @16@0:8
- (id)dataDic;
// IMP 0x1001c86e0 | v24@0:8@16
- (void)setDataDic:(id)arg0;
// IMP 0x1001c8750 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001c3cf0 | @16@0:8
+ (id)shared;
@end
