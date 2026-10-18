// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83c10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerDataResponse : GCDWebServerResponse
// ivar _data encoding=@"NSData" offset=8
// ivar _done encoding=B offset=16
// property contentType attributes=T@"NSString",C,D,N
// IMP 0x10041eb60 | @24@0:8@16
- (id)initWithText:(id)arg0;
// IMP 0x10041ebdc | @24@0:8@16
- (id)initWithHTML:(id)arg0;
// IMP 0x10041ec58 | @32@0:8@16@24
- (id)initWithHTMLTemplate:(id)arg0 variables:(id)arg1;
// IMP 0x10041ede0 | @24@0:8@16
- (id)initWithJSONObject:(id)arg0;
// IMP 0x10041edec | @32@0:8@16@24
- (id)initWithJSONObject:(id)arg0 contentType:(id)arg1;
// IMP 0x10041e7a4 | @32@0:8@16@24
- (id)initWithData:(id)arg0 contentType:(id)arg1;
// IMP 0x10041e85c | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x10041e8b8 | @16@0:8
- (id)description;
// IMP 0x10041e99c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10041e9b0 | @24@0:8@16
+ (id)responseWithText:(id)arg0;
// IMP 0x10041e9f8 | @24@0:8@16
+ (id)responseWithHTML:(id)arg0;
// IMP 0x10041ea40 | @32@0:8@16@24
+ (id)responseWithHTMLTemplate:(id)arg0 variables:(id)arg1;
// IMP 0x10041eaac | @24@0:8@16
+ (id)responseWithJSONObject:(id)arg0;
// IMP 0x10041eaf4 | @32@0:8@16@24
+ (id)responseWithJSONObject:(id)arg0 contentType:(id)arg1;
// IMP 0x10041e734 | @32@0:8@16@24
+ (id)responseWithData:(id)arg0 contentType:(id)arg1;
@end
