// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b170
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface ONOXMLDocument : NSObject
// ivar _rootElement encoding=@"ONOXMLElement" offset=8
// ivar _xmlDocument encoding=^{_xmlDoc=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}ii^{_xmlDtd}^{_xmlDtd}^{_xmlNs}**^v^v*i^{_xmlDict}^vii} offset=16
// ivar _version encoding=@"NSString" offset=24
// ivar _stringEncoding encoding=Q offset=32
// ivar _numberFormatter encoding=@"NSNumberFormatter" offset=40
// ivar _dateFormatter encoding=@"NSDateFormatter" offset=48
// property xmlDocument attributes=T^{_xmlDoc=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}ii^{_xmlDtd}^{_xmlDtd}^{_xmlNs}**^v^v*i^{_xmlDict}^vii},N,V_xmlDocument
// property rootElement attributes=T@"ONOXMLElement",&,N,V_rootElement
// property version attributes=T@"NSString",C,N,V_version
// property stringEncoding attributes=TQ,N,V_stringEncoding
// property numberFormatter attributes=T@"NSNumberFormatter",&,N,V_numberFormatter
// property dateFormatter attributes=T@"NSDateFormatter",&,N,V_dateFormatter
// IMP 0x100853ab8 | @24@0:8^{_xmlDoc=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}ii^{_xmlDtd}^{_xmlDtd}^{_xmlNs}**^v^v*i^{_xmlDict}^vii}16
- (id)initWithDocument:(struct _xmlDoc *)arg0;
// IMP 0x100853be4 | v16@0:8
- (void)dealloc;
// IMP 0x100853c48 | @16@0:8
- (id)numberFormatter;
// IMP 0x100853cc8 | @16@0:8
- (id)dateFormatter;
// IMP 0x100853d98 | @24@0:8^{_xmlNode=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}^{_xmlNs}*^{_xmlAttr}^{_xmlNs}^vSS}16
- (id)elementWithNode:(struct _xmlNode *)arg0;
// IMP 0x100853e40 | @24@0:8^{_xmlXPathObject=i^{_xmlNodeSet}id*^vi^vi}16
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject *)arg0;
// IMP 0x100853f20 | @24@0:8@16
- (id)XPath:(id)arg0;
// IMP 0x100853fb4 | v32@0:8@16@?24
- (void)enumerateElementsWithXPath:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100854150 | v32@0:8@16@?24
- (void)enumerateElementsWithXPath:(id)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x1008541f8 | @24@0:8@16
- (id)firstChildWithXPath:(id)arg0;
// IMP 0x10085428c | @24@0:8@16
- (id)CSS:(id)arg0;
// IMP 0x100854320 | v32@0:8@16@?24
- (void)enumerateElementsWithCSS:(id)arg0 block:(id /* block */)arg1;
// IMP 0x1008543c8 | v32@0:8@16@?24
- (void)enumerateElementsWithCSS:(id)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x100854470 | @24@0:8@16
- (id)firstChildWithCSS:(id)arg0;
// IMP 0x100854504 | @16@0:8
- (id)version;
// IMP 0x1008545b8 | Q16@0:8
- (unsigned long long)stringEncoding;
// IMP 0x100854698 | @16@0:8
- (id)description;
// IMP 0x1008546fc | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100854814 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100854844 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100854930 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100854ac8 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100854be8 | @16@0:8
- (id)rootElement;
// IMP 0x100854c04 | v24@0:8@16
- (void)setRootElement:(id)arg0;
// IMP 0x100854c38 | ^{_xmlDoc=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}ii^{_xmlDtd}^{_xmlDtd}^{_xmlNs}**^v^v*i^{_xmlDict}^vii}16@0:8
- (struct _xmlDoc *)xmlDocument;
// IMP 0x100854c54 | v24@0:8^{_xmlDoc=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}ii^{_xmlDtd}^{_xmlDtd}^{_xmlNs}**^v^v*i^{_xmlDict}^vii}16
- (void)setXmlDocument:(struct _xmlDoc *)arg0;
// IMP 0x100854c78 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x100854cb0 | v24@0:8Q16
- (void)setStringEncoding:(unsigned long long)arg0;
// IMP 0x100854cd4 | v24@0:8@16
- (void)setNumberFormatter:(id)arg0;
// IMP 0x100854d08 | v24@0:8@16
- (void)setDateFormatter:(id)arg0;
// IMP 0x100854d3c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100853768 | @40@0:8@16Q24^@32
+ (id)XMLDocumentWithString:(id)arg0 encoding:(unsigned long long)arg1 error:(id *)arg2;
// IMP 0x100853828 | @32@0:8@16^@24
+ (id)XMLDocumentWithData:(id)arg0 error:(id *)arg1;
// IMP 0x100853910 | @40@0:8@16Q24^@32
+ (id)HTMLDocumentWithString:(id)arg0 encoding:(unsigned long long)arg1 error:(id *)arg2;
// IMP 0x1008539d0 | @32@0:8@16^@24
+ (id)HTMLDocumentWithData:(id)arg0 error:(id *)arg1;
@end
