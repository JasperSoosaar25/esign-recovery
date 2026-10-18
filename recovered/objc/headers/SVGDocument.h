// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c928e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGDocument : Document
// ivar title encoding=@"NSString" offset=8
// ivar referrer encoding=@"NSString" offset=16
// ivar domain encoding=@"NSString" offset=24
// ivar URL encoding=@"NSString" offset=32
// ivar _rootElement encoding=@"SVGSVGElement" offset=40
// property title attributes=T@"NSString",&,N,Vtitle
// property referrer attributes=T@"NSString",&,N,Vreferrer
// property domain attributes=T@"NSString",&,N,Vdomain
// property URL attributes=T@"NSString",&,N,VURL
// property rootElement attributes=T@"SVGSVGElement",&,N,V_rootElement
// IMP 0x10056ff4c | @16@0:8
- (id)init;
// IMP 0x10056ff8c | v24@0:8@16
- (void)setRootElement:(id)arg0;
// IMP 0x10056fffc | v24@0:8@16
- (void)setDocumentElement:(id)arg0;
// IMP 0x100570064 | @16@0:8
- (id)allPrefixesByNamespace;
// IMP 0x1005703e4 | @16@0:8
- (id)allPrefixesByNamespaceNormalized;
// IMP 0x100570724 | @16@0:8
- (id)title;
// IMP 0x100570734 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x100570748 | @16@0:8
- (id)referrer;
// IMP 0x100570758 | v24@0:8@16
- (void)setReferrer:(id)arg0;
// IMP 0x10057076c | @16@0:8
- (id)domain;
// IMP 0x10057077c | v24@0:8@16
- (void)setDomain:(id)arg0;
// IMP 0x100570790 | @16@0:8
- (id)URL;
// IMP 0x1005707a0 | v24@0:8@16
- (void)setURL:(id)arg0;
// IMP 0x1005707b4 | @16@0:8
- (id)rootElement;
// IMP 0x1005707c4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005700d8 | v32@0:8@16@24
+ (void)accumulateNamespacesForNode:(id)arg0 intoDictionary:(id)arg1;
@end
