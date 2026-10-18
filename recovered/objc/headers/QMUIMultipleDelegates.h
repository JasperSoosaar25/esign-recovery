// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8b6d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIMultipleDelegates : NSObject
// ivar _delegates encoding=@"NSPointerArray" offset=8
// ivar _parentObject encoding=@"NSObject" offset=16
// ivar _forwardingInvocation encoding=@"NSInvocation" offset=24
// ivar _inquiringSelector encoding=: offset=32
// property delegates attributes=T@"NSPointerArray",&,N,V_delegates
// property forwardingInvocation attributes=T@"NSInvocation",&,N,V_forwardingInvocation
// property inquiringSelector attributes=T:,N,V_inquiringSelector
// property parentObject attributes=T@"NSObject",W,N,V_parentObject
// IMP 0x1004a83cc | v16@0:8
- (void)resetClassNameIfNeeded;
// IMP 0x1004a8600 | v24@0:8@16
- (void)addDelegate:(id)arg0;
// IMP 0x1004a8678 | B24@0:8@16
- (BOOL)removeDelegate:(id)arg0;
// IMP 0x1004a8710 | v16@0:8
- (void)removeAllDelegates;
// IMP 0x1004a878c | B24@0:8@16
- (BOOL)containsDelegate:(id)arg0;
// IMP 0x1004a87f0 | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x1004a899c | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x1004a8bdc | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x1004a8de0 | B16@0:8
- (BOOL)isProxy;
// IMP 0x1004a8de8 | B24@0:8#16
- (BOOL)isKindOfClass:(Class)arg0;
// IMP 0x1004a8f48 | B24@0:8#16
- (BOOL)isMemberOfClass:(Class)arg0;
// IMP 0x1004a90a8 | B24@0:8@16
- (BOOL)conformsToProtocol:(id)arg0;
// IMP 0x1004a9218 | @16@0:8
- (id)description;
// IMP 0x1004a92dc | @24@0:8@16
- (id)valueForKey:(id)arg0;
// IMP 0x1004a9474 | v32@0:8@16@24
- (void)setValue:(id)arg0 forKey:(id)arg1;
// IMP 0x1004a95e0 | @16@0:8
- (id)delegates;
// IMP 0x1004a95e8 | v24@0:8@16
- (void)setDelegates:(id)arg0;
// IMP 0x1004a95f4 | @16@0:8
- (id)parentObject;
// IMP 0x1004a960c | v24@0:8@16
- (void)setParentObject:(id)arg0;
// IMP 0x1004a9618 | @16@0:8
- (id)forwardingInvocation;
// IMP 0x1004a9620 | v24@0:8@16
- (void)setForwardingInvocation:(id)arg0;
// IMP 0x1004a962c | :16@0:8
- (SEL)inquiringSelector;
// IMP 0x1004a9634 | v24@0:8:16
- (void)setInquiringSelector:(SEL)arg0;
// IMP 0x1004a963c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004a8324 | @16@0:8
+ (id)weakDelegates;
// IMP 0x1004a8378 | @16@0:8
+ (id)strongDelegates;
@end
