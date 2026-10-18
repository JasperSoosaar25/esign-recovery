// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98fa8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSubLibrary : CDLoadCommand
// ivar _command encoding={sub_library_command="cmd"I"cmdsize"I"sub_library"(lc_str="offset"I)} offset=8
// ivar _name encoding=@"NSString" offset=24
// property name attributes=T@"NSString",R,V_name
// IMP 0x1006fb72c | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006fb7f0 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006fb800 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006fb814 | @16@0:8
- (id)name;
// IMP 0x1006fb824 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
