// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c995e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSubFramework : CDLoadCommand
// ivar _command encoding={sub_framework_command="cmd"I"cmdsize"I"umbrella"(lc_str="offset"I)} offset=8
// ivar _name encoding=@"NSString" offset=24
// property name attributes=T@"NSString",R,V_name
// IMP 0x1007064a4 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x100706570 | I16@0:8
- (unsigned int)cmd;
// IMP 0x100706580 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x100706594 | @16@0:8
- (id)name;
// IMP 0x1007065a4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
