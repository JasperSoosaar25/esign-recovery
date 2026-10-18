// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96f40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMImprintObserverManager : NSObject
// ivar _obDic encoding=@"NSMutableDictionary" offset=8
// property obDic attributes=T@"NSMutableDictionary",&,N,V_obDic
// IMP 0x10069ed44 | @16@0:8
- (id)init;
// IMP 0x10069ee6c | B32@0:8@16@24
- (BOOL)existObserver:(id)arg0 inArray:(id)arg1;
// IMP 0x10069ef40 | B32@0:8@16@24
- (BOOL)doRegisterImprintKey:(id)arg0 withDelegate:(id)arg1;
// IMP 0x10069f09c | B32@0:8@16@24
- (BOOL)doUnregisterImprintKey:(id)arg0 withDelegate:(id)arg1;
// IMP 0x10069f204 | v40@0:8@16@24@32
- (void)doProcessImprintKey:(id)arg0 newImprintValue:(id)arg1 oldImprintValue:(id)arg2;
// IMP 0x10069f36c | B16@0:8
- (BOOL)doExistImprintObserver;
// IMP 0x10069f3e4 | B32@0:8@16@24
- (BOOL)registerImprintKey:(id)arg0 withDelegate:(id)arg1;
// IMP 0x10069f488 | B32@0:8@16@24
- (BOOL)unregisterImprintKey:(id)arg0 withDelegate:(id)arg1;
// IMP 0x10069f52c | v40@0:8@16@24@32
- (void)processImprintKey:(id)arg0 newImprintValue:(id)arg1 oldImprintValue:(id)arg2;
// IMP 0x10069f5e0 | B16@0:8
- (BOOL)existImprintObserver;
// IMP 0x10069f640 | @16@0:8
- (id)obDic;
// IMP 0x10069f648 | v24@0:8@16
- (void)setObDic:(id)arg0;
// IMP 0x10069f654 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10069edd0 | @16@0:8
+ (id)sharedInstance;
@end
