// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98520
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDStructureInfo : NSObject
// ivar _type encoding=@"CDType" offset=8
// ivar _referenceCount encoding=Q offset=16
// ivar _isUsedInMethod encoding=B offset=24
// ivar _typedefName encoding=@"NSString" offset=32
// property type attributes=T@"CDType",R,V_type
// property referenceCount attributes=TQ,V_referenceCount
// property isUsedInMethod attributes=TB,V_isUsedInMethod
// property typedefName attributes=T@"NSString",&,V_typedefName
// property name attributes=T@"NSString",R,N
// IMP 0x1006e70d4 | @24@0:8@16
- (id)initWithType:(id)arg0;
// IMP 0x1006e7164 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1006e7218 | @16@0:8
- (id)description;
// IMP 0x1006e7300 | @16@0:8
- (id)shortDescription;
// IMP 0x1006e741c | v24@0:8Q16
- (void)addReferenceCount:(unsigned long long)arg0;
// IMP 0x1006e7448 | v24@0:8@16
- (void)generateTypedefName:(id)arg0;
// IMP 0x1006e7544 | @16@0:8
- (id)name;
// IMP 0x1006e75a8 | q24@0:8@16
- (long long)ascendingCompareByStructureDepth:(id)arg0;
// IMP 0x1006e7758 | q24@0:8@16
- (long long)descendingCompareByStructureDepth:(id)arg0;
// IMP 0x1006e78f8 | @16@0:8
- (id)type;
// IMP 0x1006e7904 | Q16@0:8
- (unsigned long long)referenceCount;
// IMP 0x1006e790c | v24@0:8Q16
- (void)setReferenceCount:(unsigned long long)arg0;
// IMP 0x1006e7914 | B16@0:8
- (BOOL)isUsedInMethod;
// IMP 0x1006e7920 | v20@0:8B16
- (void)setIsUsedInMethod:(BOOL)arg0;
// IMP 0x1006e7928 | @16@0:8
- (id)typedefName;
// IMP 0x1006e7934 | v24@0:8@16
- (void)setTypedefName:(id)arg0;
// IMP 0x1006e793c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
