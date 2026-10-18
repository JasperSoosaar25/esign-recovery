// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97e90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMUcDB : NSObject
// ivar _db encoding=^{sqlite3=} offset=8
// ivar _dbm encoding=^{sqlite3=} offset=16
// IMP 0x1006cecd0 | @16@0:8
- (id)init;
// IMP 0x1006ced0c | ^{sqlite3=}16@0:8
- (struct sqlite3 *)dbhandle;
// IMP 0x1006ced70 | v24@0:8^^{sqlite3}16
- (void)initlizeDB:(struct sqlite3 * *)arg0;
// IMP 0x1006cf13c | B32@0:8@16@24
- (BOOL)existColumnName:(id)arg0 withTableName:(id)arg1;
// IMP 0x1006cf3b8 | v24@0:8^^{sqlite3}16
- (void)closeDB:(struct sqlite3 * *)arg0;
// IMP 0x1006cf3e4 | v16@0:8
- (void)resetDB;
// IMP 0x1006cf47c | B24@0:8@16
- (BOOL)runSql:(id)arg0;
// IMP 0x1006cf5e0 | v24@0:8@16
- (void)verifyCTTableWithName:(id)arg0;
// IMP 0x1006cf6e0 | v24@0:8@16
- (void)verifySCTTableWithName:(id)arg0;
// IMP 0x1006cf7e0 | v64@0:8@16@24@32@40@48@56
- (void)insertToTable:(id)arg0 context:(id)arg1 header:(id)arg2 type:(id)arg3 path:(id)arg4 version:(id)arg5;
// IMP 0x1006cfa14 | v32@0:8@16@24
- (void)clearDataInTable:(id)arg0 sid:(id)arg1;
// IMP 0x1006cfb94 | @24@0:8@16
- (id)loadEtTable:(id)arg0;
// IMP 0x1006cff78 | i24@0:8@16
- (int)rowCountInTable:(id)arg0;
// IMP 0x1006d00f0 | @24@0:8*16
- (id)isHas:(char *)arg0;
// IMP 0x1006d0130 | @24@0:8@16
- (id)AESEncryptData:(id)arg0;
// IMP 0x1006d022c | @24@0:8@16
- (id)AESDecryptData:(id)arg0;
// IMP 0x1006d037c | @16@0:8
- (id)getAESKey;
// IMP 0x1006cec20 | @16@0:8
+ (id)sharedInstance;
@end
