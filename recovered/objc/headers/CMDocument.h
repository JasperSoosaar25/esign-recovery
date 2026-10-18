// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b0d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMDocument : NSObject
// ivar _rootNode encoding=@"CMNode" offset=8
// ivar _linksBaseURL encoding=@"NSURL" offset=16
// ivar _options encoding=q offset=24
// property options attributes=Tq,R,N,V_options
// property rootNode attributes=T@"CMNode",R,N,V_rootNode
// property linksBaseURL attributes=T@"NSURL",&,N,V_linksBaseURL
// IMP 0x100863eb0 | @16@0:8
- (id)HTMLString;
// IMP 0x100851da8 | @24@0:8@16
- (id)attributedStringWithAttributes:(id)arg0;
// IMP 0x100851e50 | @32@0:8@16q24
- (id)initWithData:(id)arg0 options:(long long)arg1;
// IMP 0x100852040 | @32@0:8@16q24
- (id)initWithContentsOfFile:(id)arg0 options:(long long)arg1;
// IMP 0x100852228 | @24@0:8@16
- (id)targetURLForNode:(id)arg0;
// IMP 0x100852398 | @16@0:8
- (id)rootNode;
// IMP 0x1008523b4 | @16@0:8
- (id)linksBaseURL;
// IMP 0x1008523d0 | v24@0:8@16
- (void)setLinksBaseURL:(id)arg0;
// IMP 0x100852404 | q16@0:8
- (long long)options;
// IMP 0x100852420 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
