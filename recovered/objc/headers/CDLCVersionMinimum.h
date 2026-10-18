// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99188
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCVersionMinimum : CDLoadCommand
// ivar _versionMinCommand encoding={version_min_command="cmd"I"cmdsize"I"version"I"sdk"I} offset=8
// property minimumVersionString attributes=T@"NSString",R,N
// property SDKVersionString attributes=T@"NSString",R,N
// IMP 0x1006ffd60 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006ffe08 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006ffe18 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006ffe2c | @16@0:8
- (id)minimumVersionString;
// IMP 0x1006ffe7c | @16@0:8
- (id)SDKVersionString;
// IMP 0x1006ffecc | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
@end
