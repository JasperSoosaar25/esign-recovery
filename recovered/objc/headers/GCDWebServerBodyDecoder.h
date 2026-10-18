// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83ee0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerBodyDecoder : NSObject
// ivar _request encoding=@"GCDWebServerRequest" offset=8
// ivar _writer encoding=@"<GCDWebServerBodyWriter>" offset=16
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100423180 | @32@0:8@16@24
- (id)initWithRequest:(id)arg0 writer:(id)arg1;
// IMP 0x1004231cc | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x1004231d4 | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x1004231dc | B24@0:8^@16
- (BOOL)close:(id *)arg0;
@end
