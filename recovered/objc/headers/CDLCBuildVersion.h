// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c994a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCBuildVersion : CDLoadCommand
// ivar _buildVersionCommand encoding={build_version_command="cmd"I"cmdsize"I"platform"I"minos"I"sdk"I"ntools"I} offset=8
// ivar _tools encoding=@"NSArray" offset=32
// property buildVersionString attributes=T@"NSString",R,N
// property toolStrings attributes=T@"NSArray",R,N
// IMP 0x100703a20 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x100703b94 | I16@0:8
- (unsigned int)cmd;
// IMP 0x100703ba4 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x100703bb8 | @16@0:8
- (id)buildVersionString;
// IMP 0x100703c94 | @16@0:8
- (id)toolStrings;
// IMP 0x100703e68 | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
// IMP 0x100703f04 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
