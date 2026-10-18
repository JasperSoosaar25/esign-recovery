// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83a48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerDataRequest : GCDWebServerRequest
// ivar _text encoding=@"NSString" offset=8
// ivar _jsonObject encoding=@ offset=16
// ivar _data encoding=@"NSMutableData" offset=24
// property text attributes=T@"NSString",R,N
// property jsonObject attributes=T@,R,N
// property data attributes=T@"NSMutableData",&,N,V_data
// IMP 0x10041e554 | @16@0:8
- (id)text;
// IMP 0x10041e654 | @16@0:8
- (id)jsonObject;
// IMP 0x10041e284 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x10041e3c4 | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x10041e3e8 | B24@0:8^@16
- (BOOL)close:(id *)arg0;
// IMP 0x10041e3f0 | @16@0:8
- (id)description;
// IMP 0x10041e4dc | @16@0:8
- (id)data;
// IMP 0x10041e4ec | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x10041e500 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
