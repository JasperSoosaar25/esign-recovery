// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c970d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMUaDB : NSObject
// ivar _db encoding=^{sqlite3=} offset=8
// ivar _dbm encoding=^{sqlite3=} offset=16
// IMP 0x1006a17a0 | @16@0:8
- (id)init;
// IMP 0x1006a17dc | ^{sqlite3=}16@0:8
- (struct sqlite3 *)dbhandle;
// IMP 0x1006a1840 | v24@0:8^^{sqlite3}16
- (void)initlizeDB:(struct sqlite3 * *)arg0;
// IMP 0x1006a1f94 | B32@0:8@16@24
- (BOOL)existColumnName:(id)arg0 withTableName:(id)arg1;
// IMP 0x1006a2210 | v40@0:8@16@24@32
- (void)alertColumnName:(id)arg0 withColumnType:(id)arg1 withTableName:(id)arg2;
// IMP 0x1006a23c4 | v24@0:8^^{sqlite3}16
- (void)closeDB:(struct sqlite3 * *)arg0;
// IMP 0x1006a23f0 | v16@0:8
- (void)resetDB;
// IMP 0x1006a2488 | B24@0:8@16
- (BOOL)runSql:(id)arg0;
// IMP 0x1006a25ec | v24@0:8@16
- (void)verifySDTableWithName:(id)arg0;
// IMP 0x1006a26ec | v24@0:8@16
- (void)verifySTTableWithName:(id)arg0;
// IMP 0x1006a27ec | v24@0:8@16
- (void)verifyETTableWithName:(id)arg0;
// IMP 0x1006a28ec | v24@0:8@16
- (void)verifyERTableWithName:(id)arg0;
// IMP 0x1006a29ec | v32@0:8@16@24
- (void)clearDataInTable:(id)arg0 sid:(id)arg1;
// IMP 0x1006a2b6c | v32@0:8@16@24
- (void)clearDataInTable:(id)arg0 withVersion:(id)arg1;
// IMP 0x1006a2cec | v40@0:8@16@24@32
- (void)clearDataInTable:(id)arg0 withVersion:(id)arg1 withSid:(id)arg2;
// IMP 0x1006a2f04 | v32@0:8@16@24
- (void)clearSdDataInTable:(id)arg0 sid:(id)arg1;
// IMP 0x1006a30a0 | v24@0:8@16
- (void)clearAllSdDataInTable:(id)arg0;
// IMP 0x1006a31a0 | v40@0:8@16@24@32
- (void)clearSdDataInTable:(id)arg0 withVersion:(id)arg1 withSid:(id)arg2;
// IMP 0x1006a346c | i24@0:8@16
- (int)rowCountInTable:(id)arg0;
// IMP 0x1006a3610 | v32@0:8@16@24
- (void)insertErrorToErTable:(id)arg0 context:(id)arg1;
// IMP 0x1006a37a8 | @24@0:8@16
- (id)loadErTable:(id)arg0;
// IMP 0x1006a3acc | @24@0:8@16
- (id)loadErTableWithVersion:(id)arg0;
// IMP 0x1006a3dd4 | @32@0:8@16@24
- (id)loadErTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006a4160 | v48@0:8@16@24@32@40
- (void)insertEventToErTable:(id)arg0 eventId:(id)arg1 event:(id)arg2 type:(id)arg3;
// IMP 0x1006a4374 | @24@0:8@16
- (id)loadEtTable:(id)arg0;
// IMP 0x1006a4704 | @24@0:8@16
- (id)loadEtTableWithVersion:(id)arg0;
// IMP 0x1006a4a70 | @32@0:8@16@24
- (id)loadEtTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006a4e68 | i32@0:8@16@24
- (int)rowSdCountInTable:(id)arg0 sessionId:(id)arg1;
// IMP 0x1006a5078 | B32@0:8@16@24
- (BOOL)checkBeginSessionExist:(id)arg0 st:(id)arg1;
// IMP 0x1006a52ec | v32@0:8@16@24
- (void)insertSessionToSdTable:(id)arg0 st:(id)arg1;
// IMP 0x1006a54b0 | v32@0:8@16@24
- (void)insertLocationToSdTable:(id)arg0 location:(id)arg1;
// IMP 0x1006a5620 | v32@0:8@16@24
- (void)insertPageToSdTable:(id)arg0 page:(id)arg1;
// IMP 0x1006a5790 | v32@0:8@16@24
- (void)insertAutoPageToSdTable:(id)arg0 page:(id)arg1;
// IMP 0x1006a5900 | @24@0:8@16
- (id)loadSdTable:(id)arg0;
// IMP 0x1006a5d80 | @24@0:8@16
- (id)loadSdTableWithVersion:(id)arg0;
// IMP 0x1006a61e8 | @32@0:8@16@24
- (id)loadSdTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006a67a0 | v32@0:8@16@24
- (void)insertSessionEndToSdTable:(id)arg0 et:(id)arg1;
// IMP 0x1006a6f1c | @24@0:8*16
- (id)isHas:(char *)arg0;
// IMP 0x1006a6f5c | v24@0:8@16
- (void)isHasSession:(id)arg0;
// IMP 0x1006a70a0 | @24@0:8@16
- (id)AESEncryptData:(id)arg0;
// IMP 0x1006a719c | @24@0:8@16
- (id)AESDecryptData:(id)arg0;
// IMP 0x1006a72ec | @16@0:8
- (id)getAESKey;
// IMP 0x1006a7650 | @16@0:8
- (id)loadSdIdTable;
// IMP 0x1006a7968 | v40@0:8@16@24@32
- (void)insertSessionToStTable:(id)arg0 st:(id)arg1 property:(id)arg2;
// IMP 0x1006a7b24 | @32@0:8@16@24
- (id)loadStTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006a7ec0 | v40@0:8@16@24@32
- (void)clearStDataInTable:(id)arg0 withVersion:(id)arg1 withSid:(id)arg2;
// IMP 0x1006a80bc | @24@0:8@16
- (id)loadPageTable:(id)arg0;
// IMP 0x1006a16f0 | @16@0:8
+ (id)sharedInstance;
@end
