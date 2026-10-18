// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99868
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCClass : CDOCProtocol
// ivar _instanceVariables encoding=@"NSArray" offset=8
// ivar _isExported encoding=B offset=16
// ivar _isSwiftClass encoding=B offset=17
// ivar _superClassRef encoding=@"CDOCClassReference" offset=24
// property superClassRef attributes=T@"CDOCClassReference",&,V_superClassRef
// property superClassName attributes=T@"NSString",R,C
// property instanceVariables attributes=T@"NSArray",&,V_instanceVariables
// property isExported attributes=TB,V_isExported
// property isSwiftClass attributes=TB,V_isSwiftClass
// property identifier attributes=T@"NSString",R,N
// property dependancies attributes=T@"NSArray",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10070911c | @16@0:8
- (id)init;
// IMP 0x100709164 | @16@0:8
- (id)description;
// IMP 0x10070920c | @16@0:8
- (id)superClassName;
// IMP 0x10070921c | v32@0:8@16Q24
- (void)registerTypesWithObject:(id)arg0 phase:(unsigned long long)arg1;
// IMP 0x10070937c | @16@0:8
- (id)methodSearchContext;
// IMP 0x100709498 | v24@0:8@16
- (void)recursivelyVisit:(id)arg0;
// IMP 0x100709688 | @16@0:8
- (id)identifier;
// IMP 0x10070968c | @16@0:8
- (id)dependancies;
// IMP 0x100709750 | @16@0:8
- (id)superClassRef;
// IMP 0x100709760 | v24@0:8@16
- (void)setSuperClassRef:(id)arg0;
// IMP 0x10070976c | @16@0:8
- (id)instanceVariables;
// IMP 0x10070977c | v24@0:8@16
- (void)setInstanceVariables:(id)arg0;
// IMP 0x100709788 | B16@0:8
- (BOOL)isExported;
// IMP 0x10070979c | v20@0:8B16
- (void)setIsExported:(BOOL)arg0;
// IMP 0x1007097ac | B16@0:8
- (BOOL)isSwiftClass;
// IMP 0x1007097c0 | v20@0:8B16
- (void)setIsSwiftClass:(BOOL)arg0;
// IMP 0x1007097d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
