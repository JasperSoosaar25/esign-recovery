// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c994f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCModule : NSObject
// ivar _version encoding=I offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _symtab encoding=@"CDOCSymtab" offset=24
// property version attributes=TI,V_version
// property name attributes=T@"NSString",&,V_name
// property symtab attributes=T@"CDOCSymtab",&,V_symtab
// IMP 0x100703f18 | @16@0:8
- (id)init;
// IMP 0x100703f7c | @16@0:8
- (id)description;
// IMP 0x100704040 | @16@0:8
- (id)formattedString;
// IMP 0x1007040a4 | I16@0:8
- (unsigned int)version;
// IMP 0x1007040ac | v20@0:8I16
- (void)setVersion:(unsigned int)arg0;
// IMP 0x1007040b4 | @16@0:8
- (id)name;
// IMP 0x1007040c0 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1007040c8 | @16@0:8
- (id)symtab;
// IMP 0x1007040d4 | v24@0:8@16
- (void)setSymtab:(id)arg0;
// IMP 0x1007040dc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
