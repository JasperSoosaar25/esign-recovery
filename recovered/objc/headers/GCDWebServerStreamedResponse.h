// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c843e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerStreamedResponse : GCDWebServerResponse
// ivar _block encoding=@? offset=8
// property contentType attributes=T@"NSString",C,D,N
// IMP 0x100424be0 | @32@0:8@16@?24
- (id)initWithContentType:(id)arg0 streamBlock:(id /* block */)arg1;
// IMP 0x100424d08 | @32@0:8@16@?24
- (id)initWithContentType:(id)arg0 asyncStreamBlock:(id /* block */)arg1;
// IMP 0x100424db4 | v24@0:8@?16
- (void)asyncReadDataWithCompletion:(id /* block */)arg0;
// IMP 0x100424dcc | @16@0:8
- (id)description;
// IMP 0x100424e50 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100424b00 | @32@0:8@16@?24
+ (id)responseWithContentType:(id)arg0 streamBlock:(id /* block */)arg1;
// IMP 0x100424b70 | @32@0:8@16@?24
+ (id)responseWithContentType:(id)arg0 asyncStreamBlock:(id /* block */)arg1;
@end
