// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c920f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSRule : NSObject
// ivar type encoding=S offset=8
// ivar cssText encoding=@"NSString" offset=16
// ivar parentStyleSheet encoding=@"CSSStyleSheet" offset=24
// ivar parentRule encoding=@"CSSRule" offset=32
// property type attributes=TS,N,Vtype
// property cssText attributes=T@"NSString",&,N,VcssText
// property parentStyleSheet attributes=T@"CSSStyleSheet",&,N,VparentStyleSheet
// property parentRule attributes=T@"CSSRule",&,N,VparentRule
// IMP 0x10056a1e4 | S16@0:8
- (unsigned short)type;
// IMP 0x10056a1ec | v20@0:8S16
- (void)setType:(unsigned short)arg0;
// IMP 0x10056a1f4 | @16@0:8
- (id)cssText;
// IMP 0x10056a1fc | v24@0:8@16
- (void)setCssText:(id)arg0;
// IMP 0x10056a208 | @16@0:8
- (id)parentStyleSheet;
// IMP 0x10056a210 | v24@0:8@16
- (void)setParentStyleSheet:(id)arg0;
// IMP 0x10056a21c | @16@0:8
- (id)parentRule;
// IMP 0x10056a224 | v24@0:8@16
- (void)setParentRule:(id)arg0;
// IMP 0x10056a230 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
