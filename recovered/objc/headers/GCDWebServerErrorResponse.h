// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83c88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
// IMP 0x10041f078 | @48@0:8q16@24@32*40
- (id)initWithStatusCode:(long long)arg0 underlyingError:(id)arg1 messageFormat:(id)arg2 arguments:(char *)arg3;
// IMP 0x10041f268 | @32@0:8q16@24
- (id)initWithClientError:(long long)arg0 message:(id)arg1;
// IMP 0x10041f298 | @32@0:8q16@24
- (id)initWithServerError:(long long)arg0 message:(id)arg1;
// IMP 0x10041f2c8 | @40@0:8q16@24@32
- (id)initWithClientError:(long long)arg0 underlyingError:(id)arg1 message:(id)arg2;
// IMP 0x10041f2f0 | @40@0:8q16@24@32
- (id)initWithServerError:(long long)arg0 underlyingError:(id)arg1 message:(id)arg2;
// IMP 0x10041ee88 | @32@0:8q16@24
+ (id)responseWithClientError:(long long)arg0 message:(id)arg1;
// IMP 0x10041eef8 | @32@0:8q16@24
+ (id)responseWithServerError:(long long)arg0 message:(id)arg1;
// IMP 0x10041ef68 | @40@0:8q16@24@32
+ (id)responseWithClientError:(long long)arg0 underlyingError:(id)arg1 message:(id)arg2;
// IMP 0x10041eff0 | @40@0:8q16@24@32
+ (id)responseWithServerError:(long long)arg0 underlyingError:(id)arg1 message:(id)arg2;
@end
