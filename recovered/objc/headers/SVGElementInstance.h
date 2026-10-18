// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92988
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGElementInstance : NSObject
// ivar parentNode encoding=@"SVGElementInstance" offset=8
// ivar childNodes encoding=@"SVGElementInstanceList" offset=16
// ivar _correspondingElement encoding=@"SVGElement" offset=24
// ivar _correspondingUseElement encoding=@"SVGUseElement" offset=32
// property correspondingElement attributes=T@"SVGElement",W,N,V_correspondingElement
// property correspondingUseElement attributes=T@"SVGUseElement",W,N,V_correspondingUseElement
// property parentNode attributes=T@"SVGElementInstance",&,N,VparentNode
// property childNodes attributes=T@"SVGElementInstanceList",&,N,VchildNodes
// property firstChild attributes=T@"SVGElementInstance",R,N
// property lastChild attributes=T@"SVGElementInstance",R,N
// property previousSibling attributes=T@"SVGElementInstance",R,N
// property nextSibling attributes=T@"SVGElementInstance",R,N
// IMP 0x100572c14 | v16@0:8
- (void)dealloc;
// IMP 0x100572c74 | v24@0:8@16
- (void)setParentNode:(id)arg0;
// IMP 0x100572da0 | @16@0:8
- (id)firstChild;
// IMP 0x100572e24 | @16@0:8
- (id)lastChild;
// IMP 0x100572ecc | @16@0:8
- (id)previousSibling;
// IMP 0x100572fc0 | @16@0:8
- (id)nextSibling;
// IMP 0x1005730f4 | @16@0:8
- (id)parentNode;
// IMP 0x1005730fc | @16@0:8
- (id)childNodes;
// IMP 0x100573104 | v24@0:8@16
- (void)setChildNodes:(id)arg0;
// IMP 0x100573110 | @16@0:8
- (id)correspondingElement;
// IMP 0x100573128 | v24@0:8@16
- (void)setCorrespondingElement:(id)arg0;
// IMP 0x100573134 | @16@0:8
- (id)correspondingUseElement;
// IMP 0x10057314c | v24@0:8@16
- (void)setCorrespondingUseElement:(id)arg0;
// IMP 0x100573158 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
