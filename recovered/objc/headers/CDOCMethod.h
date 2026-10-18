// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c993b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCMethod : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _typeString encoding=@"NSString" offset=16
// ivar _address encoding=Q offset=24
// ivar _hasParsedType encoding=B offset=32
// ivar _parsedMethodTypes encoding=@"NSArray" offset=40
// property name attributes=T@"NSString",R,V_name
// property typeString attributes=T@"NSString",R,V_typeString
// property address attributes=TQ,V_address
// IMP 0x100702b78 | @16@0:8
- (id)init;
// IMP 0x100702bbc | @32@0:8@16@24
- (id)initWithName:(id)arg0 typeString:(id)arg1;
// IMP 0x100702bc4 | @40@0:8@16@24Q32
- (id)initWithName:(id)arg0 typeString:(id)arg1 address:(unsigned long long)arg2;
// IMP 0x100702c80 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100702d10 | @16@0:8
- (id)description;
// IMP 0x100702dd0 | @16@0:8
- (id)parsedMethodTypes;
// IMP 0x100702e90 | v32@0:8@16@24
- (void)appendToString:(id)arg0 typeController:(id)arg1;
// IMP 0x10070302c | q24@0:8@16
- (long long)ascendingCompareByName:(id)arg0;
// IMP 0x1007030b0 | @16@0:8
- (id)name;
// IMP 0x1007030bc | @16@0:8
- (id)typeString;
// IMP 0x1007030c8 | Q16@0:8
- (unsigned long long)address;
// IMP 0x1007030d0 | v24@0:8Q16
- (void)setAddress:(unsigned long long)arg0;
// IMP 0x1007030d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
