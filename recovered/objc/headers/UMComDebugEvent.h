// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96ce8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComDebugEvent : NSObject
// ivar _ts encoding=Q offset=8
// property ts attributes=TQ,N,V_ts
// IMP 0x100687264 | Q16@0:8
- (unsigned long long)ts;
// IMP 0x10068726c | v24@0:8Q16
- (void)setTs:(unsigned long long)arg0;
// IMP 0x100687008 | @16@0:8
+ (id)sharedInstance;
// IMP 0x10068708c | v48@0:8@16@24@32@40
+ (void)onDebugEvent:(id)arg0 attributes:(id)arg1 header:(id)arg2 pathUrl:(id)arg3;
@end
