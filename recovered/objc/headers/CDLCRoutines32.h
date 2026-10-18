// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c997c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCRoutines32 : CDLoadCommand
// ivar _routinesCommand encoding={routines_command="cmd"I"cmdsize"I"init_address"I"init_module"I"reserved1"I"reserved2"I"reserved3"I"reserved4"I"reserved5"I"reserved6"I} offset=8
// IMP 0x1007083d0 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1007084c0 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1007084d0 | I16@0:8
- (unsigned int)cmdsize;
@end
