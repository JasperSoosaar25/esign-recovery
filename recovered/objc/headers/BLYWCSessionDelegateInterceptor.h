// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96860
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYWCSessionDelegateInterceptor : NSObject
// ivar _target encoding=@ offset=8
// property target attributes=T@,N,V_target
// IMP 0x1006794e0 | v24@0:8@16
- (void)setTarget:(id)arg0;
// IMP 0x1006797e4 | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x100679908 | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x100679a10 | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x100679b74 | v40@0:8@16@24@?32
- (void)Bugly_Session:(id)arg0 didReceiveMessage:(id)arg1 replyHandler:(id /* block */)arg2;
// IMP 0x10067a210 | B24@0:8@16
- (BOOL)updateApplicationContext:(id)arg0;
// IMP 0x10067a494 | v32@0:8@16@24
- (void)Bugly_Session:(id)arg0 didReceiveApplicationContext:(id)arg1;
// IMP 0x10067aa44 | @16@0:8
- (id)target;
// IMP 0x100679460 | @16@0:8
+ (id)sharedInterceptor;
// IMP 0x1006794f4 | v16@0:8
+ (void)load;
@end
