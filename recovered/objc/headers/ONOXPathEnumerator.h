// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b120
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface ONOXPathEnumerator : NSEnumerator
// ivar _xmlXPath encoding=^{_xmlXPathObject=i^{_xmlNodeSet}id*^vi^vi} offset=8
// ivar _cursor encoding=Q offset=16
// ivar _document encoding=@"ONOXMLDocument" offset=24
// property xmlXPath attributes=T^{_xmlXPathObject=i^{_xmlNodeSet}id*^vi^vi},N,V_xmlXPath
// property cursor attributes=TQ,N,V_cursor
// property document attributes=T@"ONOXMLDocument",&,N,V_document
// IMP 0x100853280 | v16@0:8
- (void)dealloc;
// IMP 0x1008532f4 | @24@0:8Q16
- (id)objectAtIndex:(unsigned long long)arg0;
// IMP 0x1008533f4 | @16@0:8
- (id)allObjects;
// IMP 0x100853568 | @16@0:8
- (id)nextObject;
// IMP 0x100853630 | ^{_xmlXPathObject=i^{_xmlNodeSet}id*^vi^vi}16@0:8
- (struct _xmlXPathObject *)xmlXPath;
// IMP 0x100853654 | v24@0:8^{_xmlXPathObject=i^{_xmlNodeSet}id*^vi^vi}16
- (void)setXmlXPath:(struct _xmlXPathObject *)arg0;
// IMP 0x100853680 | Q16@0:8
- (unsigned long long)cursor;
// IMP 0x1008536a4 | v24@0:8Q16
- (void)setCursor:(unsigned long long)arg0;
// IMP 0x1008536d0 | @16@0:8
- (id)document;
// IMP 0x1008536f4 | v24@0:8@16
- (void)setDocument:(id)arg0;
// IMP 0x100853730 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
