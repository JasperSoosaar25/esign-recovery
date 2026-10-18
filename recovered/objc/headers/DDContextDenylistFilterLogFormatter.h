// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82648
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDContextDenylistFilterLogFormatter : NSObject
// ivar _contextSet encoding=@"DDLoggingContextSet" offset=8
// property blacklist attributes=T@"NSArray",R,C
// property denylist attributes=T@"NSArray",R,C
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040a8cc | v24@0:8q16
- (void)addToBlacklist:(long long)arg0;
// IMP 0x10040a8d0 | v24@0:8q16
- (void)removeFromBlacklist:(long long)arg0;
// IMP 0x10040a8d4 | @16@0:8
- (id)blacklist;
// IMP 0x10040a8d8 | B24@0:8q16
- (BOOL)isOnBlacklist:(long long)arg0;
// IMP 0x10040a558 | @16@0:8
- (id)init;
// IMP 0x10040a5c0 | v24@0:8q16
- (void)addToDenylist:(long long)arg0;
// IMP 0x10040a5c8 | v24@0:8q16
- (void)removeFromDenylist:(long long)arg0;
// IMP 0x10040a5d0 | @16@0:8
- (id)denylist;
// IMP 0x10040a5d8 | B24@0:8q16
- (BOOL)isOnDenylist:(long long)arg0;
// IMP 0x10040a5e0 | @24@0:8@16
- (id)formatLogMessage:(id)arg0;
// IMP 0x10040a650 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
