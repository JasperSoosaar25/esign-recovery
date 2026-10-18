// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98f58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCDylib : CDLoadCommand
// ivar _dylibCommand encoding={dylib_command="cmd"I"cmdsize"I"dylib"{dylib="name"(lc_str="offset"I)"timestamp"I"current_version"I"compatibility_version"I}} offset=8
// ivar _path encoding=@"NSString" offset=32
// property path attributes=T@"NSString",R,V_path
// property timestamp attributes=TI,R,N
// property currentVersion attributes=TI,R,N
// property compatibilityVersion attributes=TI,R,N
// property formattedCurrentVersion attributes=T@"NSString",R,N
// property formattedCompatibilityVersion attributes=T@"NSString",R,N
// IMP 0x1006fb524 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006fb618 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006fb628 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006fb63c | I16@0:8
- (unsigned int)timestamp;
// IMP 0x1006fb650 | I16@0:8
- (unsigned int)currentVersion;
// IMP 0x1006fb664 | I16@0:8
- (unsigned int)compatibilityVersion;
// IMP 0x1006fb678 | @16@0:8
- (id)formattedCurrentVersion;
// IMP 0x1006fb6c0 | @16@0:8
- (id)formattedCompatibilityVersion;
// IMP 0x1006fb708 | @16@0:8
- (id)path;
// IMP 0x1006fb718 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
