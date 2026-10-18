// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92528
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface NamedNodeMap : NSObject
// ivar internalDictionary encoding=@"NSMutableDictionary" offset=8
// ivar internalDictionaryOfNamespaces encoding=@"NSMutableDictionary" offset=16
// property internalDictionary attributes=T@"NSMutableDictionary",&,N,VinternalDictionary
// property internalDictionaryOfNamespaces attributes=T@"NSMutableDictionary",&,N,VinternalDictionaryOfNamespaces
// property length attributes=TQ,R
// IMP 0x10056c994 | @16@0:8
- (id)init;
// IMP 0x10056ca38 | @24@0:8@16
- (id)getNamedItem:(id)arg0;
// IMP 0x10056cba4 | @24@0:8@16
- (id)setNamedItem:(id)arg0;
// IMP 0x10056cc80 | @24@0:8@16
- (id)removeNamedItem:(id)arg0;
// IMP 0x10056cd10 | Q16@0:8
- (unsigned long long)length;
// IMP 0x10056ce4c | @24@0:8Q16
- (id)item:(unsigned long long)arg0;
// IMP 0x10056d04c | @32@0:8@16@24
- (id)getNamedItemNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056d0f0 | @24@0:8@16
- (id)setNamedItemNS:(id)arg0;
// IMP 0x10056d0f8 | @32@0:8@16@24
- (id)removeNamedItemNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056d1a8 | @32@0:8@16@24
- (id)setNamedItemNS:(id)arg0 inNodeNamespace:(id)arg1;
// IMP 0x10056d348 | @16@0:8
- (id)description;
// IMP 0x10056d4a8 | @16@0:8
- (id)allNodesUnsortedDOM1;
// IMP 0x10056d4ec | @16@0:8
- (id)allNodesUnsortedDOM2;
// IMP 0x10056d4f0 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x10056d5b0 | @16@0:8
- (id)internalDictionary;
// IMP 0x10056d5b8 | v24@0:8@16
- (void)setInternalDictionary:(id)arg0;
// IMP 0x10056d5c4 | @16@0:8
- (id)internalDictionaryOfNamespaces;
// IMP 0x10056d5cc | v24@0:8@16
- (void)setInternalDictionaryOfNamespaces:(id)arg0;
// IMP 0x10056d5d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
