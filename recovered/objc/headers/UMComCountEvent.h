// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c968b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComCountEvent : UMComEvent
// ivar _du encoding=i offset=8
// ivar _key encoding=@"NSString" offset=16
// property du attributes=Ti,N,V_du
// property key attributes=T@"NSString",C,N,V_key
// IMP 0x10067aa4c | @16@0:8
- (id)umComEventDic;
// IMP 0x10067ab50 | v16@0:8
- (void)updateDu;
// IMP 0x10067abb0 | v24@0:8@16
- (void)updateDuWithEndEvent:(id)arg0;
// IMP 0x10067ac7c | v16@0:8
- (void)outputUMLog;
// IMP 0x10067aff4 | i16@0:8
- (int)du;
// IMP 0x10067b004 | v20@0:8i16
- (void)setDu:(int)arg0;
// IMP 0x10067b014 | @16@0:8
- (id)key;
// IMP 0x10067b024 | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x10067b03c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
