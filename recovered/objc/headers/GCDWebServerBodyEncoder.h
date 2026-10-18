// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c842f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerBodyEncoder : NSObject
// ivar _response encoding=@"GCDWebServerResponse" offset=8
// ivar _reader encoding=@"<GCDWebServerBodyReader>" offset=16
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100424048 | @32@0:8@16@24
- (id)initWithResponse:(id)arg0 reader:(id)arg1;
// IMP 0x100424094 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x10042409c | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x1004240a4 | v16@0:8
- (void)close;
@end
