// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98750
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCDylinker : CDLoadCommand
// ivar _dylinkerCommand encoding={dylinker_command="cmd"I"cmdsize"I"name"(lc_str="offset"I)} offset=8
// ivar _name encoding=@"NSString" offset=24
// property name attributes=T@"NSString",R,V_name
// IMP 0x1006f102c | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f10fc | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f110c | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f1120 | @16@0:8
- (id)name;
// IMP 0x1006f1130 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
