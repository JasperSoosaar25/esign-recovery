// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98cd8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCProperty : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _attributeString encoding=@"NSString" offset=16
// ivar _type encoding=@"CDType" offset=24
// ivar _attributes encoding=@"NSMutableArray" offset=32
// ivar _hasParsedAttributes encoding=B offset=40
// ivar _attributeStringAfterType encoding=@"NSString" offset=48
// ivar _customGetter encoding=@"NSString" offset=56
// ivar _customSetter encoding=@"NSString" offset=64
// ivar _isReadOnly encoding=B offset=72
// ivar _isDynamic encoding=B offset=73
// property name attributes=T@"NSString",R,V_name
// property attributeString attributes=T@"NSString",R,V_attributeString
// property type attributes=T@"CDType",R,V_type
// property attributes attributes=T@"NSArray",R,V_attributes
// property attributeStringAfterType attributes=T@"NSString",&,V_attributeStringAfterType
// property defaultGetter attributes=T@"NSString",R,N
// property defaultSetter attributes=T@"NSString",R,N
// property customGetter attributes=T@"NSString",&,V_customGetter
// property customSetter attributes=T@"NSString",&,V_customSetter
// property getter attributes=T@"NSString",R,N
// property setter attributes=T@"NSString",R,N
// property isReadOnly attributes=TB,R,V_isReadOnly
// property isDynamic attributes=TB,R,V_isDynamic
// IMP 0x1006f7e48 | @32@0:8@16@24
- (id)initWithName:(id)arg0 attributes:(id)arg1;
// IMP 0x1006f7f4c | @16@0:8
- (id)description;
// IMP 0x1006f8004 | @16@0:8
- (id)defaultGetter;
// IMP 0x1006f8008 | @16@0:8
- (id)defaultSetter;
// IMP 0x1006f808c | @16@0:8
- (id)getter;
// IMP 0x1006f80e0 | @16@0:8
- (id)setter;
// IMP 0x1006f8134 | q24@0:8@16
- (long long)ascendingCompareByName:(id)arg0;
// IMP 0x1006f81b8 | v16@0:8
- (void)_parseAttributes;
// IMP 0x1006f85c8 | @16@0:8
- (id)name;
// IMP 0x1006f85d4 | @16@0:8
- (id)attributeString;
// IMP 0x1006f85e0 | @16@0:8
- (id)type;
// IMP 0x1006f85ec | @16@0:8
- (id)attributes;
// IMP 0x1006f85f8 | @16@0:8
- (id)attributeStringAfterType;
// IMP 0x1006f8604 | v24@0:8@16
- (void)setAttributeStringAfterType:(id)arg0;
// IMP 0x1006f860c | @16@0:8
- (id)customGetter;
// IMP 0x1006f8618 | v24@0:8@16
- (void)setCustomGetter:(id)arg0;
// IMP 0x1006f8620 | @16@0:8
- (id)customSetter;
// IMP 0x1006f862c | v24@0:8@16
- (void)setCustomSetter:(id)arg0;
// IMP 0x1006f8634 | B16@0:8
- (BOOL)isReadOnly;
// IMP 0x1006f8640 | B16@0:8
- (BOOL)isDynamic;
// IMP 0x1006f864c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
