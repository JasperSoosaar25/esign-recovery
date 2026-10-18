// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b198
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface ONOXMLElement : NSObject
// ivar _document encoding=@"ONOXMLDocument" offset=8
// ivar _rawXMLString encoding=@"NSString" offset=16
// ivar _tag encoding=@"NSString" offset=24
// ivar _lineNumber encoding=Q offset=32
// ivar _namespace encoding=@"NSString" offset=40
// ivar _parent encoding=@"ONOXMLElement" offset=48
// ivar _previousSibling encoding=@"ONOXMLElement" offset=56
// ivar _nextSibling encoding=@"ONOXMLElement" offset=64
// ivar _attributes encoding=@"NSDictionary" offset=72
// ivar _stringValue encoding=@"NSString" offset=80
// ivar _numberValue encoding=@"NSNumber" offset=88
// ivar _dateValue encoding=@"NSDate" offset=96
// ivar _xmlNode encoding=^{_xmlNode=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}^{_xmlNs}*^{_xmlAttr}^{_xmlNs}^vSS} offset=104
// property rawXMLString attributes=T@"NSString",C,N,V_rawXMLString
// property tag attributes=T@"NSString",C,N,V_tag
// property lineNumber attributes=TQ,N,V_lineNumber
// property namespace attributes=T@"NSString",C,N,V_namespace
// property parent attributes=T@"ONOXMLElement",&,N,V_parent
// property children attributes=T@"NSArray",&,D,N
// property previousSibling attributes=T@"ONOXMLElement",&,N,V_previousSibling
// property nextSibling attributes=T@"ONOXMLElement",&,N,V_nextSibling
// property attributes attributes=T@"NSDictionary",&,N,V_attributes
// property stringValue attributes=T@"NSString",C,N,V_stringValue
// property numberValue attributes=T@"NSNumber",C,N,V_numberValue
// property dateValue attributes=T@"NSDate",C,N,V_dateValue
// property xmlNode attributes=T^{_xmlNode=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}^{_xmlNs}*^{_xmlAttr}^{_xmlNs}^vSS},N,V_xmlNode
// property document attributes=T@"ONOXMLDocument",W,N,V_document
// property blank attributes=TB,R,N,GisBlank
// IMP 0x100854da4 | @16@0:8
- (id)namespace;
// IMP 0x100854e7c | @16@0:8
- (id)tag;
// IMP 0x100854f30 | Q16@0:8
- (unsigned long long)lineNumber;
// IMP 0x100854f94 | @16@0:8
- (id)attributes;
// IMP 0x100855104 | @24@0:8@16
- (id)valueForAttribute:(id)arg0;
// IMP 0x100855204 | @32@0:8@16@24
- (id)valueForAttribute:(id)arg0 inNamespace:(id)arg1;
// IMP 0x10085534c | @16@0:8
- (id)parent;
// IMP 0x1008553fc | @16@0:8
- (id)children;
// IMP 0x1008554a8 | @24@0:8@16
- (id)firstChildWithTag:(id)arg0;
// IMP 0x100855520 | @32@0:8@16@24
- (id)firstChildWithTag:(id)arg0 inNamespace:(id)arg1;
// IMP 0x100855968 | @24@0:8@16
- (id)childrenWithTag:(id)arg0;
// IMP 0x1008559e0 | @32@0:8@16@24
- (id)childrenWithTag:(id)arg0 inNamespace:(id)arg1;
// IMP 0x100855b78 | @24@0:8@16
- (id)childrenAtIndexes:(id)arg0;
// IMP 0x100855cfc | @24@0:8@?16
- (id)indexesOfChildrenPassingTest:(id /* block */)arg0;
// IMP 0x100855e50 | @16@0:8
- (id)previousSibling;
// IMP 0x100855f00 | @16@0:8
- (id)nextSibling;
// IMP 0x100855fb0 | B16@0:8
- (BOOL)isBlank;
// IMP 0x100856018 | @16@0:8
- (id)stringValue;
// IMP 0x100856118 | @16@0:8
- (id)numberValue;
// IMP 0x1008561f8 | @16@0:8
- (id)dateValue;
// IMP 0x1008562d8 | @24@0:8@16
- (id)objectForKeyedSubscript:(id)arg0;
// IMP 0x10085634c | @24@0:8Q16
- (id)objectAtIndexedSubscript:(unsigned long long)arg0;
// IMP 0x1008563b8 | @16@0:8
- (id)description;
// IMP 0x100856490 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1008565a8 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1008565d8 | @24@0:8@16
- (id)XPath:(id)arg0;
// IMP 0x1008567c4 | v32@0:8@16@?24
- (void)enumerateElementsWithXPath:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100856944 | v32@0:8@16@?24
- (void)enumerateElementsWithXPath:(id)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x100856b80 | @24@0:8@16
- (id)firstChildWithXPath:(id)arg0;
// IMP 0x100856ce4 | @24@0:8@16
- (id)CSS:(id)arg0;
// IMP 0x100856d7c | v32@0:8@16@?24
- (void)enumerateElementsWithCSS:(id)arg0 block:(id /* block */)arg1;
// IMP 0x100856f10 | v32@0:8@16@?24
- (void)enumerateElementsWithCSS:(id)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x100856fbc | @24@0:8@16
- (id)firstChildWithCSS:(id)arg0;
// IMP 0x100857120 | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x10085718c | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x100857218 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1008572f0 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100857550 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100857740 | @16@0:8
- (id)document;
// IMP 0x10085776c | v24@0:8@16
- (void)setDocument:(id)arg0;
// IMP 0x1008577a0 | @16@0:8
- (id)rawXMLString;
// IMP 0x1008577bc | v24@0:8@16
- (void)setRawXMLString:(id)arg0;
// IMP 0x1008577f4 | v24@0:8@16
- (void)setTag:(id)arg0;
// IMP 0x10085782c | v24@0:8Q16
- (void)setLineNumber:(unsigned long long)arg0;
// IMP 0x100857850 | v24@0:8@16
- (void)setNamespace:(id)arg0;
// IMP 0x100857888 | v24@0:8@16
- (void)setParent:(id)arg0;
// IMP 0x1008578bc | v24@0:8@16
- (void)setPreviousSibling:(id)arg0;
// IMP 0x1008578f0 | v24@0:8@16
- (void)setNextSibling:(id)arg0;
// IMP 0x100857924 | v24@0:8@16
- (void)setAttributes:(id)arg0;
// IMP 0x100857958 | v24@0:8@16
- (void)setStringValue:(id)arg0;
// IMP 0x100857990 | v24@0:8@16
- (void)setNumberValue:(id)arg0;
// IMP 0x1008579c8 | v24@0:8@16
- (void)setDateValue:(id)arg0;
// IMP 0x100857a00 | ^{_xmlNode=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}^{_xmlNs}*^{_xmlAttr}^{_xmlNs}^vSS}16@0:8
- (struct _xmlNode *)xmlNode;
// IMP 0x100857a1c | v24@0:8^{_xmlNode=^vi*^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlNode}^{_xmlDoc}^{_xmlNs}*^{_xmlAttr}^{_xmlNs}^vSS}16
- (void)setXmlNode:(struct _xmlNode *)arg0;
// IMP 0x100857a40 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
