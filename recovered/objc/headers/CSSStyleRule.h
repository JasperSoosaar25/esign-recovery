// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c921b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSStyleRule : CSSRule
// ivar selectorText encoding=@"NSString" offset=8
// ivar style encoding=@"CSSStyleDeclaration" offset=16
// property selectorText attributes=T@"NSString",&,N,VselectorText
// property style attributes=T@"CSSStyleDeclaration",&,N,Vstyle
// IMP 0x10056aaa4 | @16@0:8
- (id)init;
// IMP 0x10056aabc | @32@0:8@16@24
- (id)initWithSelectorText:(id)arg0 styleText:(id)arg1;
// IMP 0x10056ab78 | @16@0:8
- (id)description;
// IMP 0x10056ac04 | @16@0:8
- (id)selectorText;
// IMP 0x10056ac14 | v24@0:8@16
- (void)setSelectorText:(id)arg0;
// IMP 0x10056ac28 | @16@0:8
- (id)style;
// IMP 0x10056ac38 | v24@0:8@16
- (void)setStyle:(id)arg0;
// IMP 0x10056ac4c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
