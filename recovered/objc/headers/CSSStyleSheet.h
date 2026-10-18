// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92208
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSStyleSheet : NSObject
// ivar ownerRule encoding=@"CSSRule" offset=8
// ivar cssRules encoding=@"CSSRuleList" offset=16
// property ownerRule attributes=T@"CSSRule",&,N,VownerRule
// property cssRules attributes=T@"CSSRuleList",&,N,VcssRules
// IMP 0x10056ac8c | q32@0:8@16Q24
- (long long)insertRule:(id)arg0 index:(unsigned long long)arg1;
// IMP 0x10056ae54 | v24@0:8Q16
- (void)deleteRule:(unsigned long long)arg0;
// IMP 0x10056aeac | @24@0:8@16
- (id)initWithString:(id)arg0;
// IMP 0x10056b12c | @16@0:8
- (id)ownerRule;
// IMP 0x10056b134 | v24@0:8@16
- (void)setOwnerRule:(id)arg0;
// IMP 0x10056b140 | @16@0:8
- (id)cssRules;
// IMP 0x10056b148 | v24@0:8@16
- (void)setCssRules:(id)arg0;
// IMP 0x10056b154 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
