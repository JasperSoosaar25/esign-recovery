// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c989d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSubClient : CDLoadCommand
// ivar _command encoding={sub_client_command="cmd"I"cmdsize"I"client"(lc_str="offset"I)} offset=8
// ivar _name encoding=@"NSString" offset=24
// property name attributes=T@"NSString",R,V_name
// IMP 0x1006f5df4 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f5ec0 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f5ed0 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f5ee4 | @16@0:8
- (id)name;
// IMP 0x1006f5ef4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
