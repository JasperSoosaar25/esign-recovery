// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98340
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDClassFrameworkVisitor : CDVisitor
// ivar _frameworkNamesByClassName encoding=@"NSMutableDictionary" offset=8
// ivar _frameworkNamesByProtocolName encoding=@"NSMutableDictionary" offset=16
// ivar _frameworkName encoding=@"NSString" offset=24
// property frameworkName attributes=T@"NSString",&,V_frameworkName
// property frameworkNamesByClassName attributes=T@"NSDictionary",R,N
// property frameworkNamesByProtocolName attributes=T@"NSDictionary",R,N
// IMP 0x1006e4140 | @16@0:8
- (id)init;
// IMP 0x1006e41d4 | v24@0:8@16
- (void)willVisitObjectiveCProcessor:(id)arg0;
// IMP 0x1006e4234 | v24@0:8@16
- (void)willVisitClass:(id)arg0;
// IMP 0x1006e4318 | v24@0:8@16
- (void)willVisitProtocol:(id)arg0;
// IMP 0x1006e4380 | v24@0:8@16
- (void)willVisitCategory:(id)arg0;
// IMP 0x1006e4408 | v24@0:8@16
- (void)addClassForExternalSymbol:(id)arg0;
// IMP 0x1006e44e0 | v32@0:8@16@24
- (void)addClassName:(id)arg0 referencedInFramework:(id)arg1;
// IMP 0x1006e4508 | v32@0:8@16@24
- (void)addProtocolName:(id)arg0 referencedInFramework:(id)arg1;
// IMP 0x1006e4530 | @16@0:8
- (id)frameworkNamesByClassName;
// IMP 0x1006e4550 | @16@0:8
- (id)frameworkNamesByProtocolName;
// IMP 0x1006e4570 | @16@0:8
- (id)frameworkName;
// IMP 0x1006e4580 | v24@0:8@16
- (void)setFrameworkName:(id)arg0;
// IMP 0x1006e458c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
