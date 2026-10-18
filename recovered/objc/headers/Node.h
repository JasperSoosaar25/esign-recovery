// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92578
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface Node : NSObject
// ivar hasAttributes encoding=B offset=8
// ivar hasChildNodes encoding=B offset=9
// ivar nodeType encoding=i offset=12
// ivar nodeName encoding=@"NSString" offset=16
// ivar nodeValue encoding=@"NSString" offset=24
// ivar parentNode encoding=@"Node" offset=32
// ivar childNodes encoding=@"NodeList" offset=40
// ivar attributes encoding=@"NamedNodeMap" offset=48
// ivar ownerDocument encoding=@"Document" offset=56
// ivar localName encoding=@"NSString" offset=64
// ivar namespaceURI encoding=@"NSString" offset=72
// ivar prefix encoding=@"NSString" offset=80
// property nodeName attributes=T@"NSString",&,N,VnodeName
// property nodeValue attributes=T@"NSString",&,N,VnodeValue
// property nodeType attributes=Ti,N,VnodeType
// property parentNode attributes=T@"Node",W,N,VparentNode
// property childNodes attributes=T@"NodeList",&,N,VchildNodes
// property attributes attributes=T@"NamedNodeMap",&,N,Vattributes
// property ownerDocument attributes=T@"Document",W,N,VownerDocument
// property namespaceURI attributes=T@"NSString",&,N,VnamespaceURI
// property prefix attributes=T@"NSString",&,N,Vprefix
// property localName attributes=T@"NSString",&,N,VlocalName
// property firstChild attributes=T@"Node",R,W,N
// property lastChild attributes=T@"Node",R,W,N
// property previousSibling attributes=T@"Node",R,W,N
// property nextSibling attributes=T@"Node",R,W,N
// property hasChildNodes attributes=TB,N,VhasChildNodes
// property hasAttributes attributes=TB,N,VhasAttributes
// property textContent attributes=T@"NSString",R,W,N
// IMP 0x10056d608 | @16@0:8
- (id)init;
// IMP 0x10056d620 | @36@0:8i16@20@28
- (id)initType:(int)arg0 name:(id)arg1 value:(id)arg2;
// IMP 0x10056d774 | @28@0:8i16@20
- (id)initType:(int)arg0 name:(id)arg1;
// IMP 0x10056d898 | v24@0:8@16
- (void)postInitNamespaceHandling:(id)arg0;
// IMP 0x10056d978 | @36@0:8i16@20@28
- (id)initType:(int)arg0 name:(id)arg1 inNamespace:(id)arg2;
// IMP 0x10056d9e0 | @44@0:8i16@20@28@36
- (id)initType:(int)arg0 name:(id)arg1 value:(id)arg2 inNamespace:(id)arg3;
// IMP 0x10056dac4 | @16@0:8
- (id)firstChild;
// IMP 0x10056db48 | @16@0:8
- (id)lastChild;
// IMP 0x10056dbf0 | @16@0:8
- (id)previousSibling;
// IMP 0x10056dce4 | @16@0:8
- (id)nextSibling;
// IMP 0x10056de18 | @32@0:8@16@24
- (id)insertBefore:(id)arg0 refChild:(id)arg1;
// IMP 0x10056df1c | @32@0:8@16@24
- (id)replaceChild:(id)arg0 oldChild:(id)arg1;
// IMP 0x10056e198 | @24@0:8@16
- (id)removeChild:(id)arg0;
// IMP 0x10056e214 | @24@0:8@16
- (id)appendChild:(id)arg0;
// IMP 0x10056e2cc | B16@0:8
- (BOOL)hasChildNodes;
// IMP 0x10056e30c | @20@0:8B16
- (id)cloneNode:(BOOL)arg0;
// IMP 0x10056e314 | v16@0:8
- (void)normalize;
// IMP 0x10056e318 | B32@0:8@16@24
- (BOOL)isSupportedFeature:(id)arg0 version:(id)arg1;
// IMP 0x10056e320 | B16@0:8
- (BOOL)hasAttributes;
// IMP 0x10056e388 | @16@0:8
- (id)textContent;
// IMP 0x10056e54c | @16@0:8
- (id)description;
// IMP 0x10056e700 | v40@0:8@16@24@32
- (void)appendXMLToString:(id)arg0 availableNamespaces:(id)arg1 activeNamespaces:(id)arg2;
// IMP 0x10056ee30 | @16@0:8
- (id)nodeName;
// IMP 0x10056ee38 | v24@0:8@16
- (void)setNodeName:(id)arg0;
// IMP 0x10056ee44 | @16@0:8
- (id)nodeValue;
// IMP 0x10056ee4c | v24@0:8@16
- (void)setNodeValue:(id)arg0;
// IMP 0x10056ee58 | i16@0:8
- (int)nodeType;
// IMP 0x10056ee60 | v20@0:8i16
- (void)setNodeType:(int)arg0;
// IMP 0x10056ee68 | @16@0:8
- (id)parentNode;
// IMP 0x10056ee80 | v24@0:8@16
- (void)setParentNode:(id)arg0;
// IMP 0x10056ee8c | @16@0:8
- (id)childNodes;
// IMP 0x10056ee94 | v24@0:8@16
- (void)setChildNodes:(id)arg0;
// IMP 0x10056eea0 | @16@0:8
- (id)attributes;
// IMP 0x10056eea8 | v24@0:8@16
- (void)setAttributes:(id)arg0;
// IMP 0x10056eeb4 | @16@0:8
- (id)ownerDocument;
// IMP 0x10056eecc | v24@0:8@16
- (void)setOwnerDocument:(id)arg0;
// IMP 0x10056eed8 | v20@0:8B16
- (void)setHasAttributes:(BOOL)arg0;
// IMP 0x10056eee0 | v20@0:8B16
- (void)setHasChildNodes:(BOOL)arg0;
// IMP 0x10056eee8 | @16@0:8
- (id)localName;
// IMP 0x10056eef0 | v24@0:8@16
- (void)setLocalName:(id)arg0;
// IMP 0x10056eefc | @16@0:8
- (id)namespaceURI;
// IMP 0x10056ef04 | v24@0:8@16
- (void)setNamespaceURI:(id)arg0;
// IMP 0x10056ef10 | @16@0:8
- (id)prefix;
// IMP 0x10056ef18 | v24@0:8@16
- (void)setPrefix:(id)arg0;
// IMP 0x10056ef24 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
