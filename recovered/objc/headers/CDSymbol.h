// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99728
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDSymbol : NSObject
// ivar _nlist encoding={nlist_64="n_un"(?="n_strx"I)"n_type"C"n_sect"C"n_desc"S"n_value"Q} offset=8
// ivar _is32Bit encoding=B offset=24
// ivar _name encoding=@"NSString" offset=32
// ivar _machOFile encoding=@"CDMachOFile" offset=40
// property machOFile attributes=T@"CDMachOFile",R,W,V_machOFile
// property value attributes=TQ,R,N
// property name attributes=T@"NSString",R,V_name
// property section attributes=T@"CDSection",R,N
// property dylibLoadCommand attributes=T@"CDLCDylib",R,N
// property isExternal attributes=TB,R,N
// property isPrivateExternal attributes=TB,R,N
// property stab attributes=TQ,R,N
// property type attributes=TQ,R,N
// property isDefined attributes=TB,R,N
// property isAbsolute attributes=TB,R,N
// property isInSection attributes=TB,R,N
// property isPrebound attributes=TB,R,N
// property isIndirect attributes=TB,R,N
// property isCommon attributes=TB,R,N
// property isInTextSection attributes=TB,R,N
// property isInDataSection attributes=TB,R,N
// property isInBssSection attributes=TB,R,N
// property referenceType attributes=TQ,R,N
// property referenceTypeName attributes=T@"NSString",R,N
// property shortTypeDescription attributes=T@"NSString",R,N
// property longTypeDescription attributes=T@"NSString",R,N
// IMP 0x100707740 | @44@0:8@16@24{nlist=(?=I)CCsI}32
- (id)initWithName:(id)arg0 machOFile:(id)arg1 nlist32:(struct nlist)arg2;
// IMP 0x100707820 | @48@0:8@16@24{nlist_64=(?=I)CCSQ}32
- (id)initWithName:(id)arg0 machOFile:(id)arg1 nlist64:(struct nlist_64)arg2;
// IMP 0x1007078f8 | @16@0:8
- (id)description;
// IMP 0x100707a80 | Q16@0:8
- (unsigned long long)value;
// IMP 0x100707a88 | @16@0:8
- (id)section;
// IMP 0x100707c9c | @16@0:8
- (id)dylibLoadCommand;
// IMP 0x100707ce8 | B16@0:8
- (BOOL)isExternal;
// IMP 0x100707cf4 | B16@0:8
- (BOOL)isPrivateExternal;
// IMP 0x100707d00 | Q16@0:8
- (unsigned long long)stab;
// IMP 0x100707d0c | Q16@0:8
- (unsigned long long)type;
// IMP 0x100707d18 | B16@0:8
- (BOOL)isDefined;
// IMP 0x100707d34 | B16@0:8
- (BOOL)isAbsolute;
// IMP 0x100707d50 | B16@0:8
- (BOOL)isInSection;
// IMP 0x100707d6c | B16@0:8
- (BOOL)isPrebound;
// IMP 0x100707d88 | B16@0:8
- (BOOL)isIndirect;
// IMP 0x100707da4 | B16@0:8
- (BOOL)isCommon;
// IMP 0x100707de8 | B16@0:8
- (BOOL)isInTextSection;
// IMP 0x100707e80 | B16@0:8
- (BOOL)isInDataSection;
// IMP 0x100707f18 | B16@0:8
- (BOOL)isInBssSection;
// IMP 0x100707fb0 | Q16@0:8
- (unsigned long long)referenceType;
// IMP 0x100707fbc | @16@0:8
- (id)referenceTypeName;
// IMP 0x100707fec | q24@0:8@16
- (long long)compare:(id)arg0;
// IMP 0x100708064 | q24@0:8@16
- (long long)compareByName:(id)arg0;
// IMP 0x1007080e8 | @16@0:8
- (id)shortTypeDescription;
// IMP 0x100708208 | @16@0:8
- (id)longTypeDescription;
// IMP 0x10070834c | @16@0:8
- (id)name;
// IMP 0x100708358 | @16@0:8
- (id)machOFile;
// IMP 0x100708370 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100707a14 | @24@0:8@16
+ (id)classNameFromSymbolName:(id)arg0;
@end
