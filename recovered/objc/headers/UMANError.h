// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96ae0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMANError : UMComEvent
// ivar _context encoding=@"NSString" offset=8
// property context attributes=T@"NSString",C,N,V_context
// IMP 0x1006812d0 | v16@0:8
- (void)dealloc;
// IMP 0x10068132c | @16@0:8
- (id)init;
// IMP 0x10068138c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100681404 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100681474 | v16@0:8
- (void)outputUMLog;
// IMP 0x100681774 | @16@0:8
- (id)context;
// IMP 0x100681784 | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x10068156c | v32@0:8@16@24
+ (void)insertTable:(id)arg0 context:(id)arg1;
// IMP 0x1006815b0 | i16@0:8
+ (int)rowCountInTable;
// IMP 0x1006815e4 | @24@0:8@16
+ (id)loadTable:(id)arg0;
// IMP 0x100681620 | @24@0:8@16
+ (id)loadTableWithVersion:(id)arg0;
// IMP 0x10068165c | @32@0:8@16@24
+ (id)loadTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006816a0 | v24@0:8@16
+ (void)clearDataInTable:(id)arg0;
// IMP 0x1006816e4 | v24@0:8@16
+ (void)clearDataInTableWithVersion:(id)arg0;
// IMP 0x100681728 | v32@0:8@16@24
+ (void)clearDataInTableWithVersion:(id)arg0 withSid:(id)arg1;
@end
