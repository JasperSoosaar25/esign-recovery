// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98700
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDType : NSObject
// ivar _primitiveType encoding=i offset=8
// ivar _protocols encoding=@"NSArray" offset=16
// ivar _subtype encoding=@"CDType" offset=24
// ivar _typeName encoding=@"CDTypeName" offset=32
// ivar _members encoding=@"NSMutableArray" offset=40
// ivar _bitfieldSize encoding=@"NSString" offset=48
// ivar _arraySize encoding=@"NSString" offset=56
// ivar _variableName encoding=@"NSString" offset=64
// ivar _types encoding=@"NSArray" offset=72
// property formattedStringForSimpleType attributes=T@"NSString",R,N
// property variableName attributes=T@"NSString",&,V_variableName
// property primitiveType attributes=Ti,R,N,V_primitiveType
// property isIDType attributes=TB,R,N
// property isNamedObject attributes=TB,R,N
// property isTemplateType attributes=TB,R,N
// property subtype attributes=T@"CDType",R,N,V_subtype
// property typeName attributes=T@"CDTypeName",R,N,V_typeName
// property members attributes=T@"NSArray",R,N,V_members
// property types attributes=T@"NSArray",R,N,V_types
// property typeIgnoringModifiers attributes=Ti,R,N
// property structureDepth attributes=TQ,R,N
// property typeString attributes=T@"NSString",R,N
// property bareTypeString attributes=T@"NSString",R,N
// property reallyBareTypeString attributes=T@"NSString",R,N
// property keyTypeString attributes=T@"NSString",R,N
// property memberVariableNames attributes=T@"NSArray",R,N
// IMP 0x1006ee038 | @20@0:8i16
- (id)initSimpleType:(int)arg0;
// IMP 0x1006ee0a0 | @24@0:8@16
- (id)initIDType:(id)arg0;
// IMP 0x1006ee0a8 | @32@0:8@16@24
- (id)initIDType:(id)arg0 withProtocols:(id)arg1;
// IMP 0x1006ee148 | @24@0:8@16
- (id)initIDTypeWithProtocols:(id)arg0;
// IMP 0x1006ee1ac | @32@0:8@16@24
- (id)initStructType:(id)arg0 members:(id)arg1;
// IMP 0x1006ee254 | @32@0:8@16@24
- (id)initUnionType:(id)arg0 members:(id)arg1;
// IMP 0x1006ee2fc | @24@0:8@16
- (id)initBitfieldType:(id)arg0;
// IMP 0x1006ee360 | @32@0:8@16@24
- (id)initArrayType:(id)arg0 count:(id)arg1;
// IMP 0x1006ee3f0 | @24@0:8@16
- (id)initPointerType:(id)arg0;
// IMP 0x1006ee454 | @16@0:8
- (id)initFunctionPointerType;
// IMP 0x1006ee474 | @24@0:8@16
- (id)initBlockTypeWithTypes:(id)arg0;
// IMP 0x1006ee4d8 | @28@0:8i16@20
- (id)initModifier:(int)arg0 type:(id)arg1;
// IMP 0x1006ee53c | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1006ee5e4 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1006ee6a4 | @16@0:8
- (id)description;
// IMP 0x1006ee738 | B16@0:8
- (BOOL)isIDType;
// IMP 0x1006ee75c | B16@0:8
- (BOOL)isNamedObject;
// IMP 0x1006ee76c | B16@0:8
- (BOOL)isTemplateType;
// IMP 0x1006ee774 | B16@0:8
- (BOOL)isModifierType;
// IMP 0x1006ee7a0 | i16@0:8
- (int)typeIgnoringModifiers;
// IMP 0x1006ee7dc | Q16@0:8
- (unsigned long long)structureDepth;
// IMP 0x1006ee954 | @40@0:8@16@24Q32
- (id)formattedString:(id)arg0 formatter:(id)arg1 level:(unsigned long long)arg2;
// IMP 0x1006ef290 | @32@0:8Q16@24
- (id)formattedStringForMembersAtLevel:(unsigned long long)arg0 formatter:(id)arg1;
// IMP 0x1006ef448 | @16@0:8
- (id)formattedStringForSimpleType;
// IMP 0x1006ef5e0 | @16@0:8
- (id)typeString;
// IMP 0x1006ef5f0 | @16@0:8
- (id)bareTypeString;
// IMP 0x1006ef5fc | @16@0:8
- (id)reallyBareTypeString;
// IMP 0x1006ef608 | @16@0:8
- (id)keyTypeString;
// IMP 0x1006ef614 | @28@0:8Q16B24
- (id)_typeStringWithVariableNamesToLevel:(unsigned long long)arg0 showObjectTypes:(BOOL)arg1;
// IMP 0x1006ef980 | @28@0:8q16B24
- (id)_typeStringForMembersWithVariableNamesToLevel:(long long)arg0 showObjectTypes:(BOOL)arg1;
// IMP 0x1006efb28 | B24@0:8@16
- (BOOL)canMergeWithType:(id)arg0;
// IMP 0x1006efdf8 | v24@0:8@16
- (void)mergeWithType:(id)arg0;
// IMP 0x1006efe68 | v24@0:8@16
- (void)_recursivelyMergeWithType:(id)arg0;
// IMP 0x1006f00ec | @16@0:8
- (id)memberVariableNames;
// IMP 0x1006f0200 | v16@0:8
- (void)generateMemberNames;
// IMP 0x1006f0408 | @16@0:8
- (id)blockSignatureString;
// IMP 0x1006f0668 | v36@0:8Q16@24B32
- (void)phase:(unsigned long long)arg0 registerTypesWithObject:(id)arg1 usedInMethod:(BOOL)arg2;
// IMP 0x1006f067c | v28@0:8@16B24
- (void)phase0RegisterStructuresWithObject:(id)arg0 usedInMethod:(BOOL)arg1;
// IMP 0x1006f0770 | v20@0:8B16
- (void)phase0RecursivelyFixStructureNames:(BOOL)arg0;
// IMP 0x1006f08b0 | v24@0:8@16
- (void)phase1RegisterStructuresWithObject:(id)arg0;
// IMP 0x1006f09f4 | v28@0:8@16B24
- (void)phase2MergeWithTypeController:(id)arg0 debug:(BOOL)arg1;
// IMP 0x1006f0a84 | v28@0:8@16B24
- (void)_phase2MergeWithTypeController:(id)arg0 debug:(BOOL)arg1;
// IMP 0x1006f0c18 | v24@0:8@16
- (void)phase3RegisterWithTypeController:(id)arg0;
// IMP 0x1006f0c70 | v24@0:8@16
- (void)phase3RegisterMembersWithTypeController:(id)arg0;
// IMP 0x1006f0d78 | v24@0:8@16
- (void)phase3MergeWithTypeController:(id)arg0;
// IMP 0x1006f0f00 | @16@0:8
- (id)variableName;
// IMP 0x1006f0f0c | v24@0:8@16
- (void)setVariableName:(id)arg0;
// IMP 0x1006f0f14 | i16@0:8
- (int)primitiveType;
// IMP 0x1006f0f1c | @16@0:8
- (id)subtype;
// IMP 0x1006f0f24 | @16@0:8
- (id)typeName;
// IMP 0x1006f0f2c | @16@0:8
- (id)members;
// IMP 0x1006f0f34 | @16@0:8
- (id)types;
// IMP 0x1006f0f3c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
