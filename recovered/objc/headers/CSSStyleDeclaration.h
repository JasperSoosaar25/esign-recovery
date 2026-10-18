// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92168
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSStyleDeclaration : NSObject
// ivar internalDictionaryOfStylesByCSSClass encoding=@"NSMutableDictionary" offset=8
// ivar _cssText encoding=@"NSString" offset=16
// ivar length encoding=Q offset=24
// ivar parentRule encoding=@"CSSRule" offset=32
// property internalDictionaryOfStylesByCSSClass attributes=T@"NSMutableDictionary",&,N,VinternalDictionaryOfStylesByCSSClass
// property cssText attributes=T@"NSString",&,N,V_cssText
// property length attributes=TQ,N,Vlength
// property parentRule attributes=T@"CSSRule",&,N,VparentRule
// IMP 0x10056a3ec | @16@0:8
- (id)init;
// IMP 0x10056a460 | v24@0:8@16
- (void)setCssText:(id)arg0;
// IMP 0x10056a4d0 | @24@0:8@16
- (id)NSDictionaryFromCSSAttributes:(id)arg0;
// IMP 0x10056a7d8 | @24@0:8@16
- (id)getPropertyValue:(id)arg0;
// IMP 0x10056a82c | @24@0:8@16
- (id)getPropertyCSSValue:(id)arg0;
// IMP 0x10056a898 | @24@0:8@16
- (id)removeProperty:(id)arg0;
// IMP 0x10056a910 | @24@0:8@16
- (id)getPropertyPriority:(id)arg0;
// IMP 0x10056a918 | v40@0:8@16@24@32
- (void)setProperty:(id)arg0 value:(id)arg1 priority:(id)arg2;
// IMP 0x10056a91c | @24@0:8q16
- (id)item:(long long)arg0;
// IMP 0x10056a9c4 | @16@0:8
- (id)description;
// IMP 0x10056aa28 | @16@0:8
- (id)internalDictionaryOfStylesByCSSClass;
// IMP 0x10056aa30 | v24@0:8@16
- (void)setInternalDictionaryOfStylesByCSSClass:(id)arg0;
// IMP 0x10056aa3c | @16@0:8
- (id)cssText;
// IMP 0x10056aa44 | Q16@0:8
- (unsigned long long)length;
// IMP 0x10056aa4c | v24@0:8Q16
- (void)setLength:(unsigned long long)arg0;
// IMP 0x10056aa54 | @16@0:8
- (id)parentRule;
// IMP 0x10056aa5c | v24@0:8@16
- (void)setParentRule:(id)arg0;
// IMP 0x10056aa68 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
