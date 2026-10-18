// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94778
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPAuthenticationRequest : NSObject
// ivar isBasic encoding=B offset=8
// ivar isDigest encoding=B offset=9
// ivar base64Credentials encoding=@"NSString" offset=16
// ivar username encoding=@"NSString" offset=24
// ivar realm encoding=@"NSString" offset=32
// ivar nonce encoding=@"NSString" offset=40
// ivar uri encoding=@"NSString" offset=48
// ivar qop encoding=@"NSString" offset=56
// ivar nc encoding=@"NSString" offset=64
// ivar cnonce encoding=@"NSString" offset=72
// ivar response encoding=@"NSString" offset=80
// IMP 0x1005a6aa0 | @24@0:8@16
- (id)initWithRequest:(id)arg0;
// IMP 0x1005a6dcc | B16@0:8
- (BOOL)isBasic;
// IMP 0x1005a6dd4 | B16@0:8
- (BOOL)isDigest;
// IMP 0x1005a6ddc | @16@0:8
- (id)base64Credentials;
// IMP 0x1005a6de4 | @16@0:8
- (id)username;
// IMP 0x1005a6dec | @16@0:8
- (id)realm;
// IMP 0x1005a6df4 | @16@0:8
- (id)nonce;
// IMP 0x1005a6dfc | @16@0:8
- (id)uri;
// IMP 0x1005a6e04 | @16@0:8
- (id)qop;
// IMP 0x1005a6e0c | @16@0:8
- (id)nc;
// IMP 0x1005a6e14 | @16@0:8
- (id)cnonce;
// IMP 0x1005a6e1c | @16@0:8
- (id)response;
// IMP 0x1005a6e24 | @32@0:8@16@24
- (id)quotedSubHeaderFieldValue:(id)arg0 fromHeaderFieldValue:(id)arg1;
// IMP 0x1005a6f0c | @32@0:8@16@24
- (id)nonquotedSubHeaderFieldValue:(id)arg0 fromHeaderFieldValue:(id)arg1;
// IMP 0x1005a7028 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
