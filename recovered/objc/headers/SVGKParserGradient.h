// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c935a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKParserGradient : SVGKParserSVG
// ivar currentElement encoding=@"SVGGradientElement" offset=8
// ivar _supportedNamespaces encoding=@"NSArray" offset=16
// ivar _supportedTags encoding=@"NSArray" offset=24
// property supportedNamespaces attributes=T@"NSArray",&,N,V_supportedNamespaces
// property supportedTags attributes=T@"NSArray",&,N,V_supportedTags
// IMP 0x1005801a8 | @16@0:8
- (id)supportedNamespaces;
// IMP 0x100580244 | @16@0:8
- (id)supportedTags;
// IMP 0x1005802f4 | @72@0:8@16@24@32@40@48@56@64
- (id)handleStartElement:(id)arg0 document:(id)arg1 namePrefix:(id)arg2 namespaceURI:(id)arg3 attributes:(id)arg4 parseResult:(id)arg5 parentNode:(id)arg6;
// IMP 0x100580464 | v40@0:8@16@24@32
- (void)handleEndElement:(id)arg0 document:(id)arg1 parseResult:(id)arg2;
// IMP 0x100580468 | v24@0:8@16
- (void)setSupportedNamespaces:(id)arg0;
// IMP 0x10058047c | v24@0:8@16
- (void)setSupportedTags:(id)arg0;
// IMP 0x100580490 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
