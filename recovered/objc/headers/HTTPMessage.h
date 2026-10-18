// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c949a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPMessage : NSObject
// ivar message encoding=^{__CFHTTPMessage=} offset=8
// IMP 0x1005abdcc | @16@0:8
- (id)initEmptyRequest;
// IMP 0x1005abe24 | @40@0:8@16@24@32
- (id)initRequestWithMethod:(id)arg0 URL:(id)arg1 version:(id)arg2;
// IMP 0x1005abed4 | @40@0:8q16@24@32
- (id)initResponseWithStatusCode:(long long)arg0 description:(id)arg1 version:(id)arg2;
// IMP 0x1005abf70 | v16@0:8
- (void)dealloc;
// IMP 0x1005abfbc | B24@0:8@16
- (BOOL)appendData:(id)arg0;
// IMP 0x1005ac024 | B16@0:8
- (BOOL)isHeaderComplete;
// IMP 0x1005ac044 | @16@0:8
- (id)version;
// IMP 0x1005ac070 | @16@0:8
- (id)method;
// IMP 0x1005ac09c | @16@0:8
- (id)url;
// IMP 0x1005ac0c8 | q16@0:8
- (long long)statusCode;
// IMP 0x1005ac0d0 | @16@0:8
- (id)allHeaderFields;
// IMP 0x1005ac0fc | @24@0:8@16
- (id)headerField:(id)arg0;
// IMP 0x1005ac12c | v32@0:8@16@24
- (void)setHeaderField:(id)arg0 value:(id)arg1;
// IMP 0x1005ac13c | @16@0:8
- (id)messageData;
// IMP 0x1005ac168 | @16@0:8
- (id)body;
// IMP 0x1005ac194 | v24@0:8@16
- (void)setBody:(id)arg0;
@end
