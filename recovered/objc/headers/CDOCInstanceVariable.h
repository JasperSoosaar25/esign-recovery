// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99638
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCInstanceVariable : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _typeString encoding=@"NSString" offset=16
// ivar _offset encoding=Q offset=24
// ivar _hasParsedType encoding=B offset=32
// ivar _type encoding=@"CDType" offset=40
// ivar _parseError encoding=@"NSError" offset=48
// property hasParsedType attributes=TB,V_hasParsedType
// property name attributes=T@"NSString",R,V_name
// property typeString attributes=T@"NSString",R,V_typeString
// property offset attributes=TQ,R,V_offset
// property type attributes=T@"CDType",R,N
// property parseError attributes=T@"NSError",R,V_parseError
// IMP 0x1007065b8 | @40@0:8@16@24Q32
- (id)initWithName:(id)arg0 typeString:(id)arg1 offset:(unsigned long long)arg2;
// IMP 0x100706680 | @16@0:8
- (id)description;
// IMP 0x100706740 | @16@0:8
- (id)type;
// IMP 0x100706844 | v32@0:8@16@24
- (void)appendToString:(id)arg0 typeController:(id)arg1;
// IMP 0x100706a20 | @16@0:8
- (id)name;
// IMP 0x100706a2c | @16@0:8
- (id)typeString;
// IMP 0x100706a38 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x100706a40 | @16@0:8
- (id)parseError;
// IMP 0x100706a4c | B16@0:8
- (BOOL)hasParsedType;
// IMP 0x100706a58 | v20@0:8B16
- (void)setHasParsedType:(BOOL)arg0;
// IMP 0x100706a60 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
