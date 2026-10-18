// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98dc8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCUnixThread : CDLoadCommand
// ivar _loadCommand encoding={load_command="cmd"I"cmdsize"I} offset=8
// ivar _commandData encoding=@"NSData" offset=16
// IMP 0x1006f93c4 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f94c0 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f94d0 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f94e4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
