// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e278
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIWeakObjectContainer : NSProxy
// ivar _object encoding=@ offset=8
// property object attributes=T@,W,N,V_object
// property isQMUIWeakObjectContainer attributes=TB,R,N
// IMP 0x1004da1ec | @24@0:8@16
- (id)initWithObject:(id)arg0;
// IMP 0x1004da220 | @16@0:8
- (id)init;
// IMP 0x1004da26c | B16@0:8
- (BOOL)isQMUIWeakObjectContainer;
// IMP 0x1004da274 | @24@0:8:16
- (id)forwardingTargetForSelector:(SEL)arg0;
// IMP 0x1004da294 | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x1004da2bc | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x1004da2d0 | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x1004da330 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1004da394 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1004da3d4 | #16@0:8
- (Class)superclass;
// IMP 0x1004da41c | #16@0:8
- (Class)class;
// IMP 0x1004da464 | B24@0:8#16
- (BOOL)isKindOfClass:(Class)arg0;
// IMP 0x1004da4ac | B24@0:8#16
- (BOOL)isMemberOfClass:(Class)arg0;
// IMP 0x1004da4f4 | B24@0:8@16
- (BOOL)conformsToProtocol:(id)arg0;
// IMP 0x1004da558 | B16@0:8
- (BOOL)isProxy;
// IMP 0x1004da560 | @16@0:8
- (id)description;
// IMP 0x1004da5a8 | @16@0:8
- (id)debugDescription;
// IMP 0x1004da5f0 | @16@0:8
- (id)object;
// IMP 0x1004da610 | v24@0:8@16
- (void)setObject:(id)arg0;
// IMP 0x1004da624 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004da224 | @24@0:8@16
+ (id)containerWithObject:(id)arg0;
@end
