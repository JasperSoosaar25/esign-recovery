// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90988
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWeakProxy : NSProxy
// ivar _target encoding=@ offset=8
// property target attributes=T@,R,W,N,V_target
// IMP 0x10054a4f8 | @24@0:8@16
- (id)initWithTarget:(id)arg0;
// IMP 0x10054a578 | @24@0:8:16
- (id)forwardingTargetForSelector:(SEL)arg0;
// IMP 0x10054a598 | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x10054a5c0 | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x10054a5d4 | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x10054a61c | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10054a680 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10054a6c0 | #16@0:8
- (Class)superclass;
// IMP 0x10054a708 | #16@0:8
- (Class)class;
// IMP 0x10054a750 | B24@0:8#16
- (BOOL)isKindOfClass:(Class)arg0;
// IMP 0x10054a798 | B24@0:8#16
- (BOOL)isMemberOfClass:(Class)arg0;
// IMP 0x10054a7e0 | B24@0:8@16
- (BOOL)conformsToProtocol:(id)arg0;
// IMP 0x10054a844 | B16@0:8
- (BOOL)isProxy;
// IMP 0x10054a84c | @16@0:8
- (id)description;
// IMP 0x10054a894 | @16@0:8
- (id)debugDescription;
// IMP 0x10054a8dc | @16@0:8
- (id)target;
// IMP 0x10054a8fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054a52c | @24@0:8@16
+ (id)proxyWithTarget:(id)arg0;
@end
