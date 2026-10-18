// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7cf30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYHTTPSConnection : HTTPConnection
// IMP 0x1000bf498 | B16@0:8
- (BOOL)isSecureServer;
// IMP 0x1000bf4a0 | @16@0:8
- (id)sslIdentityAndCertificates;
// IMP 0x1000bfa7c | @32@0:8@16@24
- (id)httpResponseForMethod:(id)arg0 URI:(id)arg1;
// IMP 0x1000bfe04 | v24@0:8Q16
- (void)prepareForBodyWithSize:(unsigned long long)arg0;
// IMP 0x1000bfe20 | v24@0:8@16
- (void)processBodyData:(id)arg0;
@end
