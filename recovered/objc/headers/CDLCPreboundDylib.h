// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98e18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCPreboundDylib : CDLoadCommand
// ivar _preboundDylibCommand encoding={prebound_dylib_command="cmd"I"cmdsize"I"name"(lc_str="offset"I)"nmodules"I"linked_modules"(lc_str="offset"I)} offset=8
// IMP 0x1006f94f8 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f95c4 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f95d4 | I16@0:8
- (unsigned int)cmdsize;
@end
