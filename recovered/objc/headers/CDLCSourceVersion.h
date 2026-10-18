// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98c88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSourceVersion : CDLoadCommand
// ivar _sourceVersionCommand encoding={source_version_command="cmd"I"cmdsize"I"version"Q} offset=8
// property sourceVersionString attributes=T@"NSString",R,N
// IMP 0x1006f7c90 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f7d2c | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f7d3c | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f7d50 | @16@0:8
- (id)sourceVersionString;
// IMP 0x1006f7dac | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
@end
