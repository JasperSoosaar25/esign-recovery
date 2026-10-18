// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92320
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface Document : Node
// ivar doctype encoding=@"DocumentType" offset=8
// ivar implementation encoding=@"AppleSucksDOMImplementation" offset=16
// ivar documentElement encoding=@"Element" offset=24
// property documentElement attributes=T@"Element",&,N,VdocumentElement
// property doctype attributes=T@"DocumentType",R,N,Vdoctype
// property implementation attributes=T@"AppleSucksDOMImplementation",R,N,Vimplementation
// IMP 0x10056b3e0 | @24@0:8@16
- (id)createElement:(id)arg0;
// IMP 0x10056b430 | @16@0:8
- (id)createDocumentFragment;
// IMP 0x10056b44c | @24@0:8@16
- (id)createTextNode:(id)arg0;
// IMP 0x10056b498 | @24@0:8@16
- (id)createComment:(id)arg0;
// IMP 0x10056b4e4 | @24@0:8@16
- (id)createCDATASection:(id)arg0;
// IMP 0x10056b530 | @32@0:8@16@24
- (id)createProcessingInstruction:(id)arg0 data:(id)arg1;
// IMP 0x10056b5a0 | @24@0:8@16
- (id)createAttribute:(id)arg0;
// IMP 0x10056b5f4 | @24@0:8@16
- (id)createEntityReference:(id)arg0;
// IMP 0x10056b5fc | @24@0:8@16
- (id)getElementsByTagName:(id)arg0;
// IMP 0x10056b68c | @28@0:8@16B24
- (id)importNode:(id)arg0 deep:(BOOL)arg1;
// IMP 0x10056b694 | @32@0:8@16@24
- (id)createElementNS:(id)arg0 qualifiedName:(id)arg1;
// IMP 0x10056b708 | @32@0:8@16@24
- (id)createAttributeNS:(id)arg0 qualifiedName:(id)arg1;
// IMP 0x10056b780 | @32@0:8@16@24
- (id)getElementsByTagNameNS:(id)arg0 localName:(id)arg1;
// IMP 0x10056b830 | @24@0:8@16
- (id)getElementById:(id)arg0;
// IMP 0x10056b8ac | @16@0:8
- (id)doctype;
// IMP 0x10056b8bc | @16@0:8
- (id)implementation;
// IMP 0x10056b8cc | @16@0:8
- (id)documentElement;
// IMP 0x10056b8dc | v24@0:8@16
- (void)setDocumentElement:(id)arg0;
// IMP 0x10056b8f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
