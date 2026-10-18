// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99278
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTypeName : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _templateTypes encoding=@"NSMutableArray" offset=16
// ivar _suffix encoding=@"NSString" offset=24
// property name attributes=T@"NSString",&,V_name
// property templateTypes attributes=T@"NSMutableArray",R,V_templateTypes
// property suffix attributes=T@"NSString",&,V_suffix
// property isTemplateType attributes=TB,R,N
// IMP 0x100700c84 | @16@0:8
- (id)init;
// IMP 0x100700d04 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100700e9c | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100700f40 | @16@0:8
- (id)description;
// IMP 0x1007010b4 | B16@0:8
- (BOOL)isTemplateType;
// IMP 0x1007010f4 | @16@0:8
- (id)name;
// IMP 0x100701100 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100701108 | @16@0:8
- (id)templateTypes;
// IMP 0x100701114 | @16@0:8
- (id)suffix;
// IMP 0x100701120 | v24@0:8@16
- (void)setSuffix:(id)arg0;
// IMP 0x100701128 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
