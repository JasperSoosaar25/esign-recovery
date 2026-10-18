// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83508
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerHandler : NSObject
// ivar _matchBlock encoding=@? offset=8
// ivar _asyncProcessBlock encoding=@? offset=16
// property matchBlock attributes=T@?,R,N,V_matchBlock
// property asyncProcessBlock attributes=T@?,R,N,V_asyncProcessBlock
// IMP 0x1004169f4 | @32@0:8@?16@?24
- (id)initWithMatchBlock:(id /* block */)arg0 asyncProcessBlock:(id /* block */)arg1;
// IMP 0x100416aa4 | @?16@0:8
- (id /* block */)matchBlock;
// IMP 0x100416aac | @?16@0:8
- (id /* block */)asyncProcessBlock;
// IMP 0x100416ab4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
