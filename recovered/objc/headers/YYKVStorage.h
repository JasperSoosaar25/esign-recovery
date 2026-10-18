// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94158
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYKVStorage : NSObject
// ivar _trashQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar _path encoding=@"NSString" offset=16
// ivar _dbPath encoding=@"NSString" offset=24
// ivar _dataPath encoding=@"NSString" offset=32
// ivar _trashPath encoding=@"NSString" offset=40
// ivar _db encoding=^{sqlite3=} offset=48
// ivar _dbStmtCache encoding=^{__CFDictionary=} offset=56
// ivar _dbLastOpenErrorTime encoding=d offset=64
// ivar _dbOpenErrorCount encoding=Q offset=72
// ivar _errorLogsEnabled encoding=B offset=80
// ivar _type encoding=Q offset=88
// property path attributes=T@"NSString",R,N,V_path
// property type attributes=TQ,R,N,V_type
// property errorLogsEnabled attributes=TB,N,V_errorLogsEnabled
// IMP 0x10058d5d4 | B16@0:8
- (BOOL)_dbOpen;
// IMP 0x10058d6bc | B16@0:8
- (BOOL)_dbClose;
// IMP 0x10058d778 | B16@0:8
- (BOOL)_dbCheck;
// IMP 0x10058d7e8 | B16@0:8
- (BOOL)_dbInitialize;
// IMP 0x10058d7f4 | v16@0:8
- (void)_dbCheckpoint;
// IMP 0x10058d82c | B24@0:8@16
- (BOOL)_dbExecute:(id)arg0;
// IMP 0x10058d8fc | ^{sqlite3_stmt=}24@0:8@16
- (struct sqlite3_stmt *)_dbPrepareStmt:(id)arg0;
// IMP 0x10058d9fc | @24@0:8@16
- (id)_dbJoinedKeys:(id)arg0;
// IMP 0x10058da90 | v36@0:8@16^{sqlite3_stmt=}24i32
- (void)_dbBindJoinedKeys:(id)arg0 stmt:(struct sqlite3_stmt *)arg1 fromIndex:(int)arg2;
// IMP 0x10058db40 | B48@0:8@16@24@32@40
- (BOOL)_dbSaveWithKey:(id)arg0 value:(id)arg1 fileName:(id)arg2 extendedData:(id)arg3;
// IMP 0x10058dd64 | B24@0:8@16
- (BOOL)_dbUpdateAccessTimeWithKey:(id)arg0;
// IMP 0x10058de48 | B24@0:8@16
- (BOOL)_dbUpdateAccessTimeWithKeys:(id)arg0;
// IMP 0x10058dfd4 | B24@0:8@16
- (BOOL)_dbDeleteItemWithKey:(id)arg0;
// IMP 0x10058e0a0 | B24@0:8@16
- (BOOL)_dbDeleteItemWithKeys:(id)arg0;
// IMP 0x10058e224 | B20@0:8i16
- (BOOL)_dbDeleteItemsWithSizeLargerThan:(int)arg0;
// IMP 0x10058e2c4 | B20@0:8i16
- (BOOL)_dbDeleteItemsWithTimeEarlierThan:(int)arg0;
// IMP 0x10058e364 | @28@0:8^{sqlite3_stmt=}16B24
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt *)arg0 excludeInlineData:(BOOL)arg1;
// IMP 0x10058e57c | @28@0:8@16B24
- (id)_dbGetItemWithKey:(id)arg0 excludeInlineData:(BOOL)arg1;
// IMP 0x10058e688 | @28@0:8@16B24
- (id)_dbGetItemWithKeys:(id)arg0 excludeInlineData:(BOOL)arg1;
// IMP 0x10058e878 | @24@0:8@16
- (id)_dbGetValueWithKey:(id)arg0;
// IMP 0x10058e99c | @24@0:8@16
- (id)_dbGetFilenameWithKey:(id)arg0;
// IMP 0x10058eaa4 | @24@0:8@16
- (id)_dbGetFilenameWithKeys:(id)arg0;
// IMP 0x10058ec94 | @20@0:8i16
- (id)_dbGetFilenamesWithSizeLargerThan:(int)arg0;
// IMP 0x10058eda8 | @20@0:8i16
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)arg0;
// IMP 0x10058eebc | @20@0:8i16
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)arg0;
// IMP 0x10058f08c | i24@0:8@16
- (int)_dbGetItemCountWithKey:(id)arg0;
// IMP 0x10058f168 | i16@0:8
- (int)_dbGetTotalItemSize;
// IMP 0x10058f208 | i16@0:8
- (int)_dbGetTotalItemCount;
// IMP 0x10058f2a8 | B32@0:8@16@24
- (BOOL)_fileWriteWithName:(id)arg0 data:(id)arg1;
// IMP 0x10058f31c | @24@0:8@16
- (id)_fileReadWithName:(id)arg0;
// IMP 0x10058f370 | B24@0:8@16
- (BOOL)_fileDeleteWithName:(id)arg0;
// IMP 0x10058f3e0 | B16@0:8
- (BOOL)_fileMoveAllToTrash;
// IMP 0x10058f4d0 | v16@0:8
- (void)_fileEmptyTrashInBackground;
// IMP 0x10058f6a8 | v16@0:8
- (void)_reset;
// IMP 0x10058f7cc | @16@0:8
- (id)init;
// IMP 0x10058f804 | @32@0:8@16Q24
- (id)initWithPath:(id)arg0 type:(unsigned long long)arg1;
// IMP 0x10058fb84 | v16@0:8
- (void)dealloc;
// IMP 0x10058fc34 | B24@0:8@16
- (BOOL)saveItem:(id)arg0;
// IMP 0x10058fd00 | B32@0:8@16@24
- (BOOL)saveItemWithKey:(id)arg0 value:(id)arg1;
// IMP 0x10058fd0c | B48@0:8@16@24@32@40
- (BOOL)saveItemWithKey:(id)arg0 value:(id)arg1 filename:(id)arg2 extendedData:(id)arg3;
// IMP 0x10058fe74 | B24@0:8@16
- (BOOL)removeItemForKey:(id)arg0;
// IMP 0x10058ff2c | B24@0:8@16
- (BOOL)removeItemForKeys:(id)arg0;
// IMP 0x100590098 | B20@0:8i16
- (BOOL)removeItemsLargerThanSize:(int)arg0;
// IMP 0x100590254 | B20@0:8i16
- (BOOL)removeItemsEarlierThanTime:(int)arg0;
// IMP 0x10059040c | B20@0:8i16
- (BOOL)removeItemsToFitSize:(int)arg0;
// IMP 0x100590688 | B20@0:8i16
- (BOOL)removeItemsToFitCount:(int)arg0;
// IMP 0x100590938 | B16@0:8
- (BOOL)removeAllItems;
// IMP 0x100590984 | v32@0:8@?16@?24
- (void)removeAllItemsWithProgressBlock:(id /* block */)arg0 endBlock:(id /* block */)arg1;
// IMP 0x100590c30 | @24@0:8@16
- (id)getItemForKey:(id)arg0;
// IMP 0x100590d40 | @24@0:8@16
- (id)getItemInfoForKey:(id)arg0;
// IMP 0x100590da0 | @24@0:8@16
- (id)getItemValueForKey:(id)arg0;
// IMP 0x100590ec0 | @24@0:8@16
- (id)getItemForKeys:(id)arg0;
// IMP 0x100591094 | @24@0:8@16
- (id)getItemInfoForKeys:(id)arg0;
// IMP 0x1005910f4 | @24@0:8@16
- (id)getItemValueForKeys:(id)arg0;
// IMP 0x1005912bc | B24@0:8@16
- (BOOL)itemExistsForKey:(id)arg0;
// IMP 0x100591314 | i16@0:8
- (int)getItemsCount;
// IMP 0x100591318 | i16@0:8
- (int)getItemsSize;
// IMP 0x10059131c | @16@0:8
- (id)path;
// IMP 0x100591324 | Q16@0:8
- (unsigned long long)type;
// IMP 0x10059132c | B16@0:8
- (BOOL)errorLogsEnabled;
// IMP 0x100591334 | v20@0:8B16
- (void)setErrorLogsEnabled:(BOOL)arg0;
// IMP 0x10059133c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
