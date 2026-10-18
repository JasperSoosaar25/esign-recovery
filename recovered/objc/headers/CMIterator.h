// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ad58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMIterator : NSObject
// ivar _iter encoding=^{cmark_iter=} offset=8
// property currentNode attributes=T@"CMNode",R
// property currentEvent attributes=Tq,R
// IMP 0x100848078 | @24@0:8@16
- (id)initWithRootNode:(id)arg0;
// IMP 0x1008481f8 | v16@0:8
- (void)dealloc;
// IMP 0x100848248 | @16@0:8
- (id)currentNode;
// IMP 0x1008482a0 | q16@0:8
- (long long)currentEvent;
// IMP 0x1008482d4 | v24@0:8@?16
- (void)enumerateUsingBlock:(id /* block */)arg0;
// IMP 0x100848454 | v32@0:8@16q24
- (void)resetToNode:(id)arg0 withEventType:(long long)arg1;
@end
