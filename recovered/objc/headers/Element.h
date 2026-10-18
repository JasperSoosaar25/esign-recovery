// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92438
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface Element : Node
// ivar tagName encoding=@"NSString" offset=8
// property tagName attributes=T@"NSString",&,N,VtagName
// IMP 0x10056beb4 | @32@0:8@16@24
- (id)initWithLocalName:(id)arg0 attributes:(id)arg1;
// IMP 0x10056c050 | @40@0:8@16@24@32
- (id)initWithQualifiedName:(id)arg0 inNameSpaceURI:(id)arg1 attributes:(id)arg2;
// IMP 0x10056c208 | @24@0:8@16
- (id)getAttribute:(id)arg0;
// IMP 0x10056c2bc | v32@0:8@16@24
- (void)setAttribute:(id)arg0 value:(id)arg1;
// IMP 0x10056c35c | v24@0:8@16
- (void)removeAttribute:(id)arg0;
// IMP 0x10056c3b4 | @24@0:8@16
- (id)getAttributeNode:(id)arg0;
// IMP 0x10056c428 | @24@0:8@16
- (id)setAttributeNode:(id)arg0;
// IMP 0x10056c4f0 | @24@0:8@16
- (id)removeAttributeNode:(id)arg0;
// IMP 0x10056c570 | @24@0:8@16
- (id)getElementsByTagName:(id)arg0;
// IMP 0x10056c5e0 | @32@0:8@16@24
- (id)getAttributeNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056c6b0 | v40@0:8@16@24@32
- (void)setAttributeNS:(id)arg0 qualifiedName:(id)arg1 value:(id)arg2;
// IMP 0x10056c774 | v32@0:8@16@24
- (void)removeAttributeNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056c778 | @32@0:8@16@24
- (id)getAttributeNodeNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056c808 | @24@0:8@16
- (id)setAttributeNodeNS:(id)arg0;
// IMP 0x10056c810 | @32@0:8@16@24
- (id)getElementsByTagNameNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056c898 | B24@0:8@16
- (BOOL)hasAttribute:(id)arg0;
// IMP 0x10056c914 | B32@0:8@16@24
- (BOOL)hasAttributeNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056c91c | @16@0:8
- (id)tagName;
// IMP 0x10056c92c | v24@0:8@16
- (void)setTagName:(id)arg0;
// IMP 0x10056c940 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
