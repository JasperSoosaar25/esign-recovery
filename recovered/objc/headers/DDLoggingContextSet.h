// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c825f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLoggingContextSet : NSObject
// ivar _mutex encoding={_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} offset=8
// ivar _set encoding=@"NSMutableSet" offset=72
// property currentSet attributes=T@"NSArray",R,C
// IMP 0x10040a65c | @16@0:8
- (id)init;
// IMP 0x10040a6d0 | v16@0:8
- (void)dealloc;
// IMP 0x10040a718 | v24@0:8q16
- (void)addToSet:(long long)arg0;
// IMP 0x10040a784 | v24@0:8q16
- (void)removeFromSet:(long long)arg0;
// IMP 0x10040a7f0 | @16@0:8
- (id)currentSet;
// IMP 0x10040a838 | B24@0:8q16
- (BOOL)isInSet:(long long)arg0;
// IMP 0x10040a8b0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
