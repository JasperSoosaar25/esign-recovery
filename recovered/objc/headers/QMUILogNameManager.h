// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a620
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUILogNameManager : NSObject
// ivar _didInitialize encoding=B offset=8
// ivar _mutableAllNames encoding=@"NSMutableDictionary" offset=16
// property mutableAllNames attributes=T@"NSMutableDictionary",&,N,V_mutableAllNames
// property didInitialize attributes=TB,N,V_didInitialize
// property allNames attributes=T@"NSDictionary",R,C,N
// IMP 0x10049d0c0 | @16@0:8
- (id)init;
// IMP 0x10049d280 | @16@0:8
- (id)allNames;
// IMP 0x10049d2f8 | B24@0:8@16
- (BOOL)containsLogName:(id)arg0;
// IMP 0x10049d37c | v28@0:8B16@20
- (void)setEnabled:(BOOL)arg0 forLogName:(id)arg1;
// IMP 0x10049d4b0 | B24@0:8@16
- (BOOL)enabledForLogName:(id)arg0;
// IMP 0x10049d54c | v24@0:8@16
- (void)removeLogName:(id)arg0;
// IMP 0x10049d650 | v16@0:8
- (void)removeAllNames;
// IMP 0x10049d840 | v16@0:8
- (void)synchronizeUserDefaults;
// IMP 0x10049d8d0 | @16@0:8
- (id)mutableAllNames;
// IMP 0x10049d8d8 | v24@0:8@16
- (void)setMutableAllNames:(id)arg0;
// IMP 0x10049d8e4 | B16@0:8
- (BOOL)didInitialize;
// IMP 0x10049d8ec | v20@0:8B16
- (void)setDidInitialize:(BOOL)arg0;
// IMP 0x10049d8f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
