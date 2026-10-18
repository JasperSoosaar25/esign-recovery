// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98570
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCRunPath : CDLoadCommand
// ivar _rpathCommand encoding={rpath_command="cmd"I"cmdsize"I"path"(lc_str="offset"I)} offset=8
// ivar _path encoding=@"NSString" offset=24
// property path attributes=T@"NSString",R,V_path
// property resolvedRunPath attributes=T@"NSString",R,N
// IMP 0x1006e796c | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006e7a3c | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006e7a4c | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006e7a60 | @16@0:8
- (id)resolvedRunPath;
// IMP 0x1006e7c40 | @16@0:8
- (id)path;
// IMP 0x1006e7c50 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
