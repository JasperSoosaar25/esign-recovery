// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c992c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCClassReference : NSObject
// ivar _classObject encoding=@"CDOCClass" offset=8
// ivar _classSymbol encoding=@"CDSymbol" offset=16
// ivar _className encoding=@"NSString" offset=24
// property classObject attributes=T@"CDOCClass",&,V_classObject
// property classSymbol attributes=T@"CDSymbol",&,V_classSymbol
// property className attributes=T@"NSString",C,N,V_className
// property externalClass attributes=TB,R,N,GisExternalClass
// IMP 0x100701164 | @24@0:8@16
- (id)initWithClassSymbol:(id)arg0;
// IMP 0x1007011dc | @24@0:8@16
- (id)initWithClassObject:(id)arg0;
// IMP 0x100701254 | @24@0:8@16
- (id)initWithClassName:(id)arg0;
// IMP 0x1007012cc | @16@0:8
- (id)className;
// IMP 0x100701364 | B16@0:8
- (BOOL)isExternalClass;
// IMP 0x100701388 | @16@0:8
- (id)classObject;
// IMP 0x100701394 | v24@0:8@16
- (void)setClassObject:(id)arg0;
// IMP 0x10070139c | @16@0:8
- (id)classSymbol;
// IMP 0x1007013a8 | v24@0:8@16
- (void)setClassSymbol:(id)arg0;
// IMP 0x1007013b0 | v24@0:8@16
- (void)setClassName:(id)arg0;
// IMP 0x1007013b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
