// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83cb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerFileRequest : GCDWebServerRequest
// ivar _file encoding=i offset=8
// ivar _temporaryPath encoding=@"NSString" offset=16
// property temporaryPath attributes=T@"NSString",R,N,V_temporaryPath
// IMP 0x10041f318 | @56@0:8@16@24@32@40@48
- (id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4;
// IMP 0x10041f3e4 | v16@0:8
- (void)dealloc;
// IMP 0x10041f438 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x10041f5a0 | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x10041f72c | B24@0:8^@16
- (BOOL)close:(id *)arg0;
// IMP 0x10041f870 | @16@0:8
- (id)description;
// IMP 0x10041f910 | @16@0:8
- (id)temporaryPath;
// IMP 0x10041f920 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
