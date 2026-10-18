// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c825d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDContextAllowlistFilterLogFormatter : NSObject
// ivar _contextSet encoding=@"DDLoggingContextSet" offset=8
// property whitelist attributes=T@"NSArray",R,C,N
// property allowlist attributes=T@"NSArray",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040a8bc | v24@0:8q16
- (void)addToWhitelist:(long long)arg0;
// IMP 0x10040a8c0 | v24@0:8q16
- (void)removeFromWhitelist:(long long)arg0;
// IMP 0x10040a8c4 | @16@0:8
- (id)whitelist;
// IMP 0x10040a8c8 | B24@0:8q16
- (BOOL)isOnWhitelist:(long long)arg0;
// IMP 0x10040a454 | @16@0:8
- (id)init;
// IMP 0x10040a4bc | v24@0:8q16
- (void)addToAllowlist:(long long)arg0;
// IMP 0x10040a4c4 | v24@0:8q16
- (void)removeFromAllowlist:(long long)arg0;
// IMP 0x10040a4cc | @16@0:8
- (id)allowlist;
// IMP 0x10040a4d4 | B24@0:8q16
- (BOOL)isOnAllowlist:(long long)arg0;
// IMP 0x10040a4dc | @24@0:8@16
- (id)formatLogMessage:(id)arg0;
// IMP 0x10040a54c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
